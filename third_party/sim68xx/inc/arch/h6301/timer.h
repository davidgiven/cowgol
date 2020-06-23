/* Automagically generated Wed Oct  9 07:41:10 GMT+0100 1996 - dont edit */
#ifndef H6301_TIMER_H
#define H6301_TIMER_H

#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif


/* ../../src/arch/h6301/timer.c */
extern int tcsr_getb P_((u_int offs));
extern int tcsr_putb P_((u_int offs, u_char value));
extern int ocr_putb P_((u_int offs, u_char value));
extern int timer_inc P_((u_int ncycles));

#undef P_
#endif /* H6301_TIMER_H */
