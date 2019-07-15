#ifndef GLOBALS_H
#define GLOBALS_H

#include <assert.h>
#include <stdint.h>
#include <stdbool.h>

extern void fatal(const char* s, ...);
extern const char* aprintf(const char* s, ...);
extern int yylex(void);

extern char text[256];
extern int32_t number;

struct symbol
{
	int kind;
	const char* name;
	struct symbol* next;

	union
	{
		struct
		{
			int width;
			struct symbol* pointerto;
			struct symbol* pointingat;
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
};

struct exprnode
{
	struct symbol* type;
	int32_t value;
};

struct looplabels
{
	int truelabel;
	int falselabel;
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

/* TODO: Remove these after arch conversion. */
enum
{
	REG_A,
	REG_HL,
	REG_DE,
	REG_BC
};
extern void vpush_reset(void);
extern void vpush_raw(void);
extern void vpush_reg(int reg);
extern void vpush_const(uint16_t c);
extern void vpush_addr(struct symbol* sym);
extern void vpush_value(struct symbol* sym);
extern void vpop_reg(int reg);
extern void varaccess(const char* opcode, struct symbol* var);

extern struct subroutine* current_sub;
extern int current_label;

extern void arch_file_prologue(void);
extern void arch_file_epilogue(void);
extern void arch_subroutine_prologue(void);
extern void arch_subroutine_epilogue(void);
extern void arch_emit_label(int label);
extern void arch_emit_jump(int label);
extern void arch_emit_call(struct subroutine* sub);
extern void arch_push_input_param(struct symbol* type);
extern void arch_push_string_constant(const char* text);
extern void arch_push_value(struct symbol* sym);
extern void arch_dereference(struct symbol* ptrtype);
extern void arch_add_const(struct symbol* type, int32_t value);
extern void arch_add(struct symbol* type);
extern void arch_subfrom_const(struct symbol* type, int32_t value);
extern void arch_sub(struct symbol* type);
extern void arch_cmp_equals_const(struct symbol* type, int truelabel, int falselabel, int32_t value);
extern void arch_cmp_equals(struct symbol* type, int truelabel, int falselabel);
extern void arch_assign_var(struct symbol* var);
extern void arch_assign_ptr(struct symbol* ptrtype);

#endif

