%{
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "globals.h"

#define YYDEBUG 1
#include "parser.h"

int32_t number;

struct subroutine* current_sub;
struct argumentsspec* current_call;
int current_label = 1;
int break_label;

struct symbol* intptr_type;
struct symbol* uint8_type;

static bool is_ptr(struct symbol* sym);
static bool is_num(struct symbol* sym);
static bool is_array(struct symbol* sym);

static void expr_add(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs);
static void expr_sub(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs);
static void expr_mul(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs);
static void expr_div(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs);
static void expr_rem(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs);
static void cond_equals(int truelabel, int falselabel, struct exprnode* lhs, struct exprnode* rhs);
static void cond_lessthan(int truelabel, int falselabel, struct exprnode* lhs, struct exprnode* rhs);
static void cond_greaterthan(int truelabel, int falselabel, struct exprnode* lhs, struct exprnode* rhs);

static struct symbol* lookup_symbol(const char* name);
static void init_var(struct symbol* sym, struct symbol* type);
static struct symbol* make_pointer_type(struct symbol* type);
static struct symbol* make_array_type(struct symbol* type, int32_t size);

static void resolve_expression_type(struct exprnode* node, struct symbol* type);
static void unescape(char* string);

static void node_is_constant(struct exprnode* node, struct symbol* type, struct symbol* sym, int32_t off);
static void node_is_stacked(struct exprnode* node, struct symbol* type);

%}

%token VAR SUB TYPE END LOOP WHILE IF THEN BREAK ASM
%token ID NUMBER STRING
%token ASSIGN

%type <symbol> newid;
%type <symbol> oldid;
%type <symbol> typeref;
%type <expr> expression;
%type <expr> lvalue;
%type <labels> LOOP;
%type <labels> WHILE;
%type <labels> IF;
%type <cond> conditional;

%left ','
%left OR
%left AND
%left LTOP LEOP GTOP GEOP EQOP NEOP
%left '+' '-'
%left '*' '/' '%'
%right NOT

%union {
	struct symbol* symbol;
	struct exprnode expr;
	struct condlabels cond;
	struct looplabels labels;
	struct argumentsspec argsspec;
}

%%

program
	: statements
	;

statements
	: /* empty */
	| statement statements
	;

statement
	: ';'
	| VAR newid ':' typeref ';'
		{
			$2->kind = VAR;
			init_var($2, $4);
		}
	| VAR newid ':' typeref ASSIGN expression ';'
		{
			$2->kind = VAR;
			init_var($2, $4);
			resolve_expression_type(&$6, $4);
			arch_assign_var($4, $2, 0);
		}
	| VAR newid ASSIGN expression ';'
		{
			$2->kind = VAR;
			if (!$4.type)
				fatal("types cannot be inferred for numeric constants");
			init_var($2, $4.type);
			resolve_expression_type(&$4, $4.type);
			arch_assign_var($4.type, $2, 0);
		}
	| SUB newid
		{
			struct subroutine* sub = calloc(1, sizeof(struct subroutine));
			sub->name = $2->name;
			sub->parent = current_sub;
			sub->label_after = current_label++;
			sub->old_break_label = break_label;
			break_label = 0;

			$2->kind = SUB;
			$2->u.sub = sub;

			current_sub = sub;
		}
		parameterlist
		{
			arch_emit_jump(current_sub->label_after);
			arch_subroutine_prologue();
		}
		statements
		{
			arch_subroutine_epilogue();
			arch_emit_label(current_sub->label_after);
			break_label = current_sub->old_break_label;
			current_sub = current_sub->parent;
		}
		END SUB
	| LOOP
		{
			$1.looplabel = current_label++;
			$1.exitlabel = current_label++;
			$1.old_break_label = break_label;
			break_label = $1.exitlabel;
			arch_emit_label($1.looplabel);
		}
		statements END LOOP
		{
			arch_emit_jump($1.looplabel);
			arch_emit_label($1.exitlabel);
			break_label = $1.old_break_label;
		}
	| IF
		conditional
		THEN
		{
			arch_emit_label($2.truelabel);
		}
		statements
		{
			arch_emit_label($2.falselabel);
		}
		END IF
	| WHILE
		{
			$1.looplabel = current_label++;
			$1.exitlabel = current_label++;
			$1.old_break_label = break_label;
			break_label = $1.exitlabel;
			arch_emit_label($1.looplabel);
		}
		conditional
		{
			arch_emit_label($3.truelabel);
			arch_label_alias($3.falselabel, $1.exitlabel);
		}
		LOOP statements END LOOP
		{
			arch_emit_jump($1.looplabel);
			arch_emit_label($1.exitlabel);
			break_label = $1.old_break_label;
		}
	| BREAK ';'
		{
			if (!break_label)
				fatal("nothing to break from");
			arch_emit_jump(break_label);
		}
	| ASM {
		arch_asm_start();
		}
		asms ';'
		{
			arch_asm_end();
		}
	| oldid argumentlist ';'
		{
			if ($1->kind != SUB)
				fatal("expected '%s' to be a subroutine", $1->name);
			arch_emit_call($1->u.sub);
		}
	| lvalue ASSIGN expression ';'
		{
			resolve_expression_type(&$3, $1.type);
			if ($1.constant)
				arch_assign_var($1.type, $1.sym, $1.off);
			else
				arch_assign_ptr($1.type->u.type.pointerto);
		}
	;

lvalue
	: oldid
		{
			node_is_constant(&$$, $1->u.var.type, $1, 0);
		}
	| lvalue '[' expression ']'
		{
			if (!is_array($1.type))
				fatal("you can only index arrays");
			if (!is_num($3.type))
				fatal("array indices must be numbers");
			
			struct exprnode e;
			node_is_constant(&e, NULL, NULL, $1.type->u.type.element->u.type.width);
			expr_mul(&e, &$3, &e);

			$1.type = make_pointer_type($1.type->u.type.element);
			expr_add(&$$, &$1, &$3);
			$$.type = $$.type->u.type.element;
		}
	| '[' expression ']'
		{
			if (!$2.type)
				fatal("cannot dereference untyped constants");
			
			$$ = $2;
			$$.type = $2.type->u.type.element;
			if (!$$.type)
				fatal("can only dereference pointers");
		}
	;

newid
	: ID { $$ = add_new_symbol(yytext); }
	;

oldid
	: ID { $$ = lookup_symbol(yytext); }
	;

parameterlist
	: '(' ')'
	| '(' parameters ')'
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
			arch_push_input_param(param->u.var.type);
		}
	;

typeref
	: oldid
		{
			$$ = $1;
			if ($$->kind != TYPE)
				fatal("expected '%s' to be a type", $1->name);
		}
	| typeref '[' expression ']'
		{
			if (!$3.constant || !is_num($3.type))
				fatal("array bounds must be constant numbers");
			$$ = make_array_type($1, $3.off);
		}
	| '[' typeref ']'
		{ $$ = make_pointer_type($2); }
	;

expression
	: NUMBER
		{
			node_is_constant(&$$, NULL, NULL, number);
		}
	| STRING
		{
			unescape(yytext);
			arch_push_string_constant(yytext);
			node_is_stacked(&$$, make_pointer_type(uint8_type));
		}
	| lvalue
		{
			if ($1.constant)
				arch_push_value($1.sym, $1.off);
			else
				arch_dereference($1.type->u.type.pointerto);
			node_is_stacked(&$$, $1.type);
		}
	| '(' expression ')'
		{ $$ = $2; }
	| '-' expression
		{ 
			struct exprnode e;
			node_is_constant(&e, NULL, NULL, 0);
			expr_sub(&$$, &e, &$2);
		}
	| expression '+' expression
		{ expr_add(&$$, &$1, &$3); }
	| expression '-' expression
		{ expr_sub(&$$, &$1, &$3); }
	| expression '*' expression
		{ expr_mul(&$$, &$1, &$3); }
	| expression '/' expression
		{ expr_div(&$$, &$1, &$3); }
	| expression '%' expression
		{ expr_rem(&$$, &$1, &$3); }
	;

conditional
	: '(' conditional ')'
		{ $$ = $2; }
	| NOT conditional
		{
			$$.truelabel = $2.falselabel;
			$$.falselabel = $2.truelabel;
		}
	| conditional AND
		{
			arch_emit_label($1.truelabel);
		}
		conditional
		{
			arch_label_alias($1.falselabel, $4.falselabel);
			$$.truelabel = $4.truelabel;
			$$.falselabel = $4.falselabel;
		}
	| conditional OR
		{
			arch_emit_label($1.falselabel);
		}
		conditional
		{
			arch_label_alias($1.truelabel, $4.truelabel);
			$$.truelabel = $4.truelabel;
			$$.falselabel = $4.falselabel;
		}
	| expression EQOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_equals($$.truelabel, $$.falselabel, &$1, &$3);
		}
	| expression NEOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_equals($$.falselabel, $$.truelabel, &$1, &$3);
		}
	| expression LTOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_lessthan($$.truelabel, $$.falselabel, &$1, &$3);
		}
	| expression GEOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_lessthan($$.falselabel, $$.truelabel, &$1, &$3);
		}
	| expression GTOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_greaterthan($$.truelabel, $$.falselabel, &$1, &$3);
		}
	| expression LEOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_greaterthan($$.falselabel, $$.truelabel, &$1, &$3);
		}
	;

asm
	: STRING
		{
			unescape(yytext);
			arch_asm_string(yytext);
		}
	| oldid
		{
			if ($1->kind != VAR)
				fatal("you can only emit references to variables");
			arch_asm_symbol($1);
		}
	; 

asms
	: asm
	| asm ',' asms
	;

%%

static bool is_ptr(struct symbol* sym)
{
	if (!sym || (sym->kind != TYPE))
		return false;
	return sym->u.type.kind == TYPE_POINTER;
}

static bool is_num(struct symbol* sym)
{
	if (!sym)
		return true; /* for numeric constants */
	if (sym->kind != TYPE)
		return false;
	return sym->u.type.kind == TYPE_NUMBER;
}

static bool is_array(struct symbol* sym)
{
	if (!sym)
		return true; /* for numeric constants */
	if (sym->kind != TYPE)
		return false;
	return sym->u.type.kind == TYPE_ARRAY;
}

static void resolve_untyped_constants_for_add_sub(struct exprnode* lhs, struct exprnode* rhs)
{
	if (lhs->type && !rhs->type)
	{
		if (is_num(lhs->type))
			rhs->type = lhs->type;
		else if (is_ptr(lhs->type))
			rhs->type = intptr_type;
		else
			fatal("cannot use an untyped constant in this context");
	}
	if (!lhs->type && rhs->type)
	{
		if (is_num(rhs->type))
			lhs->type = rhs->type;
		else if (is_ptr(rhs->type))
			fatal("pointers may only appear on the LHS of an addition or subtraction");
	}
}

static void expr_add(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs)
{
	resolve_untyped_constants_for_add_sub(lhs, rhs);

	if (is_ptr(lhs->type) && is_ptr(rhs->type))
		fatal("you cannot add two pointers together");
	else if (is_ptr(lhs->type) && (rhs->type != intptr_type))
		fatal("you can only add a %s to a pointer", rhs->type->name);
	else if (is_ptr(rhs->type))
		fatal("add numbers to pointers, not vice versa");
	else if (!is_ptr(lhs->type) && (lhs->type != rhs->type))
		fatal("you tried to add a %s and a %s", lhs->type->name, rhs->type->name);

	if (lhs->constant && rhs->constant)
		node_is_constant(dest, lhs->type, lhs->sym, lhs->off + rhs->off);
	else
	{
		if (!lhs->constant && rhs->constant)
			arch_add_const(lhs->type, rhs->sym, rhs->off);
		else if (lhs->constant && !rhs->constant)
			arch_add_const(lhs->type, lhs->sym, lhs->off);
		else
			arch_add(lhs->type);
		node_is_stacked(dest, lhs->type);
	}
}

static void expr_sub(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs)
{
	resolve_untyped_constants_for_add_sub(lhs, rhs);
	if (is_ptr(lhs->type) && !is_ptr(rhs->type) && (rhs->type != intptr_type))
		fatal("you can't subtrack a %s and a %s", lhs->type->name, rhs->type->name);
	else if (is_num(lhs->type) && is_ptr(rhs->type))
		fatal("subtract numbers from pointers, not vice versa");
	else if (is_num(lhs->type) && is_num(rhs->type) && (lhs->type != rhs->type))
		fatal("you tried to subtract a %s and a %s", lhs->type->name, rhs->type->name);

	if (lhs->constant && rhs->constant)
		node_is_constant(dest, lhs->type, lhs->sym, lhs->off - rhs->off);
	else
	{
		if (!lhs->constant && rhs->constant)
			arch_add_const(lhs->type, NULL, -rhs->off);
		else if (lhs->constant && !rhs->constant)
			arch_subfrom_const(lhs->type, 0, lhs->off);
		else
			arch_sub(lhs->type);
		node_is_stacked(dest, lhs->type);
	}
}

static void resolve_untyped_constants_simply(struct exprnode* lhs, struct exprnode* rhs)
{
	if (lhs->type && !rhs->type)
		rhs->type = lhs->type;
	else if (!lhs->type && rhs->type)
		lhs->type = rhs->type;
	else if (lhs->type != rhs->type)
		fatal("type mismatch with %s and %s", lhs->type->name, rhs->type->name);
}

static void expr_mul(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs)
{
	resolve_untyped_constants_simply(lhs, rhs);
	if (!is_num(lhs->type) || !is_num(rhs->type))
		fatal("multiplication only works on numbers");

	if (lhs->constant && rhs->constant)
	{
		assert(lhs->sym == NULL);
		assert(rhs->sym == NULL);
		node_is_constant(dest, lhs->type, NULL, lhs->off * rhs->off);
		return;
	}

	if (rhs->constant)
		arch_mul_const(lhs->type, rhs->off);
	else if (lhs->constant)
		arch_mul_const(lhs->type, lhs->off);
	else
		arch_mul(lhs->type);
	node_is_stacked(dest, lhs->type);
}

static void expr_div(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs)
{
	resolve_untyped_constants_simply(lhs, rhs);
	if (!is_num(lhs->type) || !is_num(rhs->type))
		fatal("division only works on numbers");
	if (rhs->constant && (rhs->off == 0))
		fatal("division by zero");

	if (lhs->constant && rhs->constant)
	{
		assert(lhs->sym == NULL);
		assert(rhs->sym == NULL);
		node_is_constant(dest, lhs->type, NULL, lhs->off / rhs->off);
		return;
	}

	if (rhs->constant)
		arch_div_const(lhs->type, rhs->off);
	else if (lhs->constant)
		arch_div_const_by(lhs->type, lhs->off);
	else
		arch_div(lhs->type);
	node_is_stacked(dest, lhs->type);
}

static void expr_rem(struct exprnode* dest, struct exprnode* lhs, struct exprnode* rhs)
{
	resolve_untyped_constants_simply(lhs, rhs);
	if (!is_num(lhs->type) || !is_num(rhs->type))
		fatal("modulus only works on numbers");
	if (rhs->constant && (rhs->off == 0))
		fatal("division by zero");

	if (lhs->constant && rhs->constant)
	{
		assert(lhs->sym == NULL);
		assert(rhs->sym == NULL);
		node_is_constant(dest, lhs->type, NULL, lhs->off % rhs->off);
		return;
	}

	if (rhs->constant)
		arch_rem_const(lhs->type, rhs->off);
	else if (lhs->constant)
		arch_rem_const_by(lhs->type, lhs->off);
	else
		arch_rem(lhs->type);
	node_is_stacked(dest, lhs->type);
}

static void cond_equals(int truelabel, int falselabel, struct exprnode* lhs, struct exprnode* rhs)
{
	resolve_untyped_constants_simply(lhs, rhs);
	if (lhs->constant && rhs->constant)
		arch_emit_jump((lhs->off == rhs->off) ? truelabel : falselabel);
	else if (lhs->constant && !rhs->constant)
		arch_cmp_equals_const(lhs->type, truelabel, falselabel, rhs->sym, rhs->off);
	else if (!lhs->constant && rhs->constant)
		arch_cmp_equals_const(rhs->type, truelabel, falselabel, lhs->sym, lhs->off);
	else if (lhs->type == rhs->type)
		arch_cmp_equals(lhs->type, truelabel, falselabel);
	else
		fatal("you tried to compare a %s and a %s", lhs->type->name, rhs->type->name);
}

static void cond_lessthan(int truelabel, int falselabel, struct exprnode* lhs, struct exprnode* rhs)
{
	resolve_untyped_constants_simply(lhs, rhs);
	if (!lhs->constant && !rhs->constant)
		arch_emit_jump((lhs->off < rhs->off) ? truelabel : falselabel);
	else if (lhs->constant && !rhs->constant)
		arch_cmp_lessthan_const(lhs->type, truelabel, falselabel, rhs->sym, rhs->off);
	else if (!lhs->constant && rhs->constant)
		arch_cmp_greaterthan_const(rhs->type, truelabel, falselabel, lhs->sym, lhs->off);
	else if (lhs->type == rhs->type)
		arch_cmp_lessthan(lhs->type, truelabel, falselabel);
	else
		fatal("you tried to compare a %s and a %s", lhs->type->name, rhs->type->name);
}

static void cond_greaterthan(int truelabel, int falselabel, struct exprnode* lhs, struct exprnode* rhs)
{
	resolve_untyped_constants_simply(lhs, rhs);
	if (!lhs->constant && !rhs->constant)
		arch_emit_jump((lhs->off < rhs->off) ? truelabel : falselabel);
	else if (lhs->constant && !rhs->constant)
		arch_cmp_greaterthan_const(lhs->type, truelabel, falselabel, rhs->sym, rhs->off);
	else if (!lhs->constant && rhs->constant)
		arch_cmp_lessthan_const(rhs->type, truelabel, falselabel, lhs->sym, lhs->off);
	else if (lhs->type == rhs->type)
		arch_cmp_greaterthan(lhs->type, truelabel, falselabel);
	else
		fatal("you tried to compare a %s and a %s", lhs->type->name, rhs->type->name);
}

struct symbol* add_new_symbol(const char* name)
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
	if (node->constant)
	{
		arch_push_constant(node->sym, node->off);
		if (!node->type)
			node->type = type;
	}

	if (node->type != type)
		fatal("type mismatch: expression was a '%s', used when a '%s' was expected",
			node->type->name, type->name);
	if (!is_ptr(type) && !is_num(type))
		fatal("%s cannot be used in this kind of expression", type->name);
}

struct symbol* make_number_type(const char* name, int width, bool issigned)
{
	struct symbol* ptr = add_new_symbol(name);
	ptr->name = name;
	ptr->kind = TYPE;
	ptr->u.type.kind = TYPE_NUMBER;
	ptr->u.type.width = width;
	ptr->u.type.issigned = issigned;
	return ptr;
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
		ptr->u.type.kind = TYPE_POINTER;
		ptr->u.type.width = 2;
		ptr->u.type.element = type;
		type->u.type.pointerto = ptr;
		return ptr;
	}
}

static struct symbol* make_array_type(struct symbol* type, int32_t size)
{
	struct symbol* ptr = add_new_symbol(NULL);
	ptr->name = aprintf("%s[%d]", type->name, size);
	ptr->kind = TYPE;
	ptr->u.type.kind = TYPE_ARRAY;
	ptr->u.type.width = size * type->u.type.width;
	ptr->u.type.element = type;
	return ptr;
}

static void unescape(char* string)
{
	char* pin = string;
	char* pout = string;
	char c = *pin++;
	for (;;)
	{
		if (c == '\\')
		{
			c = *pin++;
			switch (c)
			{
				case 'n': c = '\n'; break;
				case 'r': c = '\r'; break;
				case '"': c = '"'; break;
				case '\\': c = '\\'; break;
				default: fatal("unknown string escape");
			}
		}
		*pout++ = c;
		if (!c)
			break;
		c = *pin++;
	}
}

static void node_is_constant(struct exprnode* node, struct symbol* type, struct symbol* sym, int32_t off)
{
	node->type = type;
	node->sym = sym;
	node->off = off;
	node->constant = true;
}

static void node_is_stacked(struct exprnode* node, struct symbol* type)
{
	node->type = type;
	node->sym = NULL;
	node->off = 0;
	node->constant = false;
}

