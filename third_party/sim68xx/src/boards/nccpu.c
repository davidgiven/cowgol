/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/* NC-CPU board */

/*
 * $Id: nccpu.c,v 1.5 1997/06/05 23:25:12 arne Exp $
 */
#include <stdio.h>
#include <string.h>

#include "defs.h"
#include "chip.h"
#include "ireg.h"
#include "memory.h"
#include "reg.h"

#include "i2c_sim.h"

/*
 * Application specific
 */
#define PARALLEL_LOAD	(1<<4)	/* Bit mask that loads shift registers */
#define STROBE		(1<<5)	/* Latch (STR) outputs, i.e. relays */

/* SCK is the inverse of PD4 */
/* SDA is PA7 */
#define I2C_CLOCK	(1<<4)	/* Bit mask for I2C SCK */
#define I2C_DATA	(1<<7)	/* Bit mask for I2C SDA */


/* This code requires multiple of 8 below */
#define NBUTTONS	64
#define NRELAYS		64
#define	NTRIACS		NRELAYS

/* Offsets into buttons[] */
#define DIPSW	0
#define RELAY0	1

/* Network layer message layout */
#define DEST 0
#define SRC  1
#define CTRL 2
#define DATA 3
#define CSUM 23
#define SIZEOF_NET_MSG        24

/* Application message (DATA in network layer message) */
#define TYPE            0
#define FIRST           1
#define EXEC_FUNC_ON	0x36	/* -> on/off(funcno) */
#define EXEC_FUNC_OFF	0x37	/* -> on/off(funcno) */

/*
 * Input buffers
 */

/* BUTTONS_SIZE must correspond to the number of bytes read by NCCPU board */
#define BUTTONS_SIZE (1+(8*2)+(8*3))	  /* Dipsw + 8 rel + 8 dim */

static u_char buttons[BUTTONS_SIZE];      /* Holds user relay board input */
static u_char spi_getb_buf[BUTTONS_SIZE]; /* Latched values of buttons */
static u_int  spi_getb_index;             /* Number of bytes in spi_getb_buf */
static u_char sci_buf[SIZEOF_NET_MSG];    /* temporary storage of input from user to sci */

/*
 * Output buffers
 */
static u_char	spi_putb_buf[NTRIACS/8+NRELAYS/8];
static int	spi_putb_index;
static u_char	triac_buf[NTRIACS/8];
static u_char	relay_buf[NRELAYS/8];
static u_char	triac_buf_last[NTRIACS/8];
static u_char	relay_buf_last[NRELAYS/8];

#define bitget(addr, bitno)	((addr)[bitno/8] &   (1 << (bitno % 8)))
#define bitset(addr, bitno)	((addr)[bitno/8] |=  (1 << (bitno % 8)))
#define bitclr(addr, bitno)	((addr)[bitno/8] &= ~(1 << (bitno % 8)))


enum nccpu_print_modes {
	PRINT_ON, PRINT_ON_CHANGE, PRINT_OFF
} nccpu_print_mode;
	
/*
 * bitprint - print bit vector
 *
 * Print on the following form:
 *
 * 0         1
 * 012345678901234567890
 * ..............*......
 */
static void
bitprint (buf, nbits, sym)
	u_char *buf;
	u_int   nbits;
	char   *sym;		/* symbols: sym[0] = off, sym[1] = on */
{
	int i;

	for (i = 0; i < nbits; i++) {
		if ((i % 10) == 0)
			printf ("%d", i / 10);
		else
			printf (" ");
	}
	putchar ('\n');

	for (i = 0; i < nbits; i++) {
		printf ("%d", i % 10);
	}
	putchar ('\n');


	for (i = 0; i < nbits; i++) {
		if (bitget (buf, i))
			putchar (sym[1]);
		else
			putchar (sym[0]);
	}
	putchar ('\n');
}

static char *nccpu_help_text[] = {
"NC-CPU commands:",
"       nc dip    [hh]                 - set dip switch to value hh",
"       nc button [dd ...]             - simulate button dd ... pushed",
"       nc relay                       - print relay board status",
"       nc printmode [on|change|off]   - set condition to print relay status",
"       nc exec_func_on  n [dest src]  - send EXEC_FUNC_ON(n) message to sci",
"       nc exec_func_off n [dest src]  - send EXEC_FUNC_OFF(n) message to sci",
"       nc i2c [command|response|start_stop|clock|device] - i2c print mode",
"       nc i2c [ack_clock|ack_input]   - set ack gen mode",
"",
0};

static
nccpu_print_help ()
{
	char **p;
	for (p = nccpu_help_text; *p; *p++)
		printf ("%s\n", *p);
}

nccpu_print_print_mode ()
{
	char *p;

	switch (nccpu_print_mode)
	{
	case PRINT_ON:
		p = "on";
		break;
	case PRINT_ON_CHANGE:
		p = "on change";
		break;
	case PRINT_OFF:
		p = "off";
		break;
	}
	printf ("nc printmode %s\n", p);
}

/*
 * checksum - return byte checksum
 */
static
checksum (buf, buflen)
	u_char *buf;
	int     buflen;
{
	int csum;
	for (csum = 0; buflen--;)
		csum += *buf++;
	return csum;
}

int
nccpu_cmd (argc, argv)
	int   argc;
	char *argv[];
{
	if (argc < 1)
		return 0;
	if (strncmp (argv[0], "h", strlen("h")) == 0) {
		nccpu_print_help ();
		return 1;
	}
	/* Strip command prefix */
	if (strcmp (argv[0], "nc") != 0) {
		return 0;
	}
	++argv;
	--argc;
	if (strcmp (argv[0], "dip") == 0) {
		if (argc > 1) {
			int num;
			if (sscanf (argv[1], "%x", &num) == 1) {
				buttons[DIPSW] = num;
			}
		}
		printf ("dip %02x\n", buttons[DIPSW]);
		return 1;
	} else if (strcmp (argv[0], "button") == 0) {
		if (argc > 1) {
			int num, i;
			for (i = 1; i < argc; i++) {
				if (sscanf (argv[i], "%d", &num) != 1) {
					printf ("Invalid number\n");
					break;
				}
				if (num < 0 || num >= NBUTTONS) {
					printf ("Range error\n");
					return 1;
				}
				if (bitget (buttons + RELAY0, num))
					bitclr (buttons + RELAY0, num);
				else
					bitset (buttons + RELAY0, num);

				printf ("button %d toggled -> %s\n", num, bitget (buttons + RELAY0, num) ? "on" : "off");

				/* push on button give IRQ interrupt, too */
				if (reg_getpc() != IRQVECTOR) {
					int_6811 (IRQVECTOR);
				}
			}
		} else {
			printf ("button status (* = on):\n");
			bitprint (buttons + RELAY0, NBUTTONS, ".*");
		}
		return 1;
	} else if (strcmp (argv[0], "relay") == 0) {
		printf ("Triac status:\n");
		bitprint (triac_buf, NRELAYS, ".*");
		printf ("Relay status:\n");
		bitprint (relay_buf, NRELAYS, ".*");
		return 1;
	} else if (strcmp (argv[0], "printmode") == 0) {
		if (argc > 1) {
			if (strcmp (argv[1], "on") == 0) {
				nccpu_print_mode = PRINT_ON;
			} else if (strcmp (argv[1], "change") == 0) {
				nccpu_print_mode = PRINT_ON_CHANGE;
			} else if (strcmp (argv[1], "off") == 0) {
				nccpu_print_mode = PRINT_OFF;
			}
		}
		nccpu_print_print_mode ();
	} else if (strcmp (argv[0], "exec_func_on") == 0 ||
		   strcmp (argv[0], "exec_func_off") == 0) {
		/*
		 * Send an NC message to the serial input
		 */
		int n;
		
		if (argc < 2) /* type and number required */
			return 0;
			
		if (strcmp (argv[0], "exec_func_on") == 0) {
			sci_buf[DATA+TYPE] = EXEC_FUNC_ON;
		} else {
			sci_buf[DATA+TYPE] = EXEC_FUNC_OFF;
		}

		if (sscanf (argv[1], "%d", &n) != 1)
			return 0;

		sci_buf[DATA+FIRST]   = n >> 8;
		sci_buf[DATA+FIRST+1] = n & 0xff;

		/* 
		 * Add network layer fields
		 */
		sci_buf[CTRL] = 0x00;
		if (argc > 2) {
			int dest;
			if (sscanf (argv[2], "%d", &dest) == 1) {
				sci_buf[DEST] = dest;
			}
		}
		if (argc > 3) {
			int src;
			if (sscanf (argv[3], "%d", &src) == 1) {
				sci_buf[SRC] = src;
			}
		}
		sci_buf[CSUM] = checksum (sci_buf, SIZEOF_NET_MSG - 1);
		/* Send data to SCI rx */
		sci_in (sci_buf, SIZEOF_NET_MSG);
		return 1;
	} else if (strcmp(argv[0],"i2c") == 0) {
		if (argc > 1) {
			if (strcmp(argv[1], "command") == 0) {
				i2c_print.command_byte =
					i2c_print.command_bit =
					i2c_print.command_device = 
					!i2c_print.command_byte;
				printf ("i2c print command %s\n",
					i2c_print.command_byte ?
					"on" : "off");
			} else if (strcmp (argv[1], "response") == 0) {
				i2c_print.response_bit =
					i2c_print.response_done =
					i2c_print.response_none =
					i2c_print.response_ack =
					!i2c_print.response_bit;
				printf ("i2c print response %s\n",
					i2c_print.response_bit ?
					"on" : "off");
			} else if (strcmp(argv[1], "start_stop") == 0) {
				i2c_print.start_stop =
					!i2c_print.start_stop;
				printf ("i2c print start_stop %s\n",
					i2c_print.start_stop ?
					"on" : "off");
			} else if (strcmp (argv[1], "clock") == 0) {
				i2c_print.clock = !i2c_print.clock;
				printf ("i2c print clock %s\n",
					i2c_print.clock ? "on" : "off");
			} else if (strcmp (argv[1], "device") == 0) {
				i2c_print.device = !i2c_print.device;
				printf ("i2c print device %s\n",
					i2c_print.device ? "on" : "off");
			}else if (strcmp (argv[1], "ack_clock") == 0) {
				i2c_ack_type = ACK_CLOCK;
				printf ("i2c gen ack when clock 1->0\n");
			} else if (strcmp (argv[1], "ack_input") == 0) {
				i2c_ack_type = ACK_INPUT;
				printf ("i2c gen ack when data -> input mode\n");
			} else {
				return 0;
			}
			return 1;
		}
	}
	return 0;
}


/*
 * Called when the CPU writes `value' to the SPI data register
 */
nccpu_spi_putb (offs, value)
	u_int	offs;
	u_char	value;
{
#ifdef DEBUG_SPI_PUTB
	printf ("nccpu_spi_putb: value=%02x\n", value);
#endif
	/* 
	 * save data clocked out, so we can use it later 
	 */
	spi_putb_buf[spi_putb_index] = value;
	if (++spi_putb_index >= sizeof(spi_putb_buf)) {
		spi_putb_index = 0;
	}
	/*
	 * Prepare data to be clocked in when SPDR is written
	 */
	spi_in (&spi_getb_buf[spi_getb_index], 1);
	spi_getb_index = ++spi_getb_index % sizeof(spi_getb_buf);

	spdr_putb (offs, value);
}

/*
 * Latches data that later will be input to SPI when spi_putb() is called
 */
static void
latch_input ()
{
	memcpy (spi_getb_buf, buttons, sizeof (buttons));
}

/*
 * Latches data to relays and triacs
 */
static void
latch_output ()
{
	/*
	 * Boards last in the chain was clocked out first,
	 * on each board, triac data is clocked out before relay data.
	 *
	 * Thus last board is first in the buffer,
	 * with triac data as the first byte, relay data as the next.
	 */
	int i, j;
	for (i = sizeof(relay_buf) - 1, j = spi_putb_index; i >= 0; --i) {
		triac_buf[i] = spi_putb_buf[ j++ % sizeof (spi_putb_buf)];
		relay_buf[i] = spi_putb_buf[ j++ % sizeof (spi_putb_buf)];
	}
#ifdef DEBUG_SPI_OUT
	printf ("Latching SPI pattern:\n");
	bitprint (spi_putb_buf, NTRIACS+NRELAYS, ".*");
#endif
	if (nccpu_print_mode == PRINT_ON ||
	    (nccpu_print_mode == PRINT_ON_CHANGE &&
	     (memcmp (triac_buf, triac_buf_last, sizeof(triac_buf)) ||
	      memcmp (relay_buf, relay_buf_last, sizeof(relay_buf)))))
	{
		printf ("Latching Triac status:\n");
		bitprint (triac_buf, NRELAYS, ".*");
		printf ("Latching Relay status:\n");
		bitprint (relay_buf, NRELAYS, ".*");
	}
	memcpy (triac_buf_last, triac_buf, sizeof triac_buf_last);
	memcpy (relay_buf_last, relay_buf, sizeof relay_buf_last);
}




/*
 * Set the I2C input pin to the value of `data'.
 * This routine could be installable by user with i2c_sim_init().
 */
void
i2c_input (data)
	bool data;
{
	if (data) {
		ireg_putb (PORTA, ireg_getb(PORTA) | I2C_DATA);
	} else {
		ireg_putb (PORTA, ireg_getb(PORTA) & ~I2C_DATA);
	}
}



/*
 * nccpu_porta_putb
 *
 * When shift register inputs are latched (load: 1->0)
 * simulate clocking data in to SPI: buttons[DIPSW], buttons[1], ...
 *
 * When shift register outputs are latched (strobe: 1->0),
 * display outputs clocked out to SPI: triacs:relays
 *
 */
int
nccpu_porta_putb (offs, value)
	u_int  offs;
	u_char value;
{
#ifdef DEBUG_PORTA
	printf ("nccpu_porta_putb: ireg_getb (PORTA)=%02x value=%02x\n",
		ireg_getb (PORTA), value);
#endif
	/*
	 * Detect when shift registers connected to SPI are latched
	 */
#ifdef LOAD_ON_NEGATIVE_EDGE
	if ((ireg_getb (PORTA) & PARALLEL_LOAD) != 0 &&
	    (value & PARALLEL_LOAD) == 0) {
		latch_input ();
	}
#else
	/*
	 * 74165, outputs = inputs while parallel load input is 0
	 */
	if ((value & PARALLEL_LOAD) == 0) {
#ifdef DEBUG_SPI_IN
		printf ("PARALLEL_LOAD: Latching data for input to SPI\n");
		bitprint (buttons, sizeof (buttons) * 8, ".*");
#endif /* DEBUG_SPI_IN */
		latch_input ();
	}
#endif /* LOAD_ON_NEGATIVE_EDGE */

	/*
	 * STROBE signal latches on positive edge
	 */
	if ((ireg_getb (offs) & STROBE) == 0 && (value & STROBE) != 0)
		latch_output ();


	ireg_putb (PORTA, value);
	i2c_sim (!(ireg_getb(PORTD) & I2C_CLOCK), 
		 !!(value & I2C_DATA),
		 ireg_getb(PACTL) & I2C_DATA ?
		 I2C_DATA_OUTPUT : I2C_DATA_INPUT);
}

static
nccpu_portd_putb (offs, val)
	u_int  offs;
	u_char val;
{
#ifdef DEBUG_PORTD
	printf ("nccpu_portd_putb: ireg_getb (PORTD)=%02x value=%02x\n",
		ireg_getb (PORTD), value);
#endif
	ireg_putb (PORTD, val); /* i2c_sim may modify PORTD later */
	i2c_sim (!(val & I2C_CLOCK),
		 !!(ireg_getb(PORTA) & I2C_DATA),
		 ireg_getb(PACTL) & I2C_DATA ?
		 I2C_DATA_OUTPUT : I2C_DATA_INPUT);
}

/*
 * board_install - install board specific hooks
 */
board_install ()
{
	command_install (nccpu_cmd);
	ireg_install (PORTA, NULL, nccpu_porta_putb);
	ireg_install (SPDR,  NULL, nccpu_spi_putb);
	ireg_install (PORTD, NULL, nccpu_portd_putb);
	return 0;
}

