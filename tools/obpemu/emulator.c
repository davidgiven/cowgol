#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <errno.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "globals.h"

#define MEMORY_SIZE (1<<16)

#define SWORD_MAX 0377777
#define SWORD_MIN -0400000
#define SIGNBIT (1<<17)

static uint32_t memory[MEMORY_SIZE];

struct watchpoint
{
	uint32_t address;
	uint32_t value;
	bool enabled;
};

static uint32_t breakpoints[16];
static struct watchpoint watchpoints[16];
static bool tracing = false;
static bool singlestepping = true;

static uint32_t reg_pc;
static uint32_t reg_a;
static uint32_t reg_e;
static uint32_t reg_x;
static uint32_t reg_sl;
static uint16_t reg_irq;
static uint16_t reg_irqp;
static int reg_sc;
static int reg_p;
static bool reg_fc;
static bool reg_fd;
static bool reg_fa;
static bool reg_fv;
static bool halted;

static void execute(uint32_t insn);
static void do_tin(uint32_t address);

void emulator_init(const char* filename)
{
	/* Load the binary */

	FILE* fp = fopen(filename, "rb");
	if (!fp)
		fatal("cannot open binary '%s': %s", filename, strerror(errno));

	unsigned address = 0;
	while (!feof(fp))
	{
		uint32_t value = (uint8_t)getc(fp);
		value |= (uint8_t)getc(fp) << 8;
		value |= (uint8_t)getc(fp) << 16;

		if (address == MEMORY_SIZE)
			fatal("image too big to fit in memory");
		memory[address++] = value & 0777777;
	}

	fclose(fp);

	/* Initialise the debugger */

	for (int i=0; i<sizeof(breakpoints)/sizeof(*breakpoints); i++)
		breakpoints[i] = 0xffffffff;
	singlestepping = flag_enter_debugger;

	/* Initialise the system */

	reg_p = 0;
	halted = false;
	do_tin(014);
}

static void disassemble(char* buffer, size_t buffersize, uint32_t address)
{
	uint32_t insn = memory[address];

	const char* opcode = NULL;
	switch (insn & 0760000)
	{
		case 0000000: /* Simple instruction */
			switch (insn)
			{
				case 0000000: snprintf(buffer, buffersize, "HLT"); return;
				case 0000001: snprintf(buffer, buffersize, "TOV"); return;
				case 0000002: snprintf(buffer, buffersize, "NOP"); return;
				case 0000003: snprintf(buffer, buffersize, "IGZ"); return;
				case 0000004: snprintf(buffer, buffersize, "NEG"); return;
				case 0000005: snprintf(buffer, buffersize, "IOP"); return;
        		case 0000006: snprintf(buffer, buffersize, "ADC"); return;
        		case 0000007: snprintf(buffer, buffersize, "ROV"); return;
        		case 0000010: snprintf(buffer, buffersize, "CMP"); return;
				case 0000011: snprintf(buffer, buffersize, "ANDD"); return;
				case 0000012: snprintf(buffer, buffersize, "LDP"); return;
				case 0000013: snprintf(buffer, buffersize, "LDD"); return;
				case 0000014: snprintf(buffer, buffersize, "NORM"); return;
				case 0000015: snprintf(buffer, buffersize, "ORD"); return;
				case 0000016: snprintf(buffer, buffersize, "EXIT"); return;
				case 0000017: snprintf(buffer, buffersize, "CPD"); return;
				case 0000020: snprintf(buffer, buffersize, "SSA"); return;
				case 0000021: snprintf(buffer, buffersize, "IEZ"); return;
				case 0000022: snprintf(buffer, buffersize, "FLP"); return;
				case 0000023: snprintf(buffer, buffersize, "RED"); return;
				default:
					snprintf(buffer, buffersize, "UNKNOWN");
					return;
			}
			break;

		case 0020000: opcode = "ADX"; break;
		case 0040000: opcode = "ADD"; break;
		case 0060000: opcode = "BRM"; break;
		case 0100000: opcode = "STE"; break;
		case 0120000: opcode = "EXU"; break;
		case 0140000: opcode = "SHF"; break;
		case 0160000: opcode = "IO";  break;
		case 0200000: opcode = "LDA"; break;
		case 0220000: opcode = "XNGT"; break;
		case 0240000: opcode = "SUB"; break;
		case 0260000: opcode = "ILT"; break;
		case 0300000: opcode = "ETR"; break;
		case 0320000: opcode = "LDS"; break;
		case 0340000: opcode = "CYC"; break;
		case 0360000: opcode = "DSH"; break;
		case 0400000: opcode = "LDL"; break;
		case 0420000: opcode = "BRC"; break;
		case 0440000: opcode = "MUL"; break;
		case 0460000: opcode = "IET"; break;
		case 0500000: opcode = "MRG"; break;
		case 0520000: opcode = "LDE"; break;
		case 0540000: opcode = "LDX"; break;
		case 0560000: opcode = "DCY"; break;
		case 0600000: opcode = "STA"; break;
		case 0620000: opcode = "BRU"; break;
		case 0640000: opcode = "DIV"; break;
		case 0660000: opcode = "IGT"; break;
		case 0700000: opcode = "EORA"; break;
		case 0720000: opcode = "TIN"; break;
		case 0740000: opcode = "STX"; break;
		default:
			snprintf(buffer, buffersize, "UNKNOWN");
			return;
	}

	bool indirect = insn & (1<<12);
	snprintf(buffer, buffersize,
			"%s [%06o%s]", opcode, insn & 07777, indirect ? ", x" : "");
}

static void showregs(void)
{
	printf("%c%c%c%c pc=%06o a=%06o e=%06o x=%06o sl=%06o sc=%02o p=%02o\n     irq=%06o irqp=%06o\n",
		reg_fc ? 'C' : 'c',
		reg_fd ? 'D' : 'd',
		reg_fa ? 'A' : 'a',
		reg_fv ? 'V' : 'v',
		reg_pc, reg_a, reg_e, reg_x, reg_sl, reg_sc & 077, reg_p,
		reg_irq, reg_irqp);

	char buffer[80];
	disassemble(buffer, sizeof(buffer), reg_pc);
	printf("%06o : %s\n", reg_pc, buffer);
}

static void cmd_register(void)
{
	char* w1 = strtok(NULL, " ");
	char* w2 = strtok(NULL, " ");

	if (w1 && w2)
	{
		uint32_t value = strtoul(w2, NULL, 8);
		if (strcmp(w1, "pc") == 0)
			reg_pc = value;
		else if (strcmp(w1, "a") == 0)
			reg_a = value;
		else if (strcmp(w1, "e") == 0)
			reg_e = value;
		else if (strcmp(w1, "x") == 0)
			reg_x = value;
		else if (strcmp(w1, "sc") == 0)
			reg_sc = value;
		else if (strcmp(w1, "sl") == 0)
			reg_sl = value;
		else if (strcmp(w1, "p") == 0)
			reg_p = value;
		else if (strcmp(w1, "irq'") == 0)
			reg_irq = value;
		else if (strcmp(w1, "irqp'") == 0)
			reg_irqp = value;
		else if (strcmp(w1, "d") == 0)
			reg_fd = value;
		else if (strcmp(w1, "v") == 0)
			reg_fv = value;
		else if (strcmp(w1, "a") == 0)
			reg_fa = value;
		else if (strcmp(w1, "c") == 0)
			reg_fc = value;
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
		uint32_t breakpc = strtoul(w1, NULL, 8);
		for (int i=0; i<sizeof(breakpoints)/sizeof(*breakpoints); i++)
		{
			if (breakpoints[i] == 0xffffffff)
			{
				breakpoints[i] = breakpc;
				return;
			}
		}
		printf("Too many breakpoints\n");
	}
	else
	{
		for (int i=0; i<sizeof(breakpoints)/sizeof(*breakpoints); i++)
		{
			if (breakpoints[i] != 0xffffffff)
				printf("%06o\n", breakpoints[i]);
		}
	}
}

static void cmd_watch(void)
{
	char* w1 = strtok(NULL, " ");
	if (w1)
	{
		uint32_t watchaddr = strtoul(w1, NULL, 8);
		for (int i=0; i<sizeof(watchpoints)/sizeof(*watchpoints); i++)
		{
			struct watchpoint* w = &watchpoints[i];
			if (!w->enabled)
			{
				w->address = watchaddr;
				w->enabled = true;
				w->value = memory[watchaddr];
				return;
			}
		}
		printf("Too many watchpoints\n");
	}
	else
	{
		for (int i=0; i<sizeof(watchpoints)/sizeof(*watchpoints); i++)
		{
			struct watchpoint* w = &watchpoints[i];
			if (w->enabled)
				printf("%06o (current value: %06o)\n", w->address, w->value);
		}
	}
}

static void cmd_delete_breakpoint(void)
{
	char* w1 = strtok(NULL, " ");
	if (w1)
	{
		uint32_t breakpc = strtoul(w1, NULL, 8);
		for (int i=0; i<sizeof(breakpoints)/sizeof(*breakpoints); i++)
		{
			if (breakpoints[i] == breakpc)
			{
				breakpoints[i] = 0xffffffff;
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
		uint32_t address = strtoul(w1, NULL, 8);
		for (int i=0; i<sizeof(breakpoints)/sizeof(*breakpoints); i++)
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
		uint16_t startaddr = strtoul(w1, NULL, 8);
		uint16_t endaddr = startaddr + strtoul(w2, NULL, 8);
		uint16_t startrounded = startaddr & ~0x7;
		uint16_t endrounded = (endaddr + 0x7) & ~0x7;

		uint16_t p = startrounded;

		while (p < endrounded)
		{
			printf("%06o : ", p);
			for (int i = 0; i < 8; i++)
			{
				uint16_t pp = p + i;
				if ((pp >= startaddr) && (pp < endaddr))
					printf("%06o ", memory[pp]);
				else
					printf("       ");
			}
			p += 8;
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
		uint16_t addr = strtoul(w1, NULL, 8);
		uint16_t endaddr = addr + strtoul(w2, NULL, 8);

		while (addr < endaddr)
		{
			char buffer[80];
			disassemble(buffer, sizeof(buffer), addr);
			printf("%06o : %s\n", addr, buffer);

			addr++;
		}
	}
}

static void cmd_tracing(void)
{
	char* w1 = strtok(NULL, " ");
	if (w1)
		tracing = !!strtoul(w1, NULL, 8);
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

static void unimplemented_instruction(void)
{
	fatal("unimplemented instruction at %06o", reg_pc-1);
}

static uint32_t ea(uint32_t insn)
{
	uint32_t noun = insn & 0007777;
	if (insn & 0010000)
		noun += reg_x;
	return noun | (reg_p << 12);
}

static uint32_t rd(uint32_t address)
{
	address &= MEMORY_SIZE-1;
	return memory[address];
}

static void wr(uint32_t value, uint32_t address)
{
	address &= MEMORY_SIZE-1;
	uint32_t a = (reg_sl & 0000777) << 5;
	uint32_t b = (reg_sl & 0777000) >> 4;
	if ((b <= address) && (address <= a))
		memory[address] = value;
}

static int64_t sign(uint64_t uvalue, int size)
{
	uvalue <<= 64-size;
	int64_t svalue = uvalue;
	return svalue >>= (64-size);
}

static uint32_t do_add(uint32_t uleft, uint32_t uright)
{
	int32_t left = sign(uleft, 18);
	int32_t right = sign(uright, 18);
	int32_t result = left + right;

	reg_fc = ((uleft & 0377777) + (uright & 0377777)) & 0400000;
	if (!((left ^ right) & SIGNBIT))
		reg_fv |= (left & SIGNBIT) != (result & SIGNBIT);

	return result & 0777777;
}

static uint32_t do_sub(uint32_t uleft, uint32_t uright)
{
	int32_t left = sign(uleft, 18);
	int32_t right = sign(uright, 18);
	int32_t result = left - right;

	reg_fc = ((uleft & 0377777) - (uright & 0377777)) & 0400000;
	if ((left ^ right) & SIGNBIT)
		reg_fv |= (left & SIGNBIT) != (result & SIGNBIT);

	return result & 0777777;
}

static uint32_t do_neg(uint32_t uvalue)
{
	switch (uvalue)
	{
		case 0000000:
			reg_fc = true;
			return 0;

		case 0400000:
			reg_fc = reg_fv = true;
			return 0400000;

		default:
			reg_fc = false;
			return -sign(uvalue, 18);
	}
}

static int32_t leftshift18(int32_t value, int amount)
{
	while (amount--)
	{
		int32_t oldsign = value & (1L<<17);
		value <<= 1;
		if ((value & (1L<<17)) != oldsign)
			reg_fv = true;
	}
	return value;
}

static int32_t rightshift18(int32_t value, int amount)
{
	return value >> amount;
}

static int64_t leftshift35(int64_t value, int amount)
{
	while (amount--)
	{
		int64_t oldsign = value & (1L<<34);
		value <<= 1;
		if ((value & (1L<<34)) != oldsign)
			reg_fv = true;
	}
	return value;
}

static int64_t rightshift35(int64_t value, int amount)
{
	return value >> amount;
}

static uint32_t do_shf(uint32_t uvalue, uint32_t uamount)
{
	int32_t value = sign(uvalue, 18);
	int32_t amount = sign(uamount, 6);
	if (amount < 0)
		value = rightshift18(value, -amount);
	else
		value = leftshift18(value, amount);

	return value & 0777777;
}

static void do_dsh(uint32_t uamount)
{
	int64_t value = ((int64_t)reg_e & 0377777) | ((int64_t)sign(reg_a, 18) << 17);
	int32_t amount = sign(uamount, 6);
	if (amount < 0)
		value = rightshift35(value, -amount);
	else
		value = leftshift35(value, amount);

	reg_e &= 0400000;
	reg_e |= value & 0377777;
	int32_t new_reg_a = (value >> 17) & 0777777;
	reg_fv = (new_reg_a & SIGNBIT) != (reg_a & SIGNBIT);
	reg_a = new_reg_a;
}

static void do_cyc(uint32_t uamount)
{
	int32_t amount = sign(uamount, 6);
	if (amount < 0)
		reg_a = (reg_a >> -amount) | (reg_a << (18+amount));
	else
		reg_a = (reg_a << amount) | (reg_a >> (18-amount));
	reg_a &= 0777777;
}

static void do_dcy(uint32_t uamount)
{
	uint64_t value = (uint64_t)reg_e | ((uint64_t)reg_a << 18);
	int32_t amount = sign(uamount, 6);
	if (amount < 0)
		value = (value >> -amount) | (value << (36+amount));
	else
		value = (value << amount) | (value >> (36-amount));
	reg_a = (value >> 18) & 0777777;
	reg_e = value & 0777777;
}

static void do_norm(void)
{
	uint64_t value = (reg_e & 0377777) | (reg_a << 17);
	reg_sc = 0;

	for (;;)
	{
		bool a = value & (1LL<<35);
		bool b = value & (1LL<<34);
		if (a != b)
			break;
		value <<= 1;
		reg_sc++;
	}

	reg_e &= 0400000;
	reg_e |= value & 0377777;
	reg_a = (value >> 17) & 0777777;
}

static void do_ldd(void)
{
	uint64_t value = (reg_e & 0377777) | (reg_a << 17);

	value <<= 1;
	value |= reg_fd;

	reg_e &= 0400000;
	reg_e |= value & 0377777;
	reg_a = (value >> 17) & 0777777;
}

static uint32_t do_flp(uint32_t value)
{
	reg_a = 0;

	for (int i=0; i<18; i++)
	{
		reg_a >>= 1;
		reg_a |= value & SIGNBIT;
		value <<= 1;
	}
}

static void do_io(uint32_t value)
{
	switch (value & 0600000)
	{
		case 0000000: /* set up DMA */
			break;

		case 0200000: /* function call */
			break;

		case 0400000: /* output A */
			memory[7] = reg_a;
			putchar(reg_a);
			break;

		case 0600000: /* input A */
			reg_a = getchar() & 0777777;
			memory[7] = reg_a;
			break;
	}
}

static void do_conditional(bool result)
{
	if (reg_fa)
		reg_fd &= result;
	else
		reg_fd |= result;
}

static void do_brm(uint32_t ea)
{
	wr(reg_pc, ea);
	reg_pc = ea + 1;
}

static void do_exu(uint32_t insn)
{
	if ((insn & 0760000) == 0120000)
		return;
	execute(insn);
}

static void do_mul(uint32_t rhs)
{
	int64_t result = (int64_t)sign(reg_a, 18) * (int64_t)sign(rhs, 18);
	if (reg_sc > 0)
		result = leftshift35(result, reg_sc);
	else
		result = rightshift35(result, -reg_sc);

	reg_a = (result >> 17) & 0777777;
	reg_e = (reg_a & 0400000) | (result & 0377777);
}

static void do_div(uint32_t urhs)
{
	int64_t lhs = sign(((int64_t)reg_a << 17) | ((int64_t)reg_e & 0377777L), 35);
	if (reg_sc > 0)
		lhs = rightshift35(lhs, reg_sc);
	else
		lhs = leftshift35(lhs, -reg_sc);

	int32_t rhs = sign(urhs, 18);
	if ((lhs >> 17) >= rhs)
		reg_fv = true;
	reg_a = (lhs / rhs) & 0777777;
	int64_t remainder = lhs % rhs;
	if ((remainder < 0) != (rhs < 0))
		remainder *= -1;
	reg_e = remainder & 0777777;
}

static int countbits(uint32_t value)
{
	int count = 0;
	for (int i=0; i<18; i++)
	{
		count += value & 1;
		value >>= 1;
	}
	return count;
}

static void do_tin(uint32_t address)
{
	reg_irqp = rd(address+0) & 0xffff;
	uint32_t i = rd(address+1);
	reg_p = (i>>12) & 0xf;
	reg_fc = i & (1<<6);
	reg_fv = i & (1<<7);
	reg_fd = i & (i<<9);
	reg_sl = rd(address+2);
	reg_pc = rd(address+3);
	halted = false;
}

static void emulator_interrupt(int irq)
{
	reg_irq |= 1<<(irq-1);
}

static void execute(uint32_t insn)
{
	switch (insn & 0760000)
	{
		case 0000000: /* Simple instruction */
			switch (insn)
			{
				case 0000000: /* HLT */ halted = true;
				case 0000001: /* TOV */ do_conditional(reg_fv); reg_fv = false; break;
				case 0000002: /* NOP */ break;
				case 0000003: /* IGZ */ do_conditional(!(reg_a & SIGNBIT)); break;
				case 0000004: /* NEG */ reg_a = do_neg(reg_a); break;
				case 0000005: /* IOP */ do_conditional(countbits(reg_a) & 1); break;
        		case 0000006: /* ADC */ reg_a = do_add(reg_a, reg_fc); break;
        		case 0000007: /* ROV */ reg_fv = false; break;
        		case 0000010: /* CMP */ reg_a = ~reg_a; break;
				case 0000011: /* ANDD */ reg_fa = true; break;
				case 0000012: /* LDP */ reg_p = (reg_a >> 12) & 0xf; break;
				case 0000013: /* LDD */ do_ldd(); break;
				case 0000014: /* NORM */ do_norm(); break;
				case 0000015: /* ORD */ reg_fa = false; break;
				case 0000016: /* EXIT */ emulator_interrupt(16); break;
				case 0000017: /* CPD */ reg_fd = !reg_fd; break;
				case 0000020: /* SSA */ reg_a = reg_sc & 077; break;
				case 0000021: /* IEZ */ do_conditional(reg_a == 0); break;
				case 0000022: /* FLP */ reg_a = do_flp(reg_a); break;
				case 0000023: /* RED */ reg_fd = false; break;
				default:      unimplemented_instruction();
			}
			break;

		case 0020000: /* ADX */ reg_x = (reg_x + rd(ea(insn))) & 0777777; break;
		case 0040000: /* ADD */ reg_a = do_add(reg_a, rd(ea(insn))); break;
		case 0060000: /* BRM */ do_brm(ea(insn)); break;
		case 0100000: /* STE */ wr(reg_e, ea(insn)); break;
		case 0120000: /* EXU */ do_exu(rd(rd(ea(insn)))); break;
		case 0140000: /* SHF */ reg_a = do_shf(reg_a, rd(ea(insn))); break;
		case 0160000: /* IO  */ do_io(rd(ea(insn))); break;
		case 0200000: /* LDA */ reg_a = rd(ea(insn)); break;
		case 0220000: /* XNGT */ do_conditional(reg_x <= rd(ea(insn))); break;
		case 0240000: /* SUB */ reg_a = do_sub(reg_a, rd(ea(insn))); break;
		case 0260000: /* ILT */ do_conditional(sign(reg_a, 18) < sign(rd(ea(insn)), 18)); break;
		case 0300000: /* ETR */ reg_a &= rd(ea(insn)); break;
		case 0320000: /* LDS */ reg_sc = sign(rd(ea(insn)), 6); break;
		case 0340000: /* CYC */ do_cyc(rd(ea(insn))); break;
		case 0360000: /* DSH */ do_dsh(rd(ea(insn))); break;
		case 0400000: /* LDL */ reg_a = ea(insn); break;
		case 0420000: /* BRC */ if (reg_fd) reg_pc = rd(ea(insn)); reg_fd = reg_fa = false; break;
		case 0440000: /* MUL */ do_mul(rd(ea(insn))); break;
		case 0460000: /* IET */ do_conditional(reg_a == rd(ea(insn))); break;
		case 0500000: /* MRG */ reg_a |= rd(ea(insn)); break;
		case 0520000: /* LDE */ reg_e = rd(ea(insn)); break;
		case 0540000: /* LDX */ reg_x = rd(ea(insn)); break;
		case 0560000: /* DCY */ do_dcy(rd(ea(insn))); break;
		case 0600000: /* STA */ wr(reg_a, ea(insn)); break;
		case 0620000: /* BRU */ reg_pc = rd(ea(insn)); break;
		case 0640000: /* DIV */ do_div(rd(ea(insn))); break;
		case 0660000: /* IGT */ do_conditional(sign(reg_a, 18) > sign(rd(ea(insn)), 18)); break;
		case 0700000: /* EORA */ reg_a ^= rd(ea(insn)); break;
		case 0720000: /* TIN */ do_tin(rd(ea(insn))); break;
		case 0740000: /* STX */ wr(reg_x, ea(insn)); break;
		default:	  unimplemented_instruction();
	}
}

void emulator_run(void)
{
	if (!singlestepping)
	{
		for (int i=0; i<sizeof(breakpoints)/sizeof(*breakpoints); i++)
			if (reg_pc == breakpoints[i])
				singlestepping = true;
	}
	for (int i=0; i<sizeof(watchpoints)/sizeof(*watchpoints); i++)
	{
		struct watchpoint* w = &watchpoints[i];
		if (w->enabled && (memory[w->address] != w->value))
		{
			printf("\nWatchpoint hit: %06o has changed from %06o to %06o\n",
				w->address, w->value, memory[w->address]);
			w->value = memory[w->address];
			singlestepping = true;
		}
	}

	if (singlestepping)
		debug();
	else if (tracing)
		showregs();

	/* Read and execute the instruction if we're not halted */

	if (!halted)
	{
		uint32_t insn = rd(reg_pc++);
		execute(insn);
	}

	/* Scan for pending interrupts */

	for (int irq=1; irq<=16; irq++)
	{
		uint16_t mask = 1<<(irq-1);
		if ((reg_irq & mask) && !(reg_irqp & mask))
		{
			if (singlestepping || tracing)
				printf("Taking interrupt %d\n", irq);

			reg_irq &= ~mask;
			uint32_t address = irq * 010;

			memory[address+0] = reg_irqp;
			memory[address+1] = 
					(reg_fc << 6) | (reg_fv << 7) | (reg_fd << 9) | (reg_p << 12);
			memory[address+2] = reg_sl;
			memory[address+3] = reg_pc;
			do_tin(address + 4);
		}
	}
}


