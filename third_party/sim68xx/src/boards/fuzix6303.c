/* © 2020 David Given.
 * Implements Fuzix 6303 userland.
 */

#include <stdlib.h>
#include <stdio.h>
#include "defs.h"

#ifdef USE_PROTOTYPES
/* Function prototypes */
#include "alu.h"
#include "reg.h"
#include "opfunc.h"
#endif

#include "memory.h"
#include "reg.h"

#include "symtab.h"
#include "callstac.h"
#include "instr.h"

static int int_handler(u_int address)
{
	if (address != SWIVECTOR)
		return 0;

	int swi = reg_getacca();
	switch (swi)
	{
		case 0: exit(0);
		default:
			printf("unhandled swi %d\n", swi);
			exit(1);
	}
	return 1;
}

int board_install(void)
{
	int_install(int_handler);
	return 0;
}


