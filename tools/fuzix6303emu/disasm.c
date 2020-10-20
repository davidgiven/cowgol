#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include "globals.h"

typedef int amode_t(uint16_t pc, const uint8_t* ram, char* buffer);

static amode_t imm;
static amode_t imm16;
static amode_t dir;
static amode_t ext;
static amode_t ind;
static amode_t inh;
static amode_t rel;

struct op
{
	char name[5];
	amode_t* mode;
};

static const struct op opcodes[256] =
{
	{ "?",    inh }, /* 00 */
	{ "nop",  inh }, 
	{ "?",    inh },
	{ "?",    inh },
	{ "lsrd", inh },
	{ "asld", inh },
	{ "tap",  inh },
	{ "tpa",  inh },
	{ "inx",  inh }, /* 08 */
	{ "dex",  inh },
	{ "clv",  inh },
	{ "sev",  inh },
	{ "clc",  inh },
	{ "sec",  inh },
	{ "cli",  inh },
	{ "sei",  inh },
	{ "sba",  inh }, /* 10 */
	{ "cba",  inh },
	{ "?",    inh },
	{ "?",    inh },
	{ "?",    inh },
	{ "?",    inh },
	{ "tab",  inh },
	{ "tba",  inh },
	{ "xgdx", inh }, /* 18 */
	{ "daa",  inh },
	{ "slp",  inh },
	{ "aba",  inh },
	{ "?",    inh },
	{ "?",    inh },
	{ "?",    inh },
	{ "?",    inh },
	{ "bra",  rel }, /* 20 */
	{ "brn",  rel },
	{ "bhi",  rel },
	{ "bls",  rel },
	{ "bcc",  rel },
	{ "bcs",  rel },
	{ "bne",  rel },
	{ "beq",  rel },
	{ "bvc",  rel }, /* 28 */
	{ "bvs",  rel },
	{ "bpl",  rel },
	{ "bmi",  rel },
	{ "bge",  rel },
	{ "blt",  rel },
	{ "bgt",  rel },
	{ "ble",  rel },
	{ "tsx",  inh }, /* 30 */
	{ "ins",  inh },
	{ "pula", inh },
	{ "pulb", inh },
	{ "des",  inh },
	{ "txs",  inh },
	{ "psha", inh },
	{ "pshb", inh },
	{ "pulx", inh }, /* 38 */
	{ "rts",  inh },
	{ "abx",  inh },
	{ "rti",  inh },
	{ "pshx", inh },
	{ "mul",  inh },
	{ "wai",  inh },
	{ "swi",  inh },
	{ "nega", inh }, /* 40 */
	{ "?",    inh },
	{ "?",    inh },
	{ "coma", inh },
	{ "lsra", inh },
	{ "?",    inh },
	{ "rora", inh },
	{ "asra", inh },
	{ "asla", inh }, /* 48 */
	{ "rola", inh },
	{ "deca", inh },
	{ "?",    inh },
	{ "inca", inh },
	{ "tsta", inh },
	{ "?",    inh },
	{ "clra", inh },
	{ "negb", inh }, /* 50 */
	{ "?",    inh },
	{ "?",    inh },
	{ "comb", inh },
	{ "lsrb", inh },
	{ "?",    inh },
	{ "rorb", inh },
	{ "asrb", inh },
	{ "aslb", inh }, /* 58 */
	{ "rolb", inh },
	{ "decb", inh },
	{ "?",    inh },
	{ "incb", inh },
	{ "tstb", inh },
	{ "?",    inh },
	{ "clrb", inh },
	{ "neg",  ind }, /* 60 */
	{ "aim",  ind },
	{ "oim",  ind },
	{ "com",  ind },
	{ "lsr",  ind },
	{ "eim",  ind },
	{ "ror",  ind },
	{ "asr",  ind },
	{ "asl",  ind }, /* 68 */
	{ "rol",  ind },
	{ "dec",  ind },
	{ "tim",  ind },
	{ "inc",  ind },
	{ "tst",  ind },
	{ "jmp",  ind },
	{ "clr",  ind },
	{ "neg",  ext }, /* 70 */
	{ "aim",  dir },
	{ "oim",  dir },
	{ "com",  ext },
	{ "lsr",  ext },
	{ "eim",  dir },
	{ "ror",  ext },
	{ "asr",  ext },
	{ "asl",  ext }, /* 78 */
	{ "rol",  ext },
	{ "dec",  ext },
	{ "tim",  dir },
	{ "inc",  ext },
	{ "tst",  ext },
	{ "jmp",  ext },
	{ "clr",  ext },
	{ "suba", imm }, /* 80 */
	{ "cmpa", imm },
	{ "sbca", imm },
	{ "subd", imm16 },
	{ "anda", imm },
	{ "bita", imm },
	{ "ldaa", imm },
	{ "?",    imm },
	{ "eora", imm }, /* 88 */
	{ "adca", imm },
	{ "oraa", imm },
	{ "adda", imm },
	{ "cpx",  imm16 },
	{ "bsr",  rel },
	{ "lds",  imm16 },
	{ "?",    imm },
	{ "suba", dir }, /* 90 */
	{ "cmpa", dir },
	{ "sbca", dir },
	{ "subd", dir },
	{ "anda", dir },
	{ "bita", dir },
	{ "ldaa", dir },
	{ "staa", dir },
	{ "eora", dir }, /* 98 */
	{ "adca", dir },
	{ "oraa", dir },
	{ "adda", dir },
	{ "cpx",  dir },
	{ "jsr",  dir },
	{ "lds",  dir },
	{ "sts",  dir },
	{ "suba", ind }, /* a0 */
	{ "cmpa", ind },
	{ "sbca", ind },
	{ "subd", ind },
	{ "anda", ind },
	{ "bita", ind },
	{ "ldaa", ind },
	{ "staa", ind },
	{ "eora", ind }, /* a8 */
	{ "adca", ind },
	{ "oraa", ind },
	{ "adda", ind },
	{ "cpx",  ind },
	{ "jsr",  ind },
	{ "lds",  ind },
	{ "sts",  ind },
	{ "suba", ext }, /* b0 */
	{ "cmpa", ext },
	{ "sbca", ext },
	{ "subd", ext },
	{ "anda", ext },
	{ "bita", ext },
	{ "ldaa", ext },
	{ "staa", ext },
	{ "eora", ext }, /* b8 */
	{ "adca", ext },
	{ "oraa", ext },
	{ "adda", ext },
	{ "cpx",  ext },
	{ "jsr",  ext },
	{ "lds",  ext },
	{ "sts",  ext },
	{ "subb", imm }, /* c0 */
	{ "cmpb", imm },
	{ "sbcb", imm },
	{ "subd", imm16 },
	{ "andb", imm },
	{ "bitb", imm },
	{ "ldab", imm },
	{ "?",    imm },
	{ "eorb", imm }, /* c8 */
	{ "adcb", imm },
	{ "orab", imm },
	{ "addb", imm },
	{ "ldd",  imm16 },
	{ "?",    inh },
	{ "ldx",  imm16 },
	{ "?",    imm },
	{ "subb", dir }, /* d0 */
	{ "cmpb", dir },
	{ "sbcb", dir },
	{ "subd", dir },
	{ "andb", dir },
	{ "bitb", dir },
	{ "ldab", dir },
	{ "stab", dir },
	{ "eorb", dir }, /* d8 */
	{ "adcb", dir },
	{ "orab", dir },
	{ "addb", dir },
	{ "ldd",  dir },
	{ "std",  dir },
	{ "ldx",  dir },
	{ "stx",  dir },
	{ "subb", ind }, /* e0 */
	{ "cmpb", ind },
	{ "sbcb", ind },
	{ "subd", ind },
	{ "andb", ind },
	{ "bitb", ind },
	{ "ldab", ind },
	{ "stab", ind },
	{ "eorb", ind }, /* e8 */
	{ "adcb", ind },
	{ "orab", ind },
	{ "addb", ind },
	{ "ldd",  ind },
	{ "std",  ind },
	{ "ldx",  ind },
	{ "stx",  ind },
	{ "subb", ext }, /* f0 */
	{ "cmpb", ext },
	{ "sbcb", ext },
	{ "subd", ext },
	{ "andb", ext },
	{ "bitb", ext },
	{ "ldab", ext },
	{ "stab", ext },
	{ "eorb", ext }, /* f8 */
	{ "adcb", ext },
	{ "orab", ext },
	{ "addb", ext },
	{ "ldd",  ext },
	{ "std",  ext },
	{ "ldx",  ext },
	{ "stx",  ext },
};

static int inh(uint16_t pc, const uint8_t* ram, char* buffer)
{
	return 0;
}

static int imm(uint16_t pc, const uint8_t* ram, char* buffer)
{
	return 1;
}

static int imm16(uint16_t pc, const uint8_t* ram, char* buffer)
{
	return 2;
}

static int dir(uint16_t pc, const uint8_t* ram, char* buffer)
{
	return 1;
}

static int ind(uint16_t pc, const uint8_t* ram, char* buffer)
{
	return 1;
}

static int ext(uint16_t pc, const uint8_t* ram, char* buffer)
{
	return 2;
}

static int rel(uint16_t pc, const uint8_t* ram, char* buffer)
{
	int8_t delta = *ram;
	sprintf(buffer, "%04x", pc + 2 + delta);
	return 1;
}

int disasm_6303(uint16_t pc, const uint8_t* mem, char* buffer)
{
	const struct op* op = &opcodes[mem[0]];
	sprintf(buffer, "%02x       : %s ", mem[0], op->name);
	int len = op->mode(pc, &mem[1], buffer + strlen(buffer));
	if ((len == 1) || (len == 2))
	{
		snprintf(buffer+3, 3, "%02x", mem[1]);
		buffer[5] = ' ';
	}
	if (len == 2)
	{
		snprintf(buffer+6, 3, "%02x", mem[2]);
		buffer[8] = ' ';
	}
	return len;
}

