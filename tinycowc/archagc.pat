%{
#include "globals.h"
#include "midcode.h"

static int sp = 0;
static FILE* datafp;
static FILE* codefp;

static void pushing(void)
{
    if (sp != 0)
        ecode("TS S%d + %#o", current_sub->arch->id, sp-1);
    sp++;
}

static void popping(void)
{
    sp--;
    if (sp != 0)
        ecode("CAE S%d + %#o", current_sub->arch->id, sp-1);
}

%}

%value constant(int32_t val) = ("%d", $$.val)
%value address(struct symbol* sym, int32_t off) = ("%s+%d", sym->name, off)
%value s1

%%

STARTFILE --

STARTSUB --
    ecode("");
    ecode("# %s", current_sub->name);
    elabel("F%d", current_sub->arch->id);
    ecode("EXTEND");
    ecode("QXCH Q%d", current_sub->arch->id);

    if (current_sub->inputparameters != 0)
    {
        ecode("TS Q");
        for (int i=0; i<current_sub->inputparameters; i++)
        {
            ecode("INDEX Q");
            ecode("CA %#o", i);
            ecode("TS W%d + %#o", current_sub->arch->id, i);
        }
    }

JUMP(label) --
    ecode("TCF X%d", label);

CONSTANT(val) -- constant(val)

ADDRESS(sym) -- address(sym, 0)

address(sym, off) constant(val) ADD(2) -- address(sym, newoff)
    newoff = off + val;

address(sym, off) LOAD(1) -- s1
    pushing();
    ecode("CAE W%d + %#o", sym->u.var.sub->arch->id, sym->u.var.offset + off);

s1 LOAD(1) -- s1
    ecode("INDEX A");
    ecode("CAE 0");

address(sym, off) s1 STORE(1) --
    ecode("XCHG W%d + %#o", sym->u.var.sub->arch->id, sym->u.var.offset + off);
    popping();

s1 s1 STORE(1) --
    ecode("INDEX S%d + %#o", current_sub->arch->id, sp-2);
    ecode("XCHG A");
    popping();
    popping();
