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
    printf("\t/* ");
    vprintf(text, ap);
    printf(" */\n");
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

void arch_load_const(reg_t id, int32_t num) {}
void arch_load_var(reg_t id, struct symbol* sym, int32_t off) {}
void arch_push(reg_t id) {}
void arch_pop(reg_t id) {}
void arch_copy(reg_t src, reg_t dest) {}
%%

i1
i2
i4
p8
constant(int32_t val) = ("%d", $$.val)
const1(int32_t val) = ("%d", $$.val)
const2(int32_t val) = ("%d", $$.val)
const4(int32_t val) = ("%d", $$.val)
address(struct symbol* sym, int32_t off) = ("%s+%d", $$.sym->name, $$.off)

%%

STARTFILE --

ENDFILE --

STARTSUB(sub) --
    emitter_open_chunk();
    E("\n");
    E("; %s\n", sub->name);
    E("%s:\n", subref(sub));

    if (sub->inputparameters != 0)
    {
        E("\tpop b\n");
        for (int i=sub->inputparameters-1; i>=0; i--)
        {
                struct symbol* param = sub->firstsymbol;
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
	E("w%d: ds %d\n", sub->arch->id, sub->workspace);
    emitter_close_chunk();

JUMP(label) --
    E("\tjmp %s\n", labelref(label));

JUMP(target) LABEL(label1) LABEL(label2) -- LABEL(label1) LABEL(label2)
    if ((target != label1) && (target != label2))
        E("\tjmp %s\n", labelref(target));

LABEL(label) --
    E("%s:\n", labelref(label));

LABELALIAS(newlabel, oldlabel) --
    E("%s\t", labelref(newlabel));
    E("= %s\n", labelref(oldlabel));

CONSTANT(val) -- constant(val)

ADDRESS(sym) -- address(sym, 0)

// --- Function calls -------------------------------------------------------

//PARAM(n) --
//    regalloc_flush_stack();
//
//CALL(sub) --
//    regalloc_reg_changing(ALL_REGS);
//    E("\tcall %s\n", subref(sub));
//    regalloc_drop_stack_items(sub->inputparameters);
//    vsp -= sub->inputparameters;
//
//RETURN() --
//    regalloc_reg_changing(ALL_REGS);
//    E("\tret\n");
//
//// --- Additions ------------------------------------------------------------
//
//address(sym, off) const2(val) ADD(2) -- address(sym, newoff)
//    newoff = off + val;
//
//constant(lhs) constant(rhs) ADD(n) -- constant(result)
//    result = lhs + rhs;
//
//i1 i1 ADD(1) -- i1
//    reg_t rhs = regalloc_pop(REG_8 & ~REG_A);
//    reg_t lhs = regalloc_pop(REG_A);
//    E("\tadd %s\n", regname(lhs));
//    regalloc_push(REG_A);
//
//i2 i2 ADD(2) -- i2
//    reg_t rhs = regalloc_pop(REG_16 & ~REG_HL);
//    reg_t lhs = regalloc_pop(REG_HL);
//    E("\tdad %s\n", regname(lhs));
//    regalloc_push(REG_HL);
//
//i1 const1(0) ADD(1) -- i1
//
//i2 const2(0) ADD(2) -- i2
//
//address(sym1, off1) address(sym2, off2) LOAD(1) CONSTANT(1) ADD(1) STORE(1) --
//    if ((sym1 != sym2) || (off1 != off2))
//        REJECT;
//    regalloc_alloc(REG_HL);
//    E("\tlxi h, %s\n", symref(sym1, off1));
//    E("\tinr m\n");
//
//i1 const1(n) ADD(1) -- i1
//    if (n == 1)
//    {
//        reg_t val = regalloc_pop(REG_8);
//        E("\tinc %s\n", regname(val));
//        regalloc_push(val);
//    }
//    else if (n == -1)
//    {
//        reg_t val = regalloc_pop(REG_8);
//        E("\tdec %s\n", regname(val));
//        regalloc_push(val);
//    }
//    else
//    {
//        reg_t lhs = regalloc_pop(REG_A);
//        E("\tadi %d\n", n & 0xff);
//        regalloc_push(REG_A);
//    }
//
//i2 const2(n) ADD(2) -- i2
//    if (n == 1)
//    {
//        reg_t val = regalloc_pop(REG_16);
//        E("\tinx %s\n", regname(val));
//        regalloc_push(val);
//    }
//    else if (n == -1)
//    {
//        reg_t val = regalloc_pop(REG_16);
//        E("\tdcx %s\n", regname(val));
//        regalloc_push(val);
//    }
//    else
//    {
//        reg_t lhs = regalloc_pop(REG_HL);
//        reg_t rhs = regalloc_load_const(REG_16, n);
//        E("\tdad %s\n", regname(lhs));
//        regalloc_push(REG_HL);
//    }
//
//ADDP(width) -- ADD(width)
//
//// --- Subtractions ---------------------------------------------------------
//
//i1 i1 SUB(1) -- i1
//    reg_t rhs = regalloc_pop(REG_8 & ~REG_A);
//    reg_t lhs = regalloc_pop(REG_A);
//    E("\tsub %s\n", regname(rhs));
//    regalloc_push(REG_A);
//
//SUB(2) -- NEG(2) ADD(2)
//
//i1 const1(0) SUB(1) -- i1
//i1 const1(n) SUB(1) -- i1 const1(-n) ADD(1)
//
//i1 const2(0) SUB(2) -- i2
//i2 const2(n) SUB(2) -- i2 const2(-n) ADD(2)
//
//SUBP(width) -- SUB(width)
//
//// --- Loads ----------------------------------------------------------------
//
//i2 LOAD(1) -- i1
//    reg_t r = regalloc_pop(REG_16);
//    regalloc_alloc(REG_A);
//    switch (r)
//    {
//        case REG_HL:
//            E("\tmov a, m\n");
//            break;
//
//        case REG_BC:
//            E("\tldax b\n");
//            break;
//
//        case REG_DE:
//            E("\tldax d\n");
//            break;
//    }
//    regalloc_push(REG_A);
//
//i2 LOAD(2) -- i2
//    reg_t r = regalloc_pop(REG_HL);
//    regalloc_alloc(REG_A);
//    E("\tmov a, m\n");
//    E("\tinx h\n");
//    E("\tmov h, m\n");
//    E("\tmov l, a\n");
//    regalloc_push(REG_HL);
//
//address(sym, off) LOAD(1) -- i1
//    regalloc_load_var(REG_A, sym, off);
//    regalloc_push(REG_A);
//
//address(sym, off) LOAD(2) -- i2
//    regalloc_load_var(REG_HL, sym, off);
//    regalloc_push(REG_HL);
//
//// --- Stores ---------------------------------------------------------------
//
//address(sym, off) i1 STORE(1) --
//    regalloc_var_changing(sym, off);
//    regalloc_pop(REG_A);
//    E("\tsta %s\n", symref(sym, off));
//    regalloc_reg_contains_var(REG_A, sym, off);
//
//address(sym, off) i2 STORE(2) --
//    regalloc_var_changing(sym, off);
//    regalloc_pop(REG_HL);
//    E("\tshld %s\n", symref(sym, off));
//    regalloc_reg_contains_var(REG_HL, sym, off);
//
//i2 i1 STORE(1) --
//    regalloc_pop(REG_A);
//    reg_t r = regalloc_pop(REG_16);
//    switch (r)
//    {
//        case REG_HL:
//            E("\tmov m, a\n");
//            break;
//
//        case REG_BC:
//            E("\tstax b\n");
//            break;
//
//        case REG_DE:
//            E("\tstax d\n");
//            break;
//    }
//
//i2 i2 STORE(2) --
//    reg_t r = regalloc_pop(REG_DE);
//    regalloc_pop(REG_HL);
//    E("\tmov m, e\n");
//    E("\tinx h\n");
//    E("\tmov m, d\n");
//
//// --- Branches -------------------------------------------------------------
//
//i1 BEQZ(1, truelabel, falselabel) LABEL(nextlabel) --
//    reg_t r = regalloc_pop(REG_A);
//    regalloc_reg_changing(ALL_REGS);
//    E("\tora a\n");
//    if (nextlabel == truelabel)
//        E("\tjnz %s\n", labelref(falselabel));
//    else
//    {
//        E("\tjz %s\n", labelref(truelabel));
//        if (nextlabel != falselabel)
//            E("\tjmp %s\n", labelref(falselabel));
//    }
//    E("%s:\n", labelref(nextlabel));
//
//i2 BEQZ(2, truelabel, falselabel) LABEL(nextlabel) --
//    reg_t r = regalloc_pop(REG_HL);
//    regalloc_reg_changing(ALL_REGS);
//    E("\tmov a, h\n");
//    E("\tora l\n");
//    if (nextlabel == truelabel)
//        E("\tjnz %s\n", labelref(falselabel));
//    else
//    {
//        E("\tjz %s\n", labelref(truelabel));
//        if (nextlabel != falselabel)
//            E("\tjmp %s\n", labelref(falselabel));
//    }
//    E("%s:\n", labelref(nextlabel));
//
//BEQS(1, truelabel, falselabel) -- SUB(1) BEQZ(1, truelabel, falselabel)
//BLTS(1, truelabel, falselabel) -- SUB(1) BLTZ(1, truelabel, falselabel)
//BGTS(1, truelabel, falselabel) -- SUB(1) BGTZ(1, truelabel, falselabel)
//
//BEQS(2, truelabel, falselabel) -- SUB(2) BEQZ(2, truelabel, falselabel)
//BLTS(2, truelabel, falselabel) -- SUB(2) BLTZ(2, truelabel, falselabel)
//BGTS(2, truelabel, falselabel) -- SUB(2) BGTZ(2, truelabel, falselabel)
//
//BEQP(truelabel, falselabel) -- BEQS(2, truelabel, falselabel)
//BLTP(truelabel, falselabel) -- BLTS(2, truelabel, falselabel)
//BGTP(truelabel, falselabel) -- BGTS(2, truelabel, falselabel)
//
//// --- Data -----------------------------------------------------------------
//
//STRING(s) --
//    int sid = id++;
//    emitter_open_chunk();
//    E("s%d:\n", sid);
//    E("\tdb ");
//    bool instring = false;
//    bool start = true;
//    for (;;)
//    {
//        char c = *s++;
//        if (!c)
//            break;
//        if (!start && !instring)
//            E(", ");
//        start = false;
//        if (isprint(c) && (c != '\"') && (c != '\\'))
//        {
//            if (!instring)
//            {
//                E("\"");
//                instring = true;
//            }
//            E("%c", c);
//        }
//        else
//        {
//            if (instring)
//            {
//                E("\", ");
//                instring = false;
//            }
//            E("%d", c);
//        }
//    }
//    if (instring)
//        E("\"");
//    if (!start)
//        E(", ");
//    E("0\n");
//    emitter_close_chunk();
//
//    reg_t r = regalloc_alloc(REG_16);
//    E("\tlxi %s, s%d\n", regname(r), sid);
//    regalloc_push(r);
    
// --- Constant type inference ----------------------------------------------

constant(c) STORE(1) -- const1(c) STORE(1)
constant(c) STORE(2) -- const2(c) STORE(2)
constant(c) STORE(4) -- const4(c) STORE(4)

constant(c) PARAM(1) -- const1(c) PARAM(1)
constant(c) PARAM(2) -- const2(c) PARAM(2)
constant(c) PARAM(4) -- const4(c) PARAM(4)

constant(c) NEG(1) -- const1(c) NEG(1)
constant(c) NEG(2) -- const2(c) NEG(2)
constant(c) NEG(4) -- const4(c) NEG(4)

constant(c) ADD(1) -- const1(c) ADD(1)
constant(c) ADD(2) -- const2(c) ADD(2)
constant(c) ADD(4) -- const4(c) ADD(4)
constant(c) (value) ADD(1) -- const1(c) (value) ADD(1)
constant(c) (value) ADD(2) -- const2(c) (value) ADD(2)
constant(c) (value) ADD(4) -- const4(c) (value) ADD(4)

constant(c) SUB(1) -- const1(c) SUB(1)
constant(c) SUB(2) -- const2(c) SUB(2)
constant(c) SUB(4) -- const4(c) SUB(4)
constant(c) (value) SUB(1) -- const1(c) (value) SUB(1)
constant(c) (value) SUB(2) -- const2(c) (value) SUB(2)
constant(c) (value) SUB(4) -- const4(c) (value) SUB(4)

constant(c) MUL(1) -- const1(c) MUL(1)
constant(c) MUL(2) -- const2(c) MUL(2)
constant(c) MUL(4) -- const4(c) MUL(4)
constant(c) (value) MUL(1) -- const1(c) (value) MUL(1)
constant(c) (value) MUL(2) -- const2(c) (value) MUL(2)
constant(c) (value) MUL(4) -- const4(c) (value) MUL(4)

constant(c) DIVS(1) -- const1(c) DIVS(1)
constant(c) DIVS(2) -- const2(c) DIVS(2)
constant(c) DIVS(4) -- const4(c) DIVS(4)
constant(c) (value) DIVS(1) -- const1(c) (value) DIVS(1)
constant(c) (value) DIVS(2) -- const2(c) (value) DIVS(2)
constant(c) (value) DIVS(4) -- const4(c) (value) DIVS(4)

constant(c) REMS(1) -- const1(c) REMS(1)
constant(c) REMS(2) -- const2(c) REMS(2)
constant(c) REMS(4) -- const4(c) REMS(4)
constant(c) (value) REMS(1) -- const1(c) (value) REMS(1)
constant(c) (value) REMS(2) -- const2(c) (value) REMS(2)
constant(c) (value) REMS(4) -- const4(c) (value) REMS(4)

constant(c) OR(1) -- const1(c) OR(1)
constant(c) OR(2) -- const2(c) OR(2)
constant(c) OR(4) -- const4(c) OR(4)
constant(c) (value) OR(1) -- const1(c) (value) OR(1)
constant(c) (value) OR(2) -- const2(c) (value) OR(2)
constant(c) (value) OR(4) -- const4(c) (value) OR(4)

constant(c) AND(1) -- const1(c) AND(1)
constant(c) AND(2) -- const2(c) AND(2)
constant(c) AND(4) -- const4(c) AND(4)
constant(c) (value) AND(1) -- const1(c) (value) AND(1)
constant(c) (value) AND(2) -- const2(c) (value) AND(2)
constant(c) (value) AND(4) -- const4(c) (value) AND(4)

constant(c) EOR(1) -- const1(c) EOR(1)
constant(c) EOR(2) -- const2(c) EOR(2)
constant(c) EOR(4) -- const4(c) EOR(4)
constant(c) (value) EOR(1) -- const1(c) (value) EOR(1)
constant(c) (value) EOR(2) -- const2(c) (value) EOR(2)
constant(c) (value) EOR(4) -- const4(c) (value) EOR(4)

constant(c) BEQS(1, tl, fl) -- const1(c) BEQS(1, tl, fl)
constant(c) BEQS(2, tl, fl) -- const2(c) BEQS(2, tl, fl)
constant(c) BEQS(4, tl, fl) -- const4(c) BEQS(4, tl, fl)
constant(c) BLTS(1, tl, fl) -- const1(c) BLTS(1, tl, fl)
constant(c) BLTS(2, tl, fl) -- const2(c) BLTS(2, tl, fl)
constant(c) BLTS(4, tl, fl) -- const4(c) BLTS(4, tl, fl)
constant(c) BGTS(1, tl, fl) -- const1(c) BGTS(1, tl, fl)
constant(c) BGTS(2, tl, fl) -- const2(c) BGTS(2, tl, fl)
constant(c) BGTS(4, tl, fl) -- const4(c) BGTS(4, tl, fl)

const1(c) -- i1

const2(c) -- i2
