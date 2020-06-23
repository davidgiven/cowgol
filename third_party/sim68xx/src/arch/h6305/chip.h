/*
 *
 *	Hitachi 6305 family (U0, V0, X0, X1, X2, Y0, Y1, Y2)
 *
 */
#ifndef H63705_H
#define H63705_H

/*
 * Internal registers
 */
#define	PORTA	0x00
#define	PORTB	0x01
#define	PORTC	0x02
#define	PORTD	0x03
#define	DDRA	0x04
#define	DDRB	0x05
#define	DDRC	0x06

#if defined(H63705U0)||defined(H63705V0)||defined(H63705X0)
#  define	DDRD	0x07
#else
#  if defined(H63705Y0)
#    define	DDRG	0x07
#  endif
#endif

#define	TDR	0x08	/* Timer Data Register */
#define	TCR	0x09	/* Timer Data Register */
#define	MR	0x09	/* Misc. Register */

#if defined(H63705X0)||defined(H63705Y0)
#  define	PORTE	0x0b
#  define	PORTF	0x0c
#  define	PORTG	0x0d
#endif

#define	SCR	0x10	/* SCI Control Register */
#define	SSR	0x11	/* SCI Status Register */
#define SDR	0x12	/* SCI Data Register */

#define NIREGS		0x13	/* Addr. of last internal register */

#define STACKMAX	0x100
#define STACKSIZE	64

/*
 * Interrupt vectors
 */
#define RES_VEC		0x1ffe
#define SWI_VEC		0x1ffc
#define INT_VEC		0x1ffa
#define TIM_INT2_VEC	0x1ff8
#define TIM_VEC		0x1ff6
#define SCI_TIM2_VEC	0x1ff4



/*
 * Internal RAM/ROM
 */
#ifdef H63705U0
#  define RAMSTART	0x80
#  define RAMSIZE	128
#  define ROMSTART	0x1800
#  define ROMSIZE	2048
#endif

#ifdef H63705V0
#  define RAMSTART	0x40
#  define RAMSIZE	192
#  define ROMSTART	0x1000
#  define ROMSIZE	4096
#endif

#if defined(H63705X0)||defined(H63705X1)||defined(H63705X2)
#  define RAMSTART	0x80
#  define RAMSIZE	128
#  if defined(H63705X0)||defined(H63705X1)
#    define ROMSTART	0x1000
#    define ROMSIZE	4096
#  endif
	/* External memory */
#  if defined(H63705X1)||defined(H63705X2)
#    define XMEM1START	0x20
#    define XMEM1SIZE	0x60
#    define XMEM2START	0x100
#    define XMEM2SIZE	0xf00
#    if defined(H63705X1)
#      define XMEM3START	0x2000
#      define XMEM3SIZE		8192
#    else /* defined(H63705X2) */
#      define XMEM3START	0x1000
#      define XMEM32SIZE	0x3000
#    endif
#  endif

#if defined(H63705Y0)||defined(H63705Y1)||defined(H63705Y2)
#  define RAMSTART	0x40
#  define RAMSIZE	0x100
#  if defined(H63705Y0)||defined(H63705Y1)
#    define ROMSTART	0x140
#    define ROMSIZE	7872
#  endif
	/* External memory */
#  if defined(H63705Y1)||defined(H63705Y2)
#    define XMEM1START	0x20
#    define XMEM1SIZE	0x20
#    if defined(H63705Y1)
#      define XMEM2START	0x2000
#      define XMEM2SIZE		8192
#    else /* defined(H63705Y2) */
#      define XMEM2START	0x140
#      define XMEM22SIZE	(0x4000-0x140)
#    endif
#  endif
#endif

#endif /* H63705_H */

