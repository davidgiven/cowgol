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
static int tcsr2_is_read = 0;


int tcsr1_getb (u_int offs)
{
	int tcsr1;

	if ((tcsr1 = ireg_getb (TCSR1)) & OCF1)
		tcsr_is_read = 1;

	return tcsr1;
}



int tcsr2_getb (u_int offs)
{
	int tcsr2;

	// OCF1 and ICF are readable in TCSR1 and TCSR2
	tcsr2 = ireg_getb (TCSR2);
	tcsr2 &= ~(OCF1 | ICF);							// ignore Bit 6 & 7 in TCSR2 location
	tcsr2 |= (ireg_getb (TCSR1) & (OCF1 | ICF));	// instead fill with Bit 6 & 7 from TCSR1

	if (tcsr2 & OCF2)
		tcsr2_is_read = 1;

	if (tcsr2 & OCF1)
		tcsr_is_read = 1;

	return tcsr2;
}



int tcsr1_putb (u_int offs, u_char value)
{
	u_char read_only = (ICF|OCF1|TOF);

	ireg_putb (TCSR1, (ireg_getb (TCSR1) & read_only) | (value & ~read_only));
	return 0;
}



int tcsr2_putb (u_int offs, u_char value)
{
	u_char read_only = (ICF|OCF2|OCF1);

	ireg_putb (TCSR, (ireg_getb (TCSR) & read_only) | (value & ~read_only));
	return 0;
}

/*
 * ocr1_putb - write to high/low byte of OCR
 *
 * 6303 Output Compare Flag 1 is cleared if TSR1 or TSR2 is read and
 * Output Compare Register 1 hi or low byte is written
 */
int ocr1_putb (u_int offs, u_char value)
{
	ireg_putb (offs, value);

	/*
	 * Clear OCF1 if TCSR is read
	 */
	if (tcsr_is_read) {
		ireg_putb (TCSR1, ireg_getb (TCSR1) & ~OCF1);
		tcsr_is_read = 0;
	}
	return 0;
}


/*
 * ocr2_putb - write to high/low byte of OCR
 *
 * 6303 Output Compare Flag 2 is cleared if TSR2 is read and
 * Output Compare Register 2 hi or low byte is written
 */
int ocr2_putb (u_int offs, u_char value)
{
	ireg_putb (offs, value);

	/*
	 * Clear OCF if TCSR is read
	 */
	if (tcsr2_is_read) {
		ireg_putb (TCSR2, ireg_getb (TCSR2) & ~OCF2);
		tcsr2_is_read = 0;
	}
	return 0;
}


int t2cnt_get_prescale_bits(void)
{
	unsigned int prescale_bits=0;

	switch(ireg_getb(TCONR)&(CKS1 | CKS0))
	{
		case 0:{
			prescale_bits = 0;
			break;
		}
		case 1:{
			prescale_bits = 3;
			break;
		}
		case 2:{
			prescale_bits = 7;
			break;
		}
		case 3:{
			// TODO: Implement External clock input
			prescale_bits = 0;
			break;
		}
	}

	return prescale_bits;
}


int t2cnt_putb (u_int offs, u_char value)
{

	ireg_putb (T2CNT, value);

	return 0;
}


int t2cnt_getb (u_int offs)
{
	return ireg_getb (T2CNT);
}

/*
 * timer_inc - increment timer, given the number of clock cycles passed
 *
 * 6303 has prescaler of 1
 */
int timer_inc (u_int ncycles)
{
	u_int  frc_old;			/* Free Running Counter */
	u_long frc_new;			/* 32 bits */

	u_int  t2cnt_old;
	u_int  t2cnt_new;
	u_int  tconr;
	u_int  t2_enabled;

	u_int  ocr1;			/* Output Compare Register */
	u_int  ocr2;			/* Output Compare Register */
	u_int  prescale_bits;
	/*
	 * Get old and compute new timer value
	 */
	frc_old = ireg_getw (FRC);
	frc_new = frc_old + ncycles;

	/*
	 * Check against timer compare registers
	 * only trigger if compare match condition occurred
	 * during the last instruction
	 */
	ocr1 = ireg_getw (OCR1);
	if ((frc_new >= ocr1) && (frc_old < ocr1))
	{
		ireg_putb (TCSR1, ireg_getb (TCSR1) | OCF1);
		tcsr_is_read = 0;
	}

	ocr2 = ireg_getw (OCR2);
	if ((frc_new >= ocr2) && (frc_old < ocr2))
	{
		ireg_putb (TCSR2, ireg_getb (TCSR2) | OCF2);
		tcsr2_is_read = 0;
	}

	// check if Timer 2 is enabled
	t2_enabled = ireg_getw(TCSR3) & TE2;
	if(t2_enabled)
	{
		int frc_diff;

		// since T2 is clocked by FRC either
		// directly or divided by 8 or 128
		// we have to evaluate the FRC

		prescale_bits = t2cnt_get_prescale_bits();
		frc_diff = (frc_new >> prescale_bits) - (frc_old >> prescale_bits);

		t2cnt_old = ireg_getb (T2CNT);
		t2cnt_new = t2cnt_old + frc_diff;

		tconr = ireg_getb(TCONR);

		if ((t2cnt_new >= tconr) && (t2cnt_old < tconr)) {
			t2cnt_new -= tconr;
			ireg_putb (TCSR3, ireg_getb (TCSR3) | CMF);
			tcsr2_is_read = 0;
		}

		ireg_putb(T2CNT, t2cnt_new & 0xff);
	}

	ireg_putw (FRC, frc_new);

	return 0;
}
