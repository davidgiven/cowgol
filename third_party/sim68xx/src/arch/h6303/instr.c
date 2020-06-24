 /*
  *
  * Sim68xx - 68xx/63xx CPU Simulator
  *
  * instr.c - Instruction decoding and execution (6303)
  *
     Copyright (C) 2011 Felix Erckenbrecht
     <dg1yfe at gmx.de>

     Copyright (C) 1994 - 1996  Arne Riiber
     <riiber at systek.no>

     This program is free software; you can redistribute it and/or modify
     it under the terms of the GNU General Public License as published by
     the Free Software Foundation; either version 2 of the License, or
     (at your option) any later version.

     This program is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     GNU General Public License for more details.

     You should have received a copy of the GNU General Public License
     along with this program; if not, write to the Free Software
     Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
  *
*/
#include <assert.h>
#include <stdio.h>

#include "defs.h"
#include "chip.h"
#include "cpu.h"
#include "ireg.h"
#include "memory.h"
#include "optab.h"
#include "reg.h"
#include "sci.h"
#include "timer.h"
#include "symtab.h"
#include "opfunc.h"

#ifdef USE_PROTOTYPES
#include "instr.h"
#endif


/*
 *  reset - jump to the reset vector
 */
void reset ()
{
	reg_setpc (mem_getw (RESVECTOR));
	reg_setiflag (1);
}


/*
 * instr_exec - execute an instruction
 */
int instr_exec ()
{
	/*
	 * Get opcode from memory,
	 * inc program counter to point to first operand,
	 * Decode and execute the opcode.
	 */
	struct opcode *opptr;
	int interrupted = 0;		/* 1 = HW interrupt occured */

#ifndef M6800
	if (!reg_getiflag ())
	{
		u_char tcsr_reg, tcsr2_reg;
		/*
		 * Check for interrupts in priority order
		 *
		 * Reset
		 * Trap
		 * NMI
		 * SWI
		 * /IRQ1
		 * ICI
		 * OCI (Timer 1, 1&2 Compare Match)
		 * TOI (Timer 1, Overflow)
		 * CMI (Timer 2, Compare Match)
		 * /IRQ2
		 * SIO
		 *
		 */
		tcsr_reg = ireg_getb (TCSR);
		tcsr2_reg = ireg_getb (TCSR2);
		if ((tcsr_reg & ICF) && (tcsr_reg & EICI))
		{
			int_addr (ICFVECTOR);
			interrupted = 1;
		}
		else
		if (((tcsr_reg & OCF1) && (tcsr_reg & EOCI1)) ||
			((tcsr2_reg & OCF2) && (tcsr2_reg & EOCI2)))
		{
			int_addr (OCFVECTOR);
			interrupted = 1;
		}
		else
		if ((tcsr_reg & TOF) && (tcsr_reg & ETOI))
		{
			int_addr (TOFVECTOR);
			interrupted = 1;
		}
		else
		if (serial_int ())
		{
			int_addr (SCIVECTOR);
			interrupted = 1;
		}
	}
#if 0
	/*
	 * 6301 Address check error: Trap if address is outside RAM/ROM
	 * This must be modified to check mode (single-chip/extended) first
	 */
	if ((reg_getpc() <= ramstart) || reg_getpc() >  ramend)
	{
		error ("instr_exec: Address error: %04x\n", reg_getpc());
		trap();		/* Highest pri vector after Reset */
	}
#endif /* 0 */
#endif /* M6800 */

	if (interrupted) /* Prepare cycle count for register stacking */
	{
		opptr = &opcodetab[0x3f]; /* SWI */
	}
	else
	{
		u_int pc_op;

		opptr = &opcodetab [mem_getb (reg_getpc ())];
		reg_incpc (1);
		(*opptr->op_func) ();
		// check for SWI
		if (opptr->op_value == 0x3f)
		{
			interrupted = 1;
		}
		// check for RTI
		if(opptr->op_value == 0x3b)
		{
			pc_op=reg_getpc();
			if(pc_op != rti_pc )
			{
				printf("RTI Address (%04x) does not match IRQ entry address (%04x)\n", pc_op, rti_pc);
				printf("(%s / %s)\n", sym_find_name(pc_op), sym_find_name(rti_pc));
			}
		}
	}

	if(interrupted)
		printf("Interrupt : %04x \t %s\n", reg_getpc(), sym_find_name(reg_getpc()));

	cpu_setncycles (cpu_getncycles () + opptr->op_n_cycles);
	timer_inc (opptr->op_n_cycles);
	return interrupted;
}



/*
 * instr_print - print (unassemble) an instruction
 */
u_int instr_print (u_int addr)
{
	u_short		 pc	= addr;
	u_char		 op	= mem_getb (pc);
	struct opcode	*opptr	= &opcodetab[op];
	char		*symname;

	/*
	 * In case somebody changes the opcodemap, verify it
	 */
	assert (opptr->op_value == op);

	printf ("%04x\t", pc);

	switch(opptr->op_addrmode)
	{
		case 0:	// Immediate
		{
			if (opptr->op_n_operands == 1)
			{
				printf ("%02x %02x\t\t",  mem_getb (pc), mem_getb (pc+1));
				printf (opptr->op_mnemonic, mem_getb (pc + 1));
			}
			else
			{
				printf ("%02x %02x %02x\t",  mem_getb (pc),
						mem_getb (pc+1), mem_getb (pc+2));
				printf (opptr->op_mnemonic, mem_getw (pc + 1));
			}
			break;
		}
		case 1: // Direct
		{
			printf ("%02x %02x\t\t",  mem_getb (pc), mem_getb (pc+1));
			printf (opptr->op_mnemonic, mem_getb (pc + 1));
			if ((symname = sym_find_name (mem_getb (pc + 1))))
				printf ("\t\t%s", symname);
			break;
		}
		case 2: // Extended
		{
			printf ("%02x %02x %02x\t", mem_getb (pc),
					mem_getb (pc + 1), mem_getb (pc + 2));
			printf (opptr->op_mnemonic, mem_getw (pc + 1));
			if ((symname = sym_find_name (mem_getw (pc + 1))))
				printf ("\t%s", symname);
			break;
		}
		case 3: // Indexed
		{
			printf ("%02x %02x\t\t",  mem_getb (pc), mem_getb (pc+1));
			printf (opptr->op_mnemonic, mem_getb (pc + 1));
			if ((symname = sym_find_name (reg_getix() + mem_getb (pc + 1))))
				printf ("\t%s", symname);
			break;
		}
		case 4: // Implied
		{
			printf ("%02x\t\t",  mem_getb (pc));
			printf (opptr->op_mnemonic, mem_getb (pc + 1));
			break;
		}
		case 5: // Relative
		{
			signed char offset = (signed char) mem_getb (pc + 1);

			printf ("%02x %02x\t\t",  mem_getb (pc), mem_getb (pc+1));
			printf (opptr->op_mnemonic, mem_getb (pc + 1));
			if ((symname = sym_find_name (pc + offset)))
				printf ("\t%s", symname);
			break;
		}
		case 6: // Immediate Direct
		{
			printf ("%02x %02x %02x\t", mem_getb (pc),
					mem_getb (pc + 1), mem_getb (pc + 2));
			printf (opptr->op_mnemonic, mem_getb (pc + 1), mem_getb(pc + 2));
			if ((symname = sym_find_name (mem_getb (pc + 2))))
				printf ("\t%s", symname);
			break;
		}
		case 7: // Immediate Indexed
		{
			printf ("%02x %02x %02x\t", mem_getb (pc),
					mem_getb (pc + 1), mem_getb (pc + 2));
			printf (opptr->op_mnemonic, mem_getb (pc + 1), mem_getb(pc + 2));
			if ((symname = sym_find_name (reg_getix() + mem_getb (pc + 2))))
				printf ("\t%s", symname);
			break;
		}

	}

	/* printf ("\t[%d]\n", cpu_getncycles ()); */
	putchar ('\n');
	return opptr->op_n_operands + 1;
}
