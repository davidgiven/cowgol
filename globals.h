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
	struct symbol* symbol;
	uint32_t workspace;
	int label_after;
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

#define yyerror(s) fatal(s)

#endif

