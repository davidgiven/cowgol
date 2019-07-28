#include <string.h>
#include <bsd/string.h>
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
static char tokenbuffer[64];
static char asmbuffer[80];

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

static void stackisempty(void)
{
    if ((sp != 0) || tos)
        fatal("stray values on stack");
}

static const char* constref(int constantid)
{
    snprintf(tokenbuffer, sizeof(tokenbuffer), "C%d", constantid);
    return tokenbuffer;
}

static const char* symref(struct symbol* sym, int32_t off)
{
    snprintf(tokenbuffer, sizeof(tokenbuffer), "W%d +%#o",
        sym->u.var.sub->arch->id, sym->u.var.offset + off);
    return tokenbuffer;
}

static const char* stackref(int off)
{
    snprintf(tokenbuffer, sizeof(tokenbuffer), "S%d +%#o",
        current_sub->arch->id, sp+off);
    return tokenbuffer;
}

static const char* labelref(int label)
{
    snprintf(tokenbuffer, sizeof(tokenbuffer), "X%d", label);
    return tokenbuffer;
}

%%

constant(int32_t val) = ("%d", $$.val)
address(struct symbol* sym, int32_t off) = ("%s+%d", $$.sym->name, $$.off)
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
    stackisempty();
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
        E("S%d\tEQUALS COWDATA +%#o   # %d\n", sub->arch->id, datap, sub->arch->maxsp);
        datap += sub->arch->maxsp;
    }

    if (sub->workspace)
    {
        E("W%d\tEQUALS COWDATA +%#o   # %d\n", sub->arch->id, datap, sub->workspace);
        datap += sub->workspace;
    }
    
    emitter_close_chunk();

JUMP(label) --
    stackisempty();
    E("\tTCF %s\n", labelref(label));

LABEL(label) --
    stackisempty();
    E("%s\n", labelref(label));

LABELALIAS(newlabel, oldlabel) --
    E("%s\t", labelref(newlabel));
    E("= %s\n", labelref(oldlabel));

CONSTANT(val) -- constant(val)

ADDRESS(sym) -- address(sym, 0)

// --- Function calls -------------------------------------------------------

i1 PARAM(1) -- i1

constant(n) PARAM(1) -- i1
    evict();
    E("\tCAF %s\n", constref(add_num_constant(n)));
    tos = true;
    push(1);

CALL(sub) --
    evict();
    if (sub->inputparameters != 0)
    {
        pop(sub->inputparameters);
        vsp -= sub->inputparameters;
        E("\tCAF %s\n", constref(add_constant("TC %s", stackref(0))));
    }
    E("\tTC F%d\n", sub->arch->id);

// --- Adds -----------------------------------------------------------------

address(sym, off) constant(val) ADD(1) -- address(sym, newoff)
    newoff = off + val;

i1 i1 ADD(1) -- i1
    unvict();
    E("\tAD S%d +%#o\n", current_sub->arch->id, sp-2);
    pop(1);
    
i1 constant(n) ADD(1) -- i1
    unvict();
    E("\tAD %s\n", constref(add_num_constant(n)));

address(sym, off) i1 ADD(1) -- i1
    unvict();
    E("\tAD %s\n", constref(add_sym_constant(sym, off)));

// --- Subtractions ---------------------------------------------------------

i1 i1 SUB(1) -- i1
    unvict();
    E("\tXCH S%d +%#o\n", current_sub->arch->id, sp-2);
    E("\tEXTEND\n");
    E("\tSU S%d +%#o\n", current_sub->arch->id, sp-2);
    pop(1);

i1 constant(n) SUB(1) -- i1
    unvict();
    E("\tAD %s\n", constref(add_num_constant(-n)));

// --- Multiplications ------------------------------------------------------

i1 constant(n) MUL(1) -- i1
    unvict();
    E("\tEXTEND\n");
    E("\tMP %s\n", constref(add_num_constant(n)));
    E("\tXCH L\n");

constant(1) MUL(1) --

constant(-1) MUL(1) -- NEG(1)

constant(x1) constant(x2) MUL(n) -- constant(result)
    result = x1 * x2;

i1 NEG(1) -- i1
    unvict();
    E("\tCOM\n");

constant(x) NEG(n) -- constant(-x)

// --- Divisions ------------------------------------------------------------

i1 constant(n) DIV(1) -- i1
    evict();
    E("\tCAF %s\n", constref(add_num_constant(n)));
    E("\tTS L\n");
    E("\tCAE %s\n", stackref(-1));
    E("\tTC DIV\n");

constant(1) DIV(1) --

constant(-1) DIV(1) -- NEG(1)

// --- Logic operations -----------------------------------------------------

i1 i1 AND(1) -- i1
    unvict();
    E("\tMASK %s\n", stackref(-2));
    pop(1);

i1 constant(n) AND(1) -- i1
    unvict();
    E("\tMASK %s\n", constref(add_num_constant(n)));

i1 i1 OR(1) -- i1
    unvict();
    E("\tXCH L\n");
    E("\tCAE %s\n", stackref(-2));
    E("\tEXTEND\n");
    E("\tROR L\n");
    pop(1);

i1 constant(n) OR(1) -- i1
    unvict();
    E("\tXCH L\n");
    E("\tCAF %s\n", constref(add_num_constant(n)));
    E("\tEXTEND\n");
    E("\tROR L\n");

// --- Loads ----------------------------------------------------------------

i1 LOAD(1) -- i1
    unvict();
    E("\tINDEX A\n");
    E("\tCAE 0\n");

address(sym, off) LOAD(1) -- i1
    evict();
    E("\tCAE %s\n", symref(sym, off));
    tos = true;
    push(1);

// --- Stores ---------------------------------------------------------------

address(sym, off) i1 STORE(1) --
    unvict();
    E("\tXCH W%d +%#o\n", sym->u.var.sub->arch->id, sym->u.var.offset + off);
    tos = false;
    pop(1);
    stackisempty();

address(sym, off) constant(n) STORE(1) --
    evict();
    E("\tCAF %s\n", constref(add_num_constant(n)));
    E("\tXCH W%d +%#o\n", sym->u.var.sub->arch->id, sym->u.var.offset + off);
    tos = false;
    stackisempty();

i1 i1 STORE(1) --
    unvict();
    E("\tINDEX %s\n", stackref(-2));
    E("\tXCH A\n");
    tos = false;
    pop(2);
    stackisempty();

// --- Branches -------------------------------------------------------------

i1 constant(0) BEQ(1, truelabel, falselabel) --
    unvict();
    E("\tEXTEND\n");
    E("\tBZF %s\n", labelref(truelabel));
    E("\tTCF %s\n", labelref(falselabel));
    pop(1);
    tos = false;
    stackisempty();

i1 constant(0) BLT(1, truelabel, falselabel) --
    unvict();
    E("\tCCS A\n");
    E("\tTCF %s\n", labelref(falselabel));
    E("\tTCF %s\n", labelref(falselabel));
    E("\tTCF %s\n", labelref(truelabel));
    E("\tTCF %s\n", labelref(falselabel));
    pop(1);
    tos = false;
    stackisempty();

i1 constant(0) BGT(1, truelabel, falselabel) --
    unvict();
    E("\tCCS A\n");
    E("\tTCF %s\n", labelref(truelabel));
    E("\tTCF %s\n", labelref(falselabel));
    E("\tTCF %s\n", labelref(falselabel));
    E("\tTCF %s\n", labelref(falselabel));
    pop(1);
    tos = false;
    stackisempty();

constant(n) BEQ(1, truelabel, falselabel) -- constant(n) SUB(1) CONSTANT(0) BEQ(1, truelabel, falselabel)
    if (n == 0)
        REJECT;

constant(n) BLT(1, truelabel, falselabel) -- constant(n) SUB(1) CONSTANT(0) BLT(1, truelabel, falselabel)
    if (n == 0)
        REJECT;

constant(n) BGT(1, truelabel, falselabel) -- constant(n) SUB(1) CONSTANT(0) BGT(1, truelabel, falselabel)
    if (n == 0)
        REJECT;

// --- Inline assembly ------------------------------------------------------

ASMSTART --
    stackisempty();
    asmbuffer[0] = '\0';

ASMTEXT(text) --
    strlcat(asmbuffer, text, sizeof(asmbuffer));
    strlcat(asmbuffer, " ", sizeof(asmbuffer));

ASMSYMBOL(sym) --
    strlcat(asmbuffer, symref(sym, 0), sizeof(asmbuffer));
    strlcat(asmbuffer, " ", sizeof(asmbuffer));

ASMEND --
    E("\t%s\n", asmbuffer);

