%{
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
	struct symbol* uint64_type = make_number_type("uint64", 8, false);
	make_number_type("int64", 8, true);
	struct symbol* uint32_type = make_number_type("uint32", 4, false);

	if (sizeof(void*) == 8)
		intptr_type = uint64_type;
	else
		intptr_type = uint32_type;
	add_alias(NULL, "intptr", intptr_type);

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
	/* All variables get allocated from workspace 0. */
	current_sub->workspace[0] += var->u.var.type->u.type.width;
}

void arch_emit_comment(const char* text, ...)
{
    va_list ap;
    va_start(ap, text);
    emitter_printf("\t// ");
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
reg_t arch_save(reg_t src, reg_t used) { return 0; }

%}

statement: STARTFILE
{
    emitter_open_chunk();
    E("#include \"rt/c/cowgol.h\"\n");
    E("static i1 workspace0[];\n");
    emitter_close_chunk();
}

statement: ENDFILE;

statement: STARTSUB:s
{
    emitter_open_chunk();
    E("\n");
    E("/* %s */\n", $s.sub->name);
    E("static i1 workspace%d[];\n", $s.sub->arch->id);
    E("void %s(", subref($s.sub));

    if (($s.sub->inputparameters == 0) && ($s.sub->outputparameters == 0))
        E("void");
    else
    {
        bool first = true;
        struct symbol* param = $s.sub->namespace.firstsymbol;
        for (int i=0; i<$s.sub->inputparameters; i++)
        {
            if (!first)
                E(", ");
            first = false;

            E("i%d p%d", param->u.var.type->u.type.width, i);
            param = param->next;
        }
        for (int i=0; i<$s.sub->outputparameters; i++)
        {
            if (!first)
                E(", ");
            first = false;

            E("i%d* p%d", param->u.var.type->u.type.width, $s.sub->inputparameters+i);
            param = param->next;
        }
    }
    E(") {\n");
	struct symbol* param = $s.sub->namespace.firstsymbol;
	for (int i=0; i<$s.sub->inputparameters; i++)
	{
		E("\t*(i%d*)%s = p%d;\n", param->u.var.type->u.type.width, symref(param, 0), i);
		param = param->next;
	}
}

statement: ENDSUB:s
{
	E("end:;\n");
	if (varsp != 0)
		fatal("vstack not empty at end of subroutine");
	struct symbol* param = $s.sub->namespace.firstsymbol;
	for (int i=0; i<$s.sub->inputparameters; i++)
		param = param->next;
	for (int i=0; i<$s.sub->outputparameters; i++)
	{
		E("\t*p%d = *(i%d*)%s;\n", $s.sub->inputparameters+i,
			param->u.var.type->u.type.width, symref(param, 0));
		param = param->next;
	}
    E("}\n");
    E("static i1 workspace%d[%d];\n", $s.sub->arch->id, $s.sub->workspace[0]);
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

reg: address:a
{
	int vid = push();
	E("\ti%d v%d = (i%d) %s;\n", sizeof(void*), vid, sizeof(void*), symref($a.sym, $a.off));
}

reg: constant:c
{
	int vid = push();
	E("\ti%d v%d = (i%d) %d;\n", sizeof(void*), vid, sizeof(void*), $c.off);
}

reg: STRING:s
{
	int vid = push();
	E("\ti%d v%d = (i%d) \"", sizeof(void*), vid, sizeof(void*));
	
	const uint8_t* p = (const uint8_t*) $s.text;
    for (;;)
    {
        uint8_t c = *p++;
		if (!c)
			break;
		if (isprint(c))
			E("%c", c);
		else
			E("\\%03o", c);
    }
    E("\";\n");
}

// --- Control flow ------------------------------------------------------

statement: RETURN
{
	E("\tgoto end;\n");
}

statement: LABEL:b
{
	E("%s:;\n", labelref($b.label));
}

statement: JUMP:j
{
	E("\tgoto %s;\n", labelref($j.label));
}

// --- Calls -------------------------------------------------------------

inputparameter: END;
inputparameter: SETPARAM1(reg, inputparameter);
inputparameter: SETPARAM2(reg, inputparameter);
inputparameter: SETPARAM4(reg, inputparameter);
inputparameter: SETPARAM8(reg, inputparameter);

%{
	static void getparam(int width)
	{
		int adr = pop();
		int val = pop();
		E("\t*(i%d*)v%d = v%d;\n", width, adr, val);
	}
%}

statement: GETPARAM1(reg)
{ getparam(1); }

statement: GETPARAM2(reg)
{ getparam(2); }

statement: GETPARAM4(reg)
{ getparam(4); }

statement: GETPARAM8(reg)
{ getparam(8); }

%{
	static void call(struct subroutine* sub)
	{
		int outputvids[sub->outputparameters];

		for (int i=0; i<sub->outputparameters; i++)
		{
			struct symbol* param = sub->namespace.firstsymbol;
			for (int j=0; j<(sub->inputparameters+i); j++)
				param = param->next;

			int vid = id++;
			E("\ti%d v%d;\n", param->u.var.type->u.type.width, vid);
			outputvids[i] = vid;
		}

		E("\t%s(", subref(sub));
		bool first = true;
		for (int i=varsp-sub->inputparameters; i<varsp; i++)
		{
			if (!first)
				E(", ");
			first = false;

			E("v%d", varstack[i]);
		}
		varsp -= sub->inputparameters;
		for (int i=0; i<sub->outputparameters; i++)
		{
			if (!first)
				E(", ");
			first = false;

			int vid = outputvids[i];
			if (varsp == VARSTACK_SIZE)
				fatal("varstack overflow");
			varstack[varsp++] = vid;
			E("&v%d", vid);
		}
		E(");\n");
	}
%}

statement: CALL0(inputparameter):c
{ call($c.sub); }

reg: CALL1(inputparameter):c
{ call($c.sub); }

reg: CALL2(inputparameter):c
{ call($c.sub); }

reg: CALL4(inputparameter):c
{ call($c.sub); }

reg: CALL8(inputparameter):c
{ call($c.sub); }


// --- Loads ----------------------------------------------------------------

%{
	static void loadc(int width, struct symbol* sym, int off)
	{
		E("\ti%d v%d = *(i%d*)%s;\n", width, push(), width, symref(sym, off));
	}

	static void load(int width)
	{
		int val = pop();
		E("\ti%d v%d = *(i%d*)v%d;\n", width, push(), width, val);
	}
%}

reg: LOAD1(address:a)
{ loadc(1, $a.sym, $a.off); }

reg: LOAD2(address:a)
{ loadc(2, $a.sym, $a.off); }

reg: LOAD4(address:a)
{ loadc(4, $a.sym, $a.off); }

reg: LOAD8(address:a)
{ loadc(8, $a.sym, $a.off); }

reg: LOAD1(reg)
{ load(1); }

reg: LOAD2(reg)
{ load(2); }

reg: LOAD4(reg)
{ load(4); }

reg: LOAD8(reg)
{ load(8); }

// --- Stores ---------------------------------------------------------------

%{
	static void storec(int width, struct symbol* sym, int off)
	{
		E("\t*(i%d*)%s = v%d;\n", width, symref(sym, off), pop());
	}

	static void store(int width)
	{
		int val = pop();
		int adr = pop();
		E("\t*(i%d*)v%d = v%d;\n", width, adr, val);
	}
%}

statement: STORE1(address:a, reg)
{ storec(1, $a.sym, $a.off); }

statement: STORE2(address:a, reg)
{ storec(2, $a.sym, $a.off); }

statement: STORE4(address:a, reg)
{ storec(4, $a.sym, $a.off); }

statement: STORE8(address:a, reg)
{ storec(8, $a.sym, $a.off); }

statement: STORE1(reg, reg)
{ store(1); }

statement: STORE2(reg, reg)
{ store(2); }

statement: STORE4(reg, reg)
{ store(4); }

statement: STORE8(reg, reg)
{ store(8); }

// --- Branches -------------------------------------------------------------

%{
	static void branch(int truelabel, int falselabel, const char* op, const char* type)
	{
		int rhs = pop();
		int lhs = pop();
		E("\tif (((%s)v%d) %s ((%s)v%d)) goto %s;",
			type, lhs, op, type, rhs, labelref(truelabel));
		E(" else goto %s;\n", labelref(falselabel));
	}
%}

statement: BEQU1(reg, reg):b
{ branch($b.truelabel, $b.falselabel, "==", "u1"); }

statement: BEQU2(reg, reg):b
{ branch($b.truelabel, $b.falselabel, "==", "u2"); }

statement: BEQU4(reg, reg):b
{ branch($b.truelabel, $b.falselabel, "==", "u4"); }

statement: BEQU8(reg, reg):b
{ branch($b.truelabel, $b.falselabel, "==", "u8"); }

statement: BEQS1(reg, reg):b
{ branch($b.truelabel, $b.falselabel, "==", "u1"); }

statement: BEQS2(reg, reg):b
{ branch($b.truelabel, $b.falselabel, "==", "u2"); }

statement: BEQS4(reg, reg):b
{ branch($b.truelabel, $b.falselabel, "==", "u4"); }

statement: BEQS8(reg, reg):b
{ branch($b.truelabel, $b.falselabel, "==", "u8"); }

statement: BLTU1(reg, reg):b
{ branch($b.truelabel, $b.falselabel, "<", "u1"); }

statement: BLTU2(reg, reg):b
{ branch($b.truelabel, $b.falselabel, "<", "u2"); }

statement: BLTU4(reg, reg):b
{ branch($b.truelabel, $b.falselabel, "<", "u4"); }

statement: BLTU8(reg, reg):b
{ branch($b.truelabel, $b.falselabel, "<", "u8"); }

// --- Arithmetic --------------------------------------------------------

%{
	static void simplebop(int width, const char* op, const char* type)
	{
		int rhs = pop();
		int lhs = pop();
		E("\ti%d v%d = (i%d)((%s)v%d %s (%s)v%d);\n",
			width, push(), width, type, lhs, op, type, rhs);
	}

	static void simpleuop(int width, const char* op, const char* type)
	{
		int val = pop();
		E("\ti%d v%d = (i%d)(%s (%s)v%d);\n",
			width, push(), width, op, type, val);
	}
%}

reg: ADD1(reg, reg)
{ simplebop(1, "+", "i1"); }

reg: ADD2(reg, reg)
{ simplebop(2, "+", "i2"); }

reg: ADD4(reg, reg)
{ simplebop(4, "+", "i4"); }

reg: ADD8(reg, reg)
{ simplebop(8, "+", "i8"); }

constant: SUB0(constant:c1, constant:c2)
{ $$.off = $c1.off - $c2.off; }

reg: SUB1(reg, reg)
{ simplebop(1, "-", "i1"); }

reg: SUB2(reg, reg)
{ simplebop(2, "-", "i2"); }

reg: SUB4(reg, reg)
{ simplebop(4, "-", "i4"); }

reg: SUB8(reg, reg)
{ simplebop(8, "-", "i8"); }

constant: MUL0(constant:c1, constant:c2)
{ $$.off = $c1.off * $c2.off; }

reg: MUL1(reg, reg)
{ simplebop(1, "*", "i1"); }

reg: MUL2(reg, reg)
{ simplebop(2, "*", "i2"); }

reg: MUL4(reg, reg)
{ simplebop(4, "*", "i4"); }

reg: MUL8(reg, reg)
{ simplebop(8, "*", "i8"); }

constant: RSHIFTU1(constant:c1, constant:c2)
{ $$.off = (unsigned)$c1.off >> (unsigned)$c2.off; }

reg: RSHIFTU1(reg, reg)
{ simplebop(1, ">>", "u1"); }

reg: RSHIFTU2(reg, reg)
{ simplebop(2, ">>", "u2"); }

reg: RSHIFTU4(reg, reg)
{ simplebop(4, ">>", "u4"); }

reg: RSHIFTU8(reg, reg)
{ simplebop(8, ">>", "u8"); }

constant: LSHIFT1(constant:c1, constant:c2)
{ $$.off = (unsigned)$c1.off << (unsigned)$c2.off; }

reg: LSHIFT1(reg, reg)
{ simplebop(1, "<<", "u1"); }

reg: LSHIFT2(reg, reg)
{ simplebop(2, "<<", "u2"); }

reg: LSHIFT4(reg, reg)
{ simplebop(4, "<<", "u4"); }

reg: LSHIFT8(reg, reg)
{ simplebop(8, "<<", "u8"); }

constant: NEG0(constant:c)
{ $$.off = -$c.off; }

reg: NEG1(reg)
{ simpleuop(1, "-", "i1"); }

reg: NEG2(reg)
{ simpleuop(2, "-", "i2"); }

reg: NEG4(reg)
{ simpleuop(4, "-", "i4"); }

reg: NEG8(reg)
{ simpleuop(8, "-", "i8"); }

constant: NOT0(constant:c)
{ $$.off = ~$c.off; }

reg: NOT1(reg)
{ simpleuop(1, "~", "i1"); }

reg: NOT2(reg)
{ simpleuop(2, "~", "i2"); }

reg: NOT4(reg)
{ simpleuop(4, "~", "i4"); }

reg: NOT8(reg)
{ simpleuop(8, "~", "i8"); }

// --- Casts ----------------------------------------------------------------

%{
	static void cast(int width)
	{
		int val = pop();
		E("\ti%d v%d = (i%d)v%d;\n", width, push(), width, val);
	}
%}

reg: CAST11(reg);
reg: CAST22(reg);
reg: CAST44(reg);
reg: CAST88(reg);

reg: CAST21(reg):c
{ cast(1); }

reg: CAST41(reg):c
{ cast(1); }

reg: CAST81(reg):c
{ cast(1); }

reg: CAST12(reg):c
{ cast(2); }

reg: CAST42(reg):c
{ cast(2); }

reg: CAST82(reg):c
{ cast(2); }

reg: CAST84(reg):c
{ cast(4); }

// --- Inline assembly ------------------------------------------------------

statement: ASMSTART
{
	E("\t");
}

statement: ASMTEXT:t
{
	E("%s ", $t.text);
}

statement: ASMSYMBOL:s
{
	E("%s ", symref($s.sym, 0));
}

statement: ASMEND
{
    E("\n");
}


