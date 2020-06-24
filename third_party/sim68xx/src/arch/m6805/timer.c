/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 *	Timer functions - based on 6801 timer
 */
#include "defs.h"
#include "chip.h"           /* chip address definitions */
#include "ireg.h"
#include "memory.h"
#include "timer.h"



static int	tsr_is_read      = 1;
static u_long	frc		 = 0;		/* Free running counter */
static u_long	ocr		 = 0x10000;	/* Output compare register */

#ifndef DEBUG
#  define DCODE(x)
#else
#  define DCODE(x) x
#endif


/*
 * tsr_getb - return Timer Status Register (read-only)
 */
tsr_getb (offs)
	u_int  offs;
{
	int tsr;

	if ((tsr = ireg_getb (TSR)) & OCF)
		tsr_is_read = 1;
	return tsr;
}

tsr_putb (offs, value)
	u_int  offs;
	u_char value;
{
	return ireg_getb (TSR);	/* read-only */
}

/*
 * ocr_putb - write to low byte of OCR
 *
 * 6805 Output Compare Flag is cleared if TSR is read and
 * OCR low is accessed (read or written, Motorola litterature vary),
 * so we let both read and write clear it.
 */
ocr_putb (offs, value)
	u_int  offs;
	u_char value;
{

	ireg_putb (offs, value);
	/*
	 * Set new output compare, value may be > 65535
	 */
	ocr = ireg_getw (OCR) + frc;
	DCODE (printf ("ocr_putb: FRC=%lu new OCR=%lu\n", frc, ocr));

	/*
	 * Clear OCF if TSR is read
	 */
	if (tsr_is_read) {
		DCODE (printf ("ocr_putb: TSR is read => OCF cleared\n"));
		ireg_putb (TSR, ireg_getb (TSR) & ~OCF);
		tsr_is_read = 0;
	}
	else
		DCODE (printf ("ocr_putb: TSR not read\n"));
}

ocr_getb (offs)
	u_int  offs;
{
	/*
	 * Clear OCF if TSR is read
	 */
	if (tsr_is_read) {
		DCODE (printf ("ocr_getb: TSR is read => OCF cleared\n"));
		ireg_putb (TSR, ireg_getb (TSR) & ~OCF);
		tsr_is_read = 0;
	}
	else
		DCODE (printf ("ocr_getb: TSR not read\n"));

	return ireg_getb (offs);
}

/*
 * timer_inc - increment timer, given the number of clock cycles passed
 *
 * 6805 has prescaler of 4
 */
timer_inc (ncycles)
	u_int ncycles;
{
	static u_int	presc_in  = 0; /* Prescaler in */
	static u_int	presc_out = 0; /* Prescaler out */
	static u_int	presc_out_last = 0;
	u_int		ticks;

	presc_in += ncycles;
	presc_out = presc_in / 4;
	if (presc_out >= presc_out_last)
		ticks = (presc_out - presc_out_last);
	else
		ticks = (presc_out_last - presc_out);
	presc_out_last = presc_out;

	/*
	 * Compute new free running counter value
	 */
	frc += ticks;
	ireg_putw (FRC, frc);

	/* DCODE (printf ("timer_inc: new FRC=%lu, OCR=%lu\n", frc, ocr)); */
	/*
	 * Check against timer compare registers
	 */
	if (frc >= ocr) {
		frc &= 0xffff;
		ocr  = (frc + 0x10000);
		if ((ireg_getb (TSR) & OCF) == 0) {
			DCODE (printf ("timer_inc: OCF:0->1\n"));
			ireg_putb (TSR, ireg_getb (TSR) | OCF);
			tsr_is_read = 0;
		} else {
			DCODE (printf ("timer_inc: OCF==1\n"));
		}
	}

}


