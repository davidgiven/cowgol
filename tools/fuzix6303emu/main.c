#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <errno.h>
#include "globals.h"
#include "6800.h"

#define SWIVECTOR 0xfffa

struct m6800 cpu;
static uint8_t ram[65536];

uint8_t m6800_read(struct m6800 *cpu, uint16_t addr)
{
	return ram[addr];
}

uint16_t readw(uint16_t addr)
{
	return (ram[addr]<<8) | ram[addr+1];
}

uint8_t m6800_debug_read(struct m6800 *cpu, uint16_t addr)
{
	return m6800_read(cpu, addr);
}

void m6800_write(struct m6800 *cpu, uint16_t addr, uint8_t data)
{
	ram[addr] = data;
}

void m6800_sci_change(struct m6800 *cpu)
{}

void m6800_tx_byte(struct m6800 *cpu, uint8_t byte)
{}

void m6800_port_output(struct m6800 *cpu, int port)
{}

uint8_t m6800_port_input(struct m6800 *cpu, int port)
{}

void showregs(void)
{
	uint8_t p = cpu.p;
	printf("%c%c%c%c%c%c%c%c sp=%04x d=%02x%02x x=%04x\n",
		(p & P_S) ? 'S' : 's',
		(p & P_X) ? 'X' : 'x',
		(p & P_H) ? 'H' : 'h',
		(p & P_I) ? 'I' : 'i',
		(p & P_N) ? 'N' : 'n',
		(p & P_Z) ? 'Z' : 'z',
		(p & P_V) ? 'V' : 'v',
		(p & P_C) ? 'C' : 'c',
		cpu.s,
		cpu.a,
		cpu.b,
		cpu.x);

	char buffer[80];
	disasm_6303(cpu.pc, &ram[cpu.pc], buffer);
	printf("%04x : %s\n", cpu.pc, buffer);
}

uint8_t readbfp(FILE* fp, uint16_t addr)
{
	fseek(fp, addr, SEEK_SET);
	return fgetc(fp);
}

uint8_t readwfp(FILE* fp, uint16_t addr)
{
	fseek(fp, addr, SEEK_SET);
	uint8_t hi = fgetc(fp);
	uint8_t lo = fgetc(fp);
	return (hi<<8) | lo;
}

static void setup_syscall_exit(int r)
{
	cpu.a = r>>8;
	cpu.b = r;
	if (r == -1)
		cpu.x = errno;
}

int main(int argc, char* const argv[])
{
	m6800_reset(&cpu, 2);
	cpu.type = CPU_6303;
	cpu.s = 0xff00;
	ram[SWIVECTOR+0] = SWIVECTOR >> 8;
	ram[SWIVECTOR+1] = SWIVECTOR & 0xff;

	for (;;)
	{
		int opt = getopt(argc, argv, "l:e:f:");
		switch (opt)
		{
			case -1:
				goto end_of_opts;

			case 'f':
			{
				FILE* fp = fopen(optarg, "rb");
				if (!fp)
				{
					perror("failed to read file");
					exit(1);
				}
				uint8_t page = readbfp(fp, 4);
				uint16_t text = readwfp(fp, 6);
				uint16_t data = readwfp(fp, 8);
				cpu.pc = (page<<8) | readbfp(fp, 12);

				fseek(fp, 0, SEEK_SET);
				int len = text+data+18;
				uint8_t* ptr = &ram[page<<8];
				while (len != 0)
				{
					int i = fread(ptr, 1, len, fp);
					if (i == -1)
					{
						perror("read error");
						exit(1);
					}
					len -= i;
					ptr += i;
				}

				fclose(fp);
				break;
			}
		}
	}
end_of_opts:
	if (optind < argc)
	{
		printf("error: non-option arguments received\n");
		exit(1);
	}
		
	for (;;)
	{
		showregs();
		if (cpu.pc == SWIVECTOR)
		{
			cpu.pc = readw(cpu.s + 6);
			cpu.s += 7;
			switch (cpu.a)
			{
				case 0: /* _exit */
					exit(readw(cpu.s+1));

				case 8: /* write */
				{
					uint16_t len = readw(cpu.s+1);
					uint16_t addr = readw(cpu.s+3);
					uint16_t fd = readw(cpu.s+5);
					int r = write(fd, &ram[addr], len);
					setup_syscall_exit(r);
					break;
				}

				default:
					fprintf(stderr, "unhandled system call 0x%x\n", cpu.a);
					exit(1);
			}
		}
		m6800_execute(&cpu);
	}

	return 0;
}

