/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/* NC panel switch board */

/*
 * $Id: ncpan.c,v 1.1 1996/09/08 12:10:26 arne Exp arne $
 *
 * 1996-04-08/AR
 */

#include <stdio.h>
#include <string.h>

#include "defs.h"
#include "chip.h"
#include "ireg.h"
#include "memory.h"

/*
 * Application specific
 */
#define NLEDS		16
#define NBUTTONS	16

static u_char dipsw;
static u_char buttons[2];
static u_char leds[2];

#define bitget(addr, bitno)	((addr)[bitno/8] &   (1 << (bitno % 8)))
#define bitset(addr, bitno)	((addr)[bitno/8] |=  (1 << (bitno % 8)))
#define bitclr(addr, bitno)	((addr)[bitno/8] &= ~(1 << (bitno % 8)))


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

int
ncpan_cmd (argc, argv)
	int   argc;
	char *argv[];
{
	if (argc < 1)
		return 0;
	if (strncmp (argv[0], "h", strlen("h")) == 0) {
		printf ("NC-PAN commands:\n");
		printf ("       nc dip    hh - simulate dip switches value hh are on (0V at port)\n");
		printf ("       nc button dd - simulate button dd pushed\n");
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
				dipsw = ~num; /* pulled to 0V when dip switch is on */
			}
		}
		printf ("dip %02x\n", (u_char) ~dipsw);
		return 1;
	}
	if (strcmp (argv[0], "button") == 0) {
		if (argc > 1) {
			int num;
			if (sscanf (argv[1], "%d", &num) == 1) {
				if (num < 0 || num >= NBUTTONS) {
					printf ("Range error\n");
					return 1;
				}
				if (bitget (buttons, num)) {
					bitclr (buttons, num);
				} else {
					bitset (buttons, num);
				}
				printf ("button %d -> %s\n", num, bitget (buttons, num) ? "on" : "off");
			}
		} else {
			printf ("button status\n");
			bitprint (buttons, NBUTTONS, ".*");
		}
		return 1;
	}
}

/*
 * Keyboard decoding
 *
 * Switch matrix:
 *
 * Out-  Inputs ->
 * puts
 *  |
 *  V   pa4 pa5 pa6 pa7
 * pa0   0   1   2   3
 * pa1   4   5   6   7
 * pa2   8   9  10  11
 * pa3  12  13  14  15
 *
 * Each of pa0-pa3 is set to '0' in turn.
 */

/*
 * ncpan_porta_putb  - write to pa0 -pa3
 */
ncpan_porta_putb (offs, value)
	u_int  offs;
	u_char value;
{
	u_char pa0_3;		/* Output pattern to read 4 keys */
	u_char pa4_7;		/* Input pattern to read keys, on = 0 */

	/*
	 * Copy 4 bits from the bit vector 'buttons' according to 'value'
	 * into pa4-pa7. 'buttons' represent "on" as 1, pa4-7 as 0.
	 */

	if ((value & 0x01) == 0)		/* 1. column set to 0 */
		pa4_7 = ~buttons[0];
	else if ((value & 0x02) == 0)		/* 2. column set to 0 */
		pa4_7 = ~buttons[0] >> 4;
	else if ((value & ~0x04) == 0)		/* 3. column set to 0 */
		pa4_7 = ~buttons[1] >> 8;
	else if ((value & ~0x08) == 0)		/* 4. column set to 0 */
		pa4_7 = ~buttons[1] >> 12;
	else					/* No columns set to 0 */
		pa4_7 = 0x0f; /* all off */

	pa0_3 = value & 0x0f;
	pa4_7 = (pa4_7 & 0x0f) << 4;

	ireg_putb (PORTA, pa4_7 | pa0_3);
#ifdef DEBUG_PORTA
	fprintf (stderr, "ncpan_porta_putb: %02x\n", pa4_7 | pa0_3);
#endif
}

int
ncpan_porta_getb (offs)
	u_int offs;
{
#ifdef DEBUG_PORTA
	fprintf (stderr, "ncpan_porta_getb: %02x\n", ireg_getb (PORTA));
#endif
	return ireg_getb (PORTA);
}

int
ncpan_portb_getb (offs)
	u_int offs;
{
	return 0xff; /* All mounted */
}

int
ncpan_portc_getb (offs)
	u_int offs;
{
	return 0xff; /* All mounted */
}

/*
 * Print led status (if it has changed)
 */
static void
leds_print ()
{
	static u_char leds_last[2];

	if (leds[0] != leds_last[0] || leds[1] != leds_last[1]) {
		printf ("led status:\n");
		bitprint (leds, NLEDS, ".*");
	}
}

/*
 * Write to LEDS 0-7
 */
ncpan_portb_putb (offs, value)
	u_int  offs;
	u_char value;
{
	ireg_putb (PORTB, value);

	leds[0] = ~value;
	leds_print ();
}

/*
 * Write to LEDS 8-15
 */
ncpan_portc_putb (offs, value)
	u_int  offs;
	u_char value;
{
	ireg_putb (PORTC, value);

	leds[1] = ~value;
	leds_print ();
}


ncpan_spi_putb (offs, value)
	u_int  offs;
	u_char value;
{
	spi_in (&dipsw, 1);		/* Add to SPI input buffer */
	spdr_putb (offs, value);	/* Clock SPI data in/out */
}

/*
 * board_install - install board specific hooks
 */
board_install ()
{
	command_install (ncpan_cmd);
	
	ireg_install (PORTA, ncpan_porta_getb, ncpan_porta_putb);
	ireg_install (PORTB, NULL,             ncpan_portb_putb);
	ireg_install (PORTC, NULL,             ncpan_portc_putb);
	ireg_install (SPDR,  NULL,             ncpan_spi_putb);


	/*
	 * Set bit pattern of mounted LEDs 0-7, 8-15
	 */
	ncpan_portb_putb (PORTB, 0xff); /* All mounted */
	ncpan_portc_putb (PORTC, 0xff); /* All mounted */

	return 0;
}

