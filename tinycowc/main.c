#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "globals.h"
#include "emitter.h"
#include "midcode.h"

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
	current_sub->externname = "cmain";

	yyin = fopen(argv[1], "r");
	yylineno = 1;
	yydebug = 0;

	emitter_open(argv[2]);
	emitter_open_chunk();

	midend_init();
	arch_init_types();
	arch_init_subroutine(current_sub);
	emit_mid_startfile();
	emit_mid_startsub(current_sub);
	yyparse();
	emit_mid_endsub(current_sub);
	emit_mid_endfile();
    midend_flush(0);

	emitter_close_chunk();
	emitter_close();

	return 0;
}
