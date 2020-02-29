%include
{
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <string.h>
    #include "globals.h"
    #include "midcodes.h"
    #include "parser.h"
	#include "compiler.h"
	#include "codegen.h"
	#include "emitter.h"

    int current_label = 1;

    static int break_label;
	static int case_exit_label;
	struct subroutine* current_sub;
	static int id = 1;

	struct iflabels
	{
		int exitlabel;
		int truelabel;
		int falselabel;
		struct iflabels* next;
	};
	static struct iflabels* current_if;

	struct looplabels
	{
		int looplabel;
		int exitlabel;
		int old_break_label;
	};

	#undef NDEBUG
}

%token ASM ASSIGN BREAK CLOSEPAREN CLOSESQ.
%token COLON CONST DOT ELSE END EXTERN.
%token IF LOOP MINUS NOT OPENPAREN OPENSQ.
%token PERCENT PLUS RECORD RETURN SEMICOLON SLASH STAR.
%token SUB THEN TILDE VAR WHILE TYPE INT TYPE.
%token OPENBR CLOSEBR.

%left COMMA.
%left AND.
%left OR.
%left PIPE.
%left CARET.
%left AMPERSAND.
%nonassoc LTOP LEOP GTOP GEOP EQOP NEOP.
%left LSHIFT RSHIFT.
%left PLUS MINUS.
%left STAR SLASH PERCENT.
%left AS.
%right NOT TILDE.

%token_type {struct token*}
%type typeref {struct symbol*}
%type expression {struct midnode*}
%type lvalue {struct midnode*}

%syntax_error {
    fatal("syntax error: unexpected %s", yyTokenName[yymajor]);
}
%stack_overflow {
    fatal("stack overflow");
}

%token_destructor
{
	free_token($$);
}

program ::= statements.

statements ::= /* empty */.
statements ::= statements statement.

/* --- Top-level statements ---------------------------------------------- */

statement ::= SEMICOLON.

/* --- Simple statements ------------------------------------------------- */

statement ::= RETURN SEMICOLON.
{
	if (current_sub->cannot_return)
		fatal("you cannot return from here");
	generate(mid_return());
}

/* --- Variable declaration ---------------------------------------------- */

statement ::= VAR newid(S) COLON typeref(T) SEMICOLON.
{
	S->kind = VAR;
	init_var(S, T);
}

statement ::= VAR newid(S) COLON typeref(T) ASSIGN expression(E) SEMICOLON.
{
	S->kind = VAR;
	init_var(S, T);
    check_expression_type(&E->type, S->u.var.type);

    generate(mid_store(E->type->u.type.width, E, mid_address(S, 0)));
}

statement ::= VAR newid(S) ASSIGN expression(E) SEMICOLON.
{
	if (!E->type)
		fatal("types cannot be inferred for numeric constants");
	if (!is_scalar(E->type))
		fatal("you can only assign to lvalues");
	S->kind = VAR;
	init_var(S, E->type);
	check_expression_type(&E->type, E->type);

	generate(mid_store(E->type->u.type.width, E, mid_address(S, 0)));
}

/* --- Array initialisers ------------------------------------------------ */

%include
{
	static int current_member;
	static int current_offset;

	static Symbol* find_inited_member_nocheck()
	{
		if (is_array(current_type))
			return NULL;
		assert(is_record(current_type));

		int i = current_member;
		Symbol* member = current_type->u.type.namespace.firstsymbol;
		while (i-- && member)
			member = member->next;

		return member;
	}

	static Symbol* find_inited_member()
	{
		if (is_array(current_type))
			return NULL;

		Symbol* member = find_inited_member_nocheck();
		if (!member)
			fatal("too many elements in initialiser for %s",
				current_type->name);
		return member;
	}

	static Symbol* get_element_or_member_type(Symbol* member)
	{
		if (!member)
			return current_type->u.type.element;
		return member->u.var.type;
	}

	static void alignto(int alignment)
	{
		int new_offset = arch_align_up(current_offset, alignment);
		while (current_offset < new_offset)
		{
			generate(mid_init(1, 0));
			current_offset++;
		}
	}

	static void check_for_overlaps(Symbol* member)
	{
		if (!member)
			return;

		if (member->u.var.offset < current_offset)
			fatal("cannot statically initialise %s because it contains overlapping or out-of-order fields",
				current_type->name);
	}

	static void check_end_of_initialiser(void)
	{
		if (is_array(current_type))
		{
			int memberwidth = current_type->u.type.stride;
			int width = current_member * memberwidth;
			if (current_type->u.type.width == 0)
				current_type->u.type.width = width;
			if (width != current_type->u.type.width)
				fatal("wrong number of elements in initialiser for %s (got %d, wanted %d)",
					current_type->name,
					width/memberwidth, current_type->u.type.width/memberwidth);
		}
		else
		{
			assert(is_record(current_type));
			if (find_inited_member_nocheck() != NULL)
				fatal("too few elements in initialiser for %s", current_member, current_type->name);
		}
	}

	struct saved_initialiser_state
	{
		Symbol* current_type;
		int current_member;
		int current_offset;
	};
}

statement ::= initeddecl OPENBR initialisers CLOSEBR SEMICOLON.
{
	check_end_of_initialiser();
	generate(mid_endinit());

}

initeddecl ::= VAR newid(S) COLON typeref(T) ASSIGN.
{
	/* We don't call init_var() because we don't want this variable
	 * allocated to a workspace. */

	S->kind = VAR;
	S->u.var.type = T;
	S->u.var.sub = current_sub;
	if (!is_array(T) && !is_record(T))
		fatal("static initialisers only work on arrays or records");
	if (is_record(T) && T->u.type.namespace.parent)
		fatal("you can't statically initialise an inherited record");
	current_type = T;
	current_member = 0;
	current_offset = 0;

	generate(mid_startinit(S));
}

initialisers ::= .

initialisers ::= initialisers COMMA initialisers.

initialisers ::= cvalue(C).
{
	Symbol* member = find_inited_member();
	Symbol* type = get_element_or_member_type(member);
	if (!is_num(type))
		fatal("cannot initialise '%s' with a number", type->name);
	int w = type->u.type.width;
	alignto(type->u.type.alignment);
	check_for_overlaps(member);
	generate(mid_init(w, C));
	current_member++;
	current_offset += w;
}

initialisers ::= STRING(S).
{
	Symbol* member = find_inited_member();
	Symbol* type = get_element_or_member_type(member);
	if (!is_ptr(type)
			|| (type->u.type.element != uint8_type))
		fatal("cannot initialise this type with a string literal");
	
	unescape(S->string);
	alignto(intptr_type->u.type.alignment);
	check_for_overlaps(member);
	generate(mid_inits(S->string));
	current_member++;
	current_offset += intptr_type->u.type.width;
}

initialisers ::= begin_nested_initialiser(STATE) initialisers CLOSEBR.
{
	check_end_of_initialiser();

	current_type = STATE.current_type;
	current_member = STATE.current_member + 1;
	current_offset += STATE.current_offset;
}

%type begin_nested_initialiser {struct saved_initialiser_state}
begin_nested_initialiser(STATE) ::= OPENBR.
{
	STATE.current_type = current_type;
	STATE.current_member = current_member;

	Symbol* member = find_inited_member();
	current_type = get_element_or_member_type(member);
	if (!is_record(current_type))
		fatal("only nested records can be statically initialised");
	alignto(current_type->u.type.alignment);
	check_for_overlaps(member);
	STATE.current_offset = current_offset;

	current_offset = 0;
	current_member = 0;
}

/* --- If...Then...Else...End if ----------------------------------------- */

statement ::= ifstatement.

%destructor if_begin { current_if = current_if->next; }
ifstatement ::= IF if_begin if_conditional THEN
	if_statements if_optional_else END IF.
{
	generate(mid_label(current_if->exitlabel));
}

if_begin ::= .
{
	struct iflabels* i = calloc(1, sizeof(struct iflabels));
	i->next = current_if;
	current_if = i;
	current_if->exitlabel = current_label++;
}

if_conditional ::= startconditional conditional.
{
	current_if->truelabel = condtrue;
	current_if->falselabel = condfalse;
	generate(mid_label(current_if->truelabel));
}

if_statements ::= statements.
{
	generate(mid_jump(current_if->exitlabel));
	generate(mid_label(current_if->falselabel));
}

if_optional_else ::= .
if_optional_else ::= ELSE statements.
if_optional_else ::= ELSEIF if_conditional THEN if_statements if_optional_else.

/* --- Simple loops ------------------------------------------------------ */

statement ::= startloopstatement(labels) statements END LOOP.
{
	generate(mid_jump(labels.looplabel));
	generate(mid_label(labels.exitlabel));
	break_label = labels.old_break_label;
}

%type startloopstatement {struct looplabels}
startloopstatement(labels) ::= LOOP.
{
	labels.looplabel = current_label++;
	labels.exitlabel = current_label++;
	labels.old_break_label = break_label;
	break_label = labels.exitlabel;
	generate(mid_label(labels.looplabel));
}

/* --- While loops ------------------------------------------------------- */

%type whilestatement1 {struct looplabels}
whilestatement1(L) ::= WHILE.
{
	L.looplabel = current_label++;
	L.exitlabel = 0;
	L.old_break_label = break_label;
	break_label = 0;
	generate(mid_label(L.looplabel));
}

%type whilestatement2 {struct looplabels}
whilestatement2(L) ::= whilestatement1(L1) startconditional conditional.
{
	L = L1;
	generate(mid_label(condtrue));
	L.exitlabel = break_label = condfalse;
}

statement ::= whilestatement2(L) LOOP statements END LOOP.
{
	generate(mid_jump(L.looplabel));
	generate(mid_label(L.exitlabel));
	break_label = L.old_break_label;
}

/* --- Simple jumps ------------------------------------------------------ */

statement ::= BREAK SEMICOLON.
{
	if (!break_label)
		fatal("nothing to break to");
	generate(mid_jump(break_label));
}

/* --- Subroutine calls -------------------------------------------------- */

statement ::= simplesubroutinecallstatement.
statement ::= complexsubroutinecallstatement.

expression(E) ::= subroutinecallexpr(E1).
{ E = E1; }

%type subcall_begin {struct subroutine*}
subcall_begin(R) ::= oldid(S) OPENPAREN.
{
	if (S->kind != SUB)
		fatal("expected '%s' to be a subroutine", S->name);
	R = S->u.sub;
}

%include
{
	/* The input parameter list is *backwards*, with the top item on the chain
	 * being the last parameter. Codegen happens depth first so the first item
	 * pushed will be the first parameter. */
	static void check_input_parameters(Subroutine* sub, Node* inputs)
	{
		int ins = 0;
		Node* node = inputs;
		while (node->op != MIDCODE_END)
		{
			int remaining = sub->inputparameters - ins;
			if (remaining > 0)
			{
				Symbol* param = get_input_parameter(sub, remaining-1);

				check_expression_type(&node->right->type, param->u.var.type);
				check_non_partial_type(param->u.var.type);
				check_non_partial_type(node->right->type);

				/* The input parameter midnodes are PAIR because the parser couldn't
				 * do constant promotion (not having a subroutine to work with). Now
				 * we know the actual type, patch the midnode accordingly. */

				switch (node->right->type->u.type.width)
				{
					case 1: node->op = MIDCODE_PUSHPARAM1; break;
					case 2: node->op = MIDCODE_PUSHPARAM2; break;
					case 4: node->op = MIDCODE_PUSHPARAM4; break;
					case 8: node->op = MIDCODE_PUSHPARAM8; break;
					default: assert(false);
				}
			}
			ins++;
			node = node->left;
		}

		if (ins != sub->inputparameters)
			fatal("expected %d input parameters in call to '%s' but got %d",
				sub->inputparameters, sub->name, ins);
	}

	static void check_output_parameters(Subroutine* sub, Node* outputs)
	{
		Symbol* param = get_output_parameter(sub, 0);

		int outs = 0;
		Node* node = outputs;
		while (node->op != MIDCODE_END)
		{
			if (outs < sub->outputparameters)
			{
				check_expression_type(&node->right->type->u.type.element, param->u.var.type);
				check_non_partial_type(param->u.var.type);
				check_non_partial_type(node->right->type->u.type.element);
				param = param->u.var.next_parameter;
			}
			outs++;
			node = node->left;
		}

		if (outs != sub->outputparameters)
			fatal("expected %d output parameters in call to '%s' but got %d",
				sub->outputparameters, sub->name, outs);
	}
}

%type subroutinecallexpr {struct midnode*}
subroutinecallexpr(E) ::= subcall_begin(S) optionalinputarguments(EIN) CLOSEPAREN.
{
	check_input_parameters(S, EIN);
	if (S->outputparameters != 1)
		fatal("subroutines called as functions must return exactly one value");

	Symbol* param = get_output_parameter(S, 0);
	E = mid_call(param->u.var.type->u.type.width, EIN, S);
	E->type = param->u.var.type;
	emitter_reference_subroutine(current_sub, S);
}

%include
{
	static Node* subcall(Subroutine* sub, Node* inputs, Node* outputs)
	{
		check_input_parameters(sub, inputs);
		check_output_parameters(sub, outputs);
		emitter_reference_subroutine(current_sub, sub);

		if (sub->outputparameters == 0)
			return mid_calls(mid_call0(inputs, sub));

		/* Find the last output parameter. */

		Node* node = outputs;
		while (node->left->op != MIDCODE_END)
			node = node->left;

		/* Splice in the call instruction. */

		discard(node->left);
		node->left = mid_call0(inputs, sub);
		return mid_calls(outputs);
	}
}

simplesubroutinecallstatement ::= subcall_begin(S) optionalinputarguments(EIN) CLOSEPAREN.
{ generate(subcall(S, EIN, mid_end())); }

complexsubroutinecallstatement ::= OPENPAREN optionaloutputarguments(EOUT) CLOSEPAREN
	ASSIGN subcall_begin(S) optionalinputarguments(EIN) CLOSEPAREN.
{ generate(subcall(S, EIN, EOUT)); }

%type optionalinputarguments {struct midnode*}
optionalinputarguments(R) ::= .
{ R = mid_end(); }

optionalinputarguments(R) ::= inputarguments(E1).
{ R = E1; }

%type inputarguments {struct midnode*}
inputarguments(R) ::= inputargument(E).
{ R = mid_pair(mid_end(), E); }

/* First item on the chain is the *last* input argument (so that depth-first
 * evaluation gets them in the right order). */
inputarguments(R) ::= inputarguments(ES) COMMA inputargument(E).
{ R = mid_pair(ES, E); }

%type inputargument {struct midnode*}
inputargument(R) ::= expression(E).
{ R = E; }

%type optionaloutputarguments {struct midnode*}
optionaloutputarguments(E) ::= .
{ E = mid_end(); }

optionaloutputarguments(E) ::= outputarguments(E1).
{ E = E1; }

%type outputarguments {struct midnode*}
outputarguments(E) ::= lvalue(E).
{ E = mid_popparam(E->type->u.type.element->u.type.width, mid_end(), E); }

/* First item on the chain is the *first* output argument. */
outputarguments(E) ::= lvalue(E) COMMA outputarguments(ES).
{ E = mid_popparam(E->type->u.type.element->u.type.width, ES, E); }

/* --- Subroutine definitions -------------------------------------------- */

%include
{
	static Subroutine* start_subroutine(Symbol* sym)
	{
		struct subroutine* sub = calloc(1, sizeof(struct subroutine));
		if (sym)
			sub->name = sym->name;
		else
			sub->name = "anonymous";
		sub->namespace.parent = &current_sub->namespace;
		sub->id = id++;
		arch_init_subroutine(sub);
		break_label = 0;

		if (sym)
		{
			sym->kind = SUB;
			sym->u.sub = sub;
		}

		/* Make sure that this subroutine refers to its lexical parent. */

		emitter_declare_subroutine(sub);
		emitter_reference_subroutine(sub, current_sub);

		sub->parent = current_sub;
		current_sub = sub;
	}

	static void end_subroutine(void)
	{
		break_label = current_sub->old_break_label;
		current_sub = current_sub->parent;
	}
}

statement ::= EXTERN startsubroutine subparameters
	ASSIGN STRING(nametoken) SEMICOLON.
{
	current_sub->externname = strdup(nametoken->string);
	end_subroutine();
}

startsubroutine ::= SUB newid(sym).
{
	start_subroutine(sym);
}

statement ::= startrealsubroutine statements END SUB.
{
	generate(mid_endsub(current_sub));
	end_subroutine();
}

startrealsubroutine ::= startsubroutine subparameters.
{
	generate(mid_startsub(current_sub));
}

%include
{
	static int count_parameters(Symbol* s)
	{
		int count = 0;
		while (s)
		{
			count++;
			s = s->u.var.next_parameter;
		}
		return count;
	}
}

subparameters ::= parameterlist(INS).
{
	current_sub->first_input_parameter = INS;
	current_sub->inputparameters = count_parameters(INS);
	current_sub->outputparameters = 0;
}

subparameters ::= parameterlist(INS) COLON parameterlist(OUTS).
{
	current_sub->first_input_parameter = INS;
	current_sub->inputparameters = count_parameters(INS);
	current_sub->first_output_parameter = OUTS;
	current_sub->outputparameters = count_parameters(OUTS);
}

subparameters ::= parameterlist(INS) COLON OPENPAREN typeref(T) CLOSEPAREN.
{
	current_sub->first_input_parameter = INS;
	current_sub->inputparameters = count_parameters(INS);
	current_sub->outputparameters = 1;
    struct symbol* id = add_new_symbol(NULL, "__result");
	id->kind = VAR;
	init_var(id, T);
	current_sub->first_output_parameter = id;
}

%type parameterlist {Symbol*}
parameterlist(R) ::= OPENPAREN CLOSEPAREN.
{ R = NULL; }

parameterlist(R) ::= OPENPAREN parameters(R1) CLOSEPAREN.
{ R = R1; }

%type parameters {Symbol*}
parameters(R) ::= parameter(P).
{ R = P; }

parameters(R) ::= parameter(P) COMMA parameters(R1).
{
	P->u.var.next_parameter = R1;
	R = P;
}

%type parameter {Symbol*}
parameter(R) ::= newid(S) COLON typeref(type).
{
	S->kind = VAR;
	init_var(S, type);
	R = S;
}

/* --- Case..When..End Case ---------------------------------------------- */

%include
{
	struct casestate
	{
		Node* node;
		int entry_label;
		int old_exit_label;
	};
}

statement ::= begincasestatement(C) whens(W) END CASE SEMICOLON.
{
	generate(mid_label(C.entry_label));
	discard(C.node->right);
	C.node->right = W;
	generate(C.node);
	generate(mid_label(case_exit_label));
	case_exit_label = C.old_exit_label;
}

%type begincasestatement {struct casestate}
begincasestatement(R) ::= CASE expression(E) IS.
{
	if (!is_num(E->type))
		fatal("case only works on numbers");
	R.node = mid_case(E->type->u.type.width, E, mid_end());
	R.old_exit_label = case_exit_label;
	R.entry_label = current_label++;
	case_exit_label = current_label++;
	generate(mid_jump(R.entry_label));
}

%type whens {Node*}
whens(R) ::= .
{ R = mid_end(); }

whens(R) ::= when(W1) whens(W2).
{
	discard(W1->left);
	W1->left = W2;
	R = W1;
}

%type when {Node*}
when(R) ::= beginwhen(W) cvalue(C) COLON casestatements(L).
{
	W->u.when.value = C;
	W->u.when.label = L;
	R = W;
}

when(R) ::= beginwhen(W) ELSE COLON casestatements(L).
{
	W->u.when.isdefault = true;
	W->u.when.label = L;
	R = W;
}

%type beginwhen {Node*}
beginwhen(R) ::= WHEN.
{
	R = mid_when(mid_end(), false, 0, 0);
}

%type startcasestatements {int}
startcasestatements(R) ::= .
{
	R = current_label++;
	generate(mid_label(R));
}

%type casestatements {int}
casestatements(R) ::= startcasestatements(L) statements.
{
	generate(mid_jump(case_exit_label));
	R = L;
}

/* --- Assignments ------------------------------------------------------- */

statement ::= lvalue(E1) ASSIGN expression(E2) SEMICOLON.
{
	if (!is_ptr(E1->type))
		fatal("you can only assign to lvalues");
	check_expression_type(&E2->type, E1->type->u.type.element);
	generate(mid_store(E1->type->u.type.element->u.type.width, E2, E1));
}

/* --- Constant expressions ---------------------------------------------- */

%type cvalue {int32_t}
cvalue(value) ::= NUMBER(token).                     { value = token->number; }
cvalue(value) ::= OPENPAREN cvalue(v) CLOSEPAREN.    { value = v; }
cvalue(value) ::= MINUS cvalue(v).                   { value = -v; }
cvalue(value) ::= TILDE cvalue(v).                   { value = ~v; }
cvalue(value) ::= cvalue(lhs) PLUS cvalue(rhs).      { value = lhs + rhs; }
cvalue(value) ::= cvalue(lhs) MINUS cvalue(rhs).     { value = lhs - rhs; }
cvalue(value) ::= cvalue(lhs) STAR cvalue(rhs).      { value = lhs * rhs; }
cvalue(value) ::= cvalue(lhs) PERCENT cvalue(rhs).   { value = lhs % rhs; }
cvalue(value) ::= cvalue(lhs) AMPERSAND cvalue(rhs). { value = lhs & rhs; }
cvalue(value) ::= cvalue(lhs) CARET cvalue(rhs).     { value = lhs ^ rhs; }
cvalue(value) ::= cvalue(lhs) PIPE cvalue(rhs).      { value = lhs | rhs; }

cvalue(value) ::= oldid(sym).
{
	if (sym->kind != CONST)
		fatal("only constants can be used here");
	value = sym->u.constant;
}

cvalue(value) ::= BYTESOF oldid(S).
{
	if (S->kind == VAR)
		S = S->u.var.type;
	if (S->kind == TYPE)
	{
		check_non_partial_type(S);
		value = S->u.type.width;
	}
	else
		fatal("can't use @bytesof in this context");
}

cvalue(value) ::= SIZEOF oldid(S).
{
	if (S->kind == VAR)
		S = S->u.var.type;
	if ((S->kind == TYPE) && is_array(S))
	{
		check_non_partial_type(S);
		value = S->u.type.width / S->u.type.stride;
	}
	else
		fatal("can't use @bytesof in this context");
}

statement ::= CONST newid(S) ASSIGN cvalue(V) SEMICOLON.
{
	S->kind = CONST;
	S->u.constant = V;
}

/* --- Expressions ------------------------------------------------------- */

expression(E) ::= NUMBER(N).
{
	E = mid_constant(N->number);
	E->type = NULL;
}

expression(E) ::= STRING(S).
{
	unescape(S->string);
	E = mid_string(strdup(S->string));
	E->type = make_pointer_type(uint8_type);
}

expression(E) ::= BYTESOF oldid(S).
{
	if (S->kind == VAR)
		S = S->u.var.type;
	if (S->kind == TYPE)
	{
		check_non_partial_type(S);
		E = mid_constant(S->u.type.width);
		E->type = NULL;
	}
	else
		fatal("can't use @bytesof in this context");
}

expression(E) ::= SIZEOF oldid(S).
{
	if (S->kind == VAR)
		S = S->u.var.type;
	if ((S->kind == TYPE) && is_array(S))
	{
		check_non_partial_type(S);
		E = mid_constant(S->u.type.width / S->u.type.stride);
		E->type = NULL;
	}
	else
		fatal("can't use @bytesof in this context");
}

expression(E) ::= lvalue(E1).
{
	if (E1->type)
	{
		if (!is_scalar(E1->type->u.type.element))
			fatal("non-scalars cannot be used in this context");
		E = mid_load(E1->type->u.type.element->u.type.width, E1);
		E->type = E1->type->u.type.element;
		assert(E->type);
	}
	else
		E = E1;
}

expression(T) ::= AMPERSAND lvalue(T1).
{
	if (!T1)
		fatal("you cannot take the address of an untyped constant");
	T = T1;
}

expression(E) ::= MINUS expression(E1).                    { E = mid_c_neg(E1->type ? E1->type->u.type.width : 0, E1); E->type = E1->type; }
expression(E) ::= TILDE expression(E1).                    { E = mid_c_not(E1->type ? E1->type->u.type.width : 0, E1); E->type = E1->type; }
expression(E) ::= OPENPAREN expression(E1) CLOSEPAREN.     { E = E1; }
expression(E) ::= expression(E1) PLUS expression(E2).      { E = expr_add(E1, E2); }
expression(E) ::= expression(E1) MINUS expression(E2).     { E = expr_sub(E1, E2); }
expression(E) ::= expression(E1) STAR expression(E2).      { E = expr_simple(E1, E2, mid_c_mul); }
expression(E) ::= expression(E1) SLASH expression(E2).     { E = expr_signed(E1, E2, mid_c_divu, mid_c_divs); }
expression(E) ::= expression(E1) PERCENT expression(E2).   { E = expr_signed(E1, E2, mid_c_remu, mid_c_rems); }
expression(E) ::= expression(E1) CARET expression(E2).     { E = expr_simple(E1, E2, mid_eor); }
expression(E) ::= expression(E1) AMPERSAND expression(E2). { E = expr_simple(E1, E2, mid_and); }
expression(E) ::= expression(E1) PIPE expression(E2).      { E = expr_simple(E1, E2, mid_or); }
expression(E) ::= expression(E1) LSHIFT expression(E2).    { E = expr_shift(E1, E2, mid_lshift, mid_lshift); }
expression(E) ::= expression(E1) RSHIFT expression(E2).    { E = expr_shift(E1, E2, mid_rshiftu, mid_rshifts); }

expression(E) ::= expression(E1) AS typeref(T).
{
	check_non_partial_type(T);
	if (E1->type && (E1->type->u.type.width != T->u.type.width))
	{
		if (is_ptr(E1->type) || is_ptr(T))
		{
			fatal("cast between pointer and non-pointer of a different size (%s (%d) and %s (%d))",
				E1->type->name, E1->type->u.type.width, T->name, T->u.type.width);
		}

		E = mid_c_cast(T->u.type.width, E1);
	}
	else
		E = E1;
	E->type = T;
}

lvalue(E) ::= oldid(S).
{
	if (S->kind == CONST)
	{
		E = mid_constant(S->u.constant);
		E->type = NULL;
	}
	else if (S->kind == VAR)
	{
		E = mid_address(S, 0);
		E->type = make_pointer_type(S->u.var.type);
	}
	else
		fatal("'%s' is not a value", S->name);
}

lvalue(E) ::= OPENSQ expression(E1) CLOSESQ.
{
	if (!is_ptr(E1->type))
		fatal("cannot dereference non-pointers");
	E = E1;
}

lvalue(E) ::= lvalue(E1) OPENSQ expression(E2) CLOSESQ.
{
	struct symbol* arraytype;
	if (is_array_ptr(E1->type))
	{
		/* Direct reference to arraytype. */
		arraytype = E1->type->u.type.element;
	}
	else if (is_ptr(E1->type) && is_array_ptr(E1->type->u.type.element))
	{
		/* Pointer to arraytype. */
		arraytype = E1->type->u.type.element->u.type.element;
		E1 = mid_load(intptr_type->u.type.width, E1);
	}
	else
		fatal("you can only index an array, not a %s", E1->type->u.type.element->name);
	if (!is_num(E2->type))
			fatal("array indices must be numbers");
	
	E = mid_c_add(intptr_type->u.type.width,
		E1,
		mid_c_mul(intptr_type->u.type.width,
			mid_c_cast(intptr_type->u.type.width, E2),
			mid_constant(arraytype->u.type.stride)));
	E->type = make_pointer_type(arraytype->u.type.element);
}

lvalue(E) ::= lvalue(E1) DOT ID(X).
{
	check_non_partial_type(E1->type);

    /* Remember that T is a *pointer* to the record (or a pointer to a
	 * pointer). */
	struct symbol* record;
	if (is_record_ptr(E1->type))
	{
		/* Direct reference to record. */
		record = E1->type->u.type.element;
	}
	else if (is_ptr(E1->type) && is_record_ptr(E1->type->u.type.element))
	{
		/* Pointer to record. */
		record = E1->type->u.type.element->u.type.element;
		E1 = mid_load(intptr_type->u.type.width, E1);
	}
	else
		fatal("you can only access members of records");

	struct symbol* member = lookup_symbol(&record->u.type.namespace, X->string);
	if (!member)
		fatal("%s does not contain member '%s'", record->name, X->string);

	E = mid_c_add(intptr_type->u.type.width, E1, mid_constant(member->u.var.offset));
	E->type = make_pointer_type(member->u.var.type);
}

%type newid {Symbol*}
newid(S) ::= ID(token).
{
    S = add_new_symbol(NULL, token->string);
}

%type oldid {Symbol*}
oldid(S) ::= ID(token).
{
    S = lookup_symbol(NULL, token->string);
	if (!S)
		fatal("symbol '%s' not found", token->string);
}

%type eitherid {Symbol*}
eitherid(S) ::= ID(token).
{
	S = lookup_symbol(NULL, token->string);
	if (!S)
		S = add_new_symbol(NULL, token->string);
}

/* --- Conditional expressions ------------------------------------------- */

%include
{
	static int condtrue;
	static int condfalse;
}

startconditional ::= .
{
	condtrue = current_label++;
	condfalse = current_label++;
}

conditional ::= OPENPAREN conditional CLOSEPAREN.

conditional ::= NOT conditional.
{
	int t = condtrue;
	condtrue = condfalse;
	condfalse = t;
}

conditional ::= conditional AND condand conditional.
conditional ::= conditional OR condor conditional.

condand ::= .
{
	generate(mid_label(condtrue));
	condtrue = current_label++;
}

condor ::= .
{
	generate(mid_label(condfalse));
	condfalse = current_label++;
}

conditional ::= expression(T1) EQOP expression(T2).
{
	cond_simple(condtrue, condfalse, T1, T2, mid_c_bequ, mid_c_beqs);
}

conditional ::= expression(T1) NEOP expression(T2).
{
	cond_simple(condfalse, condtrue, T1, T2, mid_c_bequ, mid_c_beqs);
}

conditional ::= expression(T1) LTOP expression(T2).
{
	cond_simple(condtrue, condfalse, T1, T2, mid_c_bltu, mid_c_blts);
}

conditional ::= expression(T1) GEOP expression(T2).
{
	cond_simple(condfalse, condtrue, T1, T2, mid_c_bltu, mid_c_blts);
}

conditional ::= expression(T1) GTOP expression(T2).
{
	cond_simple(condtrue, condfalse, T2, T1, mid_c_bltu, mid_c_blts);
}

conditional ::= expression(T1) LEOP expression(T2).
{
	cond_simple(condfalse, condtrue, T2, T1, mid_c_bltu, mid_c_blts);
}

/* --- Types ------------------------------------------------------------- */

typeref(sym) ::= INT OPENPAREN cvalue(min) COMMA cvalue(max) CLOSEPAREN.
{
	if (max <= min)
		fatal("invalid integer type range");
	sym = arch_guess_int_type(min, max);
}

typeref(sym) ::= eitherid(id).
{
    sym = id;
	if (!sym->kind)
	{
		/* Create a partial type ref. */
		sym->kind = TYPE;
		sym->u.type.kind = TYPE_PARTIAL;
	}
    if (sym->kind != TYPE)
        fatal("expected '%s' to be a type", sym->name);
}

typeref(sym) ::= typeref(basetype) OPENSQ cvalue(value) CLOSESQ.
{ sym = make_array_type(basetype, value); }

typeref(sym) ::= typeref(basetype) OPENSQ CLOSESQ.
{ sym = make_array_type(basetype, 0); }

typeref(sym) ::= OPENSQ typeref(basetype) CLOSESQ.
{
	sym = make_pointer_type(basetype);
}

typeref(sym) ::= INDEXOF oldid(S).
{
	if (S->kind == VAR)
		S = S->u.var.type;
	if ((S->kind == TYPE) && is_array(S))
		sym = S->u.type.indextype;
	else
		fatal("you can only use @indexof on arrays");
}

statement ::= TYPEDEF ID(X) ASSIGN typeref(T) SEMICOLON.
{
	add_alias(NULL, X->string, T);
}

/* --- Records ----------------------------------------------------------- */

statement ::= recordstatement.

%destructor recordstatement { current_type = NULL; }
recordstatement ::= RECORD recordstart recordinherits recordmembers END RECORD.

recordstart ::= eitherid(S).
{
	current_type = S;
	if ((current_type->kind != 0) && (current_type->kind != TYPE))
		symbol_redeclaration(current_type);
	if (current_type->u.type.kind != TYPE_PARTIAL)
		symbol_redeclaration(current_type);
	current_type->kind = TYPE;
	current_type->u.type.kind = TYPE_RECORD;
}

recordinherits ::= .

recordinherits ::= COLON typeref(T).
{
	check_non_partial_type(T);
	if (!is_record(T))
		fatal("%s is not a record type", T->name);

	current_type->u.type.alignment = T->u.type.alignment;
	current_type->u.type.width = T->u.type.width;
	current_type->u.type.namespace.parent = &T->u.type.namespace;
}

recordmembers ::= .
recordmembers ::= recordmember recordmembers.

recordmember ::= memberid(S) COLON typeref(T) SEMICOLON.
{
	S->kind = VAR;
	S->u.var.type = T;
	if (T->u.type.alignment > current_type->u.type.alignment)
		current_type->u.type.alignment = T->u.type.alignment;
	arch_init_member(current_type, S, -1);
}

recordmember ::= memberid(S) AT OPENPAREN cvalue(C) CLOSEPAREN COLON typeref(T) SEMICOLON.
{
	S->kind = VAR;
	S->u.var.type = T;
	if (T->u.type.alignment > current_type->u.type.alignment)
		current_type->u.type.alignment = T->u.type.alignment;
	arch_init_member(current_type, S, C);
}

%type memberid {struct symbol*}
memberid(S) ::= ID(X).
{
	S = add_new_symbol(&current_type->u.type.namespace, X->string);
	current_type->u.type.members++;
}

/* --- Inline assembly --------------------------------------------------- */

statement ::= asmstart asms SEMICOLON.
{
	generate(mid_asmend());
}

asmstart ::= ASM.
{
	generate(mid_asmstart());
}

asms ::= asm.
asms ::= asm COMMA asms.

asm ::= STRING(token).
{
	unescape(token->string);
	generate(mid_asmtext(strdup(token->string)));
}

asm ::= NUMBER(token).
{
	generate(mid_asmvalue(token->number));
}

asm ::= oldid(ID).
{
	switch (ID->kind)
	{
		case VAR:
		case SUB:
			generate(mid_asmsymbol(ID));
			break;

		case CONST:
			generate(mid_asmvalue(ID->u.constant));
			break;

		default:
			fatal("you can only emit references to variables, subroutines, or constants");
	}
}
