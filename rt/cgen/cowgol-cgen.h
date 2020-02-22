#ifndef COWGOL_CGEN_H
#define COWGOL_CGEN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef uint8_t i1;
typedef uint16_t i2;
typedef uint32_t i4;
typedef uint64_t i8;

typedef int8_t s1;
typedef int16_t s2;
typedef int32_t s4;
typedef int64_t s8;

extern i8* __top;
extern i8* __himem;

#endif

