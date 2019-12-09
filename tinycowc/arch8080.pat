#include "globals.h"
#include "midcode.h"
#include "emitter.h"
#include "regalloc.h"
#include <ctype.h>

struct subarch
{
    int id;
};

static int id = 1;

enum
{
    REG_A = 1<<0,
    REG_B = 1<<1,
    REG_D = 1<<2,
    REG_H = 1<<3,
    REG_BC = 1<<4,
    REG_DE = 1<<5,
    REG_HL = 1<<6,

    REG_16 = REG_BC | REG_DE | REG_HL,
    REG_8 = REG_A | REG_B | REG_D | REG_H
};

#define E emitter_printf

void arch_init_types(void)
{
	make_number_type("uint32", 4, false);
	make_number_type("int32", 4, true);
	intptr_type = make_number_type("uint16", 2, false);
	make_number_type("int16", 2, true);
	uint8_type = make_number_type("uint8", 1, false);
	make_number_type("int8", 1, true);

    regalloc_add_register("a", REG_A, REG_A);
    regalloc_add_register("b", REG_B, REG_B | REG_BC);
    regalloc_add_register("d", REG_D, REG_D | REG_DE);
    regalloc_add_register("h", REG_H, REG_H | REG_HL);
    regalloc_add_register("b", REG_BC, REG_B | REG_BC);
    regalloc_add_register("d", REG_DE, REG_D | REG_DE);
    regalloc_add_register("h", REG_HL, REG_H | REG_HL);
}

static const char* regnamelo(reg_t id)
{
    switch (id)
    {
        case REG_BC: return "c";
        case REG_DE: return "e";
        case REG_HL: return "l";
    }
    assert(false);
    return NULL;
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
    emitter_printf("\t; ");
    emitter_vprintf(text, ap);
    emitter_printf("\n");
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
    snprintf(buffer, sizeof(buffer), "w%d%+d",
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
    E("\tpush %s\n", (id == REG_A) ? "psw" : regname(id));
}

void arch_pop(reg_t id)
{
    E("\tpop %s\n", (id == REG_A) ? "psw" : regname(id));
}

void arch_copy(reg_t src, reg_t dest)
{
    if (src & REG_16)
        E("\tmov %s, %s\n", regnamelo(dest), regnamelo(src));
    E("\tmov %s, %s\n", regname(dest), regname(src));
}

reg_t arch_save(reg_t reg, reg_t forbidden)
{
    arch_emit_comment("attempting to save 0x%x anywhere except 0x%x", reg, forbidden);

    if ((reg == REG_HL) && !(forbidden & REG_DE))
    {
        E("\txchg\n");
        return REG_DE;
    }
    if ((reg == REG_DE) && !(forbidden & REG_HL))
    {
        E("\txchg\n");
        return REG_HL;
    }
    if (reg & REG_8)
    {
        reg_t candidates = REG_8 & ~forbidden;
        reg_t dest = 1;
        while (dest)
        {
            if (candidates & dest)
            {
                arch_copy(reg, dest);
                return dest;
            }
            dest <<= 1;
        }
    }

    return 0;
}

%%

i1
i2
i4
constant(int32_t val) = ("%d", $$.val)
address(struct symbol* sym, int32_t off) = ("%s+%d", $$.sym->name, $$.off)

%%

STARTFILE --
    emitter_open_chunk();
    E("\textrn add4\n");
    E("\textrn sub4\n");
    emitter_close_chunk();

ENDFILE --

STARTSUB(sub) --
    emitter_open_chunk();
    E("\n");
    E("; %s\n", sub->name);
    E("\tcseg\n");
    if (sub->externname)
        E("\tpublic %s\n", sub->externname);
    E("%s:\n", subref(sub));

    if (sub->inputparameters != 0)
    {
        E("\tpop b\n");
        for (int i=sub->inputparameters-1; i>=0; i--)
        {
                struct symbol* param = sub->namespace.firstsymbol;
                for (int j=0; j<i; j++)
                        param = param->next;

                if (param->u.var.type->u.type.width == 1)
                {
                        E("\tpop psw\n");
                        E("\tsta %s\n", symref(param, 0));
                }
                else
                {
                        E("\tpop h\n");
                        E("\tshld %s\n", symref(param, 0));
                }
        }
        E("\tpush b\n");
    }

ENDSUB(sub) --
    E("\tret\n");
    E("\tdseg\n");
	E("w%d: ds %d\n", sub->arch->id, sub->workspace);
    emitter_close_chunk();

JUMP(label) --
    regalloc_reg_changing(ALL_REGS);
    E("\tjmp %s\n", labelref(label));

JUMP(target) LABEL(label1) LABEL(label2) -- LABEL(label1) LABEL(label2)
    regalloc_reg_changing(ALL_REGS);
    if ((target != label1) && (target != label2))
        E("\tjmp %s\n", labelref(target));

LABEL(label) --
    regalloc_reg_changing(ALL_REGS);
    E("%s:\n", labelref(label));

LABELALIAS(newlabel, oldlabel) --
    E("%s\t", labelref(newlabel));
    E("= %s\n", labelref(oldlabel));

CONSTANT(val) -- constant(val)

ADDRESS(sym) -- address(sym, 0)

// --- Function calls -------------------------------------------------------

i1 PARAM(1) -- i1
    regalloc_flush_stack();

constant(n) PARAM(1) -- i1 PARAM(1)
    reg_t r = regalloc_load_const(REG_A, n);
    regalloc_push(r);

i2 PARAM(2) -- i2
    regalloc_flush_stack();

constant(n) PARAM(2) -- i2 PARAM(2)
    reg_t r = regalloc_load_const(REG_16, n);
    regalloc_push(r);

CALL(sub) --
    if (sub->externname)
    {
        emitter_open_chunk();
        E("\textrn %s\n", sub->externname);
        emitter_close_chunk();
    }

    regalloc_reg_changing(ALL_REGS);
    arch_emit_comment("subroutine with %d input parameters", sub->inputparameters);
    E("\tcall %s\n", subref(sub));
    regalloc_drop_stack_items(sub->inputparameters);
    vsp -= sub->inputparameters;

RETURN() --
    regalloc_reg_changing(ALL_REGS);
    E("\tret\n");

// --- Additions ------------------------------------------------------------

address(sym, off) constant(val) ADD(2) -- address(sym, newoff)
    newoff = off + val;

constant(lhs) constant(rhs) ADD(n) -- constant(result)
    result = lhs + rhs;

i1 i1 ADD(1) -- i1
    reg_t rhs = regalloc_pop(REG_A);
    reg_t lhs = regalloc_pop(REG_8);
    regalloc_reg_changing(REG_A);
    E("\tadd %s\n", regname(lhs));
    regalloc_push(REG_A);

i2 i2 ADD(2) -- i2
    reg_t rhs = regalloc_pop(REG_HL);
    reg_t lhs = regalloc_pop(REG_16);
    regalloc_reg_changing(REG_HL);
    E("\tdad %s\n", regname(lhs));
    regalloc_push(REG_HL);

i4 i4 ADD(4) -- i4
    regalloc_flush_stack();
    regalloc_reg_changing(ALL_REGS);
    E("\tcall add4\n");
    regalloc_drop_stack_items(2);

i1 constant(0) ADD(1) -- i1

i2 constant(0) ADD(2) -- i2

address(sym1, off1) address(sym2, off2) LOAD(1) CONSTANT(1) ADD(1) STORE(1) --
    if ((sym1 != sym2) || (off1 != off2))
        REJECT;
    regalloc_alloc(REG_HL);
    E("\tlxi h, %s\n", symref(sym1, off1));
    E("\tinr m\n");

i1 constant(n) ADD(1) -- i1
    if (n == 1)
    {
        reg_t val = regalloc_pop(REG_8);
        E("\tinc %s\n", regname(val));
        regalloc_push(val);
    }
    else if (n == -1)
    {
        reg_t val = regalloc_pop(REG_8);
        E("\tdec %s\n", regname(val));
        regalloc_push(val);
    }
    else
    {
        reg_t lhs = regalloc_pop(REG_A);
        E("\tadi %d\n", n & 0xff);
        regalloc_push(REG_A);
    }

i2 constant(n) ADD(2) -- i2
    if (n == 1)
    {
        reg_t val = regalloc_pop(REG_16);
		regalloc_reg_changing(val);
        E("\tinx %s\n", regname(val));
        regalloc_push(val);
    }
    else if (n == -1)
    {
        reg_t val = regalloc_pop(REG_16);
		regalloc_reg_changing(val);
        E("\tdcx %s\n", regname(val));
        regalloc_push(val);
    }
    else
    {
        regalloc_pop(REG_HL);
        reg_t rhs = regalloc_load_const(REG_16, n);
		regalloc_reg_changing(REG_HL);
        E("\tdad %s\n", regname(rhs));
        regalloc_push(REG_HL);
    }

constant(n) i1 ADD(1) -- i1 constant(n) ADD(1)
constant(n) i2 ADD(2) -- i2 constant(n) ADD(2)

ADDP(width) -- ADD(width)

// --- Subtractions ---------------------------------------------------------

i1 i1 SUB(1) -- i1
    reg_t rhs = regalloc_pop(REG_8 & ~REG_A);
    reg_t lhs = regalloc_pop(REG_A);
    E("\tsub %s\n", regname(rhs));
    regalloc_push(REG_A);

constant(c) i1 SUB(1) -- i1
    reg_t rhs = regalloc_pop(REG_A);
    reg_t lhs = regalloc_load_const(REG_8, c & 0xff);
    E("\tsub %s\n", regname(rhs));
    regalloc_push(REG_A);
    
i2 i2 SUB(2) -- i2
    reg_t rhs = regalloc_pop(REG_16);
    reg_t lhs = regalloc_pop(REG_16);
    E("\tmov a, %s\n", regnamelo(lhs));
    E("\tsub %s\n", regnamelo(rhs));
    E("\tmov %s, a\n", regnamelo(lhs));
    E("\tmov a, %s\n", regname(lhs));
    E("\tsbb %s\n", regname(rhs));
    E("\tmov %s, a\n", regname(lhs));
    regalloc_push(lhs);

constant(n) i2 SUB(2) -- i2
    reg_t rhs = regalloc_pop(REG_16);
    E("\tmvi a, %d\n", n & 0xff);
    E("\tsub %s\n", regnamelo(rhs));
    E("\tmov %s, a\n", regnamelo(rhs));
    E("\tmvi a, %d\n", n >> 8);
    E("\tsbb %s\n", regname(rhs));
    E("\tmov %s, a\n", regname(rhs));
    regalloc_push(rhs);

i4 i4 SUB(4) -- i4
    regalloc_flush_stack();
    regalloc_reg_changing(ALL_REGS);
    E("\tcall sub4\n");
    regalloc_drop_stack_items(2);

constant(c) NEG(0) -- constant(-c)

i1 NEG(1) -- i1
    reg_t rhs = regalloc_pop(REG_8 & ~REG_A);
    regalloc_load_const(REG_A, 0);
    E("\tsub %s\n", regname(rhs));
    regalloc_push(REG_A);

i2 NEG(2) -- constant(0) i2 SUB(2)

i1 constant(0) SUB(1) -- i1
i1 constant(n) SUB(1) -- i1 constant(-n) ADD(1)

i1 constant(0) SUB(2) -- i2
i2 constant(n) SUB(2) -- i2 constant(-n) ADD(2)

SUBP(width) -- SUB(width)

// --- Multiplications ------------------------------------------------------

constant(lhs) constant(rhs) MUL(w) -- constant(result)
    result = lhs*rhs;

// --- Loads ----------------------------------------------------------------

i2 LOAD(1) -- i1
    reg_t r = regalloc_pop(REG_16);
    regalloc_alloc(REG_A);
    switch (r)
    {
        case REG_HL:
            E("\tmov a, m\n");
            break;

        case REG_BC:
            E("\tldax b\n");
            break;

        case REG_DE:
            E("\tldax d\n");
            break;
    }
    regalloc_push(REG_A);

i2 LOAD(2) -- i2
    regalloc_pop(REG_HL);
    regalloc_reg_changing(REG_HL);
    regalloc_alloc(REG_A);
    E("\tmov a, m\n");
    E("\tinx h\n");
    E("\tmov h, m\n");
    E("\tmov l, a\n");
    regalloc_push(REG_HL);

address(sym, off) LOAD(1) -- i1
    regalloc_load_var(REG_A, sym, off);
    regalloc_push(REG_A);

address(sym, off) LOAD(2) -- i2
    regalloc_load_var(REG_HL, sym, off);
    regalloc_push(REG_HL);

address(sym, off) LOAD(4) -- i4
    regalloc_alloc(REG_HL);
    E("\tlhld %s\n", symref(sym, off+2));
    regalloc_push(REG_HL);
    regalloc_unlock(REG_HL);
    regalloc_alloc(REG_HL);
    E("\tlhld %s\n", symref(sym, off));
    regalloc_push(REG_HL);

// --- Stores ---------------------------------------------------------------

address(sym, off) i1 STORE(1) --
    regalloc_var_changing(sym, off);
    regalloc_pop(REG_A);
    E("\tsta %s\n", symref(sym, off));
    regalloc_reg_contains_var(REG_A, sym, off);

address(sym, off) i2 STORE(2) --
    regalloc_var_changing(sym, off);
    regalloc_pop(REG_HL);
    E("\tshld %s\n", symref(sym, off));
    regalloc_reg_contains_var(REG_HL, sym, off);

address(sym, off) i4 STORE(4) --
    regalloc_var_changing(sym, off);
    regalloc_pop(REG_HL);
    E("\tshld %s\n", symref(sym, off));
    regalloc_unlock(REG_HL);
    regalloc_pop(REG_HL);
    E("\tshld %s\n", symref(sym, off+2));

i2 i1 STORE(1) --
    regalloc_pop(REG_A);
    reg_t r = regalloc_pop(REG_16);
    switch (r)
    {
        case REG_HL:
            E("\tmov m, a\n");
            break;

        case REG_BC:
            E("\tstax b\n");
            break;

        case REG_DE:
            E("\tstax d\n");
            break;
    }

i2 i2 STORE(2) --
    reg_t r = regalloc_pop(REG_16);
    regalloc_pop(REG_HL);
    regalloc_reg_changing(REG_HL);
    E("\tmov m, %s\n", regnamelo(r));
    E("\tinx h\n");
    E("\tmov m, %s\n", regname(r));

constant(n) STORE(1) -- i1 STORE(1)
    reg_t r = regalloc_load_const(REG_A, n);
    regalloc_push(r);

constant(n) STORE(2) -- i2 STORE(2)
    reg_t r = regalloc_load_const(REG_16, n);
    regalloc_push(r);

address(sym, off) STORE(2) -- i2 STORE(2)
    reg_t r = regalloc_alloc(REG_16);
    E("\tlxi %s, %s\n", regname(r), symref(sym, off));
    regalloc_push(r);

// --- Branches -------------------------------------------------------------

i1 BEQZ(1, truelabel, falselabel) LABEL(nextlabel) --
    reg_t r = regalloc_pop(REG_A);
    regalloc_reg_changing(ALL_REGS);
    E("\tora a\n");
    if (nextlabel == truelabel)
        E("\tjnz %s\n", labelref(falselabel));
    else
    {
        E("\tjz %s\n", labelref(truelabel));
        if (nextlabel != falselabel)
            E("\tjmp %s\n", labelref(falselabel));
    }
    E("%s:\n", labelref(nextlabel));

i2 BEQZ(2, truelabel, falselabel) LABEL(nextlabel) --
    reg_t r = regalloc_pop(REG_16);
    regalloc_reg_changing(ALL_REGS);
    E("\tmov a, %s\n", regname(r));
    E("\tora %s\n", regnamelo(r));
    if (nextlabel == truelabel)
        E("\tjnz %s\n", labelref(falselabel));
    else
    {
        E("\tjz %s\n", labelref(truelabel));
        if (nextlabel != falselabel)
            E("\tjmp %s\n", labelref(falselabel));
    }
    E("%s:\n", labelref(nextlabel));

i4 BEQZ(4, truelabel, falselabel) LABEL(nextlabel) --
    reg_t rlo = regalloc_pop(REG_16);
    reg_t rhi = regalloc_pop(REG_16);
    regalloc_reg_changing(ALL_REGS);
    E("\tmov a, %s\n", regname(rlo));
    E("\tora %s\n", regnamelo(rlo));
    E("\tora %s\n", regname(rhi));
    E("\tora %s\n", regnamelo(rhi));
    if (nextlabel == truelabel)
        E("\tjnz %s\n", labelref(falselabel));
    else
    {
        E("\tjz %s\n", labelref(truelabel));
        if (nextlabel != falselabel)
            E("\tjmp %s\n", labelref(falselabel));
    }
    E("%s:\n", labelref(nextlabel));

i1 i1 BEQS(1, truelabel, falselabel) LABEL(nextlabel) --
    reg_t rhs = regalloc_pop(REG_8 & ~REG_A);
    reg_t lhs = regalloc_pop(REG_A);
    E("\tcmp %s\n", regname(rhs));
    if (nextlabel == truelabel)
        E("\tjnz %s\n", labelref(falselabel));
    else
    {
        E("\tjz %s\n", labelref(truelabel));
        if (nextlabel != falselabel)
            E("\tjmp %s\n", labelref(falselabel));
    }
    E("%s:\n", labelref(nextlabel));
    
i1 constant(n) BEQS(1, truelabel, falselabel) LABEL(nextlabel) --
    reg_t lhs = regalloc_pop(REG_A);
    E("\tcpi %d\n", n & 0xff);
    if (nextlabel == truelabel)
        E("\tjnz %s\n", labelref(falselabel));
    else
    {
        E("\tjz %s\n", labelref(truelabel));
        if (nextlabel != falselabel)
            E("\tjmp %s\n", labelref(falselabel));
    }
    E("%s:\n", labelref(nextlabel));

BEQS(n, truelabel, falselabel) LABELALIAS(newlabel, oldlabel) LABEL(nextlabel) -- BEQS(n, truelabel, falselabel) LABEL(nextlabel) LABELALIAS(newlabel, oldlabel)

BEQS(2, truelabel, falselabel) -- SUB(2) BEQZ(2, truelabel, falselabel)
BLTS(2, truelabel, falselabel) -- SUB(2) BLTZ(2, truelabel, falselabel)
BGTS(2, truelabel, falselabel) -- SUB(2) BGTZ(2, truelabel, falselabel)

BEQS(4, truelabel, falselabel) -- SUB(4) BEQZ(4, truelabel, falselabel)
BLTS(4, truelabel, falselabel) -- SUB(4) BLTZ(4, truelabel, falselabel)
BGTS(4, truelabel, falselabel) -- SUB(4) BGTZ(4, truelabel, falselabel)

BEQP(truelabel, falselabel) -- BEQS(2, truelabel, falselabel)
BLTP(truelabel, falselabel) -- BLTS(2, truelabel, falselabel)
BGTP(truelabel, falselabel) -- BGTS(2, truelabel, falselabel)

// --- Data -----------------------------------------------------------------

STRING(s) -- i2
    int sid = id++;
    emitter_open_chunk();
    E("\tcseg\n");
    E("s%d:\n", sid);
    E("\tdb ");
    bool instring = false;
    bool start = true;
    for (;;)
    {
        char c = *s++;
        if (!c)
            break;
        if (!start && !instring)
            E(", ");
        start = false;
        if (isprint(c) && (c != '\"') && (c != '\\'))
        {
            if (!instring)
            {
                E("\"");
                instring = true;
            }
            E("%c", c);
        }
        else
        {
            if (instring)
            {
                E("\", ");
                instring = false;
            }
            E("%d", c);
        }
    }
    if (instring)
        E("\"");
    if (!start)
        E(", ");
    E("0\n");
    emitter_close_chunk();

    reg_t r = regalloc_alloc(REG_16);
    E("\tlxi %s, s%d\n", regname(r), sid);
    regalloc_push(r);
    