#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
#include "globals.h"

#if 0
#define STACK_DEPTH 32

enum
{
	SLOT_STACKED,
	SLOT_CONST,
	SLOT_VALUE,

	REG_A,
	REG_HL,
	REG_DE,
	REG_BC
};

struct slot
{
	int kind;
	struct symbol* sym;
	int16_t off;
};

static struct slot vstack[STACK_DEPTH];
static int sp;

static const char* regname(int reg)
{
	switch (reg)
	{
		case REG_A: return "a";
		case REG_HL: return "h";
		case REG_DE: return "d";
		case REG_BC: return "b";
	}
	assert(false);
	return NULL;
}

static const char* stackname(int reg)
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

static void vpush_raw(void)
{
	if (sp == STACK_DEPTH)
		fatal("vstack overflow");
	struct slot* slot = &vstack[sp++];

	slot->kind = SLOT_STACKED;
}

static void vpush_reg(int reg)
{
	if (sp == STACK_DEPTH)
		fatal("vstack overflow");
	struct slot* slot = &vstack[sp++];

	slot->kind = SLOT_STACKED;
	printf(" push %s\n", stackname(reg));
}

static void vpush_const(struct symbol* sym, uint16_t off)
{
	if (sp == STACK_DEPTH)
		fatal("vstack overflow");
	struct slot* slot = &vstack[sp++];

	slot->kind = SLOT_CONST;
	slot->sym = sym;
	slot->off = off;
}

static void vpush_value(struct symbol* sym, uint16_t off)
{
	if (sp == STACK_DEPTH)
		fatal("vstack overflow");
	struct slot* slot = &vstack[sp++];

	slot->kind = SLOT_VALUE;
	slot->sym = sym;
	slot->off = off;
}

static const char* varref(const char* op, struct symbol* sym, int16_t off)
{
	static char buffer[64];
	if (sym)
		snprintf(buffer, sizeof(buffer), "%s (w_%s+%d) ; %s",
			op,
			sym->u.var.sub->name, sym->u.var.offset + off,
			sym->name);
	else
		snprintf(buffer, sizeof(buffer), "%s %d", op, off);
	return buffer;
}

static void vpop_reg(int width, int reg)
{
	if (sp == 0)
		fatal("vstack underflow");
	struct slot* slot = &vstack[--sp];

	switch (slot->kind)
	{
		case SLOT_STACKED:
			printf(" pop %s\n", stackname(reg));
			break;

		case SLOT_CONST:
			if (width == 1)
				printf(" mvi %s, %s\n", regname(reg), varref("low", slot->sym, slot->off));
			else
				printf(" lxi %s, %s\n", regname(reg), varref("", slot->sym, slot->off));
			break;

		case SLOT_VALUE:
			if (reg == REG_BC)
				fatal("can't rematerialise values into BC");

			if (reg == REG_A)
			{
				printf(" lda %s\n", varref("", slot->sym, slot->off));
			}
			else
			{
				if (reg == REG_DE)
					printf(" xchg\n");
				printf(" lhld %s\n", varref("", slot->sym, slot->off - (width == 1)));
				if (reg == REG_DE)
					printf(" xchg\n");
			}
			break;
	}
}

void arch_file_prologue(void)
{
	intptr_type = make_number_type("uint16", 2, false);
	make_number_type("int16", 2, true);
	uint8_type = make_number_type("uint8", 1, false);
	make_number_type("int8", 1, true);

	printf(" org 100h\n");
}

void arch_file_epilogue(void)
{
}

void arch_subroutine_prologue(void)
{
	printf("f_%s:\n", current_sub->name);

	if (current_sub->inputparameters != 0)
	{
		printf(" pop b\n");
		for (int i=current_sub->inputparameters-1; i>=0; i--)
		{
			struct symbol* param = current_sub->firstsymbol;
			for (int j=0; j<i; j++)
				param = param->next;

			if (param->u.var.type->u.type.width == 1)
			{
				printf(" pop psw\n");
				printf(" sta %s\n", varref("", param, 0));
			}
			else
			{
				printf(" pop h\n");
				printf(" shld %s\n", varref("", param, 0));
			}
		}
		printf(" push b\n");
	}
}

void arch_subroutine_epilogue(void)
{
	arch_return();
	printf("w_%s: ds %d\n", current_sub->name, current_sub->workspace);
}

void arch_return(void)
{
	printf(" ret\n");
}

void arch_emit_label(int label)
{
	if (label)
		printf("x%d:\n", label);
}

void arch_label_alias(int fakelabel, int reallabel)
{
	printf("x%d = x%d\n", fakelabel, reallabel);
}

void arch_emit_jump(int label)
{
	printf(" jmp x%d\n", label);
}

void arch_push_input_param(struct symbol* type)
{
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_A);
			printf(" push psw\n");
			break;

		case 2:
			vpop_reg(width, REG_HL);
			printf(" push h\n");
			break;

		default:
			assert(false);
	}
}

void arch_emit_call(struct subroutine* sub)
{
	printf(" call f_%s\n", sub->name);
}

void arch_push_constant(struct symbol* sym, int32_t off)
{
	vpush_const(sym, off);
}

void arch_push_string_constant(const char* text)
{
	int label1 = current_label++;
	int label2 = current_label++;
	printf(" jmp x%d\n", label1);
	printf("x%d:\n", label2);
	const uint8_t* p = (const uint8_t*)text;
	uint8_t c = 0;
	do
	{
		c = *p++;
		printf(" db ");
		printf((isprint(c) ? "'%c'" : "0x%02x"), c);
		printf("\n");
	}
	while (c);
	printf("x%d:\n", label1);
	printf(" lxi h, x%d\n", label2);
	printf(" push h\n");
	vpush_raw();
}

void arch_push_value(struct symbol* sym, int32_t off)
{
	vpush_value(sym, off);
}

void arch_dereference(struct symbol* ptrtype)
{
	int width = ptrtype->u.type.element->u.type.width;

	vpop_reg(2, REG_HL);
	switch (width)
	{
		case 1:
			printf(" mov a, m\n");
			vpush_reg(REG_A);
			break;

		case 2:
			printf(" mov a, m\n");
			printf(" inx h\n");
			printf(" mov h, m\n");
			printf(" mov l, a\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_add_const(struct symbol* type, struct symbol* sym, int32_t off)
{
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_A);
			if (off == 1)
				printf(" inr a\n");
			else if (off == -1)
				printf(" dcr a\n");
			else
				printf(" adi %s\n", varref("low", sym, off));
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(width, REG_HL);
			if (off == 1)
				printf(" inx h\n");
			else if (off == -1)
				printf(" dcx h\n");
			else
			{
				printf(" lxi b, %s\n", varref("", sym, off));
				printf(" dad b\n");
			}
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_add(struct symbol* type)
{
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_A);
			vpop_reg(width, REG_HL);
			printf(" add h\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(width, REG_HL);
			vpop_reg(width, REG_DE);
			printf(" dad d\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_subfrom_const(struct symbol* type, struct symbol* sym, int32_t off)
{
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_HL);
			printf(" mvi a, %s\n", varref("low", sym, off));
			printf(" sub h\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(width, REG_HL);
			printf(" mvi a, %s\n", varref("low", sym, off));
			printf(" sub l\n");
			printf(" mov l, a\n");
			printf(" mvi a, %s\n", varref("high", sym, off));
			printf(" sbb h\n");
			printf(" mov h, a\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_sub(struct symbol* type)
{
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_DE);
			vpop_reg(width, REG_A);
			printf(" sub d\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(width, REG_DE);
			vpop_reg(width, REG_HL);
			printf(" mov a, l\n");
			printf(" sub e\n");
			printf(" mov l, a\n");
			printf(" mov a, h\n");
			printf(" sbb d\n");
			printf(" mov h, a\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

static bool is_power_of_two(int32_t value)
{
	return (value & (value-1)) == 0;
}

void arch_mul_const(struct symbol* type, int32_t value)
{
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_A);
			if (value < 0)
			{
				printf(" cma\n");
				value = -value;
			}
			if (is_power_of_two(value))
			{
				while (value > 1)
				{
					printf(" ada a\n");
					value /= 2;
				}
			}
			else
			{
				printf(" mvi d, %u\n", value & 0xff);
				printf(" call mul8\n");
			}
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(width, REG_HL);
			if (is_power_of_two(value) && (value <= 256))
			{
				while (value > 1)
				{
					printf(" dad h\n");
					value /= 2;
				}
			}
			else
			{
				printf(" lxi d, %u\n", value & 0xffff);
				printf(" call mul16\n");
			}
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_mul(struct symbol* type)
{
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_A);
			vpop_reg(width, REG_DE);
			printf(" call mul8\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(width, REG_HL);
			vpop_reg(width, REG_DE);
			printf(" call mul16\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_div_const(struct symbol* type, int32_t value)
{
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_A);
			if (value < 0)
			{
				printf(" cma\n");
				value = -value;
			}
			if (is_power_of_two(value))
			{
				while (value > 1)
				{
					printf(" rrc\n");
					value /= 2;
				}
			}
			else
			{
				printf(" mvi d, %u\n", value & 0xff);
				printf(" call div8\n");
			}
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(width, REG_HL);
			printf(" lxi d, %u\n", value & 0xffff);
			printf(" call div16\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_div_const_by(struct symbol* type, int32_t value)
{
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_A);
			printf(" mvi d, %u\n", value & 0xff);
			printf(" call div8\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(width, REG_HL);
			printf(" lxi d, %u\n", value & 0xffff);
			printf(" call div16\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_div(struct symbol* type)
{
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_DE);
			vpop_reg(width, REG_A);
			printf(" call div8\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(width, REG_DE);
			vpop_reg(width, REG_HL);
			printf(" call div16\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_rem_const(struct symbol* type, int32_t value)
{
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_A);
			printf(" mvi d, %u\n", value & 0xff);
			printf(" call rem8\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(width, REG_HL);
			printf(" lxi d, %u\n", value & 0xffff);
			printf(" call rem16\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_rem_const_by(struct symbol* type, int32_t value)
{
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_A);
			printf(" mvi d, %u\n", value & 0xff);
			printf(" call rem8\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(width, REG_HL);
			printf(" lxi d, %u\n", value & 0xffff);
			printf(" call rem16\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_rem(struct symbol* type)
{
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_DE);
			vpop_reg(width, REG_A);
			printf(" call rem8\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(width, REG_DE);
			vpop_reg(width, REG_HL);
			printf(" call rem16\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_logicop_const(struct symbol* type, int32_t value, int logicop)
{
	static const char* logicops[] = { "ani", "ori", "xri" };
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_A);
			printf(" %s %u\n", logicops[logicop], value & 0xff);
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(width, REG_HL);
			printf(" mov a, l\n");
			printf(" %s %u\n", logicops[logicop], value & 0xff);
			printf(" mov l, a\n");
			printf(" mov a, h\n");
			printf(" %s %u\n", logicops[logicop], (value >> 8) & 0xff);
			printf(" mov h, a\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_logicop(struct symbol* type, int logicop)
{
	static const char* logicops[] = { "ani", "ori", "xri" };
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_DE);
			vpop_reg(width, REG_A);
			printf(" %s d\n", logicops[logicop]);
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(width, REG_DE);
			vpop_reg(width, REG_HL);
			printf(" mov a, l\n");
			printf(" %s e\n", logicops[logicop]);
			printf(" mov l, a\n");
			printf(" mov a, h\n");
			printf(" %s d\n", logicops[logicop]);
			printf(" mov h, a\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_cmp_equals_const(struct symbol* type, int truelabel, int falselabel,
		struct symbol* sym, int32_t value)
{
	int width = type->u.type.width;
	switch (width)
	{
		case 1:
			vpop_reg(width, REG_A);
			if (value == 0)
				printf(" ora a\n");
			else
				printf(" cpi %u\n", value & 0xff);
			break;

		case 2:
			vpop_reg(width, REG_HL);
			if (value == 0)
			{
				printf(" mov a, h\n");
				printf(" ora l\n");
			}
			else
			{
				printf(" mvi a, %u\n", value & 0xff);
				printf(" cmp l\n");
				printf(" jnz x%d\n", falselabel);
				printf(" mvi a, %u\n", (value >> 8) & 0xff);
				printf(" cmp h\n");
			}
			break;

		default:
			assert(false);
	}

	printf(" jnz x%d\n", falselabel);
	printf(" jmp x%d\n", truelabel);
}

void arch_cmp_equals(struct symbol* type, int truelabel, int falselabel)
{
	int width = type->u.type.width;
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(width, REG_HL);
			vpop_reg(width, REG_A);
			printf(" cmp h\n");
			break;

		case 2:
			vpop_reg(width, REG_HL);
			vpop_reg(width, REG_BC);
			printf(" mov a, c\n");
			printf(" cmp l\n");
			printf(" jnz x%d\n", falselabel);
			printf(" mov a, b\n");
			printf(" cmp h\n");
			break;

		default:
			assert(false);
	}

	printf(" jnz x%d\n", falselabel);
	printf(" jmp x%d\n", truelabel);
}

void arch_cmp_lessthan_const(struct symbol* type, int truelabel, int falselabel,
		struct symbol* sym, int32_t value)
{
	int width = type->u.type.width;
	if (type->u.type.issigned)
		fatal("can't compare signed values yet");
	else
	{
		switch (type->u.type.width)
		{
			case 1:
				vpop_reg(width, REG_A);
				printf(" cpi %u\n", value & 0xff);
				printf(" jc x%d\n", truelabel);
				break;

			case 2:
				vpop_reg(width, REG_HL);
				printf(" lxi d, %u\n", (-value) & 0xffff);
				printf(" dad d\n");
				printf(" jc x%d\n", truelabel);
				break;

			default:
				assert(false);
		}

		printf(" jmp x%d\n", falselabel);
	}
}

void arch_cmp_lessthan(struct symbol* type, int truelabel, int falselabel)
{
	int width = type->u.type.width;
	if (type->u.type.issigned)
		fatal("can't compare signed values yet");
	else
	{
		switch (width)
		{
			case 1:
				vpop_reg(width, REG_HL); /* rhs */
				vpop_reg(width, REG_A); /* lhs */
				printf(" cmp h\n");
				/* C set if lhs < rhs */
				break;

			case 2:
				vpop_reg(width, REG_HL); /* rhs */
				vpop_reg(width, REG_DE); /* lhs */
				printf(" mov a, e\n");
				printf(" sub l\n");
				printf(" mov a, d\n");
				printf(" sbb h\n");
				break;

			default:
				assert(false);
		}

		printf(" jc x%d\n", truelabel);
		printf(" jmp x%d\n", falselabel);
	}
}

void arch_cmp_greaterthan_const(struct symbol* type, int truelabel, int falselabel,
		struct symbol* sym, int32_t value)
{
	int width = type->u.type.width;
	if (type->u.type.issigned)
		fatal("can't compare signed values yet");
	else
	{
		switch (type->u.type.width)
		{
			case 1:
				vpop_reg(width, REG_HL);
				printf(" mvi a, %u\n", value & 0xff);
				printf(" cpi h\n", value & 0xff);
				break;

			case 2:
				vpop_reg(width, REG_DE);
				printf(" lxi h, %u\n", (-value) & 0xffff);
				printf(" dad d\n");
				break;

			default:
				assert(false);
		}

		printf(" jc x%d\n", truelabel);
		printf(" jmp x%d\n", falselabel);
	}
}

void arch_cmp_greaterthan(struct symbol* type, int truelabel, int falselabel)
{
	int width = type->u.type.width;
	if (type->u.type.issigned)
		fatal("can't compare signed values yet");
	else
	{
		switch (type->u.type.width)
		{
			case 1:
				vpop_reg(width, REG_A); /* rhs */
				vpop_reg(width, REG_HL); /* lhs */
				printf(" cmp h\n");
				/* C set if rhs < lhs */
				break;

			case 2:
				vpop_reg(width, REG_HL); /* rhs */
				vpop_reg(width, REG_DE); /* lhs */
				printf(" mov a, l\n");
				printf(" sub e\n");
				printf(" mov a, h\n");
				printf(" sbb d\n");
				/* C set if rhs < lhs */
				break;

			default:
				assert(false);
		}

		printf(" jc x%d\n", truelabel);
		printf(" jmp x%d\n", falselabel);
	}
}

void arch_assign_var(struct symbol* type, struct symbol* var, int32_t offset)
{
	int width = type->u.type.width;
	switch (width)
	{
		case 1:
			vpop_reg(width, REG_A);
			printf(" sta %s\n", varref("", var, offset));
			break;

		case 2:
			vpop_reg(width, REG_HL);
			printf(" shld %s\n", varref("", var, offset));
			break;

		default:
			assert(false);
	}
}

void arch_assign_ptr(struct symbol* ptrtype)
{
	int width = ptrtype->u.type.element->u.type.width;
	switch (width)
	{
		case 1:
			vpop_reg(width, REG_A);
			vpop_reg(2, REG_HL);
			printf(" mov m, a\n");
			break;

		case 2:
			vpop_reg(width, REG_DE);
			vpop_reg(2, REG_HL);
			printf(" mov m, e\n");
			printf(" inx h\n");
			printf(" mov m, d\n");
			break;

		default:
			assert(false);
	}
}

void arch_asm_start(void)
{
}

void arch_asm_string(const char* s)
{
	printf("%s", s);
}

void arch_asm_symbol(struct symbol* sym)
{
	printf(" w_%s+%d ", sym->u.var.sub->name, sym->u.var.offset);
}

void arch_asm_end(void)
{
	printf("\n");
}
#endif
