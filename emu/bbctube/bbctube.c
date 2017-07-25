#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "lib6502.h"

M6502* cpu;

uint8_t ram[0x10000];

uint16_t read16(uint16_t address)
{
	return (uint16_t)ram[address+0]
		| ((uint16_t)ram[address+1] << 8);
}

uint32_t read32(uint16_t address)
{
	return (uint32_t)ram[address+0]
		| ((uint32_t)ram[address+1] << 8)
		| ((uint32_t)ram[address+2] << 16)
		| ((uint32_t)ram[address+3] << 24);
}

static int rts(void)
{
	uint16_t pc;
	pc = (uint16_t)ram[++cpu->registers->s + 0x100];
	pc |= (uint16_t)ram[++cpu->registers->s + 0x100] << 8;
	return pc + 1; /* jsr pushes next instruction -1 */
}

static void osfile(void)
{
	uint16_t block = (uint16_t)cpu->registers->x | ((uint16_t)cpu->registers->y << 8);

	switch (cpu->registers->a)
	{
		default:
			printf("unknown OSFILE 0x%02x\n", cpu->registers->a);
			exit(1);
	}
}

static void osbyte(void)
{
	switch (cpu->registers->a)
	{
		case 0x82: /* read high-order address */
			cpu->registers->x = cpu->registers->y = 0;
			break;

		case 0x83: /* read HWM */
			cpu->registers->x = 0;
			cpu->registers->y = 0x08;
			break;

		case 0x84: /* read HIMEM (on I/O processor) */
			cpu->registers->x = 0;
			cpu->registers->y = 0x80;
			break;

		default:
			printf("unknown OSBYTE: a=0x%02x x=0x%02x y=0x%02x\n",
				cpu->registers->a, cpu->registers->x, cpu->registers->y);
			exit(1);
	}
}

static void osword(void)
{
	uint16_t block = (uint16_t)cpu->registers->x | ((uint16_t)cpu->registers->y << 8);

	switch (cpu->registers->a)
	{
		case 0x00: /* read line */
		{
			uint16_t bufaddr = read16(block+0);
			uint8_t max = ram[block+2];
			uint8_t count = 0;

			for (;;)
			{
				uint8_t c;
				read(0, &c, 1);
				if (c == 10)
					c = 13;

				if (count < max)
					ram[bufaddr+(count++)] = c;
				if (c == 13)
					break;

			}
			cpu->registers->p = 0;
			cpu->registers->y = count;
			break;
		}

		case 0x05: /* read I/O RAM */
		{
			uint32_t ioaddr = read32(block+0);
			switch (ioaddr)
			{
				case 0xf2: ram[block+4] = 0x00; break;
				case 0xf3: ram[block+4] = 0x02; break;
				default:   ram[block+4] = 0x00; break;
			}
			break;
		}

		default:
			printf("unknown OSWORD: a=0x%02x x=0x%02x y=0x%02x\n", cpu->registers->a, cpu->registers->x, cpu->registers->y);
			exit(1);
	}
}

static void oswrch(void)
{
	char c = cpu->registers->a;
	write(1, &c, 1);
}

static void osnewl(void)
{
	write(1, "\n\r", 2);
}

static void osasci(void)
{
	char c = cpu->registers->a;
	if (c == 13)
		osnewl();
	else
		write(1, &c, 1);
}

static int systemcall(M6502* cpu, uint16_t address, uint8_t data)
{
	switch (address)
	{
		case 0xffdd: osfile(); break;
		case 0xfff4: osbyte(); break;
		case 0xfff1: osword(); break;
		case 0xffe3: osasci(); break;
		case 0xffe7: osnewl(); break;
		case 0xffee: oswrch(); break;

		default:
			printf("unsupported syscall 0x%04x\n", address);
			exit(1);
	}

	return rts();
}

static int brk_insn(M6502* cpu, uint16_t address, uint8_t data)
{
	printf("stack:");
	for (int sp=cpu->registers->s+1; sp<=0xff; sp++)
		printf(" %02x", ram[sp+0x100]);
	printf("\n");
	char buffer[64];
	M6502_dump(cpu, buffer);
	printf("%s\n", buffer);
	printf("%04x: ", address);
	for (int i=0; i<10; i++)
		printf("%02x ", ram[address+i]);
	printf("brk '%s'\n", &ram[address]);
	exit(1);
}

int main(int argc, const char* argv[])
{
	int fd = open("HiBasic430", O_RDONLY);
	read(fd, ram+0xb800, 0x4000);
	close(fd);

	cpu = M6502_new(NULL, ram, NULL);
	for (int i=0xfe00; i<=0xffff; i++)
		cpu->callbacks->call[i] = systemcall;
	cpu->callbacks->call[0x0000] = brk_insn;
	ram[0x020e] = 0xee;
	ram[0x020f] = 0xff;

	M6502_setVector(cpu, RST, 0xb800);
	M6502_reset(cpu);
	cpu->registers->s = 0xfd;
	M6502_run(cpu);
}

