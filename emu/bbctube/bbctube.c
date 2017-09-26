#define _XOPEN_SOURCE
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

void write32(uint16_t address, uint32_t value)
{
	ram[address+0] = value;
	ram[address+1] = value >> 8;
	ram[address+2] = value >> 16;
	ram[address+3] = value >> 24;
}

static int rts(void)
{
	uint16_t pc;
	pc = (uint16_t)ram[++cpu->registers->s + 0x100];
	pc |= (uint16_t)ram[++cpu->registers->s + 0x100] << 8;
	return pc + 1; /* jsr pushes next instruction -1 */
}

static void osargs(void)
{
	uint8_t fd = cpu->registers->y;
	uint16_t block = (uint16_t)cpu->registers->x;

	if (fd == 0)
	{
		switch (cpu->registers->a)
		{
			case 0x01: /* get address of command line */
				write32(block, 0x2ff);
				break;

			default:
				printf("unknown OSARGS y=0 0x%02x\n", cpu->registers->a);
				exit(1);
		}
	}
	else
	{
		switch (cpu->registers->a)
		{
			default:
				printf("unknown OSARGS y!=0 0x%02x\n", cpu->registers->a);
				exit(1);
		}
	}
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
				case 0xf2:   ram[block+4] = 0x00; break;
				case 0xf3:   ram[block+4] = 0x02; break;
				case 0x02ff: ram[block+4] = '\r'; break; /* command line */
				default:     ram[block+4] = 0x00; break;
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
	static const char c = '\n';
	write(1, &c, 1);
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
		case 0xffda: osargs(); break;
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

static int stop_insn(M6502* cpu, uint16_t address, uint8_t data)
{
	exit(0);
}

int main(int argc, char* const argv[])
{
	uint16_t load_address = 0x0E00;
	uint16_t exec_address = load_address;

	for (;;)
	{
		int opt = getopt(argc, argv, "l:e:f:");
		switch (opt)
		{
			case -1:
				goto end_of_opts;

			case 'l':
				load_address = strtoul(optarg, NULL, 0);
				break;

			case 'e':
				exec_address = strtoul(optarg, NULL, 0);
				break;

			case 'f':
			{
				int fd = open(optarg, O_RDONLY);
				if (read(fd, ram+load_address, 0x10000-load_address) == -1)
				{
					perror("failed to read file");
					exit(1);
				}
				close(fd);
				break;
			}
		}
	}
end_of_opts:

	cpu = M6502_new(NULL, ram, NULL);
	for (int i=0xfe00; i<=0xffff; i++)
		cpu->callbacks->call[i] = systemcall;
	cpu->callbacks->call[0x01fd] = stop_insn;
	ram[0x01fb] = 0xFC; // lo (minus one)
	ram[0x01fc] = 0x01; // hi
	ram[0x01fd] = 0x4C; // JMP abs
	ram[0x01fe] = 0xFD; // lo
	ram[0x01ff] = 0x01; // hi
	cpu->callbacks->call[0x0000] = brk_insn;
	ram[0x020e] = 0xee;
	ram[0x020f] = 0xff;

	M6502_setVector(cpu, RST, exec_address);
	M6502_reset(cpu);
	cpu->registers->s = 0xFA;
	M6502_run(cpu);
}

