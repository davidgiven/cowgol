/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 * The callstack is used to save subroutine addresses so they can be
 * printed during breakpoint detection.
 *
 * When a subroutine call is performed with the jsr instruction,
 * the address (label) of the subroutine is pushed onto the subroutine
 * stack together with the cpu stack pointer.
 *
 * When the cpu stack pointer increases to a value greater than the value
 * stored on top of the subroutine stack as a result of an rts/ins/txs/tys/lds
 * instuction,  the subroutine must have returned and its address (label) is
 * removed from the subroutines stack.
 *
 * (c) Arne Riiber 1995
 */
#include <stdio.h>
#include "defs.h"
#include "reg.h"
#include "error.h"

#ifdef USE_PROTOTYPES
#include "symtab.h"
#endif

/*
 * callstack  - a stack used for storage of subroutine entry points
 */
#define MAXCALLSTACK 256

static struct {
	u_int sp;			/* Points to first free element */
	u_int trace;
	struct {
		u_int entry_point;	/* Address of function */
		u_int stack_on_entry;	/* CPU stack on function entry */
		char  *func_name;	/* Function name */
	} elements[MAXCALLSTACK];
} callstack = {
	 0,
	 0			/* Trace off */
};



/*
 * Push a word on the subroutine stack (debug info) (previous pushsub)
 */
void callstack_push (u_int addr)
{
	if (callstack.sp < MAXCALLSTACK) {
		callstack.elements[callstack.sp].entry_point    = addr;
		callstack.elements[callstack.sp].stack_on_entry = reg_getsp ();
		callstack.sp++;
		if (callstack.trace) {
			char *p = sym_find_name (addr);
			printf ("callstack: entering subroutine %04x\t%s\n", addr, p ? p : "");
		}
	}
	else
		error ("Too many subroutine nestings:%d\n", MAXCALLSTACK);
}

/*
 * Pop a word from the subroutine stack (previous popsub)
 */
u_int callstack_pop ()
{
	u_int addr;

	if (callstack.sp > 0) {
		addr = callstack.elements[--callstack.sp].entry_point;
		if (callstack.trace) {
			char *p = sym_find_name (addr);
			printf ("callstack: leaving subroutine %04x\t%s\n", addr, p ? p : "");
		}
		return addr;
	}
	else
		return 0;
}

/*
 *  Peek the current subroutine address (peeksub)
 */
u_int callstack_peek_addr ()
{
	if (callstack.sp > 0)
		return callstack.elements[callstack.sp - 1].entry_point;
	else
		return 0;
}

/*
 * Peek the cpu stack pointer on entry for the current subroutine
 */
u_int callstack_peek_stack ()
{
	if (callstack.sp > 0)
		return callstack.elements[callstack.sp - 1].stack_on_entry;
	else
		return 0;
}

/*
 * Return number of subroutine elements (nsubs)
 */
u_int callstack_nelem ()
{
	return callstack.sp;
}

/*
 * callstack_print - print the call stack (previous printsubs)
 */
void callstack_print ()
{
	int   i;

	printf ("Call stack:\n");
	for (i = 0; i < callstack.sp; i++)
	{
		char *p;

		printf ("%04x", callstack.elements[i].entry_point);
		if ((p = sym_find_name (callstack.elements[i].entry_point)))
			printf ("\t%s", p);
		putchar ('\n');
	}
}

u_int callstack_trace (on)
	int on;
{
	return callstack.trace = on;
}
