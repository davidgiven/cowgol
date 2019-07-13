%{
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "globals.h"

#define YYDEBUG 1
#include "y.tab.h"
%}

%%

program
	: 
	;

%%

void fatal(const char* s, ...)
{
	va_list ap;
	va_start(ap, s);
	fprintf(stderr, "Error: ");
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");
	va_end(ap);
	exit(1);
}

int main(int argc, const char* argv[])
{
	yydebug = 0;
	yyparse();
	return 0;
}

