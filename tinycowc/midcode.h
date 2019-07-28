#ifndef MIDCODE_H
#define MIDCODE_H

struct midcode;

#include "midcodes.h"

struct midcode
{
    enum midcodes code;
    union midcode_data u;
};

#define MIDBUFSIZ 16
#define VSTACKSIZ 64

struct matchcontext
{
    int rdptr;
    int wrptr;
    struct midcode midcodes[MIDBUFSIZ];
};

extern void midend_init(void);
extern void midend_flush(int threshold);
extern struct midcode* midend_append(void);
extern struct midcode* midend_prepend(void);
extern bool arch_instruction_matcher(struct matchcontext* ctx);
extern void arch_print_vstack(FILE* stream);

#endif
