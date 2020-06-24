/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */

/*
 *	Internal register function tables
 */
#include "defs.h"
#include "chip.h"
#include "ireg.h"
#include "memory.h"
#include "sci.h"
#include "spi.h"
#include "timer.h"

#ifdef USE_PROTOTYPES
#endif

#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif

int port_putb P_ ((u_int offs, u_char value));

/*
 * Start/end of internal register block
 */
u_int	ireg_start = 0;
u_char	iram[NIREGS];


/*
 * port_putb - output byte to parallel port
 */
int
port_putb (offs, value)
	u_int  offs;
	u_char value;
{
	/* Only change output ports */
	ireg_putb (offs, value ^ ireg_getb (offs + 4));
}

/*
 * put to readonly port
 */
int
port_putb_ro (offs, value)
	u_int  offs;
	u_char value;
{
	return ireg_getb (offs);
}

/*
 *  Pointers to functions to be called for reading internal registers
 */
int (*ireg_getb_func[NIREGS]) P_((u_int offs)) = {
/* 0x00 */
	0,         0,         0,         0,
	0,         0,         0,         0,
	0,         0,         0,         spsr_getb,
	spdr_getb, 0,         0,         0,
/* 0x10 */
	scsr_getb, scdr_getb, 0,         tsr_getb,
	0,         0,         0,         ocr_getb,
	0,         0,         0,         0,
	0,         0,         0
};


/*
 *  Pointers to functions to be called for writing internal registers
 */
int (*ireg_putb_func[NIREGS]) P_((u_int offs, u_char val)) = {
/* 0x00 */
	port_putb, port_putb, port_putb, port_putb_ro, /* Port D is input only */
	0,         0,         0,         0,
	0,         0,         0,         0,
	spdr_putb, 0,         0,         sccr2_putb,
/* 0x10 */
	scsr_getb, scdr_putb, 0,         tsr_putb, /* SCSR is read-only */
	0,         0,         0,         ocr_putb,
	0,         0,         0,         0,
	0,         0,         0
};

#undef P_
