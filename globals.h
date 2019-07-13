#ifndef GLOBALS_H
#define GLOBALS_H

extern void fatal(const char* s, ...);
extern int yylex(void);

#define yyerror(s) fatal(s)

#endif

