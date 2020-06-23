/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 *	Timer functions
 */
#include "defs.h"
#include "chip.h"           /* chip address definitions */
#include "ireg.h"

#ifdef USE_PROTOTYPES
#include "memory.h"
#include "timer.h"
#endif


static int tcsr_is_read = 0;


tcsr_getb (offs)
	u_int  offs;
{
	int tcsr;

	if ((tcsr = ireg_getb (TCSR)) & OCF)
		tcsr_is_read = 1;
	return tcsr;
}

tcsr_putb (offs, value)
	u_int  offs;
	u_char value;
{
	u_char read_only = (ICF|OCF|TOF);

	ireg_putb (TCSR, ireg_getb (TCSR) & read_only | value & ~read_only);
}

/*
 * ocr_putb - write to high/low byte of OCR
 *
 * 6801 Output Compare Flag is cleared if TSR is read and
 * Output Compare Register hi or low byte is written
 */
ocr_putb (offs, value)
	u_int  offs;
	u_char value;
{
	ireg_putb (offs, value);

	/*
	 * Clear OCF if TCSR is read
	 */
	if (tcsr_is_read) {
		ireg_putb (TCSR, ireg_getb (TCSR) & ~OCF);
		tcsr_is_read = 0;
	}
}

/*
 * timer_inc - increment timer, given the number of clock cycles passed
 *
 * 6801 has prescaler of 1
 */
timer_inc (ncycles)
	u_int ncycles;
{
	u_int  frc_old;			/* Free Running Counter */
	u_long frc_new;			/* 32 bits */
	u_int  ocr;			/* Output Compare Register */

	/*
	 * Get old and compute new timer value
	 */
	frc_old = ireg_getw (FRC);
	frc_new = frc_old + ncycles;

	/*
	 * Check against timer compare registers
	 */
	ocr = ireg_getw (OCR);
	if (frc_new >= ocr) {
		ireg_putb (TCSR, ireg_getb (TCSR) | OCF);
		tcsr_is_read = 0;
	}
	ireg_putw (FRC, frc_new);
}
