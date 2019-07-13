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
int tos_location;

static struct symbol* int16_type;

static void expr_add(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs);
static void expr_sub(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs);

static void assignment(struct symbol* var, struct exprnode* node);
static void varaccess(const char* opcode, struct symbol* var);

static struct symbol* add_new_symbol(const char* name);
static struct symbol* lookup_symbol(const char* name);

static void resolve_expression_type(struct exprnode* node, struct symbol* type);
static void evict_tos(void);
static void put_node_in_register(struct exprnode* node, int location);

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
	| '[' typeref ']'
		{
			if ($2->u.type.pointerto)
				$$ = $2->u.type.pointerto;
			else
			{
				$$ = add_new_symbol(NULL);
				$$->name = aprintf("[%s]", $2->name);
				$$->kind = TYPE;
				$$->u.type.width = 2;
				$$->u.type.pointingat = $2;
			}
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

			evict_tos();
			switch ($1->u.var.type->u.type.width)
			{
				case 1:
					varaccess("lda", $1);
					$$.location = IN_A;
					break;

				case 2:
					varaccess("lhld", $1);
					$$.location = IN_HL;
					break;

				default:
					assert(false);
			}
			$$.type = $1->u.var.type;
			tos_location = $$.location;
		}
	| '[' expression ']'
		{
			if (!$2.type->u.type.pointingat)
				fatal("attempt to dereference a non-pointer");

			put_node_in_register(&$2, IN_HL);

			$$.type = $2.type->u.type.pointingat;
			switch ($$.type->u.type.width)
			{
				case 1:
					printf(" mov a, m\n");
					tos_location = IN_A;
					break;

				case 2:
					printf(" mov a, m\n");
					printf(" inx h\n");
					printf(" mov h, m\n");
					printf(" mov l, a\n");
					break;

				default:
					assert(false);
			}
			$$.location = tos_location;
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

const char* aprintf(const char* s, ...)
{
	va_list ap;

	va_start(ap, s);
	int len = snprintf(NULL, 0, s, ap) + 1;
	va_end(ap);

	char* buffer = malloc(len);
	va_start(ap, s);
	snprintf(buffer, len, s, ap);
	va_end(ap);

	return buffer;
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
		int width = lhs->type->u.type.width;
		if (lhs->type && !rhs->type)
		{
			if (rhs->value == 1)
			{
				put_node_in_register(lhs, (width == 1) ? IN_A : IN_HL);
				if (width == 1)
				{
					printf(" inr a\n");
					tos_location = IN_A;
				}
				else
				{
					printf(" inx h\n");
					tos_location = IN_HL;
				}
				dest->location = tos_location;
				return;
			}
			if (lhs->type->u.type.pointingat)
				resolve_expression_type(rhs, int16_type);
			else
				resolve_expression_type(rhs, lhs->type);
			put_node_in_register(rhs, (width == 1) ? IN_A : IN_HL);
		}
		if (!lhs->type && rhs->type)
		{
			if (rhs->type->u.type.pointingat)
				fatal("add numbers to pointers, not vice versa");
			resolve_expression_type(lhs, rhs->type);
			put_node_in_register(lhs, (width == 1) ? IN_A : IN_HL);
		}

		switch (width)
		{
			case 1:
				printf(" pop h\n");
				printf(" add h\n");
				tos_location = IN_A;
				break;

			case 2:
				printf(" pop d\n");
				printf(" dad d\n");
				tos_location = IN_HL;
				break;
		}
		dest->location = tos_location;
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
				int width = lhs->type->u.type.width;
				put_node_in_register(lhs, (width == 1) ? IN_A : IN_HL);
				printf(" pop d\n");
			}
			else
			{
				int width = lhs->type->u.type.width;
				put_node_in_register(rhs, (width == 1) ? IN_D : IN_DE);
				if (width == 1)
					printf(" pop psw\n");
				else
					printf(" pop h\n");
			}

			switch (lhs->type->u.type.width)
			{
				case 1:
					printf(" sub d\n");
					tos_location = IN_A;
					break;

				case 2:
					printf(" mov a, l\n");
					printf(" sub e\n");
					printf(" mov l, a\n");
					printf(" mov a, h\n");
					printf(" sbb d\n");
					printf(" mov h, a\n");
					tos_location = IN_HL;
					break;

				default:
					assert(false);
			}
			dest->location = tos_location;
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
			put_node_in_register(node, IN_A);
			varaccess("sta", var);
			break;

		case 2:
			put_node_in_register(node, IN_HL);
			varaccess("shld", var);
			break;

		default:
			assert(false);
	}

	tos_location = NO_LOCATION;
}

static struct symbol* add_new_symbol(const char* name)
{
	struct symbol* sym;
	
	if (name)
	{
		sym = current_sub->symbol;
		while (sym)
		{
			if (strcmp(sym->name, name) == 0)
				fatal("symbol '%s' is already defined", name);
			sym = sym->next;
		}
	}

	sym = calloc(1, sizeof(struct symbol));
	sym->name = name ? strdup(name) : NULL;

	if (name)
	{
		sym->next = current_sub->symbol;
		current_sub->symbol = sym;
	}
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
		evict_tos();
		switch (type->u.type.width)
		{
			case 1:
				printf(" mvi a, %d\n", node->value);
				node->location = IN_A;
				break;

			case 2:
				printf(" lxi h, %d\n", node->value);
				node->location = IN_HL;
				break;

			default:
				assert(false);
		}
		node->type = type;
		tos_location = node->location;
		return;
	}

	if (node->type != type)
		fatal("type mismatch: expression was a '%s', used when a '%s' was expected",
			node->type->name, type->name);
}

static void evict_tos(void)
{
	switch (tos_location)
	{
		case IN_A:
			printf(" push psw\n");
			tos_location = STACKED;
			break;

		case IN_HL:
			printf(" push h\n");
			tos_location = STACKED;
			break;
	}
}

static void put_node_in_register(struct exprnode* node, int location)
{
	if (node->location == location)
		return;
	if (node->location == STACKED)
	{
		switch (location)
		{
			case IN_A:
				printf(" pop psw\n");
				break;

			case IN_HL:
				printf(" pop h\n");
				break;

			case IN_D:
			case IN_DE:
				printf(" pop d\n");
				break;

			default:
				assert(false);
		}
		node->location = location;
		return;
	}
	assert(false);
}

int main(int argc, const char* argv[])
{
	current_sub = calloc(1, sizeof(struct subroutine));
	current_sub->name = "__main";

	int16_type = add_new_symbol("uint16");
	int16_type->kind = TYPE;
	int16_type->u.type.width = 2;

	struct symbol* t = add_new_symbol("uint8");
	t->kind = TYPE;
	t->u.type.width = 1;

	yydebug = 0;
	printf(" org 100h\n");
	yyparse();
	return 0;
}

