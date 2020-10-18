/* © 2020 David Given.
 * Implements Fuzix 6303 userland.
 */

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>
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

static void setup_syscall_exit(int r)
{
	reg_setaccd(r);
	if (r == -1)
		reg_setix(errno);
}

static int int_handler(u_int address)
{
	if (address != SWIVECTOR)
		return 0;

	int swi = reg_getacca();
	switch (swi)
	{
		case 0: exit(0);

		case 8: /* write */
		{
			u_int len = mem_getw(reg_getsp() + 1);
			u_int addr = mem_getw(reg_getsp() + 3);
			u_int fd = mem_getw(reg_getsp() + 5);
			uint8_t buffer[len];
			for (int i = 0; i < len; i++)
				buffer[i] = mem_getb(addr + i);
			int r = write(fd, buffer, len);
			setup_syscall_exit(r);
			break;
		}

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


