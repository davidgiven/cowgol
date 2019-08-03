#include "globals.h"
#include "midcode.h"
#include "emitter.h"

struct subarch
{
    int id;
};

static int id = 1;

static enum
{
    TOS_EMPTY,
    TOS_A,
    TOS_HL
}
tos = TOS_EMPTY;

#define E emitter_printf

void arch_init_types(void)
{
	intptr_type = make_number_type("uint16", 2, false);
	make_number_type("int16", 2, true);
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

void arch_emit_comment(const char* text)
{
    printf("\t; %s\n", text);
}

static const char* symref(struct symbol* sym, int32_t off)
{
    static char buffer[32];
    snprintf(buffer, sizeof(buffer), "w%d%+d",
        sym->u.var.sub->arch->id,
        sym->u.var.offset + off);
    return buffer;
}

static void evict(void)
{
    switch (tos)
    {
        case TOS_EMPTY: return;
        case TOS_A: E("\tpush psw\n"); return;
        case TOS_HL: E("\tpush hl\n"); return;
    }
}

static void unvict(int wanted)
{
    if (tos == wanted)
        return;
    if (tos != TOS_EMPTY)
        fatal("tos type mismatch");
    if (wanted == TOS_A)
        E("\tpop psw\n");
    if (wanted == TOS_HL)
        E("\tpop h\n");
    tos = wanted;
}

%%

i1
i2
constant(int32_t val) = ("%d", $$.val)
const1(int32_t val) = ("%d", $$.val)
const2(int32_t val) = ("%d", $$.val)
address(struct symbol* sym, int32_t off) = ("%s+%d", $$.sym->name, $$.off)

%%

STARTFILE --

ENDFILE --

STARTSUB(sub) --
    emitter_open_chunk();
    E("\n");
    E("; %s\n", sub->name);
    E("f%d:\n", sub->arch->id);

ENDSUB(sub) --
    E("\tret\n");
	E("w%d: ds %d\n", sub->arch->id, sub->workspace);
    emitter_close_chunk();

address(sym, off) constant(val) STORE(1) --
    evict();
    E("\tmvi a, %d\n", val);
    E("\tsta %s\n", symref(sym, off));

address(sym, off) constant(val) STORE(2) --
    evict();
    E("\tlxi hl, %d\n", val);
    E("\tshld %s\n", symref(sym, off));

address(sym, off) i1 STORE(1) --
    unvict(TOS_A);
    E("\tsta %s\n", symref(sym, off));

address(sym, off) i2 STORE(2) --
    unvict(TOS_HL);
    E("\tshld %s\n", symref(sym, off));

address(sym, off) LOAD(1) -- i1
    evict();
    E("\tlda %s\n", symref(sym, off));
    tos = TOS_A;

address(sym, off) LOAD(2) -- i2
    evict();
    E("\tlhld %s\n", symref(sym, off));
    tos = TOS_HL;

constant(lhs) constant(rhs) ADD(n) -- constant(result)
    result = lhs + rhs;

i1 i1 ADD(1) -- i1
    unvict(TOS_A);
    E("\tpop hl\n");
    E("\tadd h\n");

i1 constant(n) ADD(1) -- i1
    unvict(TOS_A);
    E("\tadi %d\n", n);

i2 i2 ADD(2) -- i2
    unvict(TOS_HL);
    E("\tpop d\n");
    E("\tdad d\n");

i2 constant(n) ADD(2) -- i2
    unvict(TOS_HL);
    E("\tlxi d, %d\n", n);
    E("\tdad d\n", n);

ADDRESS(sym) -- address(sym, 0)

CONSTANT(val) -- constant(val)

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
	E("\tmvi a, %d\n", c & 0xff);
    tos = 1;

const2(c) -- i2
    evict();
	E("\tlxi h, %d\n", c & 0xffff);
    tos = 2;

const1(c) i1 -- i1 i1
    evict();
	E("\tmvi h, %d\n", c & 0xff);
	E("\txthl\n");
	E("\tmov a, h\n");
    tos = 1;

