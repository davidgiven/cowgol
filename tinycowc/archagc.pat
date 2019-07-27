#include <string.h>
#include <stdarg.h>
#include "globals.h"
#include "midcode.h"
#include "emitter.h"

#define E emitter_printf

struct subarch
{
    int id;
    int maxsp;
};

struct constant
{
    struct constant* next;
    int id;
    const char* value;
};

struct constant* constants = NULL;
static int id = 1;
static int sp = 0;
static int datap = 0;
static bool tos;

void arch_init_types(void)
{
	intptr_type = make_number_type("int15", 1, true);
	make_number_type("int30", 2, true);
}

void arch_init_subroutine(struct subroutine* sub)
{
    sub->arch = calloc(1, sizeof(struct subarch));
    sub->arch->id = id++;
}

void arch_init_variable(struct symbol* var)
{
}

void arch_emit_comment(const char* text)
{
    E("\t# %s\n", text);
}

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
        return add_constant("TC W%d + %#o",
            sym->u.var.sub->arch->id,
            sym->u.var.offset + off);
}

static void evict(void)
{
    if (tos)
        E("\tXCH S%d +%#o\n", current_sub->arch->id, sp-1);
    tos = false;
}

static void unvict(void)
{
    if (!tos)
        E("\tXCH S%d +%#o\n", current_sub->arch->id, sp-1);
    tos = true;
}

static void push(int delta)
{
    sp += delta;
    if (sp > current_sub->arch->maxsp)
        current_sub->arch->maxsp = sp;
}

static void pop(int delta)
{
    sp -= delta;
}

%%

constant(int32_t val) = ("%d", $$.val)
address(struct symbol* sym, int32_t off) = ("%s+%d", $$.sym->name, $$.off)
var(struct symbol* sym, int32_t off) = ("%s+%d", $$.sym->name, $$.off)
i1
i2

%%

STARTFILE --
    emitter_open_chunk();
    E("\tTCF F%d\n", current_sub->arch->id);
    emitter_close_chunk();

ENDFILE --
    while (constants)
    {
        E("C%d\n", constants->id);
        E("\t%s\n", constants->value);
        constants = constants->next;
    }

STARTSUB(sub) --
    emitter_open_chunk();
    E("\n");
    E("\t# %s\n", sub->name);
    E("F%d\n", sub->arch->id);
    E("\tEXTEND\n");
    E("\tQXCH Q%d\n", sub->arch->id);

    if (sub->inputparameters != 0)
    {
        E("\tTS Q\n");
        for (int i=0; i<sub->inputparameters; i++)
        {
            E("\tINDEX Q\n");
            E("\tCA %#o\n", i);
            E("\tTS W%d + %#o\n", sub->arch->id, i);
        }
    }

    tos = false;

ENDSUB(sub) --
    E("\tCAE Q%d\n", sub->arch->id);
    E("\tTS Z\n");
    E("Q%d\tEQUALS COWDATA +%#o\n", sub->arch->id, datap);
    datap++;
    
    if (sub->arch->maxsp)
    {
        E("S%d\tEQUALS COWDATA +%#o\n", sub->arch->id, sub->arch->maxsp);
        datap += sub->arch->maxsp;
    }

    if (sub->workspace)
    {
        E("W%d\tEQUALS COWDATA +%#o\n", sub->arch->id, datap);
        datap += sub->workspace;
    }
    
    emitter_close_chunk();

JUMP(label) --
    E("\tTCF X%d\n", label);

CONSTANT(val) -- constant(val)

ADDRESS(sym) -- address(sym, 0)

address(sym, off) constant(val) ADD(1) -- address(sym, newoff)
    newoff = off + val;

address(sym, off) LOAD(1) -- var(sym, off)

i1 LOAD(1) -- i1
    unvict();
    E("\tINDEX A\n");
    E("\tCAE 0\n");

address(sym, off) i1 STORE(1) --
    unvict();
    E("\tXCH W%d +%#o\n", sym->u.var.sub->arch->id, sym->u.var.offset + off);
    pop(1);

address(sym, off) constant(n) STORE(1) --
    evict();
    E("\tCAF C%d\n", add_num_constant(n));
    E("\tXCH W%d +%#o\n", sym->u.var.sub->arch->id, sym->u.var.offset + off);

i1 i1 STORE(1) --
    unvict();
    E("\tINDEX S%d + %#o\n", current_sub->arch->id, sp-2);
    E("\tXCH A\n");
    pop(2);

i1 i1 ADD(1) -- i1
    unvict();
    E("\tAD S%d +%#o\n", current_sub->arch->id, sp-2);
    pop(1);
    
i1 i1 SUB(1) -- i1
    unvict();
    E("\tXCH S%d +%#o\n", current_sub->arch->id, sp-2);
    E("\tEXTEND\n");
    E("\tSU S%d +%#o\n", current_sub->arch->id, sp-2);
    pop(1);
    
i1 constant(n) ADD(1) -- i1
    unvict();
    E("\tAD C%d\n", add_num_constant(n));

var(sym, off) constant(n) ADD(1) -- i1
    evict();
    E("\tCAF C%d\n", add_num_constant(n));
    E("\tAD W%d +%#o\n", sym->u.var.sub->arch->id, sym->u.var.offset + off);
    tos = true;
    push(1);

address(sym, off) i1 ADD(1) -- i1
    unvict();
    E("\tAD C%d\n", add_sym_constant(sym, off));

constant(1) MUL(n) --

constant(x) NEG(n) -- constant(result)
    result = -x;

var(sym, off) -- i1
    evict();
    E("\tCA W%d +%#o\n", sym->u.var.sub->arch->id, sym->u.var.offset + off);
    tos = true;
    push(1);
