/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
#include <assert.h>
#include <stdio.h>

#include "defs.h"
#include "cpu.h"
#include "chip.h"
#include "ireg.h"
#include "memory.h"
#include "optab.h"
#include "reg.h"
#include "sci.h"
#include "spi.h"
#include "timer.h"
#include "symtab.h"

#ifdef USE_PROTOTYPES
#include "instr.h"
#endif

#if 0
	/*
	 * This is currently not used and provided as an example only.
	 *
	 * Simulating accurate HW becomes tedious because of the many
	 * chip variants and is not the primary goal.
	 *
	 * The descriptions become pretty large (beyond our scope).
	 */
struct chiptype {
	u_int int_base;			/* Interrupt base addresse */
	u_int stack_start, stack_size;	/* Grows towards 0 */
	u_int ram_start, ram_size;
	u_int rom_start, rom_size;
	/*
	 * In addition, smaller ram/rom/eeprom areas may be present
	 * dependent on chip variant.
	 */
};

enum chipnames {
	C4=0, C8=1, C16=2, J1=3, P1=4, P9=5, B4=6, B6=7
};

struct chiptype chiptypes[] = {
	/* -int-  ---stack--  ---ram----      ---rom--- */
	{0x1f00, 0x100, 64, 0x50, 176, 0x100, 4096},	/* C4(0) */
	{0x1f00, 0x100, 64, 0x50, 176, 0x100, 7680},	/* C8(1) */
	{0x3f00, 0x100, 64, 0x50, 176, 0x100, 7680+8096},/* C16(2) */
	{0x0700,    0,  0, 0xc0,  64, 0x300, 1024},	/* J1(3) */
	{0x1f00, 0x100, 64, 0x80, 128, 0x100, 2048},	/* P1(4) */
	{0x1f00, 0x100, 64, 0x80, 128, 0x100, 2048},	/* P9(5) */
	/* B4 and B6 has different SCI/SPI/TIMER vectors,too */
	{0x0f00, 0x100, 64, 0x50, 176, 0x800, 4096},	/* B4(6) */
	{0x0800, 0x100, 64, 0x50, 176, 0x800, 5888}	/* B6(7) */
};

struct chiptype *chip = &chiptypes[C8];

#if 0

General (6805) chip:
INT VEC ADDR FOR		USED BY ROUTINE
	1 x reset		reset()
	1 x irq			irq()?
	1 x swi			swi()
	n1 x sci in/out		sci_in() /* sci_out too? */
	n2 x spi in/out		spi_in() /* spi_out too? */
	n3 x tic		/* ? */
	n4 x toc		timer_update()

The I/O interrupt vectors have associated I/O registers, which
should be part of the same description.

#endif
#endif


/* hard coded 6805C8 limits */
#define STACKSTART 0x100
#define STACKSIZE  64
#define RAMSTART   0x50
#define RAMSIZE    176
#define ROMSTART   0x100

u_int swivector = SWIVEC;

/*
 *  reset - simulate external reset event
 *
 *  Reset internal registers, jump to the reset vector
 */
reset ()
{
	/*  Reset internal registers */
	/* What should be done: */
	/* sci_reset (); /* Reset async. serial I/O */
	/* spi_reset (); /* Reset sync.  serial I/O */
	/* tim_reset (); /* Reset timer system */
	/* pio_reset (); /* Reset parallel I/O */

	/* io_reset ();  /* Reset external I/O */

	reg_setsp (STACKSTART - 1);
	reg_setpc (mem_getw (RESVEC));	/* jump to the reset vector */
}




/*
 * instr_exec - execute an instruction
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

	if (!reg_getiflag ())
	{
		/*
		 * Push regs and set pc, don't execute vector yet
		 */
		if (timer_int ()) {
			int_6805 (TIOVEC); /* C4/C8/C16 */
			interrupted = 1;
		} else if (sci_int ()) {
			int_6805 (SCIVEC);
			interrupted = 1;
		} else if (spi_int ()) {
			int_6805 (SPIVEC);
			interrupted = 1;
		}
	}

	/*
	 * Address check error: Trap if address is outside RAM/ROM
	 */
	if ((reg_getpc () < RAMSTART)
	||  (reg_getpc () >= (RAMSTART+RAMSIZE) && reg_getpc () < ROMSTART))
	{
		error ("instr_exec: Invalid PC: %04x\n", reg_getpc ());
		return -1;
	}
	else if (interrupted) /* Prepare cycle count for register stacking */
	{
		opptr = &opcodetab[0x83]; /* SWI */
		timer_inc (opptr->op_n_cycles);
	}
	else
	{
		opptr = &opcodetab [mem_getb (reg_getpc ())];
		reg_incpc (1);
		/*
		 * Must produce timeout (set timeout flags) here, since
		 * brset/brclr can clear timeout flags in a single instruction
		 * when (*opptr->op_func)() is called.
		 *
		 * It would have been more correct to increment the number
		 * of cycles in several small steps to produce timeout
		 * at the correct time.
		 */
		timer_inc (opptr->op_n_cycles);
		(*opptr->op_func) ();
	}
	cpu_setncycles (cpu_getncycles () + opptr->op_n_cycles);
	return 0;
}


/*
 * instr_print - print an instruction
 */
instr_print (addr)
	u_int addr;
{
	u_short		pc	= addr;
	u_char		op	= mem_getb (pc);
	struct opcode	*opptr	= &opcodetab [op];
	char		*symname;

	/*
	 * In case somebody changes the opcodemap, verify it
	 */
	assert (opptr->op_value == op);

	printf ("%04x\t", pc);

	if (opptr->op_n_operands == 0)
	{
		printf ("%02x\t\t",  mem_getb (pc));
		printf (opptr->op_mnemonic, mem_getb (pc + 1));
	}
	else if (opptr->op_n_operands == 1)
	{
		printf ("%02x %02x\t\t",  mem_getb (pc), mem_getb (pc+1));
		printf (opptr->op_mnemonic, mem_getb (pc + 1));
		if (symname = sym_find_name (mem_getb (pc + 1)))
			printf ("\t%s", symname);

	}
	else
	{
		printf ("%02x %02x %02x\t", mem_getb (pc),
			mem_getb (pc + 1), mem_getb (pc + 2));

		if (op < 0x10) /* brset/brclr */
			printf (opptr->op_mnemonic, mem_getb (pc + 1),
				mem_getb (pc + 2));
		else
		{
			printf (opptr->op_mnemonic, mem_getw (pc + 1));
			if (symname = sym_find_name (mem_getw (pc + 1)))
				printf ("\t%s", symname);
		}

	}
	putchar ('\n');
	return opptr->op_n_operands + 1;
}

