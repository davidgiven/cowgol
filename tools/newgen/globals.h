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

#define REG_SAME_AS_INSTRUCTION_RESULT -1
typedef int32_t reg_t;

typedef struct predicate Predicate;
struct predicate
{
	const char* field;
	int operator;
	union
	{
		int value;
		const char* callback;
	}
	u;
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

typedef struct symbol Symbol;
struct symbol
{
	const char* name;
	const char* kind;
	Symbol* next;
};

typedef struct reg Register;
struct reg
{
	Symbol sym;
	reg_t id;
	reg_t uses;
	reg_t compatible;
	bool isstacked;
};

typedef struct regclass RegisterClass;
struct regclass
{
	Symbol sym;
	reg_t reg;
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
	Node* replacement;
	Node** nodes;
	bool has_predicates;
};

extern int errcnt;
extern FILE* outfp;

extern void fatal(const char* msg, ...);
extern void warning(const char* msg, ...);
extern void yyerror(const char* msg, ...);
extern int yydebug;

extern const char* machine_word;

extern void* open_file(FILE* fp);
extern void include_file(void* buffer);

extern Register* define_register(const char* name);
extern Register* lookup_register(const char* name);
extern void define_regclass(const char* name, reg_t reg);
extern reg_t lookup_register_or_class(const char* name);
extern int lookup_midcode(const char* name);

extern Rule* rewriterule(int lineno, Node* pattern, Node* replacement);
extern Rule* genrule(int lineno, Node* pattern, reg_t result);

extern Node* tree_matcher(int midcode, Node* left, Node* right, Predicate* predicates, Label* label);
extern Node* register_matcher(reg_t reg, Label* label);

extern void parse(void);

#endif

