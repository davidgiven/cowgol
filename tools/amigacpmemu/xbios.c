#include <stdio.h>
#include <stdlib.h>
#include "sim.h"
#include "m68k.h"

void xbios_syscall(void)
{
	uint32_t syscall = m68k_get_reg(NULL, M68K_REG_D0) & 0xffff;
	exit_error("unimplemented XBIOS syscall 0x%x", syscall);
}
