#ifndef GLOBALS_H
#define GLOBALS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <limits.h>

typedef uint32_t reg_t;

typedef union token Token;
union token
{
	const char* string;
	int number;
};

typedef struct action Action;
struct action
{
	bool islabel;
	const char* text;
	Action* next;
};

typedef struct predicate Predicate;
struct predicate
{
	const char* field;
	int operator;
	int value;
	Predicate* next;
};

typedef struct node Node;

extern int errcnt;
extern FILE* outfp;

extern void fatal(const char* msg, ...);
extern void warning(const char* msg, ...);
extern void yyerror(const char* msg, ...);
extern int yydebug;

extern void* open_file(FILE* fp);
extern void include_file(void* buffer);

extern reg_t define_register(const char* name);
extern reg_t lookup_register(const char* name);
extern int lookup_midcode(const char* name);

extern void rule(Node* pattern, reg_t result);

extern Node* tree(int midcode, Node* left, Node* right, Predicate* predicates, const char* label);
extern Node* terminal(reg_t reg);

extern void parse(void);

#endif

