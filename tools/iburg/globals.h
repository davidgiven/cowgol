#ifndef GLOBALS_H
#define GLOBALS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>

extern void fatal(const char* msg, ...);
extern void warning(const char* msg, ...);
extern void yyerror(const char* msg, ...);
extern int yydebug;

extern void* open_file(FILE* fp);
extern void include_file(void* buffer);

extern void parse(void);

#endif

