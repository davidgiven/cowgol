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

%%

u8
u16
s8
s16
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
    printf("x%d:\n", sub->label_after);

address(sym, off) constant(val) STORE(1) --
    printf("\tmvi a, %d\n", val);
    printf("\tsta %s\n", symref(sym, off));

address(sym, off) LOAD(1) -- u8
    printf("\tlda %s\n", symref(sym, off));

constant(lhs) constant(rhs) ADD(n) -- constant(result)
    result = lhs + rhs;

ADDRESS(sym) -- address(sym, 0)

CONSTANT(val) -- constant(val)
