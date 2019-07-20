#ifndef GLOBALS_H
#define GLOBALS_H

#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

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
	int label_after;
	int inputparameters;
	int old_break_label;
    int id;
    int maxsp;
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

enum
{
	LOGICOP_AND,
	LOGICOP_OR,
	LOGICOP_XOR
};

extern void arch_file_prologue(void);
extern void arch_file_epilogue(void);
extern void arch_subroutine_prologue(void);
extern void arch_subroutine_epilogue(void);
extern void arch_emit_label(int label);
extern void arch_label_alias(int fakelabel, int reallabel);
extern void arch_emit_jump(int label);
extern void arch_emit_call(struct subroutine* sub);
extern void arch_return(void);
extern void arch_push_input_param(struct symbol* type);
extern void arch_push_constant(struct symbol* sym, int32_t value);
extern void arch_push_string_constant(const char* text);
extern void arch_push_value(struct symbol* sym, int32_t offset);
extern void arch_pop(struct symbol* type);
extern void arch_dereference(struct symbol* ptrtype);
extern void arch_add_const(struct symbol* type, struct symbol* sym, int32_t value);
extern void arch_add(struct symbol* type);
extern void arch_subfrom_const(struct symbol* type, struct symbol* sym, int32_t value);
extern void arch_sub(struct symbol* type);
extern void arch_mul_const(struct symbol* type, int32_t value);
extern void arch_mul(struct symbol* type);
extern void arch_div_const_by(struct symbol* type, int32_t value);
extern void arch_div_const(struct symbol* type, int32_t value);
extern void arch_div(struct symbol* type);
extern void arch_rem_const_by(struct symbol* type, int32_t value);
extern void arch_rem_const(struct symbol* type, int32_t value);
extern void arch_rem(struct symbol* type);
extern void arch_logicop_const(struct symbol* type, int32_t value, int op);
extern void arch_logicop(struct symbol* type, int op);
extern void arch_cmp_equals_const(struct symbol* type, int truelabel, int falselabel,
	struct symbol* sym, int32_t value);
extern void arch_cmp_equals(struct symbol* type, int truelabel, int falselabel);
extern void arch_cmp_lessthan_const(struct symbol* type, int truelabel, int falselabel,
	struct symbol* sym, int32_t value);
extern void arch_cmp_lessthan(struct symbol* type, int truelabel, int falselabel);
extern void arch_cmp_greaterthan_const(struct symbol* type, int truelabel, int falselabel,
	struct symbol* sym, int32_t value);
extern void arch_cmp_greaterthan(struct symbol* type, int truelabel, int falselabel);
extern void arch_assign_var(struct symbol* type, struct symbol* var, int32_t offset);
extern void arch_assign_ptr(struct symbol* ptrtype);
extern void arch_asm_start(void);
extern void arch_asm_string(const char* text);
extern void arch_asm_symbol(struct symbol* sym);
extern void arch_asm_end(void);

#endif

