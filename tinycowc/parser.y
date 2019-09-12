%{
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "globals.h"
#include "midcode.h"

#define YYDEBUG 1
#include "parser.h"

#define TYPE_STACK_DEPTH 32

int32_t number;

struct subroutine* current_sub;
struct argumentsspec* current_call;
struct symbol* current_type;
int current_label = 1;
int break_label;

struct symbol* intptr_type;
struct symbol* uint8_type;

static bool is_ptr(struct symbol* sym);
static bool is_num(struct symbol* sym);
static bool is_snum(struct symbol* sym);
static bool is_array(struct symbol* sym);
static bool is_array_ptr(struct symbol* sym);
static bool is_scalar(struct symbol* sym);
static bool is_record(struct symbol* sym);
static bool is_record_ptr(struct symbol* sym);

static struct symbol* expr_add(struct symbol* lhs, struct symbol* rhs);
static struct symbol* expr_sub(struct symbol* lhs, struct symbol* rhs);
static struct symbol* expr_simple(struct symbol* lhs, struct symbol* rhs, void (*emitter)(int width));
static struct symbol* expr_signed(struct symbol* lhs, struct symbol* rhs,
	void (*emitteru)(int width),
	void (*emitters)(int width));
static void cond_simple(int truelabel, int falselabel, struct symbol* lhs, struct symbol* rhs,
	void (*emitteru)(int width, int truelabel, int falselabel),
	void (*emitters)(int width, int truelabel, int falselabel),
	void (*emitterp)(int truelabel, int falselabel)
);

static void init_var(struct symbol* sym, struct symbol* type);
static void init_member(struct symbol* sym, struct symbol* type);
static struct symbol* make_pointer_type(struct symbol* type);
static struct symbol* make_array_type(struct symbol* type, int32_t size);

static void check_expression_type(struct symbol** node, struct symbol* type);
static void unescape(char* string);

static void node_is_constant(struct exprnode* node, struct symbol* type, struct symbol* sym, int32_t off);
static void node_is_stacked(struct exprnode* node, struct symbol* type);

static void push_type(void);
static void pop_type(void);

%}

%token VAR SUB TYPE END LOOP WHILE IF THEN BREAK ASM ELSE RETURN EXTERN CONST
%token INCLUDE RECORD
%token ID NUMBER STRING
%token ASSIGN

%type <symbol> newid;
%type <symbol> memberid;
%type <symbol> oldid;
%type <type> typeref;
%type <type> expression;
%type <type> lvalue;
%type <value> cvalue;
%type <labels> LOOP;
%type <labels> WHILE;
%type <labels> IF;
%type <cond> conditional;
%type <subroutine> SUB;

%left ','
%left OR
%left AND
%left AS
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
	struct subroutine* subroutine;
	struct condlabels cond;
	struct looplabels labels;
	struct argumentsspec argsspec;
	int32_t value;
	void* ptr;
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
	| CONST newid ASSIGN cvalue ';'
		{
			$2->kind = CONST;
			$2->u.constant = $4;
		}
	| SUB newid
		{
			$1 = current_sub;
			struct subroutine* sub = calloc(1, sizeof(struct subroutine));
			sub->name = $2->name;
			sub->namespace.parent = &current_sub->namespace;
			sub->old_break_label = break_label;
			arch_init_subroutine(sub);
			break_label = 0;

			$2->kind = SUB;
			$2->u.sub = sub;

			current_sub = sub;
		}
		parameterlist
		{
			emit_mid_startsub(current_sub);
		}
		statements
		{
			emit_mid_endsub(current_sub);
			break_label = current_sub->old_break_label;
			current_sub = $1;
		}
		END SUB
	| EXTERN SUB newid
		{
			$2 = current_sub;
			struct subroutine* sub = calloc(1, sizeof(struct subroutine));
			sub->name = $3->name;
			sub->namespace.parent = &current_sub->namespace;
			arch_init_subroutine(sub);
			break_label = 0;

			$3->kind = SUB;
			$3->u.sub = sub;

			current_sub = sub;
		}
		parameterlist
		ASSIGN STRING
		{
			current_sub->externname = strdup(yytext);
			current_sub = $2;
		}
		';'
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
			if (!is_ptr($1))
				fatal("you can only assign to lvalues");
			check_expression_type(&$3, $1->u.type.element);
			emit_mid_store($1->u.type.element->u.type.width);
		}
	| INCLUDE STRING
		{ $<ptr>$ = open_file(yytext); }
		';'
		{ include_file($<ptr>3); }
	| record
	;

iftrailing
	: END IF
	| ELSE statements END IF
	;

/* Returns a *pointer* to the value --- or a literal untyped number for a constant. */
lvalue
	: oldid
		{
			if ($1->kind == CONST)
			{
				emit_mid_constant($1->u.constant);
				$$ = NULL;
			}
			else
			{
				emit_mid_address($1);
				$$ = make_pointer_type($1->u.var.type);
			}
		}
	| lvalue '[' expression ']'
		{
			if (!is_array_ptr($1->u.type.element))
				fatal("you can only index arrays");
			if (!is_num($3))
				fatal("array indices must be numbers");
			
			check_expression_type(&$3, intptr_type);
			/* Remember that $1 is a *pointer* to the array. */
			struct symbol* array = $1->u.type.element;
			emit_mid_constant(array->u.type.element->u.type.width);
			emit_mid_mul(intptr_type->u.type.width);
			emit_mid_add(intptr_type->u.type.width);
			$$ = make_pointer_type(array->u.type.element);
		}
	| lvalue '.' ID
		{
			if (!is_record_ptr($1))
				fatal("you can only access members of records");

			/* Remember that $1 is a *pointer* to the array. */
			struct symbol* record = $1->u.type.element;
			struct symbol* member = lookup_symbol(&record->u.type.namespace, yytext);
			if (!member)
				fatal("%s does not contain member '%s'", record->name, member->name);

			emit_mid_constant(member->u.var.offset);
			emit_mid_add(intptr_type->u.type.width);
			$$ = make_pointer_type(member->u.var.type);
		}
	| '[' expression ']'
		{
			if (!$2)
				fatal("cannot dereference untyped constants");
			if (!is_ptr($2))
				fatal("can only dereference pointers");

			$$ = $2;
		}
	;

newid
	: ID { $$ = add_new_symbol(NULL, yytext); }
	;

oldid
	: ID { $$ = lookup_symbol(NULL, yytext); }
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
			spec->param = spec->sub->namespace.firstsymbol;
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
	| oldid
		{
			if ($1->kind != CONST)
				fatal("only constants can be used here");
			$$ = $1->u.constant;
		}
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
			if ($1)
			{
				emit_mid_load($1->u.type.element->u.type.width);
				$$ = $1->u.type.element;
			}
			else
				$$ = NULL;
		}
	| '(' expression ')'
		{ $$ = $2; }
	| '-' expression
		{ 
			emit_mid_neg($2 ? $2->u.type.width : 0);
		}
	| expression AS typeref
		{
			if (!is_scalar($1))
				fatal("attempt to cast a %s, which is not scalar", $1->name);
			if ($1)
				emit_mid_cast($1->u.type.width, $3->u.type.width);
			$$ = $3;
		}
	| expression '+' expression
		{ $$ = expr_add($1, $3); }
	| expression '-' expression
		{ $$ = expr_sub($1, $3); }
	| expression '*' expression
		{ $$ = expr_simple($1, $3, emit_mid_mul); }
	| expression '/' expression
		{ $$ = expr_signed($1, $3, emit_mid_divu, emit_mid_divs); }
	| expression '%' expression
		{ $$ = expr_signed($1, $3, emit_mid_remu, emit_mid_rems); }
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
			cond_simple($$.truelabel, $$.falselabel, $1, $3, emit_mid_bequ, emit_mid_beqs, emit_mid_beqp);
		}
	| expression NEOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_simple($$.falselabel, $$.truelabel, $1, $3, emit_mid_bequ, emit_mid_beqs, emit_mid_beqp);
		}
	| expression LTOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_simple($$.truelabel, $$.falselabel, $1, $3, emit_mid_bltu, emit_mid_blts, emit_mid_bltp);
		}
	| expression GEOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_simple($$.falselabel, $$.truelabel, $1, $3, emit_mid_bltu, emit_mid_blts, emit_mid_bltp);
		}
	| expression GTOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_simple($$.truelabel, $$.falselabel, $1, $3, emit_mid_bgtu, emit_mid_bgts, emit_mid_bgtp);
		}
	| expression LEOP expression
		{
			$$.truelabel = current_label++;
			$$.falselabel = current_label++;
			cond_simple($$.falselabel, $$.truelabel, $1, $3, emit_mid_bgtu, emit_mid_bgts, emit_mid_bgtp);
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

record
	: RECORD newid
		{
			$2->kind = TYPE;
			$2->u.type.kind = TYPE_RECORD;
			current_type = $2;
		}
	members
	END RECORD
		{
			current_type = NULL;
		}
	;

members
	: /* nothing */
	| member members
	;

member
	: memberid ':' typeref ';'
		{
			$1->kind = VAR;
			init_member($1, $3);
		}
	;

memberid
	: ID { $$ = add_new_symbol(&current_type->u.type.namespace, yytext); }
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

static bool is_snum(struct symbol* sym)
{
	if (!sym)
		return true; /* for numeric constants */
	return is_num(sym);
}

static bool is_array(struct symbol* sym)
{
	if (!sym)
		return false; /* for numeric constants */
	if (sym->kind != TYPE)
		return false;
	return sym->u.type.kind == TYPE_ARRAY;
}

static bool is_array_ptr(struct symbol* sym)
{
	return is_ptr(sym) && is_array(sym->u.type.element);
}

static bool is_scalar(struct symbol* sym)
{
	return (is_ptr(sym) || is_num(sym));
}

static bool is_record(struct symbol* sym)
{
	if (!sym)
		return false; /* for numeric constants */
	if (sym->kind != TYPE)
		return false;
	return sym->u.type.kind == TYPE_RECORD;
}

static bool is_record_ptr(struct symbol* sym)
{
	return is_ptr(sym) && is_record(sym->u.type.element);
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

	if (is_ptr(lhs))
		emit_mid_addp(intptr_type->u.type.width);
	else
		emit_mid_add(lhs ? lhs->u.type.width : 0);
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

	if (is_ptr(rhs))
	{
		emit_mid_subp(intptr_type->u.type.width);
		return intptr_type;
	}
	else
	{
		emit_mid_sub(lhs ? lhs->u.type.width : 0);
		return lhs;
	}
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

	emitter(lhs ? lhs->u.type.width : 0);
	return lhs;
}

static struct symbol* expr_signed(struct symbol* lhs, struct symbol* rhs,
	void (*emitteru)(int width),
	void (*emitters)(int width))
{
	resolve_untyped_constants_simply(&lhs, &rhs);
	if (!is_num(lhs) || !is_num(rhs))
		fatal("number required");

	(is_snum(lhs) ? emitters : emitteru)(lhs ? lhs->u.type.width : 0);
	return lhs;
}

static void cond_simple(int truelabel, int falselabel, struct symbol* lhs, struct symbol* rhs,
	void (*emitteru)(int width, int truelabel, int falselabel),
	void (*emitters)(int width, int truelabel, int falselabel),
	void (*emitterp)(int truelabel, int falselabel))
{
	resolve_untyped_constants_simply(&lhs, &rhs);
	if (lhs != rhs)
		fatal("you tried to compare a %s and a %s", lhs->name, rhs->name);

	if (is_ptr(lhs))
		emitterp(truelabel, falselabel);
	else
		(is_snum(lhs) ? emitters : emitteru)(lhs->u.type.width, truelabel, falselabel);
}

struct symbol* add_new_symbol(struct namespace* namespace, const char* name)
{
	if (!namespace)
		namespace = &current_sub->namespace;
	
	struct symbol* sym;
	if (name)
	{
		sym = namespace->firstsymbol;
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
		if (!namespace->lastsymbol)
			namespace->firstsymbol = namespace->lastsymbol = sym;
		else
		{
			namespace->lastsymbol->next = sym;
			namespace->lastsymbol = sym;
		}
	}
	return sym;
}

struct symbol* lookup_symbol(struct namespace* namespace, const char* name)
{
	if (!namespace)
		namespace = &current_sub->namespace;

	while (namespace)
	{
		struct symbol* sym = namespace->firstsymbol;
		while (sym)
		{
			if (strcmp(sym->name, name) == 0)
				return sym;
			sym = sym->next;
		}
		namespace = namespace->parent;
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

static void init_member(struct symbol* sym, struct symbol* type)
{
	sym->u.var.type = type;
	sym->u.var.offset = current_type->u.type.width;
	current_type->u.type.width += type->u.type.width;
}

/* node must be on the top of the midend stack. */
static void check_expression_type(struct symbol** node, struct symbol* type)
{
	if (!*node)
		*node = type;

	if (*node != type)
		fatal("type mismatch: expression was a '%s', used when a '%s' was expected",
			(*node)->name, type->name);
	if (!is_ptr(type) && !is_num(type))
		fatal("%s cannot be used in this kind of expression", type->name);
}

struct symbol* make_number_type(const char* name, int width, bool issigned)
{
	struct symbol* ptr = add_new_symbol(NULL, name);
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
		struct symbol* ptr = add_new_symbol(NULL, NULL);
		ptr->name = aprintf("[%s]", type->name);
		ptr->kind = TYPE;
		ptr->u.type.kind = TYPE_POINTER;
		ptr->u.type.width = intptr_type->u.type.width;
		ptr->u.type.element = type;
		type->u.type.pointerto = ptr;
		return ptr;
	}
}

static struct symbol* make_array_type(struct symbol* type, int32_t size)
{
	struct symbol* ptr = add_new_symbol(NULL, NULL);
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

