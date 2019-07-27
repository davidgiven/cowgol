#ifndef MIDCODE_H
#define MIDCODE_H

struct midcode;

#include "midcodes.h"

struct midcode
{
    int code;
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

extern void midcode_init(void);

#endif
