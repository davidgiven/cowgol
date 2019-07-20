#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
#include "globals.h"

static int id = 1;
static int sp = 0;
static FILE* datafp;
static FILE* codefp;

static char label[64];

struct constant
{
    struct constant* next;
    int id;
    const char* value;
};

struct constant* constants = NULL;

static int add_constant(const char* s, ...)
{
    char buffer[64];
    va_list ap;
	va_start(ap, s);
    vsnprintf(buffer, sizeof(buffer), s, ap);
	va_end(ap);

    struct constant* c = constants;
    while (c)
    {
        if (strcmp(c->value, buffer) == 0)
            return c->id;
        c = c->next;
    }

    c = calloc(1, sizeof(struct constant));
    c->id = id++;
    c->next = constants;
    c->value = strdup(buffer);
    constants = c;
    return c->id;
}

static int add_num_constant(int32_t val)
{
    return add_constant("DEC %d", val);
}

static int add_sym_constant(struct symbol* sym, int32_t off)
{
    if (!sym)
        return add_num_constant(off);
    else
        return add_constant("TC W%d + %d",
            sym->u.var.sub->id,
            sym->u.var.offset + off);
}

void elabel(const char* s, ...)
{
	va_list ap;
    bool labelcloning = (label[0] != 0);

    if (labelcloning)
        fprintf(codefp, "%-9s = ", label);

	va_start(ap, s);
    vsnprintf(label, sizeof(label), s, ap);
	va_end(ap);

    if (labelcloning)
        fprintf(codefp, "%s\n", label);
}

void ecode(const char* s, ...)
{
	va_list ap;

	va_start(ap, s);
    fprintf(codefp, "%-10s", label);
    vfprintf(codefp, s, ap);
    fprintf(codefp, "\n");
	va_end(ap);

    label[0] = 0;
}

void edata(const char* s, ...)
{
	va_list ap;

	va_start(ap, s);
    fprintf(datafp, "%-10s", label);
    vfprintf(datafp, s, ap);
    fprintf(datafp, "\n");
	va_end(ap);

    label[0] = 0;
}

static int push(void)
{
    sp++;
    if (sp > current_sub->maxsp)
        current_sub->maxsp = sp;
    return sp-1;
}

static int pop(void)
{
    sp--;
    return sp;
}

void arch_file_prologue(void)
{
    datafp = fopen("cow.data.agc", "w");
    codefp = fopen("cow.code.agc", "w");

    intptr_type = make_number_type("int15", 1, true);
}

void arch_file_epilogue(void)
{
    struct constant* c = constants;
    while (c)
    {
        elabel("C%d", c->id);
        ecode("%s", c->value);
        c = c->next;
    }

    fclose(datafp);
    fclose(codefp);
}

void arch_subroutine_prologue(void)
{
    current_sub->id = id++;

    ecode("");
    ecode("# %s", current_sub->name);
    elabel("F%d", current_sub->id);
    ecode("EXTEND");
    ecode("QXCH Q%d", current_sub->id);

    if (current_sub->inputparameters != 0)
    {
        ecode("TS Q");
        for (int i=0; i<current_sub->inputparameters; i++)
        {
            ecode("INDEX Q");
            ecode("CA %d", i);
            ecode("TS W%d + %d", current_sub->id, i);
        }
    }
}

void arch_subroutine_epilogue(void)
{
    arch_return();

    elabel("Q%d", current_sub->id);
    edata("ERASE");

    if (current_sub->workspace != 0)
    {
        elabel("W%d", current_sub->id);
        edata("ERASE %d", current_sub->workspace - 1);
    }

    if (current_sub->maxsp != 0)
    {
        elabel("S%d", current_sub->id);
        edata("ERASE %d", current_sub->maxsp - 1);
    }

    ecode("");
}

void arch_emit_label(int label)
{
    elabel("X%d", label);
}

void arch_label_alias(int fakelabel, int reallabel)
{
    if (label[0])
        ecode("SUBRO");

    elabel("X%d", fakelabel);
    ecode("= X%d", reallabel);
}

void arch_emit_jump(int label)
{
    ecode("TCF X%d", label);
}

void arch_push_input_param(struct symbol* type)
{
}

void arch_emit_call(struct subroutine* sub)
{
    sp -= sub->inputparameters;
    ecode("CAF C%d", add_constant("TC S%d + %d", current_sub->id, sp));
    ecode("TC F%d       # %s", sub->id, sub->name);
}

void arch_return(void)
{
    ecode("EXTEND");
    ecode("QXCH Q%d", current_sub->id);
    ecode("RETURN");
}

void arch_push_constant(struct symbol* sym, int32_t off)
{
    ecode("CAF C%d", add_sym_constant(sym, off));
    ecode("TS S%d + %d", current_sub->id, push());
}

void arch_push_string_constant(const char* text)
{
    fatal(__FUNCTION__);
}

void arch_push_value(struct symbol* sym, int32_t off)
{
    ecode("CAE W%d + %d       # %s",
        sym->u.var.sub->id, sym->u.var.offset + off,
        sym->name);
    ecode("TS S%d + %d", current_sub->id, push());
}

void arch_dereference(struct symbol* ptrtype)
{
    ecode("CAE S%d + %d", current_sub->id, pop());
    ecode("INDEX A");
    ecode("CAE 0");
    ecode("TS S%d + %d", current_sub->id, push());
}

void arch_add_const(struct symbol* type, struct symbol* sym, int32_t off)
{
    if (!sym && (off == 1))
        ecode("INCR S%d + %d", current_sub->id, sp-1);
    else
    {
        ecode("CAF C%d", add_sym_constant(sym, off));
        ecode("ADS S%d + %d", current_sub->id, sp-1);
    }
}

void arch_add(struct symbol* type)
{
    ecode("CAE S%d + %d", current_sub->id, pop());
    ecode("ADS S%d + %d", current_sub->id, sp-1);
}

void arch_subfrom_const(struct symbol* type, struct symbol* sym, int32_t off)
{
    ecode("CAF C%d", add_sym_constant(sym, off));
    ecode("EXTEND");
    ecode("SU S%d + %d", current_sub->id, sp-1);
    ecode("XCH S%d + %d", current_sub->id, sp-1);
}

void arch_sub(struct symbol* type)
{
    ecode("CAE S%d + %d", current_sub->id, sp-2);
    ecode("EXTEND");
    ecode("SU S%d + %d", current_sub->id, sp-1);
    sp -= 2;
    ecode("XCH S%d + %d", current_sub->id, push());
}

void arch_mul_const(struct symbol* type, int32_t value)
{
    if (value == 1)
        return;

    ecode("CAE S%d + %d", current_sub->id, pop());
    ecode("EXTEND");
    ecode("MP C%d", add_num_constant(value));
    ecode("LXCH S%d + %d", current_sub->id, push());
}

void arch_mul(struct symbol* type)
{
    fatal(__FUNCTION__);
}

void arch_div_const(struct symbol* type, int32_t value)
{
    int dodivlabel = current_label++;
    int donelabel = current_label++;

    ecode("CAF C%d", add_num_constant(abs(value)));
    ecode("TS L");
    ecode("CAE S%d + %d", current_sub->id, sp-1);
    ecode("MASK C%d", add_num_constant(0x3fff));
    ecode("EXTEND");
    ecode("SU L");
    ecode("CCS A");
    arch_emit_jump(dodivlabel);
    ecode("NOOP");
    ecode("NOOP");
    ecode("NOOP");
    ecode("CA ZERO");
    arch_emit_jump(donelabel);

    arch_emit_label(dodivlabel);
    ecode("CAF C%d", add_num_constant(value));
    ecode("TS Q");
    ecode("LXCH S%d + %d", current_sub->id, sp-1);
    ecode("CAE ZERO");
    ecode("EXTEND");
    ecode("DV Q"); /* A:L / Q */
    arch_emit_label(donelabel);

    ecode("TS S%d + %d", current_sub->id, sp-1);
}

void arch_div_const_by(struct symbol* type, int32_t value)
{
    fatal(__FUNCTION__);
}

void arch_div(struct symbol* type)
{
    fatal(__FUNCTION__);
}

void arch_rem_const(struct symbol* type, int32_t value)
{
    fatal(__FUNCTION__);
}

void arch_rem_const_by(struct symbol* type, int32_t value)
{
    fatal(__FUNCTION__);
}

void arch_rem(struct symbol* type)
{
    fatal(__FUNCTION__);
}

void arch_logicop_const(struct symbol* type, int32_t value, int logicop)
{
    switch (logicop)
    {
        case LOGICOP_AND:
            ecode("CAE S%d + %d", current_sub->id, sp-1);
            ecode("MASK C%d", add_num_constant(value));
            ecode("XCH S%d + %d", current_sub->id, sp-1);
            break;

        case LOGICOP_OR:
            ecode("LXCH S%d + %d", current_sub->id, sp-1);
            ecode("CAE C%d", add_num_constant(value));
            ecode("ROR L");
            ecode("XCH S%d + %d", current_sub->id, sp-1);
            break;
            
        case LOGICOP_XOR:
            ecode("LXCH S%d + %d", current_sub->id, sp-1);
            ecode("CAE C%d", add_num_constant(value));
            ecode("RXOR L");
            ecode("XCH S%d + %d", current_sub->id, sp-1);
            break;
    }
}

void arch_logicop(struct symbol* type, int logicop)
{
    switch (logicop)
    {
        case LOGICOP_AND:
            ecode("CAE S%d + %d", current_sub->id, pop());
            ecode("MASK S%d + %d", current_sub->id, sp-1);
            ecode("XCH S%d + %d", current_sub->id, sp-1);
            break;

        case LOGICOP_OR:
            ecode("LXCH S%d + %d", current_sub->id, pop());
            ecode("CAE S%d + %d", current_sub->id, sp-1);
            ecode("EXTEND");
            ecode("ROR L");
            ecode("XCH S%d + %d", current_sub->id, sp-1);
            break;
            
        case LOGICOP_XOR:
            ecode("LXCH S%d + %d", current_sub->id, pop());
            ecode("CAE S%d + %d", current_sub->id, sp-1);
            ecode("EXTEND");
            ecode("RXOR L");
            ecode("XCH S%d + %d", current_sub->id, sp-1);
            break;
    }
}

void arch_cmp_equals_const(struct symbol* type, int truelabel, int falselabel,
		struct symbol* sym, int32_t off)
{
    if (!sym && (off == 0))
    {
        ecode("CAE S%d + %d", current_sub->id, pop());
        ecode("EXTEND");
        ecode("BZF X%d", truelabel);
        ecode("TCF X%d", falselabel);
    }
    else
    {
        ecode("CAF C%d", add_sym_constant(sym, off));
        ecode("TS L");
        ecode("CAE S%d + %d", current_sub->id, pop());
        ecode("EXTEND");
        ecode("SU L");
        ecode("CCS A");
        arch_emit_jump(falselabel);
        arch_emit_jump(truelabel);
        arch_emit_jump(falselabel);
        arch_emit_jump(truelabel);
    }
}

void arch_cmp_equals(struct symbol* type, int truelabel, int falselabel)
{
    fatal(__FUNCTION__);
}

void arch_cmp_lessthan_const(struct symbol* type, int truelabel, int falselabel,
		struct symbol* sym, int32_t off)
{
    if (!sym && (off == 0))
    {
        ecode("CCS S%d + %d", current_sub->id, pop());
    }
    else
    {
        ecode("CAF C%d", add_sym_constant(sym, off));
        ecode("TS L");
        ecode("CAE S%d + %d", current_sub->id, pop());
        ecode("EXTEND");
        ecode("SU L");
        ecode("CCS A");
    }
    arch_emit_jump(falselabel);
    arch_emit_jump(falselabel);
    arch_emit_jump(truelabel);
    arch_emit_jump(falselabel);
}

void arch_cmp_lessthan(struct symbol* type, int truelabel, int falselabel)
{
    fatal(__FUNCTION__);
}

void arch_cmp_greaterthan_const(struct symbol* type, int truelabel, int falselabel,
		struct symbol* sym, int32_t off)
{
    if (!sym && (off == 0))
    {
        ecode("CCS S%d + %d", current_sub->id, pop());
    }
    else
    {
        ecode("CAF C%d", add_sym_constant(sym, off));
        ecode("TS L");
        ecode("CAE S%d + %d", current_sub->id, pop());
        ecode("EXTEND");
        ecode("SU L");
        ecode("CCS A");
    }
    arch_emit_jump(truelabel);
    arch_emit_jump(falselabel);
    arch_emit_jump(falselabel);
    arch_emit_jump(falselabel);
}

void arch_cmp_greaterthan(struct symbol* type, int truelabel, int falselabel)
{
    fatal(__FUNCTION__);
}

void arch_assign_var(struct symbol* type, struct symbol* var, int32_t offset)
{
    ecode("CAE S%d + %d", current_sub->id, pop());
    ecode("TS W%d + %d       # %s",
        var->u.var.sub->id, var->u.var.offset + offset,
        var->name);
}

void arch_assign_ptr(struct symbol* ptrtype)
{
    ecode("CAE S%d + %d", current_sub->id, pop());
    ecode("LXCH S%d + %d", current_sub->id, pop());
    ecode("INDEX L");
    ecode("TS 0");
}

void arch_asm_start(void)
{
    fprintf(codefp, "%-9s", label);
    label[0] = 0;
}

void arch_asm_string(const char* s)
{
    fprintf(codefp, " %s ", s);
}

void arch_asm_symbol(struct symbol* var)
{
    fprintf(codefp, " W%d + %d ",
        var->u.var.sub->id, var->u.var.offset,
        var->name);
}

void arch_asm_end(void)
{
    fprintf(codefp, "\n");
}
