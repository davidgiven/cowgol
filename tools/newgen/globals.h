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

typedef struct node Node;
struct node
{
	bool isregister;
	int midcode;
	Node* left;
	Node* right;
	reg_t reg;
	Predicate* predicate;
	Label* label;
	int index;
};

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
	reg_t id;
	reg_t uses;
	reg_t compatible;
	bool isstacked;
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

typedef struct rule Rule;
struct rule
{
	int lineno;
	Node* pattern;
	reg_t result_reg;
	reg_t compatible_regs;
	reg_t uses_regs;
	int cost;
	Label* first_label;
	Action* action;
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

extern Rule* rule(int lineno, Node* pattern, reg_t result);

extern Node* tree_matcher(int midcode, Node* left, Node* right, Predicate* predicates, Label* label);
extern Node* register_matcher(reg_t reg, Label* label);

extern void parse(void);

#endif

