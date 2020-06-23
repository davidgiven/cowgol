/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */

/*
 *	Memory access
 */
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

#include "defs.h"		/* general definitions */
#include "chip.h"		/* chip specific: NIREGS */
#include "ireg.h"		/* ireg_getb/putb_func[], ireg_start/end */

#include "memory.h"
#include "callstac.h"


/*
 * Memory variables
 *
 * Addresses used by mem_getb/putb should be set with command line options.
 * Disabling internal regs can be done by declaring intreg_start > intreg_end
 */
u_int	ram_start;		/* 0x0000; */
u_int	ram_end;		/* 0xFFFF; */
u_char  *ram;			/* was [65536]; modified for MSDOS compilers */

u_char *breaks;			/* Physical storage for breakpoints */
int    break_flag;		/* Non-zero if an address containing a
				   breakpoint has been accessed by mem_xxx */
u_int  break_addr;		/* Last breakpoint address accessed */


/*
 * mem_init - initialize memory area
 */
u_char *mem_init ()
{
	u_int size = MEMSIZE; /* MEMSIZE also hard coded in command.c */

	if (ram == NULL) {
		if ((ram = malloc (size)) == NULL) {
			perror ("Couldn't allocate ram");
			return NULL;
		}
		ram_start = 0;
		ram_end   = size - 1;
		// set Memory to 0xFF (simulate unused ROM space)
		memset (ram, 0xff, size);
	} else {
		printf ("ram already allocated\n");
	}

	/*
	 * This is done here since ram and breaks are sisters
	 */
	if (breaks == NULL) {
		/*
		 * First time initialization.
		 * Allocate space for breakpoints storage
		 */
		if (!(breaks = malloc (size))) {
			perror ("Couldn't allocate breaks");
			exit (errno);
		}
		memset (breaks, 0, size);
	} else {
		printf ("breaks already allocated\n");
	}
	return ram;
}


/*
 * mem_inramrom - returns 1 if valid ram or rom address
 *
 * Used by mem print routines
 */
static int mem_inramrom (u_int addr)
{
	return 1;
}

/* 
 * mem_print_ascii - print ram/rom memory area in ascii
 */
void mem_print_ascii (u_int startaddr, u_int nbytes)
{
	u_int i, addr, value;

	for (i = 0, addr = startaddr; i < nbytes; i++, addr++)
	{
		if (mem_inramrom (addr))
		{
			if (isprint(value = mem_getb (addr)))
				putchar (value);
			else
				putchar ('.');
		}
	}
}

/*
 * mem_print - CPU independent memory dump (print only ram/rom area)
 */
int mem_print (u_int startaddr, u_int nbytes, u_int nperline)
{
	u_int i, j, addr;

	for (i = 0, addr = startaddr; i < nbytes; )
	{
		printf ("%04x\t", addr);
		for (j = 0; j < nperline; i++, j++, addr++)
			if (i >= nbytes)
				printf ("   ");
			else if (mem_inramrom (addr))
				printf ("%02x ", mem_getb (addr));
			else
				printf ("-- ");
		putchar (' ');
		mem_print_ascii (addr - nperline, (nbytes < nperline) ? nbytes : nperline);
		putchar ('\n');
	}
	return addr;
}



/*
 *  mem_getb - called to get a byte from an address
 */


u_char mem_getb (u_int addr)
{
	int offs = addr - ireg_start;

	if (breaks[addr]) {
		break_flag = 1; /* Signal execution loop to stop */
		break_addr = addr;
	}

	if (offs >= 0 && offs < NIREGS) {
		if (ireg_getb_func[offs])
			return (*ireg_getb_func[offs])(offs);
		else
			return iram[offs];
	} else if (addr >= ram_start && addr <= ram_end) {
		return ram[addr];
	} else {
		error ("mem_getb: addr=%04x, subroutine %04x\n",
			addr, callstack_peek_addr ());
		return 0;
	}
}



u_int mem_getw (u_int addr)
{
	/* Make sure hi byte is accessed first */
	u_char hi = mem_getb (addr);
	u_char lo = mem_getb (addr + 1);
	return (hi << 8) | lo;
}

/*
 * mem_putb - called to write a byte to an address
 */


void mem_putb (u_int addr, u_char value)
{
	int offs = addr - ireg_start; /* Address of on-chip memory */

	if (breaks[addr]) {
		break_flag = 1; /* Signal execution loop to stop */
		break_addr = addr;
	}

	if (offs >= 0 && offs < NIREGS) {
		if (ireg_putb_func[offs])
			(*ireg_putb_func[offs])(offs, value);
		else
			iram [offs] = value;
	} else if (addr >= ram_start && addr <= ram_end) {
		ram [addr] = value;
	} else {
		error ("mem_putb: addr=%04x, subroutine %04x\n",
			addr, callstack_peek_addr ());
	}
}


void mem_putw (u_int addr, u_int value)
{
	mem_putb (addr, value >> 8);		/* hi byte */
	mem_putb (addr + 1, value & 0xFF);	/* lo byte */
}

