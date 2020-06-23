/* Automagically generated Wed Oct  9 07:41:14 GMT+0100 1996 - dont edit */
#ifndef M6811_TIMER_H
#define M6811_TIMER_H

#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif


/* ../../src/arch/m6811/timer.c */
extern int tflg_putb P_((u_int offs, u_char value));
extern int toc_putb P_((u_int offs, u_char value));
extern int timer_reset P_((void));
extern int timer_inc P_((u_int ncycles));

#undef P_
#endif /* M6811_TIMER_H */
