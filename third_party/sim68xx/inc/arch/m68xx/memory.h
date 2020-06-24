
/*
 *	Memory access
 *
 *	This file contains memory accesss functions that typically vary
 *	with chip and board. As is, it provides support for a single I/O
 *	block through the 'ireg' interface.
 *
 *	For additional I/O (or special memory) blocks, 'mem_getb' will 
 *	probably have to be modified.
 *
 *	Functions reside in this file to make inlining possible.
 */
#ifndef MEMORY_H
#define MEMORY_H

#include "defs.h"		/* general definitions */
#include "chip.h"		/* chip specific: NIREGS */
#include "ireg.h"		/* chip specific: ireg_getb/putb_func[], ireg_start/end */
#include "error.h"

#define MEMSIZE 65536		/* Size of ram and breakpoint arrays */

/*
 * Memory variables
 *
 * Addresses used by mem_getb/putb should be set with command line options.
 * Disabling internal regs can be done by declaring ireg_start > ireg_end
 */
extern u_int	ram_start;	/* First valid RAM address */
extern u_int	ram_end;	/* Last valid RAM address */
extern u_char  *ram;		/* Physical storage for simulated RAM */

/*
 * The array 'breaks' is a sister array to 'ram'
 * where each address containing nonzero is a breakpoint.
 *
 * 'break_flag' is set if the breakpoint array 'breaks[i]' is set
 * for address 'i'.
 * There is currently no breaks_start and breaks_end variables,
 * so another start value than 0 will not work.
 */
extern int		watchs[MEMSIZE];	/* storage for watchpoints */
extern u_char *breaks;		/* Physical storage for breakpoints */
extern int    break_flag;	/* Non-zero if an address containing a
				   breakpoint has been accessed by mem_xxx */
extern u_int  break_addr;	/* Last breakpoint address accessed */

extern u_char mem_getb (u_int addr);
extern u_int mem_getw (u_int addr);
extern void mem_putb (u_int addr, u_char value);
extern void mem_putw (u_int addr, u_int value);

#if defined(__STDC__) || defined(__cplusplus)
# define P_(s) s
#else
# define P_(s) ()
#endif


/* memory.c */
extern u_char *mem_init        P_(());
extern void    mem_print_ascii P_((u_int startaddr, u_int nbytes));
extern int     mem_print       P_((u_int startaddr, u_int nbytes, u_int nperline));

#undef P_

#endif
