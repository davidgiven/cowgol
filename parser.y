%{
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "globals.h"

#define YYDEBUG 1
#include "y.tab.h"

char text[256];
int32_t number;

struct subroutine* current_sub;
int current_label;

static void expr_add(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs);
static void expr_sub(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs);

static void assignment(struct symbol* var, struct exprnode* node);
static void varaccess(const char* opcode, struct symbol* var);

static struct symbol* add_new_symbol(const char* name);
static struct symbol* lookup_symbol(const char* name);

static void resolve_expression_type(struct exprnode* node, struct symbol* type);

%}

%token VAR SUB TYPE END LOOP
%token ID NUMBER
%token ASSIGN

%type <symbol> newid;
%type <symbol> oldid;
%type <symbol> typeref;
%type <expr> expression;
%type <label> LOOP;

%left '+' '-'

%union {
	struct symbol* symbol;
	struct exprnode expr;
	int label;
}

%%

program
	: statements
		{
			printf(" ret\n");
			printf("w_%s: ds %d\n", current_sub->name, current_sub->workspace);
		}
	;

statements
	: /* empty */
	| statement statements
	;

statement
	: ';'
	| VAR newid ':' typeref ASSIGN expression ';'
		{
			$2->kind = VAR;
			$2->u.var.type = $4;
			$2->u.var.sub = current_sub;
			$2->u.var.offset = current_sub->workspace;
			current_sub->workspace += $4->u.type.width;

			assignment($2, &$6);
		}
	| SUB newid parameterlist 
		{
			struct subroutine* sub = calloc(1, sizeof(struct subroutine));
			sub->name = $2->name;
			sub->parent = current_sub;
			sub->label_after = current_label++;
			printf(" jmp x%d\n", sub->label_after);
			printf("f_%s:\n", sub->name);

			$2->kind = SUB;
			$2->u.sub = sub;

			current_sub = sub;
		}
		statements
		{
			printf(" ret\n");
			printf("w_%s: ds %d\n", current_sub->name, current_sub->workspace);
			printf("x%d:\n", current_sub->label_after);
			current_sub = current_sub->parent;
		}
		END SUB
	| LOOP
		{
			$1 = current_label++;
			printf("x%d:\n", $1);
		}
		statements END LOOP
		{
			printf(" jmp x%d\n", $1);
		}
	| oldid '(' ')' ';'
		{
			if ($1->kind != SUB)
				fatal("expected '%s' to be a subroutine", $1->name);
			printf(" call f_%s\n", $1->name);
		}
	| oldid ASSIGN expression ';'
		{
			if ($1->kind != VAR)
				fatal("expected '%s' to be a variable", $1->name);

			assignment($1, &$3);
		}
	;

newid
	: ID { $$ = add_new_symbol(text); }
	;

oldid
	: ID { $$ = lookup_symbol(text); }
	;

parameterlist
	: '(' ')'
	;

typeref
	: oldid
		{
			$$ = $1;
			if ($$->kind != TYPE)
				fatal("expected '%s' to be a type", $1->name);
		}
	;

expression
	: NUMBER
		{
			$$.type = NULL;
			$$.value = number;
		}
	| oldid
		{
			if ($1->kind != VAR)
				fatal("expected '%s' to be a variable", $1->name);

			switch ($1->u.var.type->u.type.width)
			{
				case 1:
					varaccess("lda", $1);
					printf(" push psw\n");
					break;

				case 2:
					varaccess("lhld", $1);
					printf(" push h\n");
					break;

				default:
					assert(false);
			}
			$$.type = $1->u.var.type;
		}
	| '(' expression ')'
		{ $$ = $2; }
	| expression '+' expression
		{ expr_add(&$$, &$1, &$3); }
	| expression '-' expression
		{ expr_sub(&$$, &$1, &$3); }
	;

%%

void fatal(const char* s, ...)
{
	va_list ap;
	va_start(ap, s);
	fprintf(stderr, "Error: ");
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");
	va_end(ap);
	exit(1);
}

void trace(const char* s, ...)
{
	va_list ap;
	va_start(ap, s);
	fprintf(stderr, "Log: ");
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");
	va_end(ap);
}

static void expr_add(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs)
{
	if (!lhs->type && !rhs->type)
	{
		dest->type = NULL;
		dest->value = lhs->value + rhs->value;
	}
	else
	{
		if (lhs->type && !rhs->type)
			resolve_expression_type(rhs, lhs->type);
		if (!lhs->type && rhs->type)
			resolve_expression_type(lhs, rhs->type);

		switch (lhs->type->u.type.width)
		{
			case 1:
				printf(" pop psw\n");
				printf(" pop h\n");
				printf(" add h\n");
				printf(" push psw\n");
				break;

			case 2:
				printf(" pop d\n");
				printf(" pop h\n");
				printf(" dad d\n");
				printf(" push h\n");
				break;
		}
	}
}

static void expr_sub(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs)
{
	if (!lhs->type && !rhs->type)
	{
		dest->type = NULL;
		dest->value = lhs->value - rhs->value;
	}
	else
	{
		if (lhs->type && !rhs->type)
		{
			rhs->value = -rhs->value;
			expr_add(dest, lhs, rhs);
		}
		else
		{
			if (!lhs->type && rhs->type)
			{
				resolve_expression_type(lhs, rhs->type);
				if (rhs->type->u.type.width == 1)
					printf(" pop psw\n");
				else
					printf(" pop h\n");
				printf(" pop d\n");
			}
			else
			{
				printf(" pop d\n");
				if (lhs->type->u.type.width == 1)
					printf(" pop psw\n");
				else
					printf(" pop h\n");
			}

			switch (lhs->type->u.type.width)
			{
				case 1:
					printf(" sub d\n");
					printf(" push psw\n");
					break;

				case 2:
					printf(" mov a, l\n");
					printf(" sub e\n");
					printf(" mov l, a\n");
					printf(" mov a, h\n");
					printf(" sbb d\n");
					printf(" mov h, a\n");
					printf(" push h\n");
					break;

				default:
					assert(false);
			}
		}
	}
}

static void varaccess(const char* opcode, struct symbol* var)
{
	printf(" %s w_%s+%d ; %s\n",
		opcode, var->u.var.sub->name, var->u.var.offset,
		var->name);
}

static void assignment(struct symbol* var, struct exprnode* node)
{
	resolve_expression_type(node, var->u.var.type);
	switch (var->u.var.type->u.type.width)
	{
		case 1:
			printf(" pop psw\n");
			varaccess("sta", var);
			break;

		case 2:
			printf(" pop h\n");
			varaccess("shld", var);
			break;

		default:
			assert(false);
	}
}

static struct symbol* add_new_symbol(const char* name)
{
	struct symbol* sym = current_sub->symbol;
	while (sym)
	{
		if (strcmp(sym->name, name) == 0)
			fatal("symbol '%s' is already defined", name);
		sym = sym->next;
	}

	sym = calloc(1, sizeof(struct symbol));
	sym->name = strdup(name);

	sym->next = current_sub->symbol;
	current_sub->symbol = sym;
	return sym;
}

static struct symbol* lookup_symbol(const char* name)
{
	struct subroutine* scope = current_sub;
	while (scope)
	{
		struct symbol* sym = scope->symbol;
		while (sym)
		{
			if (strcmp(sym->name, name) == 0)
				return sym;
			sym = sym->next;
		}
		scope = scope->parent;
	}

	fatal("symbol '%s' not found", name);
	return NULL;
}

static void resolve_expression_type(struct exprnode* node, struct symbol* type)
{
	if (!node->type)
	{
		switch (type->u.type.width)
		{
			case 1:
				printf(" mvi a, %d\n", node->value);
				printf(" push psw\n");
				break;

			case 2:
				printf(" lxi h, %d\n", node->value);
				printf(" push h\n");
				break;

			default:
				assert(false);
		}
		node->type = type;
		return;
	}

	if (node->type != type)
		fatal("type mismatch: expression was a '%s', used when a '%s' was expected",
			node->type->name, type->name);
}

int main(int argc, const char* argv[])
{
	current_sub = calloc(1, sizeof(struct subroutine));
	current_sub->name = "__main";

	struct symbol* t = add_new_symbol("int16");
	t->kind = TYPE;
	t->u.type.width = 2;

	t = add_new_symbol("int8");
	t->kind = TYPE;
	t->u.type.width = 1;

	yydebug = 0;
	printf(" org 100h\n");
	yyparse();
	return 0;
}

