#include "globals.h"
#include "midcode.h"

static struct matchcontext ctx;

#define NEXT(ptr) ((ptr+1) % MIDBUFSIZ)
#define PREV(ptr) ((ptr-1) % MIDBUFSIZ)

#define MIDCODES_IMPLEMENTATION
#include "midcodes.h"

void midcode_init(void)
{
    ctx.rdptr = 0;
    ctx.wrptr = 1;
}

static struct midcode* add_midcode(void)
{
    struct midcode* m = &ctx.midcodes[ctx.wrptr];
    if (ctx.wrptr == ctx.rdptr)
        fatal("midcode buffer overflow");

    ctx.wrptr = NEXT(ctx.wrptr);
    return m;
}

static void dump_buffer(void)
{
    int ptr = ctx.rdptr;
    printf("Buffer: ");
    for (;;)
    {
        ptr = NEXT(ptr);
        if (ptr == ctx.wrptr)
            break;
        
        struct midcode* m = &ctx.midcodes[ptr];
        print_midcode(stdout, m);
        putchar(' ');
    }
    printf("\n");
}

static void push_midend_state_machine(void)
{
    dump_buffer();
}
