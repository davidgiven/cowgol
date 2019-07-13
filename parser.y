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

static void varaccess(const char* opcode, struct symbol* var);

static struct symbol* add_new_symbol(const char* name);
static struct symbol* lookup_symbol(const char* name);

static void resolve_expression_type(struct exprnode* node, struct symbol* type);

%}

%token VAR SUB TYPE END
%token ID NUMBER
%token ASSIGN

%type <symbol> newid;
%type <symbol> oldid;
%type <symbol> typeref;
%type <expr> expression;

%left '+' '-'

%union {
	struct symbol* symbol;
	struct exprnode expr;
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
	: VAR newid ':' typeref ASSIGN expression ';'
		{
			$2->kind = VAR;
			$2->u.var.type = $4;
			$2->u.var.sub = current_sub;
			$2->u.var.offset = current_sub->workspace;
			current_sub->workspace += $4->u.type.width;

			resolve_expression_type(&$6, $4);
			printf(" pop h\n");
			varaccess("shld", $2);
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
	| oldid '(' ')' ';'
		{
			if ($1->kind != SUB)
				fatal("expected '%s' to be a subroutine", $1->name);
			printf(" call f_%s\n", $1->name);
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

			varaccess("lhld", $1);
			printf(" push h\n");
			$$.type = $1->u.var.type;
		}
	| '(' expression ')'
		{ $$ = $2; }
	| expression '+' expression
		{
			if (!$1.type && !$3.type)
			{
				$$.type = NULL;
				$$.value = $1.value + $3.value;
			}
			else
			{
				if ($1.type && !$3.type)
					resolve_expression_type(&$3, $1.type);
				if (!$1.type && $3.type)
					resolve_expression_type(&$1, $3.type);

				printf(" pop d\n");
				printf(" pop h\n");
				printf(" dad d\n");
				printf(" push h\n");
			}
		}
	| expression '-' expression
		{
			if (!$1.type && !$3.type)
			{
				$$.type = NULL;
				$$.value = $1.value - $3.value;
			}
			else
			{
				if ($1.type && !$3.type)
				{
					$3.value = -$3.value;
					resolve_expression_type(&$3, $1.type);
					printf(" pop d\n");
					printf(" pop h\n");
					printf(" dad d\n");
					printf(" push h\n");
				}
				else
				{
					if (!$1.type && $3.type)
					{
						resolve_expression_type(&$1, $3.type);
						printf(" pop h\n");
						printf(" pop d\n");
					}
					else
					{
						printf(" pop d\n");
						printf(" pop h\n");
					}

					printf(" mov a, l\n");
					printf(" sub e\n");
					printf(" mov l, a\n");
					printf(" mov a, h\n");
					printf(" sbb d\n");
					printf(" mov h, a\n");
					printf(" push h\n");
				}
			}
		}
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

static void varaccess(const char* opcode, struct symbol* var)
{
	printf(" %s w_%s+%d ; %s\n",
		opcode, var->u.var.sub->name, var->u.var.offset,
		var->name);
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
		printf(" lxi h, %d\n", node->value);
		printf(" push h\n");
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

	yydebug = 0;
	printf(" org 100h\n");
	yyparse();
	return 0;
}

