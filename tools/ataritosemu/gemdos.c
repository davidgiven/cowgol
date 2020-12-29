#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include "sim.h"
#include "m68k.h"

void gemdos_syscall(void)
{
	uint32_t sp = m68k_get_reg(NULL, M68K_REG_SP);
	uint16_t syscall = cpu_read_word(sp + 6);
	switch (syscall)
	{
		case 0: /* Pterm0 */
			exit(0);

		case 2: /* Cconout */
			putchar(m68k_get_reg(NULL, M68K_REG_D0));
			break;

		default:
			exit_error("unimplemented GEMDOS syscall %d", syscall);
	}
}

