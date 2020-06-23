/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
#include <stdio.h>

#include "defs.h"
#include "chip.h"
#include "cpu.h"
#include "ireg.h"
#include "sci.h"


/*
 * Pseudo-received data buffer used by rdr_getb() routines
 */
static u_char	recvbuf[BUFSIZE];
static int	rxindex      = 0;	/* Index of first byte in recvbuf */
       int	rxinterrupts = 0;	/* Number of outstanding rx interrupts */
       int	txinterrupts = 0;	/* Number of outstanding tx interrupts */




/*
 * sci_in - input to SCI
 *
 * increment number of outstanding rx interrupts
 */
sci_in (s, nbytes)
	u_char *s;
	int nbytes;
{
	int i;

	for (i=0; i<nbytes; i++)
		if (rxinterrupts < BUFSIZE)
			recvbuf[rxinterrupts++] = s[i];
		else
			warning ("sci_in:: buffer full\n");
}

sci_print ()
{
	printf ("sci recvbuf:\n");
	fprinthex (stdout, recvbuf + rxindex, rxinterrupts);
}


/*
 * trcsr_getb - always return Transmit Data Reg. Empty = 1
 */
trcsr_getb (offs)
	u_int offs;
{
	char c;
#if 0
	/*
	 * Check if user has typed a key, prevent simulator overrun
	 * if data in recvbuf, return RDRF
	 */
	if (!rxinterrupts && (c = tty_getkey (0))) /* Typed a key */
		sci_in (&c, 1);
#endif
	if (rxinterrupts)
		return ireg_getb (TRCSR) | TDRE | RDRF;
	else
		return (ireg_getb (TRCSR) | TDRE) & ~RDRF;
}

/*
 *  trcsr_putb - enable/disable tx/rx interrupt
 *
 *  Sets global interrupt flag if tx interrupt is enabled
 *  so main loop can execute interrupt vector
 */
trcsr_putb (offs, value)
	u_int  offs;
	u_char value;
{
	u_char trcsr;

	ireg_putb (TRCSR, value);
	trcsr = trcsr_getb (TRCSR);

	/*
	 * trcsr & TDRE is always non-zero, thus we can
	 * start generating tx int. request immediately
	 */
	if (trcsr & TIE)
		txinterrupts = 1;
	else
		txinterrupts = 0;
}

/*
 * rdr_getb - return the byte in the SCI receive data register
 *
 * If cpu is running (not memory dump), eat the "received" byte,
 * decrement number of outstanding rx interrupts
 * Assume RIE is enabled.
 */
rdr_getb (offs)
	u_int  offs;
{
	if (cpu_isrunning ()) {
		/*
		 * If recvbuf is not empty, eat a byte from it
		 * into RDR
		 */
		if (rxinterrupts) {
			ireg_putb (RDR, recvbuf[rxindex++]);
			rxinterrupts--;
		}
		/*
		 * If the cpu has read all bytes in recvbuf[]
		 * make recvbuf[] ready for more user sci data input
		 */
		if (rxinterrupts == 0)
			rxindex = 0;
	}
	return ireg_getb (RDR);
}

/*
 * tdr_putb - called to output a character
 *
 * Sets global interrupt flag if Tx interrupt is enabled
 * to signalize main loop to execute sci interrupt vector
 */
tdr_putb (offs, value)
	u_int  offs;
	u_char value;
{
	u_char trcsr;

	ireg_putb (TDR, value);
	io_putb (value);
	/*
	 * trcsr & TDRE is always non-zero, thus we can
	 * start generating tx int. request immediately
	 */
	trcsr = trcsr_getb (TRCSR);
	if (trcsr & TIE)
		txinterrupts = 1;
}

