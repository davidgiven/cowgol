/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 *	Instruction execution
 */
#include <assert.h>
#include <stdio.h>

#include "defs.h"

#ifndef M6811
#define M6811
#endif

#include "cpu.h"
#include "chip.h"
#include "ireg.h"
#include "memory.h"
#include "optab.h"
#include "reg.h"
#include "sci.h"
#include "spi.h"

#ifdef USE_PROTOTYPES
#include "instr.h"
#include "symtab.h"
#endif

/*
 *  reset - process external reset event
 */
reset ()
{
	ireg_setstart (0x1000);
	reg_setpc (mem_getw (RESETVECTOR)); /* reg_reset () */
	reg_setiflag (1);
	reg_setxflag (1);
	reg_setsflag (1);
	/* io_install ();		/* Install IO hooks */
	timer_reset ();
}



/*
 *	User hook into simulator execution
 */

/*
 * instr_hook is called just before an instruction is executed.
 * It may be replaced with an application specific routine to do
 * something useful.
 */
static int (*instr_hook) () = NULL;

/*
 * instr_hook_install - install a hook in the instruction execution
 */
instr_hook_install (int (*func ()) )
{
	instr_hook = func;
}


/*
 * return opcode table entry for the current instruction
 */
static struct opcode *
opcode_getentry (pc)
	u_int pc;
{
	struct opcode *p;

	p  = &opcodetab[mem_getb (pc)];

	if (p->op_nexttab)
		return &(p->op_nexttab [mem_getb (pc+1)]);
	else
		return p;
}

/*
 * instr_exec - execute an instruction
 *
 * instr_exec is called from the main execution loop
 * each time a new instruction is to be executed
 */
instr_exec ()
{
	/*
	 * Get opcode from memory,
	 * inc program counter to point to first operand,
	 * Decode and execute the opcode.
	 */
	struct opcode *opptr;
	int interrupted = 0;		/* 1 = HW interrupt occured */

	if (!reg_getiflag ()) /* Interrupt enabled? */
	{
		u_int tflags;
		/*
		 * Process interrupt priority.
		 * If interrupt, push regs and set pc to execute vector
		 */
		if (tflags = (ireg_getb (TFLG1) & ireg_getb (TMSK1)))
		{
			if (tflags & OC1I) {
				int_6811 (TOC1VECTOR);
				interrupted = 1;
			} else if (tflags & OC2I) {
				int_6811 (TOC2VECTOR);
				interrupted = 1;
			} else if (tflags & OC3I) {
				int_6811 (TOC3VECTOR);
				interrupted = 1;
			} else if (tflags & OC4I) {
				int_6811 (TOC4VECTOR);
				interrupted = 1;
			} else if (tflags & OC5I) {
				int_6811 (TOC5VECTOR);
				interrupted = 1;
			}
		}
		else if (sci_int ())
		{
			int_6811 (SCIVECTOR);
			interrupted = 1;
		}
		else if (spi_int ())
		{
			int_6811 (SPIVECTOR);
			interrupted = 1;
		}

		/* I flag is set at this point if interrupt occured */
	}

	if (interrupted) /* Prepare cycle count for register stacking */
	{
		opptr = &opcodetab[0x3f]; /* SWI */
	}
	else
	{
		opptr = opcode_getentry (reg_getpc ());
		if (instr_hook)
			(*instr_hook)();		/* User app. hook */
		reg_incpc (opptr->op_n_opcodes);
		(*opptr->op_func) (); /* expects pc to point at operand */
	}
	cpu_setncycles (cpu_getncycles () + opptr->op_n_cycles);
	timer_inc (opptr->op_n_cycles);
	return 0;
}


/*
 * instr_print - print (unassemble) an instruction
 */
instr_print (addr)
	u_int addr;
{
	u_int		pc	= addr;
	struct opcode	*opptr	= opcode_getentry (pc);
	int		i;	/* n_opcodes  */
	int		j;	/* n_operands */
	int		k;	/* pad count  */
	char		*symname; /* Symbol name */

	printf ("%04x\t", pc);

	/*
	 * Print hex opcode byte values
	 */
	for (i = 0; i < opptr->op_n_opcodes; i++)
		printf ("%02x ", mem_getb (pc + i));
	/*
	 * Print hex operand byte values
	 */
	for (j = 0; j < opptr->op_n_operands; j++)
		printf ("%02x ", mem_getb (pc + i + j));

	/*
	 * Pad out to the maximum length (5 byte instruction)
	 */
	for (k = i + j; k < 5; k++)
		printf ("   ");
	/*
	 * Check for 2-byte operand instructions (bset/bclr),
	 * all others are extended
	 */
	if (opptr->op_n_operands == 0)
	{
		printf (opptr->op_mnemonic);
	}
	else if (opptr->op_n_operands == 1)
	{
		printf (opptr->op_mnemonic, mem_getb (pc + i));
		if (symname = sym_find_name (mem_getb (pc + i)))
			printf ("\t%s", symname);
		
	}
	else if (opptr->op_n_operands == 2)
	{
		/*
		 * Extended (word operand),
		 * except for bset/bclr (2 byte operands)
		 */
		switch (opptr->op_value)
		{
		case 0x14:	/* bset direct */
		case 0x15:	/* bclr direct */
		case 0x1c:	/* bset indirect x or y */
		case 0x1d:	/* bclr indirect x or y */
			printf (opptr->op_mnemonic, mem_getb (pc + i),
				mem_getb (pc + i + 1));
			break;
		default:
			printf (opptr->op_mnemonic, mem_getw (pc + i));
			if (symname = sym_find_name (mem_getw (pc + i)))
				printf ("\t%s", symname);
			break;
		}
	}
	else
	{
		/*
		 * 3 operands - brset or brclr
		 */
		printf (opptr->op_mnemonic,
			mem_getb (pc + i),
			mem_getb (pc + i + 1),
			mem_getb (pc + i + 2));
	}
	putchar ('\n');
	return i + j;
}

