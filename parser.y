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

static struct symbol* int16_type;

static void expr_add(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs);
static void expr_sub(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs);
static void cond_notequals(struct looplabels* labels, struct exprnode* lhs, struct exprnode* rhs);

static void assignment(struct symbol* var, struct exprnode* node);
static void deref_assignment(struct exprnode* ptr, struct exprnode* node);
static void varaccess(const char* opcode, struct symbol* var);

static struct symbol* add_new_symbol(const char* name);
static struct symbol* lookup_symbol(const char* name);

static void resolve_expression_type(struct exprnode* node, struct symbol* type);

%}

%token VAR SUB TYPE END LOOP WHILE
%token ID NUMBER
%token ASSIGN EQUALS NOTEQUALS

%type <symbol> newid;
%type <symbol> oldid;
%type <symbol> typeref;
%type <expr> expression;
%type <label> LOOP;
%type <labels> WHILE;

%left '+' '-'

%union {
	struct symbol* symbol;
	struct exprnode expr;
	int label;
	struct looplabels labels;
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
	| WHILE
		{
			$1.truelabel = current_label++;
			$1.falselabel = current_label++;
			$1.looplabel = current_label++;
			printf("x%d:\n", $1.looplabel);
		}
		conditional
		{
			printf("x%d:\n", $1.truelabel);
		}
		LOOP statements END LOOP
		{
			printf(" jmp x%d\n", $1.looplabel);
			printf("x%d:\n", $1.falselabel);
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
	| '[' expression ']' ASSIGN expression ';'
		{
			deref_assignment(&$2, &$5);
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
	| '[' expression ']'
		{
			if (!$2.type->u.type.pointingat)
				fatal("attempt to dereference a non-pointer");

			printf(" pop h\n");

			$$.type = $2.type->u.type.pointingat;
			switch ($$.type->u.type.width)
			{
				case 1:
					printf(" mov a, m\n");
					printf(" push psw\n");
					break;

				case 2:
					printf(" mov a, m\n");
					printf(" inx h\n");
					printf(" mov h, m\n");
					printf(" mov l, a\n");
					printf(" push h\n");
					break;

				default:
					assert(false);
			}
		}
	| '(' expression ')'
		{ $$ = $2; }
	| expression '+' expression
		{ expr_add(&$$, &$1, &$3); }
	| expression '-' expression
		{ expr_sub(&$$, &$1, &$3); }
	;

conditional
	: expression NOTEQUALS expression
		{
			cond_notequals(&$<labels>-1, &$1, &$3);
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
				if (width == 1)
				{
					printf(" pop psw\n");
					printf(" inr a\n");
					printf(" push psw\n");
				}
				else
				{
					printf(" pop h\n");
					printf(" inx h\n");
					printf(" push h\n");
				}
				return;
			}
			if (lhs->type->u.type.pointingat)
				resolve_expression_type(rhs, int16_type);
			else
				resolve_expression_type(rhs, lhs->type);
		}
		if (!lhs->type && rhs->type)
		{
			if (rhs->type->u.type.pointingat)
				fatal("add numbers to pointers, not vice versa");
			resolve_expression_type(lhs, rhs->type);
		}

		switch (width)
		{
			case 1:
				printf(" pop psw\n");
				printf(" pop h\n");
				printf(" add h\n");
				printf(" push psw\n");
				break;

			case 2:
				printf(" pop h\n");
				printf(" pop d\n");
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
				switch (lhs->type->u.type.width)
				{
					case 1:
						printf(" pop psw\n");
						printf(" pop h\n");
						break;

					case 2:
						printf(" pop h\n");
						printf(" pop d\n");
						break;

					default:
						assert(false);
				}
			}
			else
			{
				switch (lhs->type->u.type.width)
				{
					case 1:
						printf(" pop h\n");
						printf(" pop psw\n");
						break;

					case 2:
						printf(" pop d\n");
						printf(" pop r\n");
						break;

					default:
						assert(false);
				}
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

static void cond_notequals(struct looplabels* labels, struct exprnode* lhs, struct exprnode* rhs)
{
	if (!lhs->type && !rhs->type)
	{
		printf(" jmp x%d\n",
			(lhs->value != rhs->value) ? labels->truelabel : labels->falselabel);
	}
	else
	{
		if (lhs->type && !rhs->type)
			resolve_expression_type(rhs, lhs->type);
		else if (!lhs->type && rhs->type)
			resolve_expression_type(lhs, rhs->type);

		switch (lhs->type->u.type.width)
		{
			case 1:
				printf(" pop psw\n");
				printf(" pop h\n");
				printf(" cmp h\n");
				break;

			case 2:
				printf(" pop h\n");
				printf(" pop d\n");
				printf(" mov a, l\n");
				printf(" cmp e\n");
				printf(" bnz x%d\n", labels->truelabel);
				printf(" mov a, h\n");
				printf(" cmp d\n");
				break;

			default:
				assert(false);
		}

		printf(" bnz x%d\n", labels->truelabel);
		printf(" jmp x%d\n", labels->falselabel);
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

static void deref_assignment(struct exprnode* ptr, struct exprnode* node)
{
	if (!ptr->type->u.type.pointingat)
		fatal("expected LHS to be a pointer");

	resolve_expression_type(node, ptr->type->u.type.pointingat);
	switch (node->type->u.type.width)
	{
		case 1:
			printf(" pop psw\n");
			printf(" pop h\n");
			printf(" mov m, a\n");
			break;

		case 2:
			printf(" pop d\n");
			printf(" pop h\n");
			printf(" mov m, e\n");
			printf(" inx h\n");
			printf(" mov m, d\n");
			break;

		default:
			assert(false);
	}
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

