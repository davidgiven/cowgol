#ifndef MIDCODE_H
#define MIDCODE_H

struct midcode;

#include "midcodes.h"

struct midcode
{
    int code;
    union midcode_data u;
};

#endif
