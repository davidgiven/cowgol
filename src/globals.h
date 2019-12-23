#ifndef GLOBALS_H
#define GLOBALS_H

#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>
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
	TYPE_ARRAY,
	TYPE_RECORD,
	TYPE_ALIAS
};

struct namespace
{
	struct symbol* firstsymbol;
	struct symbol* lastsymbol;
	struct namespace* parent;
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
			struct namespace namespace;
			bool issigned: 1;
		}
		type;

		struct
		{
			struct symbol* type;
			struct subroutine* sub; /* null for a member */
			uint32_t offset;
		}
		var;

		int32_t constant;
		struct subroutine* sub;
		struct symbol* alias;
	}
	u;
};

struct subroutine
{
	const char* name;
	const char* externname;
	unsigned workspace[4]; /* four workspaces should be enough */
	struct namespace namespace;
	int inputparameters;
	int outputparameters;
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

struct includepath
{
	const char* path;
	const struct includepath* next;
};

extern struct includepath* includes;

#define yyerror(s) fatal(s)
extern void* open_file(const char* filename);
extern void include_file(void* buffer);

extern void varaccess(const char* opcode, struct symbol* var);

extern struct symbol* intptr_type;
extern struct symbol* uint8_type;

extern struct subroutine* current_sub;
extern int current_label;

extern struct symbol* dealias(struct symbol* sym);
extern struct symbol* add_new_symbol(struct namespace* namespace, const char* name);
extern struct symbol* add_alias(struct namespace* namespace, const char* name, struct symbol* real);
extern struct symbol* lookup_symbol(struct namespace* namespace, const char* name);
extern struct symbol* make_number_type(const char* name, int width, bool issigned);

extern void arch_init_types(void);
extern void arch_init_subroutine(struct subroutine* sub);
extern void arch_init_variable(struct symbol* var);
extern void arch_emit_comment(const char* text, ...);

#endif

