#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include "sim.h"
#include "m68k.h"

void disassemble_program();

#define ADDRESS_MASK 0xffffffff
#define RAM_BASE 0x00000000
#define RAM_TOP  0x00100000

#define INIT_SP RAM_TOP
#define INIT_PC 0x00000500

/* Read/write macros */
#define READ_BYTE(BASE, ADDR) (BASE)[ADDR]
#define READ_WORD(BASE, ADDR) (((BASE)[ADDR]<<8) |			\
							  (BASE)[(ADDR)+1])
#define READ_LONG(BASE, ADDR) (((BASE)[ADDR]<<24) |			\
							  ((BASE)[(ADDR)+1]<<16) |		\
							  ((BASE)[(ADDR)+2]<<8) |		\
							  (BASE)[(ADDR)+3])

#define WRITE_BYTE(BASE, ADDR, VAL) (BASE)[ADDR] = (VAL)&0xff
#define WRITE_WORD(BASE, ADDR, VAL) (BASE)[ADDR] = ((VAL)>>8) & 0xff;		\
									(BASE)[(ADDR)+1] = (VAL)&0xff
#define WRITE_LONG(BASE, ADDR, VAL) (BASE)[ADDR] = ((VAL)>>24) & 0xff;		\
									(BASE)[(ADDR)+1] = ((VAL)>>16)&0xff;	\
									(BASE)[(ADDR)+2] = ((VAL)>>8)&0xff;		\
									(BASE)[(ADDR)+3] = (VAL)&0xff


static void emulated_syscall(void);

uint32_t cpu_read_byte(uint32_t address);
uint32_t cpu_read_word(uint32_t address);
uint32_t cpu_read_long(uint32_t address);
void cpu_write_byte(uint32_t address, uint32_t value);
void cpu_write_word(uint32_t address, uint32_t value);
void cpu_write_long(uint32_t address, uint32_t value);

uint8_t g_ram[RAM_TOP - RAM_BASE];
uint32_t brkbase = RAM_BASE;
uint32_t brkpos = RAM_BASE;
uint32_t entrypoint = RAM_BASE;

static bool verbose = false;

/* Exit with an error message.  Use printf syntax. */
void exit_error(char* fmt, ...)
{
	static int guard_val = 0;
	char buff[100];
	uint32_t pc;
	va_list args;

	if(guard_val)
		return;
	else
		guard_val = 1;

	va_start(args, fmt);
	vfprintf(stderr, fmt, args);
	va_end(args);
	fprintf(stderr, "\n");
	pc = m68k_get_reg(NULL, M68K_REG_PPC);
	m68k_disassemble(buff, pc, M68K_CPU_TYPE_68020);
	fprintf(stderr, "At %04x: %s\n", pc, buff);

	exit(EXIT_FAILURE);
}

static inline uint32_t transform_address(uint32_t address)
{
	uint32_t i = (address & ADDRESS_MASK) - RAM_BASE;
	if (i >= (uint32_t)(RAM_TOP - RAM_BASE))
		exit_error("Attempted to read from RAM address %08x", address);
	return i;
}

uint32_t cpu_read_long(uint32_t address)
{
	switch (address)
	{
		case 0x00: return INIT_SP;
		case 0x04: return entrypoint;
		case 0x08: exit_error("access fault");
		case 0x0c: exit_error("address error");
		case 0x88: bdos_syscall(); return 0x100;
		case 0x8c: bios_syscall(); return 0x100;
		case 0x90: xbios_syscall(); return 0x100;
		case 0x100: return 0x4e734e73; /* rte; rte */
		case 0x100000: exit(0);
		default:
		{
			uint32_t value = READ_LONG(g_ram, transform_address(address));
			#if 0
			printf("read %08x from %08x\n", value, address);
			#endif
			return value;
		}
	}
}


uint32_t cpu_read_word(uint32_t address)
{
	uint32_t l = cpu_read_long(address & ~3);
	l >>= 16 - (address & 2)*8;
	return l & 0xffff;
}

uint32_t cpu_read_byte(uint32_t address)
{
	uint32_t l = cpu_read_long(address & ~3);
	l >>= 24 - (address & 3)*8;
	return l & 0xff;
}

uint32_t cpu_read_word_dasm(uint32_t address)
{
	return cpu_read_word(address);
}

uint32_t cpu_read_long_dasm(uint32_t address)
{
	return cpu_read_long(address);
}


/* Write data to RAM or a device */
void cpu_write_byte(uint32_t address, uint32_t value)
{
	WRITE_BYTE(g_ram, transform_address(address), value);
}

void cpu_write_word(uint32_t address, uint32_t value)
{
	WRITE_WORD(g_ram, transform_address(address), value);
}

void cpu_write_long(uint32_t address, uint32_t value)
{
	WRITE_LONG(g_ram, transform_address(address), value);
}

/* Disassembler */
void make_hex(char* buff, uint32_t pc, uint32_t length)
{
	char* ptr = buff;

	for(;length>0;length -= 2)
	{
		sprintf(ptr, "%04x", cpu_read_word_dasm(pc));
		pc += 2;
		ptr += 4;
		if(length > 2)
			*ptr++ = ' ';
	}
}

void disassemble_program()
{
	uint32_t pc;
	uint32_t instr_size;
	char buff[100];
	char buff2[100];

	pc = cpu_read_long_dasm(4);
	printf("entry point is %0x\n", entrypoint);
	printf("pc is %0x\n", pc);


	while(pc <= entrypoint + 0x16e)
	{
		instr_size = m68k_disassemble(buff, pc, M68K_CPU_TYPE_68020);
		make_hex(buff2, pc, instr_size);
		printf("%03x: %-20s: %s\n", pc, buff2, buff);
		pc += instr_size;
	}
	fflush(stdout);
}

void cpu_instr_callback(int apc)
{
    (void)apc;
	uint32_t pc = m68k_get_reg(NULL, M68K_REG_PC);
	if (pc == 0xc)
		exit_error("address exception");

	if (verbose)
	{
		static char buff[100];
		static char buff2[100];
		static uint32_t instr_size;

		instr_size = m68k_disassemble(buff, pc, M68K_CPU_TYPE_68020);
		make_hex(buff2, pc, instr_size);
		printf("E %03x: %-20s: %s\n", pc, buff2, buff);
		printf("  d0: %08x d1: %08x d2: %08x d3: %08x\n  d4: %08x d5: %08x d6: %08x d7: %08x\n",
			m68k_get_reg(NULL, M68K_REG_D0),
			m68k_get_reg(NULL, M68K_REG_D1),
			m68k_get_reg(NULL, M68K_REG_D2),
			m68k_get_reg(NULL, M68K_REG_D3),
			m68k_get_reg(NULL, M68K_REG_D4),
			m68k_get_reg(NULL, M68K_REG_D5),
			m68k_get_reg(NULL, M68K_REG_D6),
			m68k_get_reg(NULL, M68K_REG_D7));
		printf("  a0: %08x a1: %08x a2: %08x a3: %08x\n  a4: %08x a5: %08x a6: %08x a7: %08x\n",
			m68k_get_reg(NULL, M68K_REG_A0),
			m68k_get_reg(NULL, M68K_REG_A1),
			m68k_get_reg(NULL, M68K_REG_A2),
			m68k_get_reg(NULL, M68K_REG_A3),
			m68k_get_reg(NULL, M68K_REG_A4),
			m68k_get_reg(NULL, M68K_REG_A5),
			m68k_get_reg(NULL, M68K_REG_A6),
			m68k_get_reg(NULL, M68K_REG_A7));
		fflush(stdout);
	}
}

static void load_program(FILE* fd)
{
	/* The Amiga CP/M-68k header looks like this:
     * 00 x2 $601a text, data, and bss are contiguous
     * 02 x4 text segment size
	 * 06 x4 data segment size
	 * 0a x4 bss segment size
	 * 0e x4 symbol table size
	 * 12 x4 reserved
	 * 16 x4 beginning of text segment
	 * 1a x2 $ffff no relocation bits
	 * 1c
	 */

	fseek(fd, 0, SEEK_SET);
	if (fread(g_ram, 1, 0x1c, fd) != 0x1c)
		exit_error("couldn't read CP/M-68k header");
	
	if (READ_WORD(g_ram, 0x00) == 0x601b)
		exit_error("non contiguous segments are not supported");

	if (READ_WORD(g_ram, 0x00) != 0x601a)
		exit_error("bad magic number, not an Amiga CP/M-68k executable");

	if (READ_LONG(g_ram, 0x16) != 0x500)
		exit_error("unsupported excution address");

	if (READ_WORD(g_ram, 0x1a) != 0xffff)
		exit_error("relative binaries are not supported");

	uint32_t text_size = READ_LONG(g_ram, 0x02);
	uint32_t data_size = READ_LONG(g_ram, 0x06);
	uint32_t bss_size = READ_LONG(g_ram, 0x0a);
	uint32_t file_size = text_size + data_size;

	if (fread(g_ram+0x500, 1, file_size, fd) != file_size)
		exit_error("couldn't read program data");

	uint32_t bss_start = 0x500 + file_size;
	uint32_t bss_end = bss_start + bss_size;
	for (uint32_t addr=bss_start; addr<bss_end; addr++)
			WRITE_BYTE(g_ram, addr, 0);

}

static void syntax_error(void)
{
	exit_error("Usage: amigacpmemu [-v] <binary.prg>");
}

int main(int argc, char* argv[])
{
	FILE* fd;
	files_init();

	for (;;)
	{
		int opt = getopt(argc, argv, "v");
		if (opt == -1)
			break;
		switch (opt)
		{
			case 'v':
				verbose = true;
				break;

			default:
				syntax_error();
		}
	}

	if (optind >= argc)
		syntax_error();

	fd = fopen(argv[optind], "rb");
	if (!fd)
		exit_error("Unable to open %s", argv[optind]);

	load_program(fd);

	//disassemble_program();

	m68k_set_cpu_type(M68K_CPU_TYPE_68000);
	m68k_init();
	m68k_pulse_reset();

	/* Write command line. */

	
	{
		uint8_t* ptr = &g_ram[0x480];
		for (;;)
		{
			*ptr++ = ' ';

			const char* arg = argv[++optind];
			if (!arg)
				break;

			int len = strlen(arg);
			memcpy((char*)ptr, arg, len);
			ptr += len;
		}
		if (optind > 2) ptr--;

		g_ram[0x480] = ptr - &g_ram[0x481];
	}

	/* Set stack pointer and program counter */
	{
		uint32_t sp = INIT_SP;
		m68k_set_reg(M68K_REG_SP, sp);
		m68k_set_reg(M68K_REG_PC, INIT_PC);
	}

	for (;;)
		m68k_execute(100000);

	return 0;
}

