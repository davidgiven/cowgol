#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "globals.h"

#define STACK_DEPTH 32

enum
{
	SLOT_STACKED,
	SLOT_CONST,
	SLOT_ADDR,
	SLOT_VALUE
};

struct slot
{
	int kind;
	union
	{
		uint16_t constvalue;
		struct symbol* sym;
	}
	u;
};

static struct slot vstack[STACK_DEPTH];
static int sp;

static const char* regname(int reg)
{
	switch (reg)
	{
		case REG_A: return "psw";
		case REG_HL: return "h";
		case REG_DE: return "d";
		case REG_BC: return "b";
	}
	assert(false);
	return NULL;
}

void vpush_reset(void)
{
	sp = 0;
}

void vpush_reg(int reg)
{
	if (sp == STACK_DEPTH)
		fatal("vstack overflow");
	struct slot* slot = &vstack[sp++];

	slot->kind = SLOT_STACKED;
	printf(" push %s\n", regname(reg));
}

void vpush_const(uint16_t c)
{
	if (sp == STACK_DEPTH)
		fatal("vstack overflow");
	struct slot* slot = &vstack[sp++];

	slot->kind = SLOT_CONST;
	slot->u.constvalue = c;
}

void vpush_addr(struct symbol* sym)
{
	if (sp == STACK_DEPTH)
		fatal("vstack overflow");
	struct slot* slot = &vstack[sp++];

	slot->kind = SLOT_ADDR;
	slot->u.sym = sym;
}

void vpush_value(struct symbol* sym)
{
	if (sp == STACK_DEPTH)
		fatal("vstack overflow");
	struct slot* slot = &vstack[sp++];

	slot->kind = SLOT_VALUE;
	slot->u.sym = sym;
}

void vpop_reg(int reg)
{
	if (sp == 0)
		fatal("vstack underflow");
	struct slot* slot = &vstack[--sp];

	switch (slot->kind)
	{
		case SLOT_STACKED:
			printf(" pop %s\n", regname(reg));
			break;

		case SLOT_CONST:
			if (reg == REG_A)
				printf(" mvi a, %d\n", slot->u.constvalue);
			else
				printf(" lxi %s, %d\n", regname(reg), slot->u.constvalue);
			break;

		case SLOT_ADDR:
			printf(" lxi %s w_%s+%d ; %s\n",
				regname(reg),
				slot->u.sym->u.var.sub->name, slot->u.sym->u.var.offset,
				slot->u.sym->name);
			break;

		case SLOT_VALUE:
			if (reg != REG_HL)
				fatal("can't rematerialise non-HL value");

			printf(" lhld w_%s+%d ; %s\n",
				slot->u.sym->u.var.sub->name, slot->u.sym->u.var.offset,
				slot->u.sym->name);
			break;
	}
}



