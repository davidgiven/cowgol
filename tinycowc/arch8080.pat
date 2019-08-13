#include "globals.h"
#include "midcode.h"
#include "emitter.h"
#include "regalloc.h"

struct subarch
{
    int id;
};

static int id = 1;

enum
{
    REG_A = 1<<0,
    REG_B = 1<<1,
    REG_C = 1<<2,
    REG_D = 1<<3,
    REG_E = 1<<4,
    REG_H = 1<<5,
    REG_L = 1<<6,
    REG_BC = 1<<7,
    REG_DE = 1<<8,
    REG_HL = 1<<9,

    REG_16 = REG_BC | REG_DE | REG_HL,
    REG_8 = REG_A | REG_B | REG_C | REG_D | REG_E | REG_H | REG_L
};

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

    regalloc_add_register("a", REG_A, REG_A);
    regalloc_add_register("b", REG_B, REG_B | REG_BC);
    regalloc_add_register("c", REG_C, REG_C | REG_BC);
    regalloc_add_register("d", REG_D, REG_D | REG_DE);
    regalloc_add_register("e", REG_E, REG_E | REG_DE);
    regalloc_add_register("h", REG_H, REG_H | REG_HL);
    regalloc_add_register("l", REG_L, REG_L | REG_HL);
    regalloc_add_register("bc", REG_BC, REG_B | REG_C | REG_BC);
    regalloc_add_register("de", REG_DE, REG_D | REG_E | REG_DE);
    regalloc_add_register("hl", REG_HL, REG_H | REG_L | REG_HL);
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

void arch_load_const(reg_t id, int32_t num)
{
    if (id & REG_16)
        E("\tlxi %s, %d\n", regname(id), num & 0xffff);
    else
        E("\tmvi %s, %d\n", regname(id), num & 0xff);
}

void arch_load_var(reg_t id, struct symbol* sym, int32_t off)
{
    assert(id & (REG_HL|REG_A));
    if (id & REG_HL)
        E("\tlhld %s\n", symref(sym, off));
    else
        E("\tlda %s\n", symref(sym, off));
}

void arch_push(reg_t id)
{
    E("\tpush %s\n", regname(id));
}

void arch_pop(reg_t id)
{
    E("\tpop %s\n", regname(id));
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
    regalloc_var_changing(sym, off);
    regalloc_load_const(REG_A, val & 0xff);
    E("\tsta %s\n", symref(sym, off));
    regalloc_reg_contains_var(REG_A, sym, off);

address(sym, off) constant(val) STORE(2) --
    regalloc_var_changing(sym, off);
    regalloc_load_const(REG_HL, val & 0xffff);
    E("\tshld %s\n", symref(sym, off));
    regalloc_reg_contains_var(REG_HL, sym, off);

address(sym, off) i1 STORE(1) --
    regalloc_var_changing(sym, off);
    regalloc_pop(REG_A);
    E("\tsta %s\n", symref(sym, off));
    regalloc_reg_contains_var(REG_A, sym, off);

address(sym, off) i2 STORE(2) --
    regalloc_var_changing(sym, off);
    regalloc_pop(REG_A);
    E("\tshld %s\n", symref(sym, off));
    regalloc_reg_contains_var(REG_HL, sym, off);

address(sym, off) LOAD(1) -- i1
    regalloc_load_var(REG_A, sym, off);
    regalloc_push(REG_A);

address(sym, off) LOAD(2) -- i2
    regalloc_load_var(REG_HL, sym, off);
    regalloc_push(REG_A);

constant(lhs) constant(rhs) ADD(n) -- constant(result)
    result = lhs + rhs;

i1 i1 ADD(1) -- i1
    reg_t rhs = regalloc_pop(REG_A);
    reg_t lhs = regalloc_pop(REG_8);
    
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
    reg_t r = regalloc_load_const(REG_16, c & 0xffff);
	E("\tlxi %s, %d\n", regname(r), c & 0xffff);

const1(c) i1 -- i1 i1
    evict();
	E("\tmvi h, %d\n", c & 0xff);
	E("\txthl\n");
	E("\tmov a, h\n");
    tos = 1;

