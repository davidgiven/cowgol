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
    struct symbol* sym;
    int32_t off;
};

struct constant* constants = NULL;

static int add_constant(struct symbol* sym, int32_t off)
{
    struct constant* c = constants;
    while (c)
    {
        if ((c->sym == sym) && (c->off == off))
            return c->id;
        c = c->next;
    }

    c = calloc(1, sizeof(struct constant));
    c->id = id++;
    c->sym = sym;
    c->off = off;
    c->next = constants;
    constants = c;
    return c->id;
}

void elabel(const char* s, ...)
{
	va_list ap;

    if (label[0])
        fatal("two labels emitted in a row");

	va_start(ap, s);
    vsnprintf(label, sizeof(label), s, ap);
	va_end(ap);
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
        assert(!c->sym);
        ecode("DEC %d", c->off);
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
}

void arch_subroutine_epilogue(void)
{
    ecode("EXTEND");
    ecode("QXCH Q%d", current_sub->id);
    ecode("RETURN");

    elabel("Q%d", current_sub->id);
    edata("ERASE");

    elabel("W%d", current_sub->id);
    edata("ERASE %d", current_sub->workspace - 1);

    elabel("S%d", current_sub->id);
    edata("ERASE %d", current_sub->maxsp - 1);
}

void arch_emit_label(int label)
{
    elabel("X%d", label);
}

void arch_label_alias(int fakelabel, int reallabel)
{
    elabel("X%d", fakelabel);
    edata("EQUALS X%d", reallabel);
}

void arch_emit_jump(int label)
{
    ecode("TCF X%d", label);
}

void arch_push_input_param(struct symbol* type)
{
    fatal(__FUNCTION__);
}

void arch_emit_call(struct subroutine* sub)
{
    fatal(__FUNCTION__);
}

void arch_push_constant(struct symbol* sym, int32_t off)
{
    ecode("CAF C%d", add_constant(sym, off));
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
    fatal(__FUNCTION__);
}

void arch_add_const(struct symbol* type, struct symbol* sym, int32_t off)
{
    ecode("CAE C%d", add_constant(sym, off));
    ecode("ADS S%d + %d", current_sub->id, sp-1);
}

void arch_add(struct symbol* type)
{
    ecode("CAE S%d + %d", current_sub->id, pop());
    ecode("ADS S%d + %d", current_sub->id, sp-1);
}

void arch_subfrom_const(struct symbol* type, struct symbol* sym, int32_t off)
{
    fatal(__FUNCTION__);
}

void arch_sub(struct symbol* type)
{
    fatal(__FUNCTION__);
}

void arch_mul_const(struct symbol* type, int32_t value)
{
    fatal(__FUNCTION__);
}

void arch_mul(struct symbol* type)
{
    fatal(__FUNCTION__);
}

void arch_div_const(struct symbol* type, int32_t value)
{
    fatal(__FUNCTION__);
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
    fatal(__FUNCTION__);
}

void arch_logicop(struct symbol* type, int logicop)
{
    fatal(__FUNCTION__);
}

void arch_cmp_equals_const(struct symbol* type, int truelabel, int falselabel,
		struct symbol* sym, int32_t value)
{
    fatal(__FUNCTION__);
}

void arch_cmp_equals(struct symbol* type, int truelabel, int falselabel)
{
    fatal(__FUNCTION__);
}

void arch_cmp_lessthan_const(struct symbol* type, int truelabel, int falselabel,
		struct symbol* sym, int32_t value)
{
    fatal(__FUNCTION__);
}

void arch_cmp_lessthan(struct symbol* type, int truelabel, int falselabel)
{
    fatal(__FUNCTION__);
}

void arch_cmp_greaterthan_const(struct symbol* type, int truelabel, int falselabel,
		struct symbol* sym, int32_t value)
{
    fatal(__FUNCTION__);
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
    fatal(__FUNCTION__);
}

void arch_asm_start(void)
{
    fatal(__FUNCTION__);
}

void arch_asm_string(const char* s)
{
    fatal(__FUNCTION__);
}

void arch_asm_symbol(struct symbol* sym)
{
    fatal(__FUNCTION__);
}

void arch_asm_end(void)
{
    fatal(__FUNCTION__);
}
