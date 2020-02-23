#ifndef GLOBALS_H
#define GLOBALS_H

#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

extern void fatal(const char* s, ...) __attribute__ ((noreturn));
extern const char* aprintf(const char* s, ...);
extern int yylex(void);
extern int yylineno;
extern FILE* yyin;

extern char* yytext;
extern int32_t number;

enum
{
	TYPE_PARTIAL,
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

typedef struct midnode Node;

enum
{
	REG_SAME_AS_INSTRUCTION_RESULT = -1
};

typedef int32_t reg_t;
typedef struct reg Register;
struct reg
{
	const char* name;
	reg_t id;
	reg_t uses;
	reg_t compatible;
	bool isstacked;
};

typedef struct rule Rule;
typedef struct instruction Instruction;
typedef struct regmove Regmove;

typedef struct symbol Symbol;
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
			struct symbol* indextype;
			struct namespace namespace;
			bool issigned: 1;
		}
		type;

		struct
		{
			struct symbol* type;
			struct subroutine* sub; /* null for a member */
			const char* externname;
			uint32_t offset;
		}
		var;

		int32_t constant;
		struct subroutine* sub;
		struct symbol* alias;
	}
	u;
};

typedef struct subroutine Subroutine;
struct subroutine
{
	const char* name;
	const char* externname;
	unsigned workspace[4]; /* four workspaces should be enough */
	struct namespace namespace;
	int inputparameters;
	int outputparameters;
	int old_break_label;
	int id;
	struct subarch* arch;
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
extern void arch_init_member(struct symbol* record, struct symbol* member, int position);
extern void arch_emit_comment(const char* text, ...);
extern void arch_emit_move(reg_t src, reg_t dest);
extern Symbol* arch_guess_int_type(uint32_t min, uint32_t max);

#endif

