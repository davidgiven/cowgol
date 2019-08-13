#ifndef GLOBALS_H
#define GLOBALS_H

#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

extern void fatal(const char* s, ...);
extern const char* aprintf(const char* s, ...);
extern int yylex(void);
extern int yylineno;
extern FILE* yyin;

extern char* yytext;
extern int32_t number;

enum
{
	TYPE_NUMBER,
	TYPE_POINTER,
	TYPE_ARRAY
};

struct symbol
{
	int kind;
	const char* name;
	struct symbol* next;
	struct symarch* arch;

	union
	{
		struct
		{
			int kind;
			int width;
			struct symbol* pointerto;
			struct symbol* element;
			bool issigned: 1;
		}
		type;

		struct
		{
			struct symbol* type;
			struct subroutine* sub;
			uint32_t offset;
		}
		var;

		struct subroutine* sub;
	}
	u;
};

struct subroutine
{
	const char* name;
	struct subroutine* parent;
	struct symbol* firstsymbol;
	struct symbol* lastsymbol;
	uint32_t workspace;
	int inputparameters;
	int old_break_label;
	struct subarch* arch;
};

struct exprnode
{
	struct symbol* type;
	struct symbol* sym; /* or NULL for a numeric constant */
	int32_t off;
	bool constant : 1;
};

struct condlabels
{
	int truelabel;
	int falselabel;
};

struct looplabels
{
	int looplabel;
	int exitlabel;
	int old_break_label;
};

struct argumentsspec
{
	struct subroutine* sub;
	int number;
	struct symbol* param;
	struct argumentsspec* previous_call;
};

#define yyerror(s) fatal(s)

extern void varaccess(const char* opcode, struct symbol* var);

extern struct symbol* intptr_type;
extern struct symbol* uint8_type;

extern struct subroutine* current_sub;
extern int current_label;

extern struct symbol* add_new_symbol(const char* name);
extern struct symbol* make_number_type(const char* name, int width, bool issigned);

extern void arch_init_types(void);
extern void arch_init_subroutine(struct subroutine* sub);
extern void arch_init_variable(struct symbol* var);
extern void arch_emit_comment(const char* text);

#endif

