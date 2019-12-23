%{
#include "globals.h"
#include "midcode.h"
#include "emitter.h"
#include "regalloc.h"
#include <ctype.h>
#include <bsd/string.h>

/* Workspaces used by the 8080 code generator:
 *
 * 0 = variables (this one always is)
 * 1, 2, 3 = unused
 */

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

static char asmbuffer[80];

void arch_init_types(void)
{
	make_number_type("uint32", 4, false);
	make_number_type("int32", 4, true);
	intptr_type = make_number_type("uint16", 2, false);
	make_number_type("int16", 2, true);
	uint8_type = make_number_type("uint8", 1, false);
	make_number_type("int8", 1, true);

	/* Registers C and E are not used by the code generator. This is so
	 * we can push and pop any 8-bit value and have them all interoperate ---
	 * so, AF, BC, DE use A, B, D respectively. */

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
	/* All variables get allocated from workspace 0. */
	current_sub->workspace[0] += var->u.var.type->u.type.width;
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
    snprintf(buffer, sizeof(buffer), "f%d", sub->arch->id);
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
	{
		if ((id == REG_A) && (num == 0))
			E("\txor a\n");
		else
			E("\tmvi %s, %d\n", regname(id), num & 0xff);
	}
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

static void call(struct subroutine* sub)
{
    if (sub->externname)
    {
        emitter_open_chunk();
        E("\textrn %s\n", sub->externname);
        emitter_close_chunk();
    }

    regalloc_reg_changing(ALL_REGS);
    arch_emit_comment("subroutine with %d input parameters", sub->inputparameters);
    E("\tcall %s\n", subref(sub));
    regalloc_adjust_stack(-sub->inputparameters);
}

%}

statement: STARTFILE
{
    emitter_open_chunk();
    E("\textrn add4\n");
    E("\textrn sub4\n");
    E("\textrn neg4\n");
    E("\textrn cpy4\n");
    E("\textrn asl1\n");
    E("\textrn asl2\n");
	E("\textrn lsr1\n");
	E("\textrn lsr2\n");
	E("\textrn asr1\n");
	E("\textrn asr2\n");
	E("\textrn cmpu4\n");
    emitter_close_chunk();
}

statement: ENDFILE;

statement: STARTSUB:s
{
    emitter_open_chunk();
    E("\n");
    E("; %s\n", $s.sub->name);
    E("\tcseg\n");
    if ($s.sub->externname)
        E("\tpublic %s\n", $s.sub->externname);
    E("%s:\n", subref($s.sub));

    if ($s.sub->inputparameters != 0)
    {
        E("\tpop b\n");
        for (int i=$s.sub->inputparameters-1; i>=0; i--)
        {
			struct symbol* param = $s.sub->namespace.firstsymbol;
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
}

statement: ENDSUB:s
{
	E("end_%s:\n", subref($s.sub));
	if ($s.sub->outputparameters != 0)
	{
		E("\tpop h\n");
		E("\txchg\n"); /* put return address in DE */

		for (int i=0; i<$s.sub->outputparameters; i++)
		{
			struct symbol* param = $s.sub->namespace.firstsymbol;
			for (int j=0; j<(i + $s.sub->inputparameters); j++)
				param = param->next;

			if (param->u.var.type->u.type.width == 1)
			{
				E("\tlda %s\n", symref(param, 0));
				E("\tpush psw\n");
			}
			else
			{
				E("\tlhld %s\n", symref(param, 0));
				E("\tpush h\n");
			}
		}

		E("\txchg\n");
		E("\tpchl\n");
	}
	else
		E("\tret\n");

    E("\tdseg\n");
	E("w%d: ds %d\n", $s.sub->arch->id, $s.sub->workspace[0]);
    emitter_close_chunk();
}

// --- Core conversions --------------------------------------------------

address: ADDRESS:s
{
	$$.sym = $s.sym;
	$$.off = 0;
}

constant: CONSTANT:c
{
	$$.off = $c.value;
}

reg1: reg1a;
reg1: reg1bdh;
reg2: reg2hl;
reg2: reg2bcde;

reg1a: reg1
{ regalloc_push(regalloc_pop(REG_A)); }

reg1bdh: reg1
{ regalloc_push(regalloc_pop(REG_B | REG_D | REG_H)); }

reg2hl: reg2
{ regalloc_push(regalloc_pop(REG_HL)); }

reg2bcde: reg2
{ regalloc_push(regalloc_pop(REG_BC | REG_DE)); }

%{
	static void loadaddress(reg_t mask, struct symbol* sym, int off)
	{
		reg_t r = regalloc_alloc(mask);
		E("\tlxi %s, %s\n", regname(r), symref(sym, off));
		regalloc_push(r);
	}
%}

reg2: address:s
{ loadaddress(REG_16, $s.sym, $s.off); }
	
reg2hl: address:s
{ loadaddress(REG_HL, $s.sym, $s.off); }
	
reg2bcde: address:s
{ loadaddress(REG_BC|REG_DE, $s.sym, $s.off); }
	
reg1: constant:c
{ regalloc_push(regalloc_load_const(REG_8, $c.off)); }

reg1a: constant:c
{ regalloc_push(regalloc_load_const(REG_A, $c.off)); }

reg1bdh: constant:c
{ regalloc_push(regalloc_load_const(REG_B | REG_D | REG_H, $c.off)); }

reg2: constant:c
{ regalloc_push(regalloc_load_const(REG_16, $c.off)); }

reg2hl: constant:c
{ regalloc_push(regalloc_load_const(REG_HL, $c.off)); }

reg2bcde: constant:c
{ regalloc_push(regalloc_load_const(REG_BC | REG_DE, $c.off)); }

stk4: constant:c
{
	regalloc_flush_stack();

	reg_t r = regalloc_load_const(REG_16, $c.off >> 16);
	E("\tpush %s\n", regname(r));
	regalloc_unlock(r);
	r = regalloc_load_const(REG_16, $c.off & 0xffff);
	E("\tpush %s\n", regname(r));
}

// --- Subroutines -------------------------------------------------------

// SETPARAM leaves the parameter on the top of the sstack, but the code
// generator loses track of it.

inputparameters: END;

inputparameters: SETPARAM1(reg1, inputparameters)
{ regalloc_flush_stack(); }

inputparameters: SETPARAM2(reg2, inputparameters)
{ regalloc_flush_stack(); }

statement: GETPARAM1(address:a)
{
	regalloc_alloc(REG_A);
	E("\tpop psw\n");
	E("\tsta %s\n", symref($a.sym, $a.off));
	regalloc_reg_contains_var(REG_A, $a.sym, $a.off);
}

statement: GETPARAM2(address:a)
{
	regalloc_alloc(REG_HL);
	E("\tpop h\n");
	E("\tshld %s\n", symref($a.sym, $a.off));
	regalloc_reg_contains_var(REG_HL, $a.sym, $a.off);
}

statement: CALL0(inputparameters):c
{
	call($c.sub);
}

reg1: CALL1(inputparameters):c
{
	call($c.sub);
    regalloc_adjust_stack(2);
}

reg2: CALL2(inputparameters):c
{
	call($c.sub);
    regalloc_adjust_stack(2);
}

// --- Control flow ------------------------------------------------------

statement: RETURN
{
	E("\tjmp end_%s\n", subref(current_sub));
}

statement: LABEL:b
{
    regalloc_reg_changing(ALL_REGS);
	E("%s:\n", labelref($b.label));
}

statement: JUMP:j
{
    regalloc_reg_changing(ALL_REGS);
	E("\tjmp %s\n", labelref($j.label));
}

// --- Stores ---------------------------------------------------------------

statement: STORE1(reg2, reg1)
{
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
}

statement: STORE1(address:a, reg1)
{
	regalloc_pop(REG_A);
	E("\tsta %s\n", symref($a.sym, $a.off));
	regalloc_reg_contains_var(REG_A, $a.sym, $a.off);
}

statement: STORE2(reg2hl, reg2)
{
    reg_t r = regalloc_pop(REG_16 & ~REG_HL);
    regalloc_pop(REG_HL);
    regalloc_reg_changing(REG_HL);
    E("\tmov m, %s\n", regnamelo(r));
    E("\tinx h\n");
    E("\tmov m, %s\n", regname(r));
}

statement: STORE2(address:a, reg2hl)
{
	regalloc_pop(REG_HL);
	E("\tshld %s\n", symref($a.sym, $a.off));
	regalloc_reg_contains_var(REG_HL, $a.sym, $a.off);
}

statement: STORE4(address:dest, stk4:src) costs 4
{
	regalloc_alloc(REG_HL);
	E("\tpop h\n");
	E("\tshld %s\n", symref($dest.sym, $dest.off+0));
	E("\tpop h\n");
	E("\tshld %s\n", symref($dest.sym, $dest.off+2));
}

// --- Loads ----------------------------------------------------------------

reg1a: LOAD1(reg2)
{
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
}

reg1a: LOAD1(address:a)
{
	reg_t r = regalloc_load_var(REG_A, $a.sym, $a.off);
	regalloc_push(r);
}

reg2hl: LOAD2(reg2hl)
{
    regalloc_pop(REG_HL);
    regalloc_reg_changing(REG_HL);
    regalloc_alloc(REG_A);
    E("\tmov a, m\n");
    E("\tinx h\n");
    E("\tmov h, m\n");
    E("\tmov l, a\n");
    regalloc_push(REG_HL);
}

reg2: LOAD2(reg2hl)
{
    regalloc_pop(REG_HL);
    regalloc_reg_changing(REG_HL);
    regalloc_alloc(REG_A);
	reg_t r = regalloc_alloc(REG_16);
    E("\tmov %s, m\n", regnamelo(r));
    E("\tinx h\n");
    E("\tmov %s, m\n", regname(r));
    regalloc_push(r);
}

reg2hl: LOAD2(address:a)
{
	reg_t r = regalloc_load_var(REG_HL, $a.sym, $a.off);
	regalloc_push(r);
}

stk4: LOAD4(address:a)
{
	regalloc_flush_stack();
	regalloc_alloc(REG_HL);
	E("\tlhld %s\n", symref($a.sym, $a.off+2));
	E("\tpush h\n");
	E("\tlhld %s\n", symref($a.sym, $a.off+0));
	E("\tpush h\n");
}

// --- Branches -------------------------------------------------------------

%{
	static void bequ1(int truelabel, int falselabel)
	{
		reg_t rhs = regalloc_pop(REG_8 & ~REG_A);
		regalloc_pop(REG_A);
		regalloc_reg_changing(ALL_REGS);
		E("\tcmp %s\n", regname(rhs));
		E("\tjz %s\n", labelref(truelabel));
		E("\tjnz %s\n", labelref(falselabel));
	}
%}

statement: BEQU1(reg1a, reg1bdh):b
{ bequ1($b.truelabel, $b.falselabel); }

statement: BEQU1(reg1, reg1):b
{ bequ1($b.truelabel, $b.falselabel); }

statement: BEQS1(reg1a, reg1bdh):b
{ bequ1($b.truelabel, $b.falselabel); }

statement: BEQS1(reg1, reg1):b
{ bequ1($b.truelabel, $b.falselabel); }

statement: BLTU1(reg1a, constant:c):b
{
	regalloc_pop(REG_A);
	E("\tcpi %d\n", $c.off);
	E("\tjc %s\n", labelref($b.truelabel));
	E("\tjmp %s\n", labelref($b.falselabel));
}

%{
	static void bequ2(int truelabel, int falselabel)
	{
		reg_t rhs = regalloc_pop(REG_16);
		reg_t lhs = regalloc_pop(REG_16);
		regalloc_reg_changing(ALL_REGS);
		E("\tmov a, %s\n", regname(lhs));
		E("\tcmp %s\n", regname(rhs));
		E("\tjnz %s\n", labelref(falselabel));
		E("\tmov a, %s\n", regnamelo(lhs));
		E("\tcmp %s\n", regnamelo(rhs));
		E("\tjnz %s\n", labelref(falselabel));
		E("\tjmp %s\n", labelref(truelabel));
	}
%}

statement: BEQU2(reg2, reg2):b
{ bequ2($b.truelabel, $b.falselabel); }

statement: BEQS2(reg2, reg2):b
{ bequ2($b.truelabel, $b.falselabel); }

statement: BLTU2(reg2, reg2):b
{
	reg_t rhs = regalloc_pop(REG_16);
	reg_t lhs = regalloc_pop(REG_16);
	regalloc_reg_changing(ALL_REGS);
	E("\tmov a, %s\n", regnamelo(lhs));
	E("\tsub %s\n", regnamelo(rhs));
	E("\tmov a, %s\n", regname(lhs));
	E("\tsbb %s\n", regname(rhs));
	E("\tjc %s\n", labelref($b.truelabel));
	E("\tjmp %s\n", labelref($b.falselabel));
}

%{
	static void bequ4(int truelabel, int falselabel)
	{
		regalloc_reg_changing(ALL_REGS);
		E("\tcall sub4\n");
		E("\tcall cmpu4\n");
		E("\tjnz %s\n", labelref(falselabel));
		E("\tjmp %s\n", labelref(truelabel));
	}
%}

statement: BEQS4(stk4, stk4):b
{ bequ4($b.truelabel, $b.falselabel); }

// --- Arithmetic -----------------------------------------------------------

constant: NEG0(constant:c)
{ $$.off = -$c.off; }

reg1a: NEG1(reg1bdh)
{
    reg_t rhs = regalloc_pop(REG_8 & ~REG_A);
    regalloc_load_const(REG_A, 0);
    E("\tsub %s\n", regname(rhs));
    regalloc_push(REG_A);
}

reg2: NEG2(reg2)
{
    reg_t rhs = regalloc_pop(REG_16);
    regalloc_reg_changing(rhs);
    E("\txor a\n");
    E("\tsub %s\n", regnamelo(rhs));
    E("\tmov %s, a\n", regnamelo(rhs));
	E("\tsbb a\n");
    E("\tsub %s\n", regname(rhs));
    E("\tmov %s, a\n", regname(rhs));
	regalloc_push(rhs);
}

%{
	static void add1(void)
	{
		reg_t rhs = regalloc_pop(REG_A);
		reg_t lhs = regalloc_pop(REG_8);
		regalloc_reg_changing(REG_A);
		E("\tadd %s\n", regname(lhs));
		regalloc_push(REG_A);
	}
%}

reg1a: ADD1(reg1bdh, reg1a)
{ add1(); }

reg1a: ADD1(reg1a, reg1bdh)
{ add1(); }

reg1a: ADD1(reg1, reg1)
{ add1(); }

%{
	static void add1c(uint32_t c)
	{
		switch (c)
		{
			case 0:
				break;

			case 1:
			{
				reg_t r = regalloc_pop(REG_8);
				regalloc_reg_changing(r);
				E("\tinc %s\n", regname(r));
				regalloc_push(r);
				break;
			}

			case -1:
			{
				reg_t r = regalloc_pop(REG_8);
				regalloc_reg_changing(r);
				E("\tdec %s\n", regname(r));
				regalloc_push(r);
				break;
			}

			default:
			{
				reg_t lhs = regalloc_pop(REG_A);
				regalloc_reg_changing(REG_A);
				E("\tadi %d\n", c);
				regalloc_push(REG_A);
				break;
			}
		}
	}
%}

reg1a: ADD1(reg1a, constant:c)
{ add1c($c.off); }

reg1a: ADD1(constant:c, reg1a)
{ add1c($c.off); }

%{
	static void add2hl(void)
	{
		reg_t rhs = regalloc_pop(REG_16);
		reg_t lhs = regalloc_pop(REG_16);
		if ((rhs != REG_HL) && (lhs != REG_HL))
		{
			regalloc_alloc(REG_HL);
			if (rhs == REG_DE)
			{
				E("\txchg\n");
				rhs = REG_HL;
			}
			else if (lhs == REG_DE)
			{
				E("\txchg\n");
				lhs = REG_HL;
			}
			else
			{
				E("\tmov h, %s\n", regname(lhs));
				E("\tmov l, %s\n", regnamelo(lhs));
				lhs = REG_HL;
			}
		}
			
		regalloc_reg_changing(REG_HL);
		E("\tdad %s\n", regname((lhs != REG_HL) ? lhs : rhs));
		regalloc_push(REG_HL);
	}
%}

reg2hl: ADD2(reg2hl, reg2bcde) costs 2
{ add2hl(); }

reg2hl: ADD2(reg2bcde, reg2hl) costs 2
{ add2hl(); }

%{
	static void add2(uint32_t c)
	{
		switch (c)
		{
			case 0:
				break;

			case 1:
			{
				reg_t r = regalloc_pop(REG_16);
				regalloc_reg_changing(r);
				E("\tinx %s\n", regname(r));
				regalloc_push(r);
				break;
			}

			case -1:
			{
				reg_t r = regalloc_pop(REG_16);
				regalloc_reg_changing(r);
				E("\tdcx %s\n", regname(r));
				regalloc_push(r);
				break;
			}

			default:
			{
				reg_t lhs = regalloc_pop(REG_16);
				reg_t rhs;
				if (lhs != REG_HL)
					rhs = regalloc_load_const(REG_HL, c);
				else
					rhs = regalloc_load_const(REG_16 & ~REG_HL, c);
					
				regalloc_reg_changing(REG_HL);
				E("\tdad %s\n", regname((lhs != REG_HL) ? lhs : rhs));
				regalloc_push(REG_HL);
				break;
			}
		}
	}
%}

reg2hl: ADD2(reg2, constant:c)
{ add2($c.off); }

reg2hl: ADD2(constant:c, reg2)
{ add2($c.off); }

constant: SUB0(constant:lhs, constant:rhs)
{ $$.off = $lhs.off - $rhs.off; }

reg1a: SUB1(reg1a, reg1bdh)
{
    reg_t rhs = regalloc_pop(REG_8 & ~REG_A);
    reg_t lhs = regalloc_pop(REG_A);
    regalloc_reg_changing(REG_A);
    E("\tsub %s\n", regname(rhs));
    regalloc_push(REG_A);
}

reg1a: SUB1(reg1a, constant:c)
{ add1c(-$c.off); }

reg2: SUB2(reg2, reg2)
{
    reg_t rhs = regalloc_pop(REG_16);
    reg_t lhs = regalloc_pop(REG_16);
    regalloc_reg_changing(lhs);
    E("\tmov a, %s\n", regnamelo(lhs));
    E("\tsub %s\n", regnamelo(rhs));
    E("\tmov %s, a\n", regnamelo(lhs));
    E("\tmov a, %s\n", regname(lhs));
    E("\tsbb %s\n", regname(rhs));
    E("\tmov %s, a\n", regname(lhs));
    regalloc_push(lhs);
}

reg2: SUB2(reg2, constant:c)
{ add2(-$c.off); }

constant: MUL0(constant:lhs, constant:rhs)
{ $$.off = $lhs.off * $rhs.off; }

constant: MUL2(constant:lhs, constant:rhs)
{ $$.off = $lhs.off * $rhs.off; }

%{
	static void shift1(const char* name)
	{
		regalloc_pop(REG_B);
		regalloc_pop(REG_A);
		regalloc_reg_changing(REG_A | REG_B | REG_BC);
		E("\tcall %s\n", name);
		regalloc_push(REG_A);
	}
%}

reg1a: LSHIFT1(reg1a, reg1)
{ shift1("asl1"); }

reg1a: RSHIFTU1(reg1a, reg1)
{ shift1("lsr1"); }

reg1a: RSHIFTS1(reg1a, reg1)
{ shift1("asr1"); }

%{
	static void shift2(const char* name)
	{
		regalloc_pop(REG_B);
		regalloc_pop(REG_HL);
		regalloc_reg_changing(REG_A | REG_B | REG_HL);
		E("\tcall %s\n", name);
		regalloc_push(REG_HL);
	}
%}

reg2hl: LSHIFT2(reg2hl, reg1)
{ shift2("asl2"); }

reg2hl: RSHIFTU2(reg2hl, reg1)
{ shift2("lsr2"); }

reg2hl: RSHIFTS2(reg2hl, reg1)
{ shift2("asr2"); }

// --- 32-bit arithmetic -------------------------------------------------

stk4: ADD4(stk4, stk4)
{ E("\tcall add4\n"); }

stk4: SUB4(stk4, stk4)
{ E("\tcall sub4\n"); }

stk4: NEG4(stk4)
{ E("\tcall neg4\n"); }

// --- Inline assembly ------------------------------------------------------

statement: ASMSTART
{
    regalloc_flush_stack();
    regalloc_reg_changing(ALL_REGS);
    asmbuffer[0] = '\0';
}

statement: ASMTEXT:t
{
    strlcat(asmbuffer, $t.text, sizeof(asmbuffer));
    strlcat(asmbuffer, " ", sizeof(asmbuffer));
}

statement: ASMSYMBOL:s
{
    strlcat(asmbuffer, symref($s.sym, 0), sizeof(asmbuffer));
    strlcat(asmbuffer, " ", sizeof(asmbuffer));
}

statement: ASMEND
{
    E("\t%s\n", asmbuffer);
}

// --- Strings -----------------------------------------------------------

reg2: STRING:s
{
    int sid = id++;
    emitter_open_chunk();
    E("\tcseg\n");
    E("s%d:\n", sid);
    E("\tdb ");
    bool instring = false;
    bool start = true;
	const char* s = $s.text;
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
}

