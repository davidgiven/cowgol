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
struct argumentsspec* current_call;
int current_label;

static struct symbol* int16_type;
static struct symbol* uint8_type;

static void expr_add(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs);
static void expr_sub(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs);
static void cond_notequals(struct looplabels* labels, struct exprnode* lhs, struct exprnode* rhs);

static void assignment(struct symbol* var, struct exprnode* node);
static void deref_assignment(struct exprnode* ptr, struct exprnode* node);
static void varaccess(const char* opcode, struct symbol* var);

static struct symbol* add_new_symbol(const char* name);
static struct symbol* lookup_symbol(const char* name);
static void init_var(struct symbol* sym, struct symbol* type);
static struct symbol* make_pointer_type(struct symbol* type);

static void resolve_expression_type(struct exprnode* node, struct symbol* type);

%}

%token VAR SUB TYPE END LOOP WHILE
%token ID NUMBER STRING
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
	struct argumentsspec argsspec;
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
			init_var($2, $4);
			assignment($2, &$6);
		}
	| VAR newid ASSIGN expression ';'
		{
			$2->kind = VAR;
			init_var($2, $4.type);
			assignment($2, &$4);
		}
	| SUB newid
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
		parameterlist
		{
			if (current_sub->inputparameters != 0)
			{
				printf(" pop b\n");
				for (int i=current_sub->inputparameters-1; i>=0; i--)
				{
					struct symbol* param = current_sub->firstsymbol;
					for (int j=0; j<i; j++)
						param = param->next;

					printf(" pop h\n");
					varaccess("shld", param);
				}
				printf(" push b\n");
			}
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
	| oldid argumentlist ';'
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
	: '(' parameters ')'
	;

parameters
	: parameter
	| parameter ',' parameters
	;

parameter
	: newid ':' typeref
		{
			$1->kind = VAR;
			init_var($1, $3);
			current_sub->inputparameters++;
		}
	;

argumentlist
	: '('
		{
			struct argumentsspec* spec = calloc(1, sizeof(struct argumentsspec));
			spec->sub = $<symbol>0->u.sub;
			spec->number = 0;
			spec->param = spec->sub->firstsymbol;
			spec->previous_call = current_call;
			current_call = spec;
		}
		arguments ')'
		{
			if (current_call->number != current_call->sub->inputparameters)
				fatal("expected %d parameters but only got %d",
					current_call->sub->inputparameters, current_call->number);
			current_call = current_call->previous_call;
		}
	;

arguments
	: argument
	| argument ',' arguments
	;

argument
	: expression
		{
			if (current_call->number == current_call->sub->inputparameters)
				fatal("too many input parameters");

			struct symbol* param = current_call->param;
			current_call->param = param->next;
			current_call->number++;

			resolve_expression_type(&$1, param->u.var.type);
			vpop_reg(REG_HL);
			printf(" push h\n");
		}
	;

typeref
	: oldid
		{
			$$ = $1;
			if ($$->kind != TYPE)
				fatal("expected '%s' to be a type", $1->name);
		}
	| '[' typeref ']'
		{ $$ = make_pointer_type($2); }
	;

expression
	: NUMBER
		{
			$$.type = NULL;
			$$.value = number;
		}
	| STRING
		{
			int label1 = current_label++;
			int label2 = current_label++;
			printf(" jmp x%d\n", label1);
			printf("x%d:\n", label2);
			const uint8_t* p = (const uint8_t*)text;
			uint8_t c = 0;
			do
			{
				c = *p++;
				printf(" db %d\n", c);
			}
			while (c);
			printf("x%d:\n", label1);
			printf(" lxi h, x%d\n", label2);
			printf(" push h\n");
			vpush_raw();

			$$.type = make_pointer_type(uint8_type);
		}
	| oldid
		{
			if ($1->kind != VAR)
				fatal("expected '%s' to be a variable", $1->name);

			vpush_value($1);
			$$.type = $1->u.var.type;
		}
	| '[' expression ']'
		{
			if (!$2.type->u.type.pointingat)
				fatal("attempt to dereference a non-pointer");

			vpop_reg(REG_HL);

			$$.type = $2.type->u.type.pointingat;
			switch ($$.type->u.type.width)
			{
				case 1:
					printf(" mov a, m\n");
					vpush_reg(REG_A);
					break;

				case 2:
					printf(" mov a, m\n");
					printf(" inx h\n");
					printf(" mov h, m\n");
					printf(" mov l, a\n");
					vpush_reg(REG_HL);
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
	int len = vsnprintf(NULL, 0, s, ap) + 1;
	va_end(ap);

	char* buffer = malloc(len);
	va_start(ap, s);
	vsnprintf(buffer, len, s, ap);
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
					vpop_reg(REG_A);
					printf(" inr a\n");
					vpush_reg(REG_A);
				}
				else
				{
					vpop_reg(REG_HL);
					printf(" inx h\n");
					vpush_reg(REG_HL);
				}
				return;
			}
			else if (rhs->value == -1)
			{
				if (width == 1)
				{
					vpop_reg(REG_A);
					printf(" dcr a\n");
					vpush_reg(REG_A);
				}
				else
				{
					vpop_reg(REG_HL);
					printf(" dcx h\n");
					vpush_reg(REG_HL);
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
				vpop_reg(REG_A);
				vpop_reg(REG_HL);
				printf(" add h\n");
				vpush_reg(REG_A);
				break;

			case 2:
				vpop_reg(REG_HL);
				vpop_reg(REG_DE);
				printf(" dad d\n");
				vpush_reg(REG_HL);
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
						vpop_reg(REG_A);
						vpop_reg(REG_HL);
						break;

					case 2:
						vpop_reg(REG_HL);
						vpop_reg(REG_DE);
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
						vpop_reg(REG_HL);
						vpop_reg(REG_A);
						break;

					case 2:
						vpop_reg(REG_DE);
						vpop_reg(REG_HL);
						break;

					default:
						assert(false);
				}
			}

			switch (lhs->type->u.type.width)
			{
				case 1:
					printf(" sub d\n");
					vpush_reg(REG_A);
					break;

				case 2:
					printf(" mov a, l\n");
					printf(" sub e\n");
					printf(" mov l, a\n");
					printf(" mov a, h\n");
					printf(" sbb d\n");
					printf(" mov h, a\n");
					vpush_reg(REG_HL);
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
		if (!lhs->type && rhs->type)
		{
			cond_notequals(labels, rhs, lhs);
			return;
		}

		if (!rhs->type)
		{
			if (rhs->value == 0)
			{
				vpop_reg(REG_HL);
				printf(" mov a, h\n");
				printf(" ora l\n");
				printf(" jnz x%d\n", labels->truelabel);
				printf(" jmp x%d\n", labels->falselabel);
				return;
			}

			resolve_expression_type(rhs, lhs->type);
		}

		switch (lhs->type->u.type.width)
		{
			case 1:
				vpop_reg(REG_HL);
				printf(" cmp h\n");
				break;

			case 2:
				vpop_reg(REG_HL);
				vpop_reg(REG_DE);
				printf(" mov a, l\n");
				printf(" cmp e\n");
				printf(" jnz x%d\n", labels->truelabel);
				printf(" mov a, h\n");
				printf(" cmp d\n");
				break;

			default:
				assert(false);
		}

		printf(" jnz x%d\n", labels->truelabel);
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
			vpop_reg(REG_A);
			varaccess("sta", var);
			break;

		case 2:
			vpop_reg(REG_HL);
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
			vpop_reg(REG_A);
			vpop_reg(REG_HL);
			printf(" mov m, a\n");
			break;

		case 2:
			vpop_reg(REG_DE);
			vpop_reg(REG_HL);
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
		sym = current_sub->firstsymbol;
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
		if (!current_sub->lastsymbol)
			current_sub->firstsymbol = current_sub->lastsymbol = sym;
		else
		{
			current_sub->lastsymbol->next = sym;
			current_sub->lastsymbol = sym;
		}
	}
	return sym;
}

static struct symbol* lookup_symbol(const char* name)
{
	struct subroutine* scope = current_sub;
	while (scope)
	{
		struct symbol* sym = scope->firstsymbol;
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

static void init_var(struct symbol* sym, struct symbol* type)
{
	sym->u.var.type = type;
	sym->u.var.sub = current_sub;
	sym->u.var.offset = current_sub->workspace;
	current_sub->workspace += type->u.type.width;
}

static void resolve_expression_type(struct exprnode* node, struct symbol* type)
{
	if (!node->type)
	{
		vpush_const(node->value);
		node->type = type;
		return;
	}

	if (node->type != type)
		fatal("type mismatch: expression was a '%s', used when a '%s' was expected",
			node->type->name, type->name);
}

static struct symbol* make_pointer_type(struct symbol* type)
{
	if (type->u.type.pointerto)
		return type->u.type.pointerto;
	else
	{
		struct symbol* ptr = add_new_symbol(NULL);
		ptr->name = aprintf("[%s]", type->name);
		ptr->kind = TYPE;
		ptr->u.type.width = 2;
		ptr->u.type.pointingat = type;
		type->u.type.pointerto = ptr;
		return ptr;
	}
}

int main(int argc, const char* argv[])
{
	current_sub = calloc(1, sizeof(struct subroutine));
	current_sub->name = "__main";

	int16_type = add_new_symbol("uint16");
	int16_type->kind = TYPE;
	int16_type->u.type.width = 2;

	uint8_type = add_new_symbol("uint8");
	uint8_type->kind = TYPE;
	uint8_type->u.type.width = 1;

	yydebug = 0;
	printf(" org 100h\n");
	yyparse();
	return 0;
}

