#ifndef GLOBALS_H
#define GLOBALS_H

extern void fatal(const char* msg, ...);
extern void warning(const char* msg, ...);
extern void yyerror(const char* msg, ...);
extern int yydebug;

extern void* open_file(FILE* fp);
extern void include_file(void* buffer);

#endif

