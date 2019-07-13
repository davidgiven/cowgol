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

static void varaccess(const char* opcode, struct symbol* var);

static struct symbol* add_new_symbol(const char* name);
static struct symbol* lookup_symbol(const char* name);

static void resolve_expression_type(struct exprnode* node, struct symbol* type);

%}

%token VAR SUB TYPE
%token ID NUMBER
%token ASSIGN

%type <symbol> vardefinition;
%type <symbol> typeref;
%type <expr> expression;

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
	: vardefinition ':' typeref ASSIGN expression ';'
		{
			$1->kind = VAR;
			$1->u.var.type = $3;
			$1->u.var.sub = current_sub;
			$1->u.var.offset = current_sub->workspace;
			current_sub->workspace += $3->u.type.width;

			resolve_expression_type(&$5, $3);
			printf(" pop h\n");
			varaccess("shld", $1);
		}
	;

vardefinition
	: VAR ID { $$ = add_new_symbol(text); }
	;

typeref
	: ID
		{
			$$ = lookup_symbol(text);
			if ($$->kind != TYPE)
				fatal("expected '%s' to be a type", text);
		}
	;

expression
	: NUMBER
		{
			$$.type = NULL;
			$$.value = number;
		}
	| ID
		{
			struct symbol* sym = lookup_symbol(text);
			if (sym->kind != VAR)
				fatal("expected '%s' to be a variable", text);

			varaccess("lhld", sym);
			printf(" push h\n");
			$$.type = sym->u.var.type;
		}
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
	yyparse();
	return 0;
}

