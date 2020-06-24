/* reg.h - register access (portable) */

#ifndef REG_H
#define REG_H

#include "defs.h"


/*
 * Condition Code Register Flags
 *
 * 6805 has only CZNIH flags but by defining more, we can use 6800 routines
 */
enum ccr_flags {
	CFLAG = 0x01,
	VFLAG = 0x02,
	ZFLAG = 0x04,
	NFLAG = 0x08,
	IFLAG = 0x10,
	HFLAG = 0x20,
	XFLAG = 0x40,
	SFLAG = 0x80
};

struct regs {
	struct {
		unsigned a:8;
		unsigned b:8;	/* Not present in 6805 */
	} accd;

#ifdef M6805
	unsigned ix:8;
	unsigned sp:8;		/* C8: 0xC0-0xFF */
	unsigned pc:16;		/* C8: 0x0000-0x1FFF */
#else
	unsigned ix:16;
	unsigned sp:16;
	unsigned pc:16;
#endif
	unsigned iy:16;		/* 6811 only */
	unsigned ccr:8;
};

extern struct regs regs;

/*
 * The get/setccr() are normally mostly used when interrupt occurs
 */
#define reg_getacca()	regs.accd.a
#define reg_getaccb()	regs.accd.b
#define reg_getaccd()	((reg_getacca() << 8) | reg_getaccb())
#define reg_getix()	regs.ix
#define reg_getiy()	regs.iy
#define reg_getsp()	regs.sp
#define reg_getpc()	regs.pc

#ifdef M6811
#  define reg_getccr()	regs.ccr
#else
#  define reg_getccr()	(regs.ccr | 0xc0) /* High bits always read as logic one */
#endif

/*
 * get flag - get flag as 0 or 1
 */
#define reg_getcflag()	((regs.ccr & CFLAG) != 0)
#define reg_getvflag()	((regs.ccr & VFLAG) != 0)
#define reg_getzflag()	((regs.ccr & ZFLAG) != 0)
#define reg_getnflag()	((regs.ccr & NFLAG) != 0)
#define reg_getiflag()	((regs.ccr & IFLAG) != 0)
#define reg_gethflag()	((regs.ccr & HFLAG) != 0)
#define reg_getxflag()	((regs.ccr & XFLAG) != 0)
#define reg_getsflag()	((regs.ccr & SFLAG) != 0)

#define reg_setacca(value)	{regs.accd.a = value;}
#define reg_setaccb(value)	{regs.accd.b = value;}
#define reg_setaccd(value)\
	{u_int tmp = value; reg_setacca(tmp >> 8); reg_setaccb(tmp);}
#define reg_setix(value)	{regs.ix = value;}
#define reg_setiy(value)	{regs.iy = value;}
#define reg_setpc(value)	{regs.pc = value;}
#define reg_setccr(value)	{regs.ccr = value;}

/*
 * set flag - set flag on expression (zero or non-zero)
 */
#define reg_setcflag(expr)\
	{if (expr) regs.ccr |= CFLAG; else regs.ccr &= ~CFLAG;}

#define reg_setvflag(expr)\
	{if (expr) regs.ccr |= VFLAG; else regs.ccr &= ~VFLAG;}

#define reg_setzflag(expr)\
	{if (expr) regs.ccr |= ZFLAG; else regs.ccr &= ~ZFLAG;}

#define reg_setnflag(expr)\
	{if (expr) regs.ccr |= NFLAG; else regs.ccr &= ~NFLAG;}

#define reg_setiflag(expr)\
	{if (expr) regs.ccr |= IFLAG; else regs.ccr &= ~IFLAG;}

#define reg_sethflag(expr)\
	{if (expr) regs.ccr |= HFLAG; else regs.ccr &= ~HFLAG;}

#define reg_setxflag(expr)\
	{if (expr) regs.ccr |= XFLAG; else regs.ccr &= ~XFLAG;}

#define reg_setsflag(expr)\
	{if (expr) regs.ccr |= SFLAG; else regs.ccr &= ~SFLAG;}


/*
 * Pre- and post-increment
 */
#define reg_preincpc(value)	(regs.pc += value)
#define reg_incpc(value)	(regs.pc += value)

extern u_int reg_postincpc(u_int value);
extern u_int reg_postdecsp(u_int value);
extern u_int reg_preincsp(u_int value);
extern u_int reg_incsp(u_int value);
extern int reg_cmd (int argc, char **argv);
extern int reg_printall (void);
extern int reg_setsp (u_int value);




#endif /* REG_H */
