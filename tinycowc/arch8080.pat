#include "globals.h"
#include "midcode.h"

void arch_init_types(void)
{
	intptr_type = make_number_type("uint16", 2, false);
	make_number_type("int16", 2, true);
	uint8_type = make_number_type("uint8", 1, false);
	make_number_type("int8", 1, true);
}

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

void arch_init_subroutine(struct subroutine* sub)
{
    sub->arch = calloc(1, sizeof(struct subarch));
    sub->arch->id = id++;
}

void arch_init_variable(struct symbol* var)
{
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
        case TOS_A: printf("\tpush psw\n"); return;
        case TOS_HL: printf("\tpush hl\n"); return;
    }
}

static void unvict(int wanted)
{
    if (tos == wanted)
        return;
    if (tos != TOS_EMPTY)
        fatal("tos type mismatch");
    if (wanted == TOS_A)
        printf("\tpop psw\n");
    if (wanted == TOS_HL)
        printf("\tpop h\n");
    tos = wanted;
}

%%

i1
i2
constant(int32_t val) = ("%d", $$.val)
address(struct symbol* sym, int32_t off) = ("%s+%d", $$.sym->name, $$.off)

%%

STARTFILE --

ENDFILE --

STARTSUB(sub) --
    printf("\n");
    printf("; %s\n", sub->name);
    printf("\tjmp x%d\n", sub->label_after);
    printf("f%d:\n", sub->arch->id);

ENDSUB(sub) --
    printf("\tret\n");
	printf("w%d: ds %d\n", sub->arch->id, sub->workspace);
    printf("x%d:\n", sub->label_after);

address(sym, off) constant(val) STORE(1) --
    evict();
    printf("\tmvi a, %d\n", val);
    printf("\tsta %s\n", symref(sym, off));

address(sym, off) constant(val) STORE(2) --
    evict();
    printf("\tlxi hl, %d\n", val);
    printf("\tshld %s\n", symref(sym, off));

address(sym, off) i1 STORE(1) --
    unvict(TOS_A);
    printf("\tsta %s\n", symref(sym, off));

address(sym, off) i2 STORE(2) --
    unvict(TOS_HL);
    printf("\tshld %s\n", symref(sym, off));

address(sym, off) LOAD(1) -- i1
    evict();
    printf("\tlda %s\n", symref(sym, off));
    tos = TOS_A;

address(sym, off) LOAD(2) -- i2
    evict();
    printf("\tlhld %s\n", symref(sym, off));
    tos = TOS_HL;

constant(lhs) constant(rhs) ADD(n) -- constant(result)
    result = lhs + rhs;

i1 i1 ADD(1) -- i1
    unvict(TOS_A);
    printf("\tpop hl\n");
    printf("\tadd h\n");

i1 constant(n) ADD(1) -- i1
    unvict(TOS_A);
    printf("\tadi %d\n", n);

i2 i2 ADD(2) -- i2
    unvict(TOS_HL);
    printf("\tpop d\n");
    printf("\tdad d\n");

i2 constant(n) ADD(2) -- i2
    unvict(TOS_HL);
    printf("\tlxi d, %d", n);
    printf("\tdad d\n", n);

ADDRESS(sym) -- address(sym, 0)

CONSTANT(val) -- constant(val)
