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
static int reg_sc;
static int reg_p;
static bool reg_fc;
static bool reg_fd;
static bool reg_fa;
static bool reg_fv;

static void execute(uint32_t insn);

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

	reg_sl = 0000777;
}

static void disassemble(char* buffer, size_t buffersize, uint32_t address)
{
	uint32_t insn = memory[address];

	const char* format = NULL;
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

		case 0020000: format = "ADX %s%06o%s"; break;
		case 0040000: format = "ADD %s%06o%s"; break;
		case 0060000: format = "BRM %s%06o%s"; break;
		case 0100000: format = "STE %s%06o%s"; break;
		case 0120000: format = "EXU %s%06o%s"; break;
		case 0140000: format = "SHF %s%06o%s"; break;
		case 0160000: format = "IO %s%06o%s"; break;
		case 0200000: format = "LDA %s%06o%s"; break;
		case 0220000: format = "XNGT %s%06o%s"; break;
		case 0240000: format = "SUB %s%06o%s"; break;
		case 0260000: format = "ILT %s%06o%s"; break;
		case 0300000: format = "ETR %s%06o%s"; break;
		case 0320000: format = "LDS %s%06o%s"; break;
		case 0340000: format = "CYC %s%06o%s"; break;
		case 0360000: format = "DSH %s%06o%s"; break;
		case 0400000: format = "LDL %s%06o%s"; break;
		case 0420000: format = "BRC %s%06o%s"; break;
		case 0440000: format = "MUL %s%06o%s"; break;
		case 0460000: format = "IET %s%06o%s"; break;
		case 0500000: format = "MRG %s%06o%s"; break;
		case 0520000: format = "LDE %s%06o%s"; break;
		case 0540000: format = "LDX %s%06o%s"; break;
		case 0560000: format = "DCY %s%06o%s"; break;
		case 0600000: format = "STA %s%06o%s"; break;
		case 0620000: format = "BRU %s%06o%s"; break;
		case 0640000: format = "DIV %s%06o%s"; break;
		case 0660000: format = "IGT %s%06o%s"; break;
		case 0700000: format = "EORA %s%06o%s"; break;
		case 0720000: format = "TIN %s%06o%s"; break;
		case 0740000: format = "STX %s%06o%s"; break;
		default:
			snprintf(buffer, buffersize, "UNKNOWN");
			return;
	}

	bool indirect = insn & (1<<12);
	snprintf(buffer, buffersize, format, indirect ? "[" : "", insn & 07777, indirect ? "]" : "");
}

static void showregs(void)
{
	printf("%c%c%c%c pc=%06o a=%06o e=%06o x=%06o sl=%06o sc=%02o p=%02o\n",
		reg_fc ? 'C' : 'c',
		reg_fd ? 'D' : 'd',
		reg_fa ? 'A' : 'a',
		reg_fv ? 'V' : 'v',
		reg_pc, reg_a, reg_e, reg_x, reg_sl, reg_sc & 077, reg_p);

	char buffer[80];
	disassemble(buffer, sizeof(buffer), reg_pc);
	printf("%06o : %s\n", reg_pc, buffer);
}

#if 0
static void cmd_register(void)
{
	char* w1 = strtok(NULL, " ");
	char* w2 = strtok(NULL, " ");

	if (w1 && w2)
	{
		Z80_REG_T reg = -1;
		if (strcmp(w1, "sp") == 0)
			reg = regSP;
		else if (strcmp(w1, "pc") == 0)
			reg = regPC;
		else if (strcmp(w1, "af") == 0)
			reg = regAF;
		else if (strcmp(w1, "bc") == 0)
			reg = regBC;
		else if (strcmp(w1, "de") == 0)
			reg = regDE;
		else if (strcmp(w1, "hl") == 0)
			reg = regHL;
		else if (strcmp(w1, "bc'") == 0)
			reg = regBC_;
		else if (strcmp(w1, "de'") == 0)
			reg = regDE_;
		else if (strcmp(w1, "hl'") == 0)
			reg = regHL_;
		else if (strcmp(w1, "ix") == 0)
			reg = regIX;
		else if (strcmp(w1, "iy") == 0)
			reg = regIY;
		else
		{
			printf("Bad register\n");
			return;
		}

		z80ex_set_reg(z80, reg, strtoul(w2, NULL, 16));
	}

	showregs();
}
#endif

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
			#if 0
			else if (strcmp(token, "r") == 0)
				cmd_register();
			#endif
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

static int32_t sign(uint32_t uvalue, uint32_t size)
{
	uvalue <<= 32-size;
	int32_t svalue = uvalue;
	return svalue >>= (32-size);
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

static uint32_t do_shf(uint32_t uvalue, uint32_t uamount)
{
	int32_t value = sign(uvalue, 18);
	int32_t amount = sign(uamount, 6);
	if (amount < 0)
		value >>= -amount;
	else
		value <<= amount;

	reg_fv = (value & SIGNBIT) != (uvalue & SIGNBIT);
	return value & 0777777;
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

static void do_dsh(uint32_t uamount)
{
	int64_t value = ((int64_t)reg_e & 0377777) | ((int64_t)sign(reg_a, 18) << 17);
	int32_t amount = sign(uamount, 6);
	if (amount < 0)
		value >>= -amount;
	else
		value <<= amount;

	reg_e &= 0400000;
	reg_e |= value & 0377777;
	int32_t new_reg_a = (value >> 17) & 0777777;
	reg_fv = (new_reg_a & SIGNBIT) != (reg_a & SIGNBIT);
	reg_a = new_reg_a;
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
	{
		for (int i=0; i<reg_sc; i++)
		{
			int64_t oldsign = result & (1L<<34);
			result <<= 1;
			if ((result & (1L<<34)) != oldsign)
				reg_fv = true;
		}
	}
	else
	{
		for (int i=reg_sc; i<0; i++)
			result >>= 1;
	}

	reg_a = (result >> 17) & 0777777;
	reg_e = (reg_a & 0400000) | (result & 0377777);
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
	fatal("no tin");
}

static void emulator_interrupt(int irq)
{
	fatal("no execute_interrupt");
}

static void execute(uint32_t insn)
{
	switch (insn & 0760000)
	{
		case 0000000: /* Simple instruction */
			switch (insn)
			{
				case 0000000: /* HLT */ exit(0);
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

		case 0020000: /* ADX */ reg_x += rd(ea(insn)); break;
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
		case 0640000: unimplemented_instruction();
		case 0660000: /* IGT */ do_conditional(sign(reg_a, 18) > sign(rd(ea(insn)), 18)); break;
		case 0700000: /* EORA */ reg_a ^= rd(ea(insn)); break;
		case 0720000: /* TIN */ do_tin(rd(ea(insn))); break;
		case 0740000: /* STX */ wr(reg_x, ea(insn)); break;
		default:	  unimplemented_instruction();
	}
}

static void step_once(void)
{
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

	uint32_t insn = memory[reg_pc++];
	execute(insn);
}


