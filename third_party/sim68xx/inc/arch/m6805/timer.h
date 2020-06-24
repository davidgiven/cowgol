/* Automagically generated Wed Sep  6 22:08:29  1995 - dont edit */
#ifndef M6805_TIMER_H
#define M6805_TIMER_H

#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif

/*
 * timer_int - check for timer interrupt
 *
 * Return nonzero if interrupt ready, zero if no interrupt
 */
#define timer_int()\
	((ireg_getb (TSR) & OCF) && (ireg_getb (TCR) & OCIE))

/* ../../src/68xx/m6805/timer.c */
extern int tsr_getb P_((u_int offs));
extern int tsr_putb P_((u_int offs, u_char value));
extern int ocr_putb P_((u_int offs, u_char value));
extern int ocr_getb P_((u_int offs));
extern int timer_inc P_((u_int ncycles));

#undef P_
#endif /* M6805_TIMER_H */
