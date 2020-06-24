#ifndef ERROR_H
#define ERROR_H

#include <stdarg.h>

//extern FILE    *fopen(const char * __restrict, const char * __restrict);
extern void error (char * format, ...);
extern void warning (char * format, ...);

#undef _P
#endif /* ERROR_H */
