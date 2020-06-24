/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
#include <stdio.h>

#include "defs.h"
#include "chip.h"
#include "memory.h"	/* ireg_getb/putb */
#include "sci.h"
#include "timer.h"
#include "ireg.h"

#ifdef USE_PROTOTYPES
#endif

/*
 * Start/end of internal register block
 */
u_int	ireg_start = 0;
u_char	iram[NIREGS];

#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif

static port_putb P_((u_int offs, u_char value));

static
port_putb (offs, value)
	u_int  offs;
	u_char value;
{
	/* Only change output ports - xor with DDR */
	ireg_putb (offs, value ^ ireg_getb (offs - 2));
}

/*
 *  Pointers to functions to be called for reading internal registers
 */
int (*ireg_getb_func[NIREGS]) P_((u_int offs)) = {
/* 0x00 */
	0,          0,          0,          0,
	0,          0,          0,          0,
	tcsr_getb,  0,          0,          0,
	0,          0,          0,          0,
/* 0x10 */
	0,          trcsr_getb, rdr_getb,   0,
	0
};


/*
 *  Pointers to functions to be called for writing internal registers
 */
int (*ireg_putb_func[NIREGS]) P_((u_int offs, u_char val)) = {
/* 0x00 */
	0,          0,          port_putb,   port_putb,
	0,          0,          port_putb,   port_putb,
	tcsr_putb,  0,          0,           ocr_putb,
	ocr_putb,   0,          0,           0,
/* 0x10 */
	0,          trcsr_putb, 0,           tdr_putb,
	0
};

#undef P_
