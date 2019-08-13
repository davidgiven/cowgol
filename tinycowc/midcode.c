#include "globals.h"
#include "midcode.h"
#include "regalloc.h"

static struct matchcontext ctx;

#define NEXT(ptr) ((ptr+1) % MIDBUFSIZ)
#define PREV(ptr) ((MIDBUFSIZ+ptr-1) % MIDBUFSIZ)

#define MIDCODES_IMPLEMENTATION
#include "midcodes.h"

void midend_init(void)
{
    ctx.rdptr = 0;
    ctx.wrptr = 0;
}

struct midcode* midend_append(void)
{
    struct midcode* m = &ctx.midcodes[ctx.wrptr];
    ctx.wrptr = NEXT(ctx.wrptr);
    if (ctx.wrptr == ctx.rdptr)
        fatal("midcode buffer overflow");

    return m;
}

struct midcode* midend_prepend(void)
{
    if (ctx.rdptr == ctx.wrptr)
        fatal("midcode buffer overflow");

    ctx.rdptr = PREV(ctx.rdptr);
    return &ctx.midcodes[ctx.rdptr];
}

static void dump_buffer(void)
{
    int ptr = ctx.rdptr;
    printf("Buffer:");
    arch_print_vstack(stdout);
    for (;;)
    {
        if (ptr == ctx.wrptr)
            break;
        
        struct midcode* m = &ctx.midcodes[ptr];
        putchar(' ');
        print_midcode(stdout, m);

        ptr = NEXT(ptr);
    }
    printf("\n");
}

void midend_flush(int threshold)
{
    for (;;)
    {
        int midcodedepth = (MIDBUFSIZ + ctx.wrptr - ctx.rdptr) % MIDBUFSIZ;
        if (midcodedepth <= threshold)
            break;

        dump_buffer();
        if (!arch_instruction_matcher(&ctx))
            fatal("no matching instruction in pattern");
        regalloc_unlock(ALL_REGS);
    }
}

static void push_midend_state_machine(void)
{
    midend_flush(MIDBUFSIZ / 2);
}
