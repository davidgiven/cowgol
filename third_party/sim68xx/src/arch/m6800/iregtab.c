/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */

/*
 *	Internal register function tables - dummy for 6800
 */
#include "defs.h"
#include "chip.h"
#include "iregtab.h"
#include "memory.h"

/*
 * Start/end of internal register block
 */
u_int intreg_start = 0x1000;	/* 6811A, 6811E */
u_int intreg_end   = 0x1000 + NIREGS - 1;


#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif

/*
 *  Pointers to functions to be called for reading internal registers
 */
int (*ireg_getb_func[]) P_((u_int offs)) = {
/* 0x00 */
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
/* 0x10 */
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
/* 0x20 */
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
/* 0x30 */
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
	ireg_getb, ireg_getb, ireg_getb, ireg_getb,
	ireg_getb, ireg_getb, ireg_getb, ireg_getb
};


/*
 *  Pointers to functions to be called for writing internal registers
 */
int (*ireg_putb_func[]) P_((u_int offs, u_char val)) = {
/* 0x00 */
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
/* 0x10 */
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
/* 0x20 */
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
/* 0x30 */
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
	ireg_putb, ireg_putb, ireg_putb, ireg_putb,
	ireg_putb, ireg_putb, ireg_putb, ireg_putb
};

#undef P_
