#include "globals.h"
#include "parser.h"
#include "iburg.h"

extern void Parse(void* parser, int token, Token t);
extern void* ParseAlloc(void *(*allocator)(size_t size));
extern void ParseFree(void* parser, void deallocator(void* ptr));

extern int yylex(void);
extern int yylineno;
extern int number;
extern const char* string;

int errcnt = 0;

void yyerror(const char *fmt, ...) {
        va_list ap;

        va_start(ap, fmt);
        if (yylineno > 0)
                fprintf(stderr, "line %d: ", yylineno);
        vfprintf(stderr, fmt, ap);
        if (fmt[strlen(fmt)-1] != '\n')
                 fprintf(stderr, "\n");
        errcnt++;
}

void warning(const char *fmt, ...) {
        va_list ap;

        va_start(ap, fmt);
        if (yylineno > 0)
                fprintf(stderr, "line %d: ", yylineno);
        fprintf(stderr, "warning: ");
        vfprintf(stderr, fmt, ap);
        if (fmt[strlen(fmt)-1] != '\n')
                 fprintf(stderr, "\n");
}

void fatal(const char *fmt, ...) {
        va_list ap;

        va_start(ap, fmt);
        if (yylineno > 0)
                fprintf(stderr, "line %d: ", yylineno);
        fprintf(stderr, "fatal: ");
        vfprintf(stderr, fmt, ap);
        if (fmt[strlen(fmt)-1] != '\n')
                 fprintf(stderr, "\n");
        exit(1);
}

void parse(void)
{
    Token t;

	void* parser = ParseAlloc(malloc);
	for (;;)
	{
		int token = yylex();
		if (!token)
			break;
		switch (token)
		{
			case INT:
				t.number = number;
				break;

            case CSTRING:
            case CID:
            case STRING:
			case ID:
				t.string = string;
				break;
		}
		Parse(parser, token, t);
	}
	Parse(parser, 0, t);
    ParseFree(parser, free);
}

// vim: sw=4 ts=4 et

