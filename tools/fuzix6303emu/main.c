#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "globals.h"
#include "6800.h"

#define SWIVECTOR 0xfffa

struct m6800 cpu;
static uint8_t ram[65536];

struct breakpoint
{
	uint16_t address;
	bool enabled;
};

struct watchpoint
{
	uint16_t address;
	uint8_t value;
	bool enabled;
};

static struct breakpoint breakpoints[16];
static struct watchpoint watchpoints[16];
static bool tracing = false;
static bool singlestepping = false;

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

static void cmd_register(void)
{
	char* w1 = strtok(NULL, " ");
	char* w2 = strtok(NULL, " ");

	if (w1 && w2)
	{
		uint16_t value = strtoul(w2, NULL, 16);

		if (strcmp(w1, "sp") == 0)
			cpu.s = value;
		else if (strcmp(w1, "pc") == 0)
			cpu.p = value;
		else if (strcmp(w1, "a") == 0)
			cpu.a = value;
		else if (strcmp(w1, "b") == 0)
			cpu.b = value;
		else if (strcmp(w1, "x") == 0)
			cpu.x = value;
		else if (strcmp(w1, "d") == 0)
		{
			cpu.a = value >> 8;
			cpu.b = value & 0xff;
		}
		else
		{
			printf("Bad register\n");
			return;
		}
	}

	showregs();
}

static void cmd_break(void)
{
	char* w1 = strtok(NULL, " ");
	if (w1)
	{
		uint16_t breakpc = strtoul(w1, NULL, 16);
		for (int i=0; i<sizeof(breakpoints)/sizeof(*breakpoints); i++)
		{
			struct breakpoint* b = &breakpoints[i];
			if (!b->enabled)
			{
				b->address = breakpc;
				b->enabled = true;
				return;
			}
		}
		printf("Too many breakpoints\n");
	}
	else
	{
		for (int i=0; i<sizeof(breakpoints)/sizeof(*breakpoints); i++)
		{
			struct breakpoint* b = &breakpoints[i];
			if (b->enabled)
				printf("%04x\n", b->address);
		}
	}
}

static void cmd_watch(void)
{
	char* w1 = strtok(NULL, " ");
	if (w1)
	{
		uint16_t watchaddr = strtoul(w1, NULL, 16);
		for (int i=0; i<sizeof(watchpoints)/sizeof(*watchpoints); i++)
		{
			struct watchpoint* w = &watchpoints[i];
			if (!w->enabled)
			{
				w->address = watchaddr;
				w->enabled = true;
				w->value = ram[watchaddr];
				return;
			}
		}
		printf("Too many breakpoints\n");
	}
	else
	{
		for (int i=0; i<sizeof(watchpoints)/sizeof(*watchpoints); i++)
		{
			struct watchpoint* w = &watchpoints[i];
			if (w->enabled)
				printf("%04x (current value: %02x)\n", w->address, w->value);
		}
	}
}

static void cmd_delete_breakpoint(void)
{
	char* w1 = strtok(NULL, " ");
	if (w1)
	{
		uint16_t breakpc = strtoul(w1, NULL, 16);
		for (int i=0; i<sizeof(breakpoints)/sizeof(*breakpoints); i++)
		{
			struct breakpoint* b = &breakpoints[i];
			if (b->enabled && (b->address == breakpc))
			{
				b->enabled = false;
				return;
			}
		}
		printf("No such breakpoint\n");
	}
}

static void cmd_delete_watchpoint(void)
{
	char* w1 = strtok(NULL, " ");
	if (w1)
	{
		uint16_t address = strtoul(w1, NULL, 16);
		for (int i=0; i<sizeof(watchpoints)/sizeof(*watchpoints); i++)
		{
			struct watchpoint* w = &watchpoints[i];
			if (w->enabled && (w->address == address))
			{
				w->enabled = false;
				return;
			}
		}
		printf("No such watchpoint\n");
	}
}

static void cmd_memory(void)
{
	char* w1 = strtok(NULL, " ");
	char* w2 = strtok(NULL, " ");

	if (!w2)
		w2 = "100";

	if (w1 && w2)
	{
		uint16_t startaddr = strtoul(w1, NULL, 16);
		uint16_t endaddr = startaddr + strtoul(w2, NULL, 16);
		uint16_t startrounded = startaddr & ~0xf;
		uint16_t endrounded = (endaddr + 0xf) & ~0xf;

		uint16_t p = startrounded;

		while (p < endrounded)
		{
			printf("%04x : ", p);
			for (int i = 0; i < 16; i++)
			{
				uint16_t pp = p + i;
				if ((pp >= startaddr) && (pp < endaddr))
					printf("%02x ", ram[pp]);
				else
					printf("   ");
			}
			printf(": ");
			for (int i = 0; i < 16; i++)
			{
				uint16_t pp = p + i;
				if ((pp >= startaddr) && (pp < endaddr))
				{
					uint8_t c = ram[pp];
					if ((c < 32) || (c > 127))
						c = '.';
					putchar(c);
				}
				else
					putchar(' ');
			}
			p += 16;
			putchar('\n');
		}
	}
}

static void cmd_unassemble(void)
{
	char* w1 = strtok(NULL, " ");
	char* w2 = strtok(NULL, " ");

	if (!w2)
		w2 = "10";

	if (w1 && w2)
	{
		uint16_t addr = strtoul(w1, NULL, 16);
		uint16_t endaddr = addr + strtoul(w2, NULL, 16);

		while (addr < endaddr)
		{
			char buffer[80];
			int len = disasm_6303(addr, &ram[addr], buffer);
			printf("%04x : %s\n", addr, buffer);

			addr += len + 1;
		}
	}
}

static void cmd_tracing(void)
{
	char* w1 = strtok(NULL, " ");
	if (w1)
		tracing = !!strtoul(w1, NULL, 16);
	else
		printf("tracing: %s\n", tracing ? "on" : "off");
}

static void cmd_help(void)
{
	printf("Sleazy debugger\n"
	       "  r               show registers\n"
		   "  r <reg> <value> set register\n"
		   "  b               show breakpoints\n"
		   "  b <addr>        set breakpoint\n"
		   "  db <addr>       delete breakpoint\n"
		   "  w <addr>        set watchpoint\n"
		   "  dw <addr>       delete watchpoint\n"
		   "  m <addr> <len>  show memory\n"
		   "  u <addr> <len>  unassemble memory\n"
		   "  s               single step\n"
		   "  g               continue\n"
		   "  trace 0|1       enable tracing\n"
	);
}

static void debug(void)
{
	bool go = false;
	showregs();
	while (!go)
	{
		char* cmdline = readline("debug>");
		if (!cmdline)
			exit(0);

		char* token = strtok(cmdline, " ");
		if (token != NULL)
		{
			if (strcmp(token, "?") == 0)
				cmd_help();
			else if (strcmp(token, "r") == 0)
				cmd_register();
			else if (strcmp(token, "b") == 0)
				cmd_break();
			else if (strcmp(token, "w") == 0)
				cmd_watch();
			else if (strcmp(token, "db") == 0)
				cmd_delete_breakpoint();
			else if (strcmp(token, "dw") == 0)
				cmd_delete_watchpoint();
			else if (strcmp(token, "m") == 0)
				cmd_memory();
			else if (strcmp(token, "u") == 0)
				cmd_unassemble();
			else if (strcmp(token, "s") == 0)
			{
				singlestepping = true;
				go = true;
			}
			else if (strcmp(token, "g") == 0)
			{
				singlestepping = false;
				go = true;
			}
			else if (strcmp(token, "trace") == 0)
				cmd_tracing();
			else
				printf("Bad command\n");
		}

		free(cmdline);
	}
}

uint8_t readbfp(FILE* fp, uint16_t addr)
{
	fseek(fp, addr, SEEK_SET);
	return fgetc(fp);
}

uint16_t readwfp(FILE* fp, uint16_t addr)
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
		int opt = getopt(argc, argv, "l:e:f:d");
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

			case 'd':
				singlestepping = true;
				break;
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
		if (!singlestepping)
		{
			for (int i=0; i<sizeof(breakpoints)/sizeof(*breakpoints); i++)
			{
				struct breakpoint* b = &breakpoints[i];
				if (cpu.pc == b->address)
					singlestepping = true;
			}
		}
		for (int i=0; i<sizeof(watchpoints)/sizeof(*watchpoints); i++)
		{
			struct watchpoint* w = &watchpoints[i];
			if (w->enabled && (ram[w->address] != w->value))
			{
				printf("\nWatchpoint hit: %04x has changed from %02x to %02x\n",
					w->address, w->value, ram[w->address]);
				w->value = ram[w->address];
				singlestepping = true;
			}
		}

		if (singlestepping)
			debug();
		else if (tracing)
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

