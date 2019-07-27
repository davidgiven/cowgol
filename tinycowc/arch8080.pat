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

static int id = 0;

void arch_init_subroutine(struct subroutine* sub)
{
    sub->arch = calloc(1, sizeof(struct subarch));
    sub->arch->id = id++;
}

void arch_init_variable(struct symbol* var)
{
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

STARTSUB(sub) --
    printf("\n");
    printf("; %s\n", sub->name);
    printf("\tjmp x%d\n", sub->label_after);
    printf("f%d:\n", sub->arch->id);

ENDSUB(sub) --
    printf("\tret\n");
    printf("x%d:\n", sub->label_after);
