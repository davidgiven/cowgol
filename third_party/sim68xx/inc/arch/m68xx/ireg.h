
/*
 *	Internal register function tables
 */
#ifndef IREG_H
#define IREG_H

#include "defs.h"

/*
 * Start/end of internal register block
 */
extern u_int	ireg_start;
extern u_char	iram[];


#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif

/*
 * internal register ram interface 
 */


/*
 * ireg_getb, ireg_getw - get contents of internal register offset
 * ireg_putb, ireg_putw - set contents of internal register offset
 */

#define ireg_getb(offs)		(iram[offs])
#define ireg_getw(offs)		((iram[offs] << 8) | iram[offs+1])
#define ireg_putb(offs,value)	(iram[offs]=value)
#define ireg_putw(offs,value)\
	(iram[offs]=(u_char)((value)>>8), iram[offs+1]=(u_char)(value))
#define ireg_setstart(addr)	(ireg_start=addr)
#define ireg_install(offs,getb,putb)				\
{								\
	if (offs <= NIREGS) {					\
		if (getb != NULL)				\
			ireg_getb_func[offs] = getb;		\
		if (putb != NULL)				\
			ireg_putb_func[offs] = putb;		\
	} else {						\
		error ("ireg_install: address too large\n");	\
	}							\
}								\

#if 0	
/*
 * ireg_install - install handler function for internal register read/write
 *
 * Provides so user can install functions simulating hardware on IO ports
 */
static void
ireg_install (offs, getb, putb)
	u_int offs;				/* Internal register to hook */
	int (*getb) ( /* u_int offs */);		/* Handler for read */
	int (*putb) ( /* u_int offs, u_char val */);	/* Handler for write */
{
	if (offs <= NIREGS) {
		if (getb)
			ireg_getb_func[offs] = getb;
		if (putb)
			ireg_putb_func[offs] = putb;
	} else
		error ("ireg_install: address too large\n");
}		
#endif


/*
 *  Pointers to functions to be called for reading internal registers
 */
extern int (*ireg_getb_func[]) P_((u_int offs));
extern int (*ireg_putb_func[]) P_((u_int offs, u_char val));

#undef P_
#endif /* IREG_H */
