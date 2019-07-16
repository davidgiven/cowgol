#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
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

void vpush_raw(void)
{
	if (sp == STACK_DEPTH)
		fatal("vstack overflow");
	struct slot* slot = &vstack[sp++];

	slot->kind = SLOT_STACKED;
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
				printf(" mvi a, %u\n", slot->u.constvalue & 0xff);
			else
				printf(" lxi %s, %u\n", regname(reg), slot->u.constvalue);
			break;

		case SLOT_ADDR:
			printf(" lxi %s w_%s+%d ; %s\n",
				regname(reg),
				slot->u.sym->u.var.sub->name, slot->u.sym->u.var.offset,
				slot->u.sym->name);
			break;

		case SLOT_VALUE:
			if (reg == REG_BC)
				fatal("can't rematerialise values into BC");

			if (reg == REG_A)
			{
				printf(" lda w_%s+%d ; %s\n",
					slot->u.sym->u.var.sub->name, slot->u.sym->u.var.offset,
					slot->u.sym->name);
			}
			else
			{
				if (reg == REG_DE)
					printf(" xchg\n");
				printf(" lhld w_%s+%d ; %s\n",
					slot->u.sym->u.var.sub->name, slot->u.sym->u.var.offset,
					slot->u.sym->name);
				if (reg == REG_DE)
					printf(" xchg\n");
			}
			break;
	}
}

void arch_file_prologue(void)
{
	printf(" org 100h\n");
}

void arch_file_epilogue(void)
{
	printf(
		"f_putc:\n"
		"  pop h\n"
		"  xthl\n"
		"  mvi c, 2\n"
		"  mov e, h\n"
		"  jmp 5\n");
	putchar(26);
}

void arch_subroutine_prologue(void)
{
	arch_emit_jump(current_sub->label_after);
	printf("f_%s:\n", current_sub->name);

	if (current_sub->inputparameters != 0)
	{
		printf(" pop b\n");
		for (int i=current_sub->inputparameters-1; i>=0; i--)
		{
			struct symbol* param = current_sub->firstsymbol;
			for (int j=0; j<i; j++)
				param = param->next;

			printf(" pop h\n");
			varaccess("shld", param);
		}
		printf(" push b\n");
	}
}

void arch_subroutine_epilogue(void)
{
	printf(" ret\n");
	printf("w_%s: ds %d\n", current_sub->name, current_sub->workspace);
	arch_emit_label(current_sub->label_after);
}

void arch_emit_label(int label)
{
	printf("x%d:\n", label);
}

void arch_emit_jump(int label)
{
	printf(" jmp x%d\n", label);
}

void arch_push_input_param(struct symbol* type)
{
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_A);
			printf(" push psw\n");
			break;

		case 2:
			vpop_reg(REG_HL);
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

void arch_push_value(struct symbol* sym)
{
	vpush_value(sym);
}

void arch_dereference(struct symbol* ptrtype)
{
	vpop_reg(REG_HL);

	switch (ptrtype->u.type.pointingat->u.type.width)
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

void arch_add_const(struct symbol* type, int32_t value)
{
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_A);
			if (value == 1)
				printf(" inr a\n");
			else if (value == -1)
				printf(" dcr a\n");
			else
				printf(" adi %d\n", value);
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(REG_HL);
			if (value == 1)
				printf(" inx h\n");
			else if (value == -1)
				printf(" dcx h\n");
			else
			{
				printf(" lxi b, %d\n", value);
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
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_A);
			vpop_reg(REG_HL);
			printf(" add h\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(REG_HL);
			vpop_reg(REG_DE);
			printf(" dad d\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_subfrom_const(struct symbol* type, int32_t value)
{
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_HL);
			printf(" mvi a, %u\n", value & 0xff);
			printf(" sub h\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(REG_HL);
			printf(" mvi a, %u\n", value & 0xff);
			printf(" sub l\n");
			printf(" mov l, a\n");
			printf(" mvi a, %u\n", (value >> 8) & 0xff);
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
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_DE);
			vpop_reg(REG_A);
			printf(" sub d\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(REG_DE);
			vpop_reg(REG_HL);
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
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_A);
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
			vpop_reg(REG_HL);
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
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_A);
			vpop_reg(REG_DE);
			printf(" call mul8\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(REG_HL);
			vpop_reg(REG_DE);
			printf(" call mul16\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_div_const(struct symbol* type, int32_t value)
{
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_A);
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
			vpop_reg(REG_HL);
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
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_A);
			printf(" mvi d, %u\n", value & 0xff);
			printf(" call div8\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(REG_HL);
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
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_DE);
			vpop_reg(REG_A);
			printf(" call div8\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(REG_DE);
			vpop_reg(REG_HL);
			printf(" call div16\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_rem_const(struct symbol* type, int32_t value)
{
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_A);
			printf(" mvi d, %u\n", value & 0xff);
			printf(" call rem8\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(REG_HL);
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
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_A);
			printf(" mvi d, %u\n", value & 0xff);
			printf(" call rem8\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(REG_HL);
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
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_DE);
			vpop_reg(REG_A);
			printf(" call rem8\n");
			vpush_reg(REG_A);
			break;

		case 2:
			vpop_reg(REG_DE);
			vpop_reg(REG_HL);
			printf(" call rem16\n");
			vpush_reg(REG_HL);
			break;

		default:
			assert(false);
	}
}

void arch_cmp_equals_const(struct symbol* type, int truelabel, int falselabel, int32_t value)
{
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_A);
			if (value == 0)
				printf(" ora a\n");
			else
				printf(" cpi %u\n", value & 0xff);
			break;

		case 2:
			vpop_reg(REG_HL);
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
	switch (type->u.type.width)
	{
		case 1:
			vpop_reg(REG_HL);
			vpop_reg(REG_A);
			printf(" cmp b\n");
			break;

		case 2:
			vpop_reg(REG_HL);
			vpop_reg(REG_BC);
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

void arch_assign_var(struct symbol* var)
{
	switch (var->u.var.type->u.type.width)
	{
		case 1:
			vpop_reg(REG_A);
			varaccess("sta", var);
			break;

		case 2:
			vpop_reg(REG_HL);
			varaccess("shld", var);
			break;

		default:
			assert(false);
	}
}

void arch_assign_ptr(struct symbol* ptrtype)
{
	switch (ptrtype->u.type.pointingat->u.type.width)
	{
		case 1:
			vpop_reg(REG_A);
			vpop_reg(REG_HL);
			printf(" mov m, a\n");
			break;

		case 2:
			vpop_reg(REG_DE);
			vpop_reg(REG_HL);
			printf(" mov m, e\n");
			printf(" inx h\n");
			printf(" mov m, d\n");
			break;

		default:
			assert(false);
	}
}
