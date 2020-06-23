/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 *	Timer functions
 */
#include <stdio.h>
#include "defs.h"
#include "chip.h"           /* chip address definitions */

#ifdef USE_PROTOTYPES
#include "memory.h"
#include "timer.h"
#endif

/* #define DEBUG 1 */
/*
 * toc - Timer Output Compare
 *
 * Upon writing to register of value toc[i].offs,
 * the output compare will occur after toc[i].ticks and cause
 * toc[i].flag to be set in the  timer flag register.
 */
static struct toc {
	u_int  offs;		/* TOC1..TOC5 */
	u_char flag;		/* OC1F..OC5F */
	long   ticks;		/* number of remaining ticks before output compare */
} toc[5] = {
	{TOC1, OC1F, 0},
	{TOC2, OC2F, 0},
	{TOC3, OC3F, 0},
	{TOC4, OC4F, 0},
	{TOC5, OC5F, 0}
};

#define TOC_LENGTH ((sizeof toc)/sizeof toc[0])

/*
 * tflg_putb - write to TFLG1 or TFLG2
 *
 * Clear flags by writing a one to the corresponding bit position(s).
 */
tflg_putb (offs, value)
	u_int  offs;
	u_char value;
{
	ireg_putb (offs, ireg_getb (offs) & ~value);
}

/*
 * toc_putb - write a byte to a timer output compare register
 */
toc_putb (offs, value)
	u_int  offs;
	u_char value;
{
#define METHODNAME "toc_putb"
	int i;
	for (i = 0; i < TOC_LENGTH; i++) {
		if (offs == toc[i].offs) {
			/*
			 * Store for latching when writing to LSB(TOC)
			 */
#ifdef DEBUG
			printf ("%s: Storing LSB for output compare %d\n",
				METHODNAME, i+1);
#endif
			ireg_putb (offs, value);
			break;
		} else if (offs == (toc[i].offs + 1)) {
			/*
			 *  Latch output compare i
			 */
			u_int toci = ireg_getw (toc[i].offs); /* Value to write to TOCi */
			u_int tcnt = ireg_getw (TCNT); /* Value of running counter */

			toc[i].ticks = toci - tcnt; /* Number of ticks before TOC1 */
			if (toc[i].ticks < 0) {
				toc[i].ticks += 65536;
			}
#ifdef DEBUG
			printf ("%s: Latching output compare %d, remaining ticks=%d\n",
				METHODNAME, i+1, toc[i].ticks);
#endif
			ireg_putb (offs, value);
			break;
		}
	}
	if (i == TOC_LENGTH) {
		/* config problem: toc_putb called for address outside toc area */
		printf ("%s: TOC to address %04x not supported\n",
			METHODNAME, offs);
	}
#undef METHODNAME
}

/*
 * timer_reset - reset timer subsystem
 */
timer_reset ()
{
	ireg_putw (TCNT, 0x0000);
	ireg_putb (CFORC, 0x00);
	ireg_putb (OC1M, 0x00);
	ireg_putb (OC1D, 0x00);
	ireg_putb (TCTL1, 0x00);
	ireg_putb (TCTL2, 0x00);
	ireg_putb (TMSK1, 0x00);
	ireg_putb (TFLG1, 0x00);
	ireg_putb (TMSK2, 0x00);
	ireg_putb (TFLG2, 0x00);
	ireg_putb (PACTL, 0x00);
	ireg_putw (TOC1, 0xffff);
	ireg_putw (TOC2, 0xffff);
	ireg_putw (TOC3, 0xffff);
	ireg_putw (TOC4, 0xffff);
	ireg_putw (TOC5, 0xffff);
}

/*
 * timer_inc - update timer counters, to be called between each instruction
 *
 * Currently supports output compare TOC1 - TOC5
 */
timer_inc (ncycles)
	u_int ncycles;
{
#define METHODNAME "timer_inc"
	u_int tcnt_old;
	u_long tcnt_new;
	int i;
	static u_int timer_ticks = 0;	/* Ticks passed to TCNT */
#if 0
	/*
	 * Prescaler code
	 * This code isn't tested, enable it if you dare...
	 */
	static char tcnt_prescaler_shift[] = {
		0x00, 0x02, 0x03, 0x04
	};
	static char tcnt_prescaler_mask[] = {
		~0x00,
		~0x03,		/* Mask out 2 lsb */
		~0x07,		/* Mask out 3 lsb */
		~0x0f,		/* Mask out 4 lsb */
	};
	static u_int timer_cnt   = 0;

	timer_cnt += ncycles;
	if ((timer_cnt & tcnt_prescaler [ireg_getb (TMSK2 & 0x03)]) == 0)
		return 0;
	else
	{
		/*
		 * Update the timer ticks
		 */
		timer_ticks = timer_cnt
			>> tcnt_prescaler_shift [ireg_getb (TMSK2 & 0x03)];
		/*
		 * Now as the number of ticks is done, clear
		 * high order bits
		 */
		timer_cnt &= ~tcnt_prescaler [ireg_getb (TMSK2 & 0x03)];
	}
#else
	/*
	 * Assume prescaler of 1
	 */
	timer_ticks = ncycles;
#endif

	/*
	 * Get old timer value
	 */
	tcnt_old = ireg_getw (TCNT);
	tcnt_new = tcnt_old + timer_ticks;
	/*
	 * Check against timer compare registers
	 */
	for (i = 0; i < TOC_LENGTH; i++) {
		toc[i].ticks -= timer_ticks;
		if (toc[i].ticks <= 0) {
			toc[i].ticks += 65536;
#ifdef DEBUG
			printf ("%s: TOC%d Output compare match, remaining ticks=%d\n",
				METHODNAME, i+1, toc[i].ticks);
#endif
			ireg_putb (TFLG1, ireg_getb (TFLG1) | toc[i].flag);
		}
	}

	ireg_putw (TCNT, tcnt_new);
#undef METHODNAME
}
