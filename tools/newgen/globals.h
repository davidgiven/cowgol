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

typedef struct node Node;

typedef struct token Token;
struct token
{
	int lineno;
	union
	{
		const char* string;
		int number;
	} u;
};

typedef struct reg Register;
struct reg
{
	const char* name;
	uint32_t id;
	uint32_t uses;
};

typedef struct element Element;
struct element
{
	bool islabel;
	const char* text;
	int lineno;
	Element* next;
};

typedef struct action Action;
struct action
{
	bool iscomplex;
	Element* first_element;
};

typedef struct predicate Predicate;
struct predicate
{
	const char* field;
	int operator;
	int value;
	Predicate* next;
};

typedef struct label Label;
struct label
{
	const char* name;
	Label* next;
};

extern int errcnt;
extern FILE* outfp;

extern void fatal(const char* msg, ...);
extern void warning(const char* msg, ...);
extern void yyerror(const char* msg, ...);
extern int yydebug;

extern void* open_file(FILE* fp);
extern void include_file(void* buffer);

extern Register* define_register(const char* name);
extern Register* lookup_register(const char* name);
extern int lookup_midcode(const char* name);

extern void rule(int lineno, Node* pattern, reg_t result, Action* action);

extern Node* tree_matcher(int midcode, Node* left, Node* right, Predicate* predicates, Label* label);
extern Node* register_matcher(reg_t reg, Label* label);

extern void parse(void);

#endif

