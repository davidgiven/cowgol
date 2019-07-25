%{
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "globals.h"
#include "midcode.h"

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

static struct symbol* expr_add(struct symbol* lhs, struct symbol* rhs);
static struct symbol* expr_sub(struct symbol* lhs, struct symbol* rhs);
static struct symbol* expr_simple(struct symbol* lhs, struct symbol* rhs, void (*emitter)(int width));
static void cond_simple(int truelabel, int falselabel, struct symbol* lhs, struct symbol* rhs,
	void (*emitter)(int width, int truelabel, int falselabel));

static struct symbol* lookup_symbol(const char* name);
static void init_var(struct symbol* sym, struct symbol* type);
static struct symbol* make_pointer_type(struct symbol* type);
static struct symbol* make_array_type(struct symbol* type, int32_t size);

static void check_expression_type(struct symbol** node, struct symbol* type);
static void unescape(char* string);

static void node_is_constant(struct exprnode* node, struct symbol* type, struct symbol* sym, int32_t off);
static void node_is_stacked(struct exprnode* node, struct symbol* type);

%}

%token VAR SUB TYPE END LOOP WHILE IF THEN BREAK ASM ELSE RETURN
%token ID NUMBER STRING
%token ASSIGN

%type <symbol> newid;
%type <symbol> oldid;
%type <type> typeref;
%type <type> expression;
%type <type> lvalue;
%type <value> cvalue;
%type <labels> LOOP;
%type <labels> WHILE;
%type <labels> IF;
%type <cond> conditional;

%left ','
%left OR
%left AND
%left '|'
%left '^'
%left '&'
%left LTOP LEOP GTOP GEOP EQOP NEOP
%left '+' '-'
%left '*' '/' '%'
%right NOT

%union {
	struct symbol* symbol;
	struct symbol* type;
	struct condlabels cond;
	struct looplabels labels;
	struct argumentsspec argsspec;
	int32_t value;
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
	| VAR newid ':' typeref 
		{
			emit_mid_address($2);
		}
		ASSIGN expression ';'
		{
			$2->kind = VAR;
			init_var($2, $4);
			check_expression_type(&$7, $4);
			emit_mid_store($4->u.type.width);
		}
	| VAR newid
		{
			emit_mid_address($2);
		}
		ASSIGN expression ';'
		{
			$2->kind = VAR;
			if (!$5)
				fatal("types cannot be inferred for numeric constants");
			init_var($2, $5);
			check_expression_type(&$5, $5);
			emit_mid_store($5->u.type.width);
		}
	| SUB newid
		{
			struct subroutine* sub = calloc(1, sizeof(struct subroutine));
			sub->name = $2->name;
			sub->parent = current_sub;
			sub->label_after = current_label++;
			sub->old_break_label = break_label;
			arch_init_subroutine(sub);
			break_label = 0;

			$2->kind = SUB;
			$2->u.sub = sub;

			current_sub = sub;
		}
		parameterlist
		{
			emit_mid_jump(current_sub->label_after);
			emit_mid_startsub(current_sub);
		}
		statements
		{
			emit_mid_endsub(current_sub);
			emit_mid_label(current_sub->label_after);
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
			emit_mid_label($1.looplabel);
		}
		statements END LOOP
		{
			emit_mid_jump($1.looplabel);
			emit_mid_label($1.exitlabel);
			break_label = $1.old_break_label;
		}
	| IF
		{
			$1.exitlabel = current_label++;
		}
		conditional
		THEN
		{
			emit_mid_label($3.truelabel);
		}
		statements
		{
			emit_mid_jump($1.exitlabel);
			emit_mid_label($3.falselabel);
		}
		iftrailing
		{
			emit_mid_label($1.exitlabel);
		}
	| WHILE
		{
			$1.looplabel = current_label++;
			$1.exitlabel = current_label++;
			$1.old_break_label = break_label;
			break_label = $1.exitlabel;
			emit_mid_label($1.looplabel);
		}
		conditional
		{
			emit_mid_label($3.truelabel);
			emit_mid_labelalias($3.falselabel, $1.exitlabel);
		}
		LOOP statements END LOOP
		{
			emit_mid_jump($1.looplabel);
			emit_mid_label($1.exitlabel);
			break_label = $1.old_break_label;
		}
	| BREAK ';'
		{
			if (!break_label)
				fatal("nothing to break from");
			emit_mid_jump(break_label);
		}
	| RETURN ';'
		{
			emit_mid_return();
		}
	| ASM {
			emit_mid_asmstart();
		}
		asms ';'
		{
			emit_mid_asmend();
		}
	| oldid argumentlist ';'
		{
			if ($1->kind != SUB)
				fatal("expected '%s' to be a subroutine", $1->name);
			emit_mid_call($1->u.sub);
		}
	| lvalue ASSIGN expression ';'
		{
			check_expression_type(&$3, $1);
			emit_mid_store($1->u.type.width);
		}
	;

iftrailing
	: END IF
	| ELSE statements END IF
	;

lvalue
	: oldid
		{
			emit_mid_address($1);
			$$ = make_pointer_type($1->u.var.type);
		}
	| lvalue '[' expression ']'
		{
			if (!is_ptr($1) || !is_array($1->u.type.element))
				fatal("you can only index arrays");
			if (!is_num($3))
				fatal("array indices must be numbers");
			
			check_expression_type(&$3, intptr_type);
			emit_mid_constant($1->u.type.element->u.type.width);
			emit_mid_mul(intptr_type->u.type.width);
			emit_mid_add(intptr_type->u.type.width);

			$$ = $$->u.type.element;
		}
	| '[' expression ']'
		{
			if (!$2)
				fatal("cannot dereference untyped constants");
			if (!is_ptr($2))
				fatal("can only dereference pointers");

			emit_mid_load($2->u.type.element->u.type.width);
			$$ = $2->u.type.element;
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
	: '(' ')'
	| '('
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

			check_expression_type(&$1, param->u.var.type);
			emit_mid_param($1->u.type.width);
		}
	;

typeref
	: oldid
		{
			$$ = $1;
			if ($$->kind != TYPE)
				fatal("expected '%s' to be a type", $1->name);
		}
	| typeref '[' cvalue ']'
		{ $$ = make_array_type($1, $3); }
	| '[' typeref ']'
		{ $$ = make_pointer_type($2); }
	;

cvalue
	: NUMBER            { $$ = number; }
    | '(' cvalue ')'    { $$ = $2; }
    | '-' cvalue        { $$ = -$2; }
    | cvalue '+' cvalue { $$ = $1 + $3; }
    | cvalue '-' cvalue { $$ = $1 - $3; }
    | cvalue '*' cvalue { $$ = $1 * $3; }
    | cvalue '/' cvalue { $$ = $1 / $3; }
    | cvalue '%' cvalue { $$ = $1 % $3; }
    ;

expression
	: NUMBER
		{
			emit_mid_constant(number);
			$$ = NULL;
		}
	| STRING
		{
			unescape(yytext);
			emit_mid_string(strdup(yytext));
			$$ = make_pointer_type(uint8_type);
		}
	| lvalue
		{
			emit_mid_load($1->u.type.element->u.type.width);
			$$ = $1->u.type.element;
		}
	| '(' expression ')'
		{ $$ = $2; }
	| '-' expression
		{ 
			emit_mid_neg($2->u.type.width);
		}
	| expression '+' expression
		{ $$ = expr_add($1, $3); }
	| expression '-' expression
		{ $$ = expr_sub($1, $3); }
	| expression '*' expression
		{ $$ = expr_simple($1, $3, emit_mid_mul); }
	| expression '/' expression
		{ $$ = expr_simple($1, $3, emit_mid_div); }
	| expression '%' expression
		{ $$ = expr_simple($1, $3, emit_mid_rem); }
	| expression '^' expression
		{ $$ = expr_simple($1, $3, emit_mid_eor); }
	| expression '&' expression
		{ $$ = expr_simple($1, $3, emit_mid_and); }
	| expression '|' expression
		{ $$ = expr_simple($1, $3, emit_mid_or); }
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
			emit_mid_label($1.truelabel);
		}
		conditional
		{
			emit_mid_labelalias($1.falselabel, $4.falselabel);
			$$.truelabel = $4.truelabel;
			$$.falselabel = $4.falselabel;
		}
	| conditional OR
		{
			emit_mid_label($1.falselabel);
		}
		conditional
		{
			emit_mid_labelalias($1.truelabel, $4.truelabel);
			$$.truelabel = $4.truelabel;
			$$.falselabel = $4.falselabel;
		}
	| expression EQOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_simple($$.truelabel, $$.falselabel, $1, $3, emit_mid_beq);
		}
	| expression NEOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_simple($$.falselabel, $$.truelabel, $1, $3, emit_mid_beq);
		}
	| expression LTOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_simple($$.truelabel, $$.falselabel, $1, $3, emit_mid_blt);
		}
	| expression GEOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_simple($$.falselabel, $$.truelabel, $1, $3, emit_mid_blt);
		}
	| expression GTOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_simple($$.truelabel, $$.falselabel, $1, $3, emit_mid_bgt);
		}
	| expression LEOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_simple($$.falselabel, $$.truelabel, $1, $3, emit_mid_bgt);
		}
	;

asm
	: STRING
		{
			unescape(yytext);
			emit_mid_asmtext(strdup(yytext));
		}
	| oldid
		{
			if ($1->kind != VAR)
				fatal("you can only emit references to variables");
			emit_mid_asmsymbol($1);
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

static void resolve_untyped_constants_for_add_sub(struct symbol** lhs, struct symbol** rhs)
{
	if (*lhs && !*rhs)
	{
		if (is_num(*lhs))
			*rhs = *lhs;
		else if (is_ptr(*lhs))
			*rhs = intptr_type;
		else
			fatal("cannot use an untyped constant in this context");
	}
	if (!*lhs && *rhs)
	{
		if (is_num(*rhs))
			*lhs = *rhs;
		else if (is_ptr(*rhs))
			fatal("pointers may only appear on the LHS of an addition or subtraction");
	}
}

static struct symbol* expr_add(struct symbol* lhs, struct symbol* rhs)
{
	resolve_untyped_constants_for_add_sub(&lhs, &rhs);

	if (is_ptr(lhs) && is_ptr(rhs))
		fatal("you cannot add two pointers together");
	else if (is_ptr(lhs) && (rhs != intptr_type))
		fatal("you can only add a %s to a pointer", rhs->name);
	else if (is_ptr(rhs))
		fatal("add numbers to pointers, not vice versa");
	else if (!is_ptr(lhs) && (lhs != rhs))
		fatal("you tried to add a %s and a %s", lhs->name, rhs->name);

	emit_mid_add(lhs->u.type.width);
	return lhs;
}

static struct symbol* expr_sub(struct symbol* lhs, struct symbol* rhs)
{
	resolve_untyped_constants_for_add_sub(&lhs, &rhs);

	if (is_ptr(lhs) && !is_ptr(rhs) && (rhs != intptr_type))
		fatal("you can't subtrack a %s and a %s", lhs->name, rhs->name);
	else if (is_num(lhs) && is_ptr(rhs))
		fatal("subtract numbers from pointers, not vice versa");
	else if (is_num(lhs) && is_num(rhs) && (lhs != rhs))
		fatal("you tried to subtract a %s and a %s", lhs->name, rhs->name);

	emit_mid_sub(lhs->u.type.width);
	if (is_ptr(rhs))
		return intptr_type;
	return lhs;
}

static void resolve_untyped_constants_simply(struct symbol** lhs, struct symbol** rhs)
{
	if (*lhs && !*rhs)
		*rhs = *lhs;
	else if (!*lhs && *rhs)
		*lhs = *rhs;
	else if (*lhs != *rhs)
		fatal("type mismatch with %s and %s", (*lhs)->name, (*rhs)->name);
}

static struct symbol* expr_simple(struct symbol* lhs, struct symbol* rhs, void (*emitter)(int width))
{
	resolve_untyped_constants_simply(&lhs, &rhs);
	if (!is_num(lhs) || !is_num(rhs))
		fatal("number required");

	emitter(lhs->u.type.width);
	return lhs;
}

static void cond_simple(int truelabel, int falselabel, struct symbol* lhs, struct symbol* rhs,
	void (*emitter)(int width, int truelabel, int falselabel))
{
	resolve_untyped_constants_simply(&lhs, &rhs);
	if (lhs != rhs)
		fatal("you tried to compare a %s and a %s", lhs->name, rhs->name);

	emitter(lhs->u.type.width, truelabel, falselabel);
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
	arch_init_variable(sym);
	current_sub->workspace += type->u.type.width;
}

/* node must be on the top of the midend stack. */
static void check_expression_type(struct symbol** node, struct symbol* type)
{
	if (*node)
		*node = type;

	if (*node != type)
		fatal("type mismatch: expression was a '%s', used when a '%s' was expected",
			(*node)->name, type->name);
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

