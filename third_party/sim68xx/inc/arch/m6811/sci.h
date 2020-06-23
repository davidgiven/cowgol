/* Automagically generated Wed Sep  6 21:57:45  1995 - dont edit */
#ifndef M6811_SCI_H
#define M6811_SCI_H

#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif

extern int    sci_rx_ints;	/* No. of outstanding rx interrupts */
extern int    sci_tx_ints;	/* No. of outstanding tx interrupts */

/*
 * sci_int - returns 1 if serial interrupt is pending
 */
#define sci_int()\
	((sci_rx_ints && (ireg_getb (SCCR2) & RIE))\
		|| (sci_tx_ints && (ireg_getb (SCCR2) & (TIE|TCIE))))

/* ../../src/68xx/m6811/sci.c */
extern int sci_in P_((u_char *buf, int nbytes));
extern int sci_print P_((void));
extern int scsr_getb P_((u_int offs));
extern int scdr_getb P_((u_int offs));
extern int sccr2_putb P_((u_int offs, u_char value));
extern int scdr_putb P_((u_int offs, u_char value));

#undef P_
#endif /* M6811_SCI_H */
