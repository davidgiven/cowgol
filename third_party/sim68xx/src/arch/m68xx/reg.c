/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/* register access (portable) */
#include <stdio.h>

#include "defs.h"
#include "cpu.h"
#include "reg.h"
#include "error.h"

#ifdef USE_PROTOTYPES
#include "callstac.h"
#endif

struct regs regs;

int reg_setsp (u_int value);

u_int reg_postincpc	(u_int value)
{
	u_int pc = regs.pc; regs.pc += value;
	return pc;
}

u_int reg_postdecsp	(u_int value)
{
	u_int sp = regs.sp;
	reg_setsp (sp - value);
	return sp;
}

u_int reg_preincsp	(u_int value)
{
	return reg_setsp (regs.sp + value);
}

u_int reg_incsp	(u_int value)
{
	return reg_setsp (regs.sp + value);
}


int reg_setsp (u_int value)
{
	if (value > regs.sp)
	{
		/*
		 * May have returned from one or more subroutines
		 */
		while (value > callstack_peek_stack() && callstack_nelem() > 0)
			callstack_pop ();
	}
	/*
	 * Check that new stack value is within user settable stack limits
	 */
	if (value <= cpu_getstackmin())
		warning ("sp:%04x, min:%04x\n", regs.sp, cpu_getstackmin());
	else if (value > cpu_getstackmax())
		warning ("sp:%04x, max:%04x\n", regs.sp, cpu_getstackmax());

	return regs.sp = value;
}

/*
 * print all cpu registers
 */
int reg_printall ()
{
	printf ("PC=%04x", reg_getpc ());

#ifdef M6805			/* 8 bits X register */
	printf (" A=%02x X=%02x", reg_getacca (), reg_getix ());
#else
	printf (" A:B=%02x%02x X=%04x", reg_getacca (), reg_getaccb (),
		reg_getix ());
#endif

#ifdef M6811			/* 6811 has Y register */
	printf (" Y=%04x", reg_getiy ());
#endif
#ifdef M6805			/* Byte sized stack pointer */
	printf (" SP=%02x", reg_getsp ());
#else
	printf (" SP=%04x", reg_getsp ());
#endif

	printf (" CCR=%02x", reg_getccr ());
	printf ("(%c%c%c%c%c%c%c%c)",
#ifdef M6811
		reg_getsflag () ? 'S' : 's',
		reg_getxflag () ? 'X' : 'x',
#else
		'1',
		'1',
#endif
		reg_gethflag () ? 'H' : 'h',
		reg_getiflag () ? 'I' : 'i',
		reg_getnflag () ? 'N' : 'n',
		reg_getzflag () ? 'Z' : 'z',
#ifdef M6805
		'-',
#else
		reg_getvflag () ? 'V' : 'v',
#endif
		reg_getcflag () ? 'C' : 'c'
	);
	/* putchar ('\n'); */
	return 1;
}

/*
 * reg_set - set one of registers p, a, b, c, d, x, y, s
 *
 * Register names:
 *	'p'	Program Counter
 *	'a'	Accumulator A
 *	'b'	Accumulator B
 *	'c'	Condition Code Register
 *	'd'	Double accumulator A:B
 *	'x'	Index register X
 *	'y'	Index register Y
 *	's'	Stack Pointer
 *
 * This is a processor specific routine. The above names are
 * useful for the 68xx series, even though not all registers
 * are available for all processors.
 * If you change it, don't forget to update the help text.
 */
static int reg_set (u_int regname, u_int regval)
{
	switch (regname)
	{
	case 'p': reg_setpc (regval); break;
	case 'a': reg_setacca (regval); break;
	case 'b': reg_setaccb (regval); break;
	case 'c': reg_setccr (regval); break;
	case 'd': reg_setaccd (regval); break;
	case 'x': reg_setix (regval); break;
	case 'y': reg_setiy (regval); break;
	case 's': reg_setsp (regval); break;
	default: return 0;
	}
	return 1;
}

/*
 * reg_cmd - execute valid register command
 *
 * Returns 1 if command executed, else 0
 */
int reg_cmd (int    argc, char **argv)
{
	if (argc < 1)
		return 0;

	switch (*argv[0])
	{
	case 'r':
		/*
		 *  register [p|a|b|d|x|y|s] value
		 */
		if (argc > 2)
		{
			char  regname;
			u_int regval;

			if (sscanf (argv[1], "%c", &regname) == 1 &&
			    sscanf (argv[2], "%x", &regval) == 1)
				reg_set (regname, regval);
		}
		reg_printall ();
		return 1;

	case 'h':
		printf ("Register commands:\n");
		printf ("	r p|a|b|c|d|x|y|s val   - modify register\n");
		return 1;
	default:
		return 0;
	}
}
