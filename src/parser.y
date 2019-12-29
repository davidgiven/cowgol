%include
{
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <string.h>
    #include "globals.h"
    #include "midcode.h"
    #include "parser.h"
	#include "compiler.h"

    int current_label = 1;

    static int break_label;
	static struct condlabels* last_condition;

	struct condlabels
	{
		int truelabel;
		int falselabel;
	};

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

	struct argumentsspec
	{
		struct subroutine* sub;
		int ins;
		struct symbol* inputparam;
		struct argumentsspec* next;
	};
	static struct argumentsspec* current_call;

	#undef NDEBUG
}

%token ASM ASSIGN BREAK CLOSEPAREN CLOSESQ.
%token COLON CONST DOT ELSE END EXTERN.
%token IF LOOP MINUS NOT OPENPAREN OPENSQ.
%token PERCENT PLUS RECORD RETURN SEMICOLON SLASH STAR.
%token SUB THEN TILDE VAR WHILE TYPE.

%left COMMA.
%left AND.
%left OR.
%left AS.
%left PIPE.
%left CARET.
%left AMPERSAND.
%nonassoc LTOP LEOP GTOP GEOP EQOP NEOP.
%left LSHIFT RSHIFT.
%left PLUS MINUS.
%left STAR SLASH PERCENT.
%right NOT.

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
{ generate(mid_return()); }

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

    generate(mid_store(E->type->u.type.width, mid_address(S), E));
}

statement ::= VAR newid(S) ASSIGN expression(E) SEMICOLON.
{
	if (!E->type)
		fatal("types cannot be inferred for numeric constants");
	S->kind = VAR;
	init_var(S, E->type);
	check_expression_type(&E->type, E->type);

	generate(mid_store(E->type->u.type.width, mid_address(S), E));
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

subcall_begin ::= oldid(S) OPENPAREN.
{
	if (S->kind != SUB)
		fatal("expected '%s' to be a subroutine", S->name);

	struct argumentsspec* n = calloc(1, sizeof(struct argumentsspec));
	n->next = current_call;
	current_call = n;
	current_call->sub = S->u.sub;
	current_call->inputparam = current_call->sub->namespace.firstsymbol;
}

%type subroutinecallexpr {struct midnode*}
%destructor subroutinecallexpr { current_call = current_call->next; }
subroutinecallexpr(E) ::= subcall_begin optionalinputarguments(E1) CLOSEPAREN.
{
	if (current_call->ins != current_call->sub->inputparameters)
		fatal("expected %d input parameters but only got %d",
			current_call->sub->inputparameters, current_call->ins);
	if (current_call->sub->outputparameters != 1)
		fatal("subroutines called as functions must return exactly one value");

	struct symbol* param = current_call->sub->namespace.firstsymbol;
	for (int i=0; i<current_call->sub->inputparameters; i++)
		param = param->next;

	E = mid_call(param->u.var.type->u.type.width, E1, current_call->sub);
	E->type = param->u.var.type;
}

%include
{
	static struct midnode* subcall(struct midnode* inputs, struct midnode* outputs)
	{
		if (current_call->ins != current_call->sub->inputparameters)
			fatal("expected %d input parameters but got %d",
				current_call->sub->inputparameters, current_call->ins);

		/* Make the call. */
		generate(mid_call0(inputs, current_call->sub));
		
		/* Write back any output parameters. Remember that the output chain
		 * has not been type checked (or even counted), so we have to do that
		 * here. */

		struct symbol* param = current_call->sub->namespace.firstsymbol;
		for (int i=0; i<current_call->sub->inputparameters; i++)
			param = param->next;

		int outs = 0;
		if (outputs->op != MIDCODE_END)
		{
			struct midnode* n = outputs;
			while (n->op != MIDCODE_END)
			{
				if (outs < current_call->sub->outputparameters)
				{
					check_expression_type(&n->type, param->u.var.type);
					param = param->next;

					struct midnode* lvalue = n->left;
					n->left = NULL;
					generate(mid_getparam(lvalue->type->u.type.element->u.type.width,
						lvalue));
				}
				outs++;
				n = n->right;
			}
		}
		discard(outputs);

		if (outs != current_call->sub->outputparameters)
			fatal("expected %d output parameters but got %d",
				current_call->sub->outputparameters, outs);
	}
}

%destructor simplesubroutinecallstatement { current_call = current_call->next; }
simplesubroutinecallstatement ::= subcall_begin optionalinputarguments(E1) CLOSEPAREN.
{ subcall(E1, mid_end()); }

%destructor complexsubroutinecallstatement { current_call = current_call->next; }
complexsubroutinecallstatement ::= OPENPAREN optionaloutputarguments(E1) CLOSEPAREN
	ASSIGN subcall_begin optionalinputarguments(E2) CLOSEPAREN.
{ subcall(E2, E1); }

%type optionalinputarguments {struct midnode*}
optionalinputarguments(E) ::= .
{ E = mid_end(); }
optionalinputarguments(E) ::= inputarguments(E1).
{ E = E1; }

%type inputarguments {struct midnode*}
inputarguments(E) ::= inputargument(E1).
{ E = mid_setparam(E1->type->u.type.width, E1, mid_end()); }

inputarguments(E) ::= inputargument(E1) COMMA inputarguments(E2).
{ E = mid_setparam(E1->type->u.type.width, E1, E2); }

%type inputargument {struct midnode*}
inputargument(E) ::= expression(E1).
{
	if (current_call->ins < current_call->sub->inputparameters)
	{
		struct symbol* param = current_call->inputparam;
		current_call->inputparam = param->next;

		check_expression_type(&E1->type, param->u.var.type);
	}
	current_call->ins++;
	E = E1;
}

/* The output argument list is a chain of PAIRs, non type checked (because
 * we haven't read the subroutine name yet and so don't know which subroutine
 * is being called). */

%type optionaloutputarguments {struct midnode*}
optionaloutputarguments(E) ::= .
{ E = mid_end(); }
optionaloutputarguments(E) ::= outputarguments(E1).
{ E = E1; }

%type outputarguments {struct midnode*}
outputarguments(E) ::= lvalue(E1).
{ E = mid_pair(E1, mid_end()); }

outputarguments(E) ::= outputarguments(E1) COMMA lvalue(E2).
{ E = mid_pair(E2, E1); }

/* --- Subroutine definitions -------------------------------------------- */

statement ::= EXTERN startsubroutine(oldsub) subparameters
	ASSIGN STRING(nametoken) SEMICOLON.
{
	current_sub->externname = strdup(nametoken->string);

	break_label = current_sub->old_break_label;
	current_sub = oldsub;
}

/* Remember the value of this is the *old* subroutine. */
%type startsubroutine {struct subroutine*}
startsubroutine(oldsub) ::= SUB newid(sym).
{
	oldsub = current_sub;

	struct subroutine* sub = calloc(1, sizeof(struct subroutine));
	sub->name = sym->name;
	sub->namespace.parent = &current_sub->namespace;
	arch_init_subroutine(sub);
	break_label = 0;

	sym->kind = SUB;
	sym->u.sub = sub;

	current_sub = sub;
}

statement ::= startrealsubroutine(oldsub) statements END SUB.
{
	generate(mid_endsub(current_sub));
	break_label = current_sub->old_break_label;
	current_sub = oldsub;
}

/* Remember the value of this is the *old* subroutine. */
%type startrealsubroutine {struct subroutine*}
startrealsubroutine(oldsubout) ::= startsubroutine(oldsubin) subparameters.
{
	oldsubout = oldsubin;
	generate(mid_startsub(current_sub));
}

subparameters ::= parameterlist(INS).
{
	printf("1 ins=%d\n", INS);
	current_sub->inputparameters = INS;
	current_sub->outputparameters = 0;
}

subparameters ::= parameterlist(INS) COLON parameterlist(OUTS).
{
	printf("2 ins=%d outs=%d\n", INS, OUTS);
	current_sub->inputparameters = INS;
	current_sub->outputparameters = OUTS;
}

subparameters ::= parameterlist(INS) COLON OPENPAREN typeref(T) CLOSEPAREN.
{
	printf("3 ins=%d\n", INS);
	current_sub->inputparameters = INS;
	current_sub->outputparameters = 1;
    struct symbol* id = add_new_symbol(NULL, "__result");
	id->kind = VAR;
	init_var(id, T);
}

%type parameterlist {int}
parameterlist(R) ::= OPENPAREN CLOSEPAREN.
{ R = 0; }

parameterlist(R) ::= OPENPAREN parameters(R1) CLOSEPAREN.
{ R = R1; }

%type parameters {int}
parameters(R) ::= parameter.
{ R = 1; }

parameters(R) ::= parameter COMMA parameters(R1).
{ R = R1 + 1; }

parameter ::= newid(id) COLON typeref(type).
{
	id->kind = VAR;
	init_var(id, type);
}

/* --- Assignments ------------------------------------------------------- */

statement ::= lvalue(E1) ASSIGN expression(E2) SEMICOLON.
{
	if (!is_ptr(E1->type))
		fatal("you can only assign to lvalues");
	check_expression_type(&E2->type, E1->type->u.type.element);
	generate(mid_store(E1->type->u.type.element->u.type.width, E1, E2));
}

/* --- Constant expressions ---------------------------------------------- */

%type cvalue {int32_t}
cvalue(value) ::= NUMBER(token).                   { value = token->number; }
cvalue(value) ::= OPENPAREN cvalue(v) CLOSEPAREN.  { value = v; }
cvalue(value) ::= MINUS cvalue(v).                 { value = -v; }
cvalue(value) ::= cvalue(lhs) PLUS cvalue(rhs).    { value = lhs + rhs; }
cvalue(value) ::= cvalue(lhs) MINUS cvalue(rhs).   { value = lhs - rhs; }
cvalue(value) ::= cvalue(lhs) STAR cvalue(rhs).    { value = lhs * rhs; }
cvalue(value) ::= cvalue(lhs) PERCENT cvalue(rhs). { value = lhs % rhs; }

cvalue(value) ::= oldid(sym).
{
	if (sym->kind != CONST)
		fatal("only constants can be used here");
	value = sym->u.constant;
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

expression(E) ::= lvalue(E1).
{
	if (E1->type)
	{
		E = mid_load(E1->type->u.type.element->u.type.width, E1);
		E->type = E1->type->u.type.element;
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

expression(E) ::= MINUS expression(E1).                    { E = mid_neg(E1->type ? E1->type->u.type.width : 0, E1); }
expression(E) ::= OPENPAREN expression(E1) CLOSEPAREN.     { E = E1; }
expression(E) ::= expression(E1) PLUS expression(E2).      { E = expr_add(E1, E2); }
expression(E) ::= expression(E1) MINUS expression(E2).     { E = expr_sub(E1, E2); }
expression(E) ::= expression(E1) STAR expression(E2).      { E = expr_simple(E1, E2, mid_mul); }
expression(E) ::= expression(E1) SLASH expression(E2).     { E = expr_signed(E1, E2, mid_divu, mid_divs); }
expression(E) ::= expression(E1) PERCENT expression(E2).   { E = expr_signed(E1, E2, mid_remu, mid_rems); }
expression(E) ::= expression(E1) CARET expression(E2).     { E = expr_simple(E1, E2, mid_eor); }
expression(E) ::= expression(E1) AMPERSAND expression(E2). { E = expr_simple(E1, E2, mid_and); }
expression(E) ::= expression(E1) PIPE expression(E2).      { E = expr_simple(E1, E2, mid_or); }
expression(E) ::= expression(E1) LSHIFT expression(E2).    { E = expr_shift(E1, E2, mid_lshift, mid_lshift); }
expression(E) ::= expression(E1) RSHIFT expression(E2).    { E = expr_shift(E1, E2, mid_rshiftu, mid_rshifts); }

expression(E) ::= expression(E1) AS typeref(T).
{
	if (E1->type && (E1->type->u.type.width != T->u.type.width))
	{
		if (is_ptr(E1->type) || is_ptr(T))
		{
			fatal("cast between pointer and non-pointer of a different size (%s and %s)",
				E1->type->name, T->name);
		}

		switch (E1->type->u.type.width)
		{
			case 1: E = mid_cast1(T->u.type.width, E1); break;
			case 2: E = mid_cast2(T->u.type.width, E1); break;
			case 4: E = mid_cast4(T->u.type.width, E1); break;
			case 8: E = mid_cast8(T->u.type.width, E1); break;
			default: assert(false);
		}
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
	else
	{
		E = mid_address(S);
		E->type = make_pointer_type(S->u.var.type);
	}
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
	
	check_expression_type(&E2->type, intptr_type);
	E = mid_add(intptr_type->u.type.width,
		E1,
		mid_mul(intptr_type->u.type.width,
			E2, mid_constant(arraytype->u.type.element->u.type.width)));
	E->type = make_pointer_type(arraytype->u.type.element);
}

lvalue(E) ::= lvalue(E1) DOT ID(X).
{
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

	E = mid_add(intptr_type->u.type.width, E1, mid_constant(member->u.var.offset));
	E->type = make_pointer_type(member->u.var.type);
}

%type newid {struct symbol*}
newid(S) ::= ID(token).
{
    S = add_new_symbol(NULL, token->string);
}

%type oldid {struct symbol*}
oldid(S) ::= ID(token).
{
    S = lookup_symbol(NULL, token->string);
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
	cond_simple(condtrue, condfalse, T1, T2, mid_bequ, mid_beqs);
}

conditional ::= expression(T1) NEOP expression(T2).
{
	cond_simple(condfalse, condtrue, T1, T2, mid_bequ, mid_beqs);
}

conditional ::= expression(T1) LTOP expression(T2).
{
	cond_simple(condtrue, condfalse, T1, T2, mid_bltu, mid_blts);
}

conditional ::= expression(T1) GEOP expression(T2).
{
	cond_simple(condfalse, condtrue, T1, T2, mid_bltu, mid_blts);
}

conditional ::= expression(T1) GTOP expression(T2).
{
	cond_simple(condtrue, condfalse, T2, T1, mid_bltu, mid_blts);
}

conditional ::= expression(T1) LEOP expression(T2).
{
	cond_simple(condfalse, condtrue, T2, T1, mid_bltu, mid_blts);
}

/* --- Types ------------------------------------------------------------- */

typeref(sym) ::= oldid(id).
{
    sym = id;
    if (sym->kind != TYPE)
        fatal("expected '%s' to be a type", sym->name);
}

typeref(sym) ::= typeref(basetype) OPENSQ cvalue(value) CLOSESQ.
{
	sym = make_array_type(basetype, value);
}

typeref(sym) ::= OPENSQ typeref(basetype) CLOSESQ.
{
	sym = make_pointer_type(basetype);
}

/* --- Records ----------------------------------------------------------- */

statement ::= recordstatement.

%destructor recordstatement { current_type = NULL; }
recordstatement ::= RECORD recordstart recordmembers END RECORD.

recordstart ::= newid(S).
{
	current_type = S;
	current_type->kind = TYPE;
	current_type->u.type.kind = TYPE_RECORD;
}

recordmembers ::= .
recordmembers ::= recordmember recordmembers.

recordmember ::= memberid(S) COLON typeref(T) SEMICOLON.
{
	S->kind = VAR;
	init_member(S, T);
}

%type memberid {struct symbol*}
memberid(S) ::= ID(X).
{
	S = add_new_symbol(&current_type->u.type.namespace, X->string);
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

asm ::= oldid(ID).
{
	if (ID->kind != VAR)
		fatal("you can only emit references to variables");
	generate(mid_asmsymbol(ID));
}
