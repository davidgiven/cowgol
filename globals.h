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
};

struct argumentsspec
{
	struct subroutine* sub;
	int number;
	struct symbol* param;
	struct argumentsspec* previous_call;
};

#define yyerror(s) fatal(s)

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

#endif

