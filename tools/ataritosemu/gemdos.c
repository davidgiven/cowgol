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

		case 0x3d: /* Fopen */
		{
			const char* filename = g_ram + cpu_read_long(sp + 8);
			unsigned mode = cpu_read_word(sp + 12);
			if (mode > 2)
				exit_error("bad mode");

			static int modes[] = { O_RDONLY, O_WRONLY, O_RDWR };
			int fd = open(filename, modes[mode], 0666);
			m68k_set_reg(M68K_REG_D0, fd);
			break;
		}

		case 0x3e: /* Fclose */
		{
			int fd = cpu_read_word(sp + 8);
			int e = close(fd);
			m68k_set_reg(M68K_REG_D0, e);
			break;
		}

		case 0x3f: /* Fread */
		{
			int fd = cpu_read_word(sp + 8);
			uint32_t count = cpu_read_long(sp + 10);
			uint8_t* data = g_ram + cpu_read_long(sp + 14);

			ssize_t s = read(fd, data, count);
			m68k_set_reg(M68K_REG_D0, s);
			break;
		}

		case 0x40: /* Fwrite */
		{
			int fd = cpu_read_word(sp + 8);
			uint32_t count = cpu_read_long(sp + 10);
			const uint8_t* data = g_ram + cpu_read_long(sp + 14);

			ssize_t s = write(fd, data, count);
			m68k_set_reg(M68K_REG_D0, s);
			break;
		}

		case 0x42: /* Fseek */
		{
			uint32_t pos = cpu_read_long(sp + 8);
			int fd = cpu_read_word(sp + 12);
			unsigned whence = cpu_read_word(sp + 14);

			off_t newpos = lseek(fd, pos, whence);
			m68k_set_reg(M68K_REG_D0, newpos);
			break;
		}

		default:
			exit_error("unimplemented GEMDOS syscall 0x%x", syscall);
	}
}

