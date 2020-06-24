/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 *	SCI functions
 */
#include <stdio.h>

#include "defs.h"
#include "cpu.h"
#include "chip.h"   /* io register addresses */
#include "ireg.h"
#include "memory.h"
#include "sci.h"


/*
 * SCI variables
 */
static u_char sci_recvbuf[BUFSIZE];	/* Input data buffer */
static int    sci_rx_index = 0;		/* Index of first byte in recvbuf */
int           sci_rx_ints = 0;		/* No. of outstanding rx interrupts */
int           sci_tx_ints = 0;		/* No. of outstanding tx interrupts */

/*
 * sci_out_default - Serial Communications Interface output
 *
 * Default routine to be called by the processor simulator
 * to output data from the processor's SCI.
 */
static
sci_out_default (buf, nbytes)
	u_char *buf;
	int     nbytes;
{
#ifdef DEBUG
	printf ("sci_out_default: ");
	fprinthex (stdout, buf, nbytes);
	printf ("\n");
#else
	write (1, buf, nbytes);
#endif
}

static int (*sci_out_func)() = NULL; /* sci_out_default; */

/*
 * sci_out_install - install a function to be called to output SCI data
 */
sci_out_install (func)
	int (*func) ();
{
	sci_out_func = func;
}

/*
 * sci_in - Serial Communications Interface input
 *
 * Called to add data to the processor's SCI input buffer.
 */
sci_in (buf, nbytes)
	u_char *buf;
	int     nbytes;
{
	int i;

	for (i=0; i<nbytes; i++)
		if (sci_rx_ints < BUFSIZE)
			sci_recvbuf[sci_rx_ints++] = buf[i];
		else
			warning ("sci_in: buffer full\n");
}

sci_print ()
{
	printf ("sci recvbuf:\n");
	fprinthex (stdout, sci_recvbuf + sci_rx_index, sci_rx_ints);
}


/*
 * scsr_getb - TDRE, TC, RDRF, IDLE, OR, NF, FE, -
 *
 * Always return TDRE=TC=1, RDRF=sci_rx_ints, noise bits OR=NF=FE=0
 */
scsr_getb (offs)
	u_int offs;
{
	char c;
#if 0
	/*
	 * Check if user has typed a key, prevent simulator overrun
	 *
	 * SCDR could be read regardless of RDRF,
	 * we assume SCSR is always checked first
	 */
	if (!sci_rx_ints && (c = tty_getkey (0))) /* Typed a key */
		sci_in (&c, 1);
#endif
	int result;
	result = (TDRE | TC) | ((sci_rx_ints) ? RDRF : 0) | IDLE;
	/*printf ("scsr_getb: sci_rx_ints=%d result=%02x\n", sci_rx_ints, result);*/
	return result;
}

/*
 * scdr_getb - return the byte in the SCI receive data register
 *
 * If cpu is running (not memory dump), eat the "received" byte,
 * decrement number of outstanding rx interrupts
 * Assume RIE is enabled.
 */
scdr_getb (offs)
	u_int offs;
{
	static int recvindex = 0;
	int c;

	if (cpu_isrunning ()) {
		/*
		 * If recvbuf is not empty, eat a byte from it
		 * into RDR
		 */
		if (sci_rx_ints) {
			ireg_putb (SCDR, sci_recvbuf[recvindex++]);
			sci_rx_ints--;
		}

		/*
		 * If the cpu has read all bytes in recvbuf[]
		 * make recvbuf[] ready for more user sci data input
		 */
		if (sci_rx_ints == 0)
			recvindex = 0;
	}
	return ireg_getb (SCDR);
}

/*
 *  sccr2_putb - enable/disable tx/rx interrupt
 *
 *  (TIE, TCIE, RIE, ILIE, TE, RE,  RWU, SBK)
 *  Sets global interrupt flag if tx interrupt is enabled
 *  so main loop can execute interrupt vector
 */
sccr2_putb (offs, value)
	u_int  offs;
	u_char value;
{
	ireg_putb (SCCR2, value);

	/*
	 * scsr & (TDRE|TC) is always non-zero, thus we can
	 * start generating tx int. request immediately
	 */
	if (value & (TIE|TCIE))
		sci_tx_ints = 1;
	else
		sci_tx_ints = 0;
}


/*
 * scdr_putb - called to output a character
 *
 * Sets global interrupt flag if Tx interrupt is enabled
 * to signalize main loop to execute sci interrupt vector
 */
scdr_putb (offs, value)
	u_int  offs;
	u_char value;
{

	/* setireg (TDR, value); - don't destroy RDR */
 	/* Always ready - see sccr_getb() */
	if (sci_out_func)
		(*sci_out_func) (&value, 1);
	else
		io_putb (value);

	/*
	 * sccsr & TDRE is always non-zero, thus we can
	 * start generating tx int. request immediately
	 */
	if (ireg_getb (SCCR2) & (TIE|TCIE))
		sci_tx_ints = 1;
}
