#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "globals.h"

#define YYDEBUG 1
#include "parser.h"

void fatal(const char* s, ...)
{
	va_list ap;
	va_start(ap, s);
	fprintf(stderr, "%d: ", yylineno);
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");
	va_end(ap);
	exit(1);
}

void trace(const char* s, ...)
{
	va_list ap;
	va_start(ap, s);
	fprintf(stderr, "Log: ");
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");
	va_end(ap);
}

const char* aprintf(const char* s, ...)
{
	va_list ap;

	va_start(ap, s);
	int len = vsnprintf(NULL, 0, s, ap) + 1;
	va_end(ap);

	char* buffer = malloc(len);
	va_start(ap, s);
	vsnprintf(buffer, len, s, ap);
	va_end(ap);

	return buffer;
}

int main(int argc, const char* argv[])
{
	current_sub = calloc(1, sizeof(struct subroutine));
	current_sub->name = "__main";

	struct symbol* s;
	s = add_new_symbol("uint16");
	s->kind = TYPE;
	s->u.type.width = 2;
	intptr_type = s;

	s = add_new_symbol("int16");
	s->kind = TYPE;
	s->u.type.width = 2;
	s->u.type.issigned = true;

	s = add_new_symbol("uint8");
	s->kind = TYPE;
	s->u.type.width = 1;
	uint8_type = s;

	s = add_new_symbol("int8");
	s->kind = TYPE;
	s->u.type.width = 1;
	s->u.type.issigned = true;

	yyin = fopen(argv[1], "r");
	yylineno = 1;
	yydebug = 0;

	arch_file_prologue();
	yyparse();
	arch_file_epilogue();

	return 0;
}
