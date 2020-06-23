/* Automagically generated Wed Sep  6 21:57:33  1995 - dont edit */
#ifndef H6301_SCI_H
#define H6301_SCI_H

#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif


/* ../../src/68xx/h6301/sci.c */

extern int	rxinterrupts;	/* Number of outstanding rx interrupts */
extern int	txinterrupts;	/* Number of outstanding tx interrupts */

/*
 * serial_int - check for serial interrupt
 *
 * Return nonzero if interrupt generated, zero if no interrupt
 */
#define serial_int()\
	((rxinterrupts && (ireg_getb (TRCSR) & RIE))\
	 || (txinterrupts && (ireg_getb (TRCSR) & TIE)))

extern int sci_in P_((u_char *s, int nbytes));
extern int sci_print P_((void));
extern int trcsr_getb P_((u_int offs));
extern int trcsr_putb P_((u_int offs, u_char value));
extern int rdr_getb P_((u_int offs));
extern int tdr_putb P_((u_int offs, u_char value));

#undef P_
#endif /* H6301_SCI_H */
