#ifndef GLOBALS_H
#define GLOBALS_H

#include <stdint.h>

extern void fatal(const char* s, ...);
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
		}
		type;

		struct
		{
			struct symbol* type;
			struct subroutine* sub;
			uint32_t offset;
		}
		var;
	}
	u;
};

struct subroutine
{
	const char* name;
	struct subroutine* parent;
	struct symbol* symbol;
	uint32_t workspace;
};

struct exprnode
{
	struct symbol* type;
	int32_t value;
};

#define yyerror(s) fatal(s)

#endif

