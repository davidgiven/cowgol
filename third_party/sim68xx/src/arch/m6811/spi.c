/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 *
 *	SPI functions
 *
 */
#include <stdio.h>

#include "defs.h"
#include "chip.h"		/* chip dependant */
#include "ireg.h"
#include "memory.h"
#include "spi.h"


static int    spsr_is_read = 0;
static int    spdr_is_read = 0;
int           spi_interrupt = 0;
static u_char spi_rx_buf[BUFSIZE];
static int    spi_rx_nbytes = 0;
static int    spi_rx_index  = 0;


/*
 * spi_in - Serial Peripheral Interface input
 */
spi_in (buf, nbytes)
	u_char *buf;
	int     nbytes;
{
	int i;
#ifdef DEBUG
	printf ("spi_in: spi_rx_nbytes=%d nbytes=%d\n", spi_rx_nbytes, nbytes);
#endif

	for (i = 0; i < nbytes; i++)
		if (spi_rx_nbytes < BUFSIZE)
			spi_rx_buf[spi_rx_nbytes++] = buf[i];
		else
			warning ("spi_in: buffer full\n");
#ifdef DEBUG
	spi_print ();
#endif
}

spi_print ()
{
	printf ("spi rx_buf:\n");
	fprinthex (stdout, spi_rx_buf + spi_rx_index, spi_rx_nbytes);
}

spsr_getb (offs)
	u_int offs;
{
	spsr_is_read = 1;
	return ireg_getb (SPSR);
}

spdr_getb (offs)
	u_int offs;
{
	/*
	 * SPSR.SPIF is cleared by reading SPSR and accessing SPDR
	 */
	if (spsr_is_read) {
		ireg_putb (SPSR, 0);	/* Clear SPIF, */
		spi_interrupt = 0;	/* stop interrupt */
	}
	return ireg_getb (SPDR);	/* Data clocked in */
}

spdr_putb (offs, value)
	u_int  offs;
	u_char value;
{
	/*
	 * SPSR.SPIF is cleared by reading SPSR and accessing SPDR
	 */
	if (spsr_is_read) {
		ireg_putb (SPSR, 0);	/* Clear SPIF, */
		spi_interrupt = 0;	/* stop interrupt */
	}
	if ((ireg_getb (SPSR) & SPIF) == 0) /* tx complete? */
	{
		ireg_putb (SPDR, value);/* Clock out data */
		ireg_putb (SPSR, SPIF);	/* Set SPIF - tx complete */
		if (ireg_getb (SPCR) & SPIE)
			spi_interrupt = 1;

		if (spi_rx_index != spi_rx_nbytes) /* Clock in data */
			ireg_putb (SPDR, spi_rx_buf[spi_rx_index++]);
		if (spi_rx_index == spi_rx_nbytes)
			spi_rx_index = spi_rx_nbytes = 0;

	}
	else
		;		/* write is inhibited */
	spsr_is_read = 0;
}
