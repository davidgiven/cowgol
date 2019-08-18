#include "globals.h"
#include "midcode.h"
#include "emitter.h"
#include "regalloc.h"
#include <ctype.h>

struct subarch
{
    int id;
};

static int id = 0;

#define VARSTACK_SIZE 32
static int varstack[VARSTACK_SIZE];
static int varsp = 0;

#define E emitter_printf

void arch_init_types(void)
{
	intptr_type = make_number_type("uint64", 8, false);
	make_number_type("int64", 8, true);
	make_number_type("uint32", 4, false);
	make_number_type("int32", 4, true);
	make_number_type("int16", 2, true);
	make_number_type("uint16", 2, false);
	uint8_type = make_number_type("uint8", 1, false);
	make_number_type("int8", 1, true);
}

void arch_init_subroutine(struct subroutine* sub)
{
    sub->arch = calloc(1, sizeof(struct subarch));
    sub->arch->id = id++;
}

void arch_init_variable(struct symbol* var)
{
}

void arch_emit_comment(const char* text, ...)
{
    va_list ap;
    va_start(ap, text);
    emitter_printf("\t/* ");
    emitter_vprintf(text, ap);
    emitter_printf(" */\n");
    va_end(ap);
}

static const char* subref(struct subroutine* sub)
{
    if (sub->externname)
        return sub->externname;
    
    static char buffer[32];
    snprintf(buffer, sizeof(buffer), "f%d%", sub->arch->id);
    return buffer;
}

static const char* symref(struct symbol* sym, int32_t off)
{
    static char buffer[32];
    snprintf(buffer, sizeof(buffer), "&workspace%d[%d]",
        sym->u.var.sub->arch->id,
        sym->u.var.offset + off);
    return buffer;
}

static const char* labelref(int label)
{
    static char buffer[32];
    snprintf(buffer, sizeof(buffer), "x%d", label);
    return buffer;
}

static int push(void)
{
    int vid = id++;
    if (varsp == VARSTACK_SIZE)
        fatal("varstack overflow");
    varstack[varsp++] = vid;
    return vid;
}

static int pop(void)
{
    if (varsp == 0)
        fatal("vstack underflow");
    return varstack[--varsp];
}

void arch_load_const(reg_t id, int32_t num) {}
void arch_load_var(reg_t id, struct symbol* sym, int32_t off) {}
void arch_push(reg_t id) {}
void arch_pop(reg_t id) {}
void arch_copy(reg_t src, reg_t dest) {}
%%

i(int width) = ("%d", $$.width)
constant(int32_t val) = ("%d", $$.val)
constn(int width, int32_t val) = ("width=%d val=%d", $$.width, $$.val)
address(struct symbol* sym, int32_t off) = ("%s+%d", $$.sym->name, $$.off)

%%

STARTFILE --
    emitter_open_chunk();
    E("#include \"rt/c/cowgol.h\"\n");
    emitter_close_chunk();

ENDFILE --

STARTSUB(sub) --
    emitter_open_chunk();
    E("\n");
    E("/* %s */\n", sub->name);
    E("static i1 workspace%d[];\n", sub->arch->id);
    E("void %s(", subref(sub));

    if (sub->inputparameters == 0)
        E("void");
    else
    {
        bool first = true;
        struct symbol* param = sub->firstsymbol;
        for (int i=0; i<sub->inputparameters; i++)
        {
            if (!first)
                E(", ");
            first = false;

            E("i%d p%d", param->u.var.type->u.type.width, i);
            param = param->next;
        }
    }
    E(") {\n");
    if (sub->inputparameters != 0)
    {
        struct symbol* param = sub->firstsymbol;
        for (int i=0; i<sub->inputparameters; i++)
        {
            E("*(i%d*)%s = p%d;\n", param->u.var.type->u.type.width, symref(param, 0), i);
            param = param->next;
        }
    }

ENDSUB(sub) --
    E("}\n");
    E("static i1 workspace%d[%d];\n", sub->arch->id, sub->workspace);
    emitter_close_chunk();

JUMP(label) --
    E("goto %s;\n", labelref(label));

LABEL(label) --
    E("%s:;\n", labelref(label));

LABELALIAS(newlabel, oldlabel) --
    E("%s\t", labelref(newlabel));
    E("= %s\n", labelref(oldlabel));

CONSTANT(val) -- constant(val)

ADDRESS(sym) -- address(sym, 0)

// --- Function calls -------------------------------------------------------

PARAM(n) --

CALL(sub) --
    E("%s(", subref(sub));
    bool first = true;
    for (int i=varsp-sub->inputparameters; i<varsp; i++)
    {
        if (!first)
            E(", ");
        first = false;

        E("v%d", varstack[i]);
    }
    E(");\n");

    vsp -= sub->inputparameters;
    varsp -= sub->inputparameters;

RETURN() --
    E("return;\n");

// --- Additions ------------------------------------------------------------

address(sym, off) constn(w1, val) ADD(w2) -- address(sym, newoff)
    assert(w1 == w2);
    newoff = off + val;

constant(lhs) constant(rhs) ADD(n) -- constant(result)
    result = lhs + rhs;

i(w1) i(w2) ADD(w3) -- i(w1)
    assert(w1 == w2);
    assert(w2 == w3);
    int rhs = pop();
    int lhs = pop();
    E("i%d v%d = v%d + v%d;\n", w1, push(), lhs, rhs);

i(w1) i(w2) ADDP(w3) -- i(w1)
    assert(w1 == w2);
    assert(w2 == w3);
    int rhs = pop();
    int lhs = pop();
    E("i%d v%d = v%d + v%d;\n", w1, push(), lhs, rhs);

address(sym1, off1) address(sym2, off2) LOAD(w1) CONSTANT(c) ADD(w2) STORE(w3) --
    if ((sym1 != sym2) || (off1 != off2) || (w1 != w2) || (w2 != w3))
        REJECT;
    E("(*(i%d*)%s) += %d;\n", w1, symref(sym1, off1), c);

// --- Subtractions ---------------------------------------------------------

i(w1) i(w2) SUB(w3) -- i(w1)
    assert(w1 == w2);
    assert(w2 == w3);
    int rhs = pop();
    int lhs = pop();
    E("i%d v%d = v%d - v%d;\n", w1, push(), lhs, rhs);

address(sym1, off1) address(sym2, off2) LOAD(w1) CONSTANT(c) SUB(w2) STORE(w3) --
    if ((sym1 != sym2) || (off1 != off2) || (w1 != w2) || (w2 != w3))
        REJECT;
    E("(*(i%d*)%s) -= %d;\n", w1, symref(sym1, off1), c);

i(w1) NEG(w2) -- constn(w1, 0) i(w1) SUB(w1)
    assert(w1 == w2);

// --- Loads ----------------------------------------------------------------

address(sym, off) LOAD(width) -- i(width)
    E("i%d v%d = *(i%d*)%s;\n", width, push(), width, symref(sym, off));

i(n) LOAD(width) -- i(width)
    int ptr = pop();
    E("i%d v%d = *(i%d*)v%d;\n", width, push(), width, ptr);

// --- Stores ---------------------------------------------------------------

address(sym, off) i(w1) STORE(w2) --
    assert(w1 == w2);
    E("*(i%d*)%s = v%d;\n", w1, symref(sym, off), pop());

i(n) i(w1) STORE(w2) --
    assert(w1 == w2);
    int val = pop();
    int ptr = pop();
    E("*(i%d*)v%d = v%d;\n", w1, ptr, val);

// --- Branches -------------------------------------------------------------

i(w1) BEQZ(w2, truelabel, falselabel) --
    assert(w1 == w2);
    E("if (!v%d) goto %s;\n", pop(), labelref(truelabel));
    E("goto %s;\n", labelref(falselabel));

BEQS(w, truelabel, falselabel) -- SUB(w) BEQZ(w, truelabel, falselabel)
BLTS(w, truelabel, falselabel) -- SUB(w) BLTZ(w, truelabel, falselabel)
BGTS(w, truelabel, falselabel) -- SUB(w) BGTZ(w, truelabel, falselabel)

BEQP(truelabel, falselabel) -- SUBP(8) BEQZ(8, truelabel, falselabel)
BLTP(truelabel, falselabel) -- SUBP(8) BLTZ(8, truelabel, falselabel)
BGTP(truelabel, falselabel) -- SUBP(8) BGTZ(8, truelabel, falselabel)

// --- Data -----------------------------------------------------------------

STRING(s) -- i(8)
    int sid = id++;
    emitter_open_chunk();
    E("static const i1 s%d[] = { ", sid);
    bool first = true;
    for (;;)
    {
        char c = *s++;
        if (!first)
            E(", ");
        first = false;

        E("%d", c & 0xff);
        if (!c)
            break;
    }
    E("};\n");
    emitter_close_chunk();

    E("i8 v%d = (i8) s%d;\n", push(), sid);
 
// --- Constant type inference ----------------------------------------------

constant(c) STORE(1) -- constn(1, c) STORE(1)
constant(c) STORE(2) -- constn(2, c) STORE(2)
constant(c) STORE(4) -- constn(4, c) STORE(4)

constant(c) PARAM(1) -- constn(1, c) PARAM(1)
constant(c) PARAM(2) -- constn(2, c) PARAM(2)
constant(c) PARAM(4) -- constn(4, c) PARAM(4)

constant(c) NEG(1) -- constn(1, c) NEG(1)
constant(c) NEG(2) -- constn(2, c) NEG(2)
constant(c) NEG(4) -- constn(4, c) NEG(4)

constant(c) ADD(1) -- constn(1, c) ADD(1)
constant(c) ADD(2) -- constn(2, c) ADD(2)
constant(c) ADD(4) -- constn(4, c) ADD(4)
constant(c) (value) ADD(1) -- constn(1, c) (value) ADD(1)
constant(c) (value) ADD(2) -- constn(2, c) (value) ADD(2)
constant(c) (value) ADD(4) -- constn(4, c) (value) ADD(4)

constant(c) ADDP(1) -- constn(1, c) ADDP(1)
constant(c) ADDP(2) -- constn(2, c) ADDP(2)
constant(c) ADDP(4) -- constn(4, c) ADDP(4)
constant(c) ADDP(8) -- constn(8, c) ADDP(8)
constant(c) (value) ADDP(1) -- constn(1, c) (value) ADDP(1)
constant(c) (value) ADDP(2) -- constn(2, c) (value) ADDP(2)
constant(c) (value) ADDP(4) -- constn(4, c) (value) ADDP(4)
constant(c) (value) ADDP(8) -- constn(8, c) (value) ADDP(8)

constant(c) SUB(1) -- constn(1, c) SUB(1)
constant(c) SUB(2) -- constn(2, c) SUB(2)
constant(c) SUB(4) -- constn(4, c) SUB(4)
constant(c) (value) SUB(1) -- constn(1, c) (value) SUB(1)
constant(c) (value) SUB(2) -- constn(2, c) (value) SUB(2)
constant(c) (value) SUB(4) -- constn(4, c) (value) SUB(4)

constant(c) MUL(1) -- constn(1, c) MUL(1)
constant(c) MUL(2) -- constn(2, c) MUL(2)
constant(c) MUL(4) -- constn(4, c) MUL(4)
constant(c) (value) MUL(1) -- constn(1, c) (value) MUL(1)
constant(c) (value) MUL(2) -- constn(2, c) (value) MUL(2)
constant(c) (value) MUL(4) -- constn(4, c) (value) MUL(4)

constant(c) DIVS(1) -- constn(1, c) DIVS(1)
constant(c) DIVS(2) -- constn(2, c) DIVS(2)
constant(c) DIVS(4) -- constn(4, c) DIVS(4)
constant(c) (value) DIVS(1) -- constn(1, c) (value) DIVS(1)
constant(c) (value) DIVS(2) -- constn(2, c) (value) DIVS(2)
constant(c) (value) DIVS(4) -- constn(4, c) (value) DIVS(4)

constant(c) REMS(1) -- constn(1, c) REMS(1)
constant(c) REMS(2) -- constn(2, c) REMS(2)
constant(c) REMS(4) -- constn(4, c) REMS(4)
constant(c) (value) REMS(1) -- constn(1, c) (value) REMS(1)
constant(c) (value) REMS(2) -- constn(2, c) (value) REMS(2)
constant(c) (value) REMS(4) -- constn(4, c) (value) REMS(4)

constant(c) OR(1) -- constn(1, c) OR(1)
constant(c) OR(2) -- constn(2, c) OR(2)
constant(c) OR(4) -- constn(4, c) OR(4)
constant(c) (value) OR(1) -- constn(1, c) (value) OR(1)
constant(c) (value) OR(2) -- constn(2, c) (value) OR(2)
constant(c) (value) OR(4) -- constn(4, c) (value) OR(4)

constant(c) AND(1) -- constn(1, c) AND(1)
constant(c) AND(2) -- constn(2, c) AND(2)
constant(c) AND(4) -- constn(4, c) AND(4)
constant(c) (value) AND(1) -- constn(1, c) (value) AND(1)
constant(c) (value) AND(2) -- constn(2, c) (value) AND(2)
constant(c) (value) AND(4) -- constn(4, c) (value) AND(4)

constant(c) EOR(1) -- constn(1, c) EOR(1)
constant(c) EOR(2) -- constn(2, c) EOR(2)
constant(c) EOR(4) -- constn(4, c) EOR(4)
constant(c) (value) EOR(1) -- constn(1, c) (value) EOR(1)
constant(c) (value) EOR(2) -- constn(2, c) (value) EOR(2)
constant(c) (value) EOR(4) -- constn(4, c) (value) EOR(4)

constant(c) BEQS(1, tl, fl) -- constn(1, c) BEQS(1, tl, fl)
constant(c) BEQS(2, tl, fl) -- constn(2, c) BEQS(2, tl, fl)
constant(c) BEQS(4, tl, fl) -- constn(4, c) BEQS(4, tl, fl)
constant(c) BLTS(1, tl, fl) -- constn(1, c) BLTS(1, tl, fl)
constant(c) BLTS(2, tl, fl) -- constn(2, c) BLTS(2, tl, fl)
constant(c) BLTS(4, tl, fl) -- constn(4, c) BLTS(4, tl, fl)
constant(c) BGTS(1, tl, fl) -- constn(1, c) BGTS(1, tl, fl)
constant(c) BGTS(2, tl, fl) -- constn(2, c) BGTS(2, tl, fl)
constant(c) BGTS(4, tl, fl) -- constn(4, c) BGTS(4, tl, fl)

constn(w, c) -- i(w)
    int vid = push();
    E("i%d v%d = %d;\n", w, vid, c);
    
constn(w1, c) i(w2) -- i(w1) i(w2)
    if (w1 != w2)
        REJECT;
    int rhs = pop();
    int lhs = push();
    int newrhs = push();
    E("i%d v%d = %d;\n", w1, lhs, c);
    E("i%d v%d = v%d;\n", w1, newrhs, rhs);