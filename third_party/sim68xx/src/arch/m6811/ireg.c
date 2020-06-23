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
#include "spi.h"
#include "sci.h"
#include "timer.h"

#ifdef USE_PROTOTYPES
#endif
/*
 * Start/end of internal register block
 */
u_int	ireg_start = 0x1000;	/* 6811A, 6811E */
u_char	iram[NIREGS];


#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif

/*
 *  Pointers to functions to be called for reading internal registers
 */
int (*ireg_getb_func[NIREGS]) P_((u_int offs)) = {
/* 0x00 */
	0,         0,         0,         0,        
	0,         0,         0,         0,        
	0,         0,         0,         0,        
	0,         0,         0,         0,        
/* 0x10 */
	0,         0,         0,         0,        
	0,         0,         0,         0,        
	0,         0,         0,         0,        
	0,         0,         0,         0,        
/* 0x20 */
	0,         0,         0,         0,        
	0,         0,         0,         0,        
	0,         spsr_getb, spdr_getb, 0,        
	0,         0,         scsr_getb, scdr_getb,
/* 0x30 */
	0,         0,         0,         0,        
	0,         0,         0,         0,        
	0,         0,         0,         0,        
	0,         0,         0,         0
};


/*
 *  Pointers to functions to be called for writing internal registers
 */
int (*ireg_putb_func[NIREGS]) P_((u_int offs, u_char val)) = {
/* 0x00 */
	0,         0,         0,         0,        
	0,         0,         0,         0,        
	0,         0,         0,         0,        
	0,         0,         0,         0,        
/* 0x10 */
	0,         0,         0,         0,        
	0,         0,         toc_putb,  toc_putb, 
	0,         0,         0,         0,        
	0,         0,         0,         0,        
/* 0x20 */
	0,         0,         0,         tflg_putb,
	0,         tflg_putb, 0,         0,        
	0,         0,         spdr_putb, 0,        
	0,         sccr2_putb, 0,         scdr_putb,
/* 0x30 */
	0,         0,         0,         0,        
	0,         0,         0,         0,        
	0,         0,         0,         0,        
	0,         0,         0,         0
};

#undef P_
