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
const1(int32_t val) = ("%d", $$.val)
const2(int32_t val) = ("%d", $$.val)
address(struct symbol* sym, int32_t off) = ("%s+%d", $$.sym->name, $$.off)
i1
i2

%%

STARTFILE --

ENDFILE --
    while (constants)
    {
        E("C%d\n", constants->id);
        E("\t%s\n", constants->value);
        constants = constants->next;
    }

STARTSUB(sub) --
    if (strcmp(sub->name, "__main") == 0)
    {
        emitter_open_chunk();
        E("\tTCF F%d\n", sub->arch->id);
        emitter_close_chunk();
    }

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

JUMP(target) LABEL(label1) LABEL(label2) -- LABEL(label1) LABEL(label2)
    stackisempty();
    if ((target != label1) && (target != label2))
        E("\tTCF %s\n", labelref(target));

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

const1(n) PARAM(1) -- i1
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

address(sym, off) const1(val) ADD(1) -- address(sym, newoff)
    newoff = off + val;

i1 i1 ADD(1) -- i1
    unvict();
    E("\tAD S%d +%#o\n", current_sub->arch->id, sp-2);
    pop(1);

i1 const1(0) ADD(1) -- i1

i1 const1(1) ADD(1) -- i1
    unvict();
    E("\tINCR A\n");

i1 const1(n) ADD(1) -- i1
    unvict();
    E("\tAD %s\n", constref(add_num_constant(n)));

address(sym, off) i1 ADD(1) -- i1
    unvict();
    E("\tAD %s\n", constref(add_sym_constant(sym, off)));

address(sym1, off1) address(sym2, off2) LOAD(1) CONSTANT(1) ADD(1) STORE(1) --
    if ((sym1 != sym2) || (off1 != off2))
        REJECT;
    E("\tINCR %s\n", symref(sym1, off1));

// --- Subtractions ---------------------------------------------------------

i1 i1 SUB(1) -- i1
    unvict();
    E("\tCOM\n");
    E("\tAD %s\n", stackref(-2));
    pop(1);

const1(n) i1 SUB(1) -- i1
    unvict();
    E("\tCOM\n");
    E("\tAD %s\n", constref(add_num_constant(n)));

i1 const1(0) SUB(1) -- i1
i1 const1(n) SUB(1) -- i1 const1(-n) ADD(1)

// --- Multiplications ------------------------------------------------------

i1 i1 MUL(1) -- i1
    unvict();
    E("\tEXTEND\n");
    E("\tMP %s\n", stackref(-2));
    E("\tXCH L\n");
    pop(1);

i1 const1(2) MUL(1) -- i1
    unvict();
    E("\tAD A\n");

i1 const1(n) MUL(1) -- i1
    if (n == 2)
        REJECT;
    unvict();
    E("\tEXTEND\n");
    E("\tMP %s\n", constref(add_num_constant(n)));
    E("\tXCH L\n");

const1(n) i1 MUL(1) -- i1 const1(n) MUL(1)

constant(1) MUL(1) --

constant(-1) MUL(1) -- NEG(1)

constant(x1) constant(x2) MUL(n) -- constant(result)
    result = x1 * x2;

i1 NEG(1) -- i1
    unvict();
    E("\tCOM\n");

constant(x) NEG(n) -- constant(-x)

// --- Divisions ------------------------------------------------------------

i1 i1 DIVS(1) -- i1
    unvict();
    E("\tTS L\n");
    E("\tCAE %s\n", stackref(-2));
    E("\tTC DIV\n");
    pop(1);

constant(1) DIVS(1) --

constant(-1) DIVS(1) -- NEG(1)

// --- Logic operations -----------------------------------------------------

i1 i1 AND(1) -- i1
    unvict();
    E("\tMASK %s\n", stackref(-2));
    pop(1);

i1 const1(0) AND(1) -- const1(0)
    unvict();
    pop(1);
    tos = false;

i1 const1(n) AND(1) -- i1
    unvict();
    E("\tMASK %s\n", constref(add_num_constant(n)));

const1(n) i1 AND(1) -- i1 const1(n) AND(1)

i1 i1 OR(1) -- i1
    unvict();
    E("\tXCH L\n");
    E("\tCAE %s\n", stackref(-2));
    E("\tEXTEND\n");
    E("\tROR L\n");
    pop(1);

i1 const1(n) OR(1) -- i1
    unvict();
    E("\tXCH L\n");
    E("\tCAF %s\n", constref(add_num_constant(n)));
    E("\tEXTEND\n");
    E("\tROR L\n");

const1(n) i1 OR(1) -- i1 const1(n) OR(1)

i1 i1 EOR(1) -- i1
    unvict();
    E("\tXCH L\n");
    E("\tCAE %s\n", stackref(-2));
    E("\tEXTEND\n");
    E("\tRXOR L\n");
    pop(1);

i1 const1(n) OR(1) -- i1
    unvict();
    E("\tXCH L\n");
    E("\tCAF %s\n", constref(add_num_constant(n)));
    E("\tEXTEND\n");
    E("\tRXOR L\n");

const1(n) i1 EOR(1) -- i1 const1(n) EOR(1)

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

address(sym, off) i1 ADD(1) LOAD(1) -- i1
    unvict();
    E("\tINDEX A\n");
    E("\tCAE %s\n", symref(sym, off));

// --- Stores ---------------------------------------------------------------

address(sym, off) i1 STORE(1) --
    unvict();
    E("\tXCH W%d +%#o\n", sym->u.var.sub->arch->id, sym->u.var.offset + off);
    tos = false;
    pop(1);
    stackisempty();

address(sym, off) const1(n) STORE(1) --
    evict();
    E("\tCAF %s\n", constref(add_num_constant(n)));
    E("\tXCH W%d +%#o\n", sym->u.var.sub->arch->id, sym->u.var.offset + off);
    tos = false;
    stackisempty();

i1 i1 STORE(1) --
    unvict();
    E("\tINDEX %s\n", stackref(-2));
    E("\tXCH 0\n");
    tos = false;
    pop(2);
    stackisempty();

// --- Branches -------------------------------------------------------------

i1 const1(0) BEQS(1, truelabel, falselabel) LABEL(nextlabel) --
    unvict();
    E("\tEXTEND\n");
    E("\tBZF %s\n", labelref(truelabel));
    if (nextlabel != falselabel)
        E("\tTCF %s\n", labelref(falselabel));
    E("%s\n", labelref(nextlabel));
    pop(1);
    tos = false;
    stackisempty();

i1 const1(0) BLTS(1, truelabel, falselabel) LABEL(nextlabel) --
    unvict();
    E("\tINCR A\n");
    E("\tEXTEND\n");
    E("\tBZMF %s\n", labelref(truelabel));
    if (nextlabel != falselabel)
        E("\tTCF %s\n", labelref(falselabel));
    E("%s\n", labelref(nextlabel));
    pop(1);
    tos = false;
    stackisempty();

i1 const1(0) BGTS(1, truelabel, falselabel) LABEL(nextlabel) --
    unvict();
    E("\tEXTEND\n");
    E("\tBZMF %s\n", labelref(falselabel));
    if (nextlabel != truelabel)
        E("\tTCF %s\n", labelref(truelabel));
    E("%s\n", labelref(nextlabel));
    pop(1);
    tos = false;
    stackisempty();

BEQS(1, truelabel, falselabel) -- SUB(1) CONSTANT(0) BEQS(1, truelabel, falselabel)
BLTS(1, truelabel, falselabel) -- SUB(1) CONSTANT(0) BLTS(1, truelabel, falselabel)
BGTS(1, truelabel, falselabel) -- SUB(1) CONSTANT(0) BGTS(1, truelabel, falselabel)

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

// --- Constant type inference ----------------------------------------------

constant(c) STORE(1) -- const1(c) STORE(1)
constant(c) STORE(2) -- const2(c) STORE(2)

constant(c) PARAM(1) -- const1(c) PARAM(1)
constant(c) PARAM(2) -- const2(c) PARAM(2)

constant(c) NEG(1) -- const1(c) NEG(1)
constant(c) NEG(2) -- const2(c) NEG(2)

constant(c) ADD(1) -- const1(c) ADD(1)
constant(c) ADD(2) -- const2(c) ADD(2)
constant(c) (value) ADD(1) -- const1(c) (value) ADD(1)
constant(c) (value) ADD(2) -- const2(c) (value) ADD(2)

constant(c) SUB(1) -- const1(c) SUB(1)
constant(c) SUB(2) -- const2(c) SUB(2)
constant(c) (value) SUB(1) -- const1(c) (value) SUB(1)
constant(c) (value) SUB(2) -- const2(c) (value) SUB(2)

constant(c) MUL(1) -- const1(c) MUL(1)
constant(c) MUL(2) -- const2(c) MUL(2)
constant(c) (value) MUL(1) -- const1(c) (value) MUL(1)
constant(c) (value) MUL(2) -- const2(c) (value) MUL(2)

constant(c) DIVS(1) -- const1(c) DIVS(1)
constant(c) DIVS(2) -- const2(c) DIVS(2)
constant(c) (value) DIVS(1) -- const1(c) (value) DIVS(1)
constant(c) (value) DIVS(2) -- const2(c) (value) DIVS(2)

constant(c) REMS(1) -- const1(c) REMS(1)
constant(c) REMS(2) -- const2(c) REMS(2)
constant(c) (value) REMS(1) -- const1(c) (value) REMS(1)
constant(c) (value) REMS(2) -- const2(c) (value) REMS(2)

constant(c) OR(1) -- const1(c) OR(1)
constant(c) OR(2) -- const2(c) OR(2)
constant(c) (value) OR(1) -- const1(c) (value) OR(1)
constant(c) (value) OR(2) -- const2(c) (value) OR(2)

constant(c) AND(1) -- const1(c) AND(1)
constant(c) AND(2) -- const2(c) AND(2)
constant(c) (value) AND(1) -- const1(c) (value) AND(1)
constant(c) (value) AND(2) -- const2(c) (value) AND(2)

constant(c) EOR(1) -- const1(c) EOR(1)
constant(c) EOR(2) -- const2(c) EOR(2)
constant(c) (value) EOR(1) -- const1(c) (value) EOR(1)
constant(c) (value) EOR(2) -- const2(c) (value) EOR(2)

constant(c) BEQS(1, tl, fl) -- const1(c) BEQS(1, tl, fl)
constant(c) BLTS(1, tl, fl) -- const1(c) BLTS(1, tl, fl)
constant(c) BGTS(1, tl, fl) -- const1(c) BGTS(1, tl, fl)

const1(c) -- i1
    evict();
    E("\tCAF %s\n", constref(add_num_constant(c)));
    push(1);
    tos = true;

const1(c) i1 -- i1 i1
    evict();
    E("\tCAF %s\n", constref(add_num_constant(c)));
    E("\tXCH %s\n", stackref(-1));
    push(1);
    tos = true;
