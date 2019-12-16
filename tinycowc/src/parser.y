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
		int number;
		struct symbol* param;
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
%type expression {struct symbol*}
%type lvalue {struct symbol*}

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

statement ::= RETURN SEMICOLON. { emit_mid_return(); }

/* --- Variable declaration ---------------------------------------------- */

statement ::= typedvardecl SEMICOLON.

statement ::= pushedtypedvardecl(V) ASSIGN expression(E) SEMICOLON.
{
    init_var(V, V->u.var.type);
    check_expression_type(&E, V->u.var.type);
    emit_mid_store(E->u.type.width);
}

statement ::= pusheduntypedvardecl(V) ASSIGN expression(E) SEMICOLON.
{
	if (!E)
		fatal("types cannot be inferred for numeric constants");
	init_var(V, E);
	check_expression_type(&E, E);
	emit_mid_store(E->u.type.width);
}

%type typedvardecl {struct symbol*}
typedvardecl(V) ::= VAR newid(S) COLON typeref(T).
{
    S->kind = VAR;
    init_var(S, T);
	V = S;
}

%type pushedtypedvardecl {struct symbol*}
pushedtypedvardecl(V) ::= typedvardecl(V1).
{
	V = V1;
	emit_mid_address(V);
}

%type pusheduntypedvardecl {struct symbol*}
pusheduntypedvardecl(T) ::= VAR newid(S).
{
	S->kind = VAR;
	emit_mid_address(S);
	T = S;
}

/* --- If...Then...Else...End if ----------------------------------------- */

statement ::= ifstatement.

%destructor if_begin { current_if = current_if->next; }
ifstatement ::= IF if_begin if_conditional THEN
	if_statements if_optional_else END IF.
{
	emit_mid_label(current_if->exitlabel);
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
	emit_mid_label(current_if->truelabel);
}

if_statements ::= statements.
{
	emit_mid_jump(current_if->exitlabel);
	emit_mid_label(current_if->falselabel);
}

if_optional_else ::= .
if_optional_else ::= ELSE statements.

/* --- Simple loops ------------------------------------------------------ */

statement ::= startloopstatement(labels) statements END LOOP.
{
	emit_mid_jump(labels.looplabel);
	emit_mid_label(labels.exitlabel);
	break_label = labels.old_break_label;
}

%type startloopstatement {struct looplabels}
startloopstatement(labels) ::= LOOP.
{
	labels.looplabel = current_label++;
	labels.exitlabel = current_label++;
	labels.old_break_label = break_label;
	break_label = labels.exitlabel;
	emit_mid_label(labels.looplabel);
}

/* --- While loops ------------------------------------------------------- */

%type whilestatement1 {struct looplabels}
whilestatement1(L) ::= WHILE.
{
	L.looplabel = current_label++;
	L.exitlabel = 0;
	L.old_break_label = break_label;
	break_label = 0;
	emit_mid_label(L.looplabel);
}

%type whilestatement2 {struct looplabels}
whilestatement2(L) ::= whilestatement1(L1) startconditional conditional.
{
	L = L1;
	emit_mid_label(condtrue);
	L.exitlabel = break_label = condfalse;
}

statement ::= whilestatement2(L) LOOP statements END LOOP.
{
	emit_mid_jump(L.looplabel);
	emit_mid_label(L.exitlabel);
	break_label = L.old_break_label;
}

/* --- Simple jumps ------------------------------------------------------ */

statement ::= BREAK SEMICOLON.
{
	if (!break_label)
		fatal("nothing to break to");
	emit_mid_jump(break_label);
}

/* --- Subroutine calls -------------------------------------------------- */

statement ::= subroutinecallstatement.

subcall_begin ::= oldid(S) OPENPAREN.
{
	if (S->kind != SUB)
		fatal("expected '%s' to be a subroutine", S->name);

	struct argumentsspec* n = calloc(1, sizeof(struct argumentsspec));
	n->next = current_call;
	current_call = n;
	current_call->sub = S->u.sub;
	current_call->param = current_call->sub->namespace.firstsymbol;
}

%destructor subroutinecallstatement { current_call = current_call->next; }
subroutinecallstatement ::= subcall_begin optionalarguments CLOSEPAREN.
{
	if (current_call->number != current_call->sub->inputparameters)
		fatal("expected %d parameters but only got %d",
			current_call->sub->inputparameters, current_call->number);

	emit_mid_call(current_call->sub);
}

optionalarguments ::= .
optionalarguments ::= arguments.

arguments ::= argument.
arguments ::= argument COMMA arguments.

argument ::= expression(T).
{
	if (current_call->number == current_call->sub->inputparameters)
		fatal("too many input parameters (expected %d)",
			current_call->sub->inputparameters);

	struct symbol* param = current_call->param;
	current_call->param = param->next;
	current_call->number++;

	check_expression_type(&T, param->u.var.type);
	emit_mid_param(T->u.type.width);
}

/* --- Subroutine definitions -------------------------------------------- */

statement ::= EXTERN startsubroutine(oldsub) parameterlist
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
	emit_mid_endsub(current_sub);
	break_label = current_sub->old_break_label;
	current_sub = oldsub;
}

/* Remember the value of this is the *old* subroutine. */
%type startrealsubroutine {struct subroutine*}
startrealsubroutine(oldsubout) ::= startsubroutine(oldsubin) parameterlist.
{
	oldsubout = oldsubin;
	emit_mid_startsub(current_sub);
}

parameterlist ::= OPENPAREN CLOSEPAREN.
parameterlist ::= OPENPAREN parameters CLOSEPAREN.
parameters ::= parameter.
parameters ::= parameter COMMA parameters.

parameter ::= newid(id) COLON typeref(type).
{
	id->kind = VAR;
	init_var(id, type);
	current_sub->inputparameters++;
}

/* --- Assignments ------------------------------------------------------- */

statement ::= lvalue(S) ASSIGN expression(T) SEMICOLON.
{
	if (!is_ptr(S))
		fatal("you can only assign to lvalues");
	check_expression_type(&T, S->u.type.element);
	emit_mid_store(S->u.type.element->u.type.width);
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

expression(T) ::= NUMBER(N).
{
	emit_mid_constant(N->number);
	T = NULL;
}

expression(T) ::= STRING(S).
{
	unescape(S->string);
	emit_mid_string(strdup(S->string));
	T = make_pointer_type(uint8_type);
}

expression(T) ::= lvalue(T1).
{
	if (T1)
	{
		emit_mid_load(T1->u.type.element->u.type.width);
		T = T1->u.type.element;
	}
	else
		T = NULL;
}

expression(T) ::= AMPERSAND lvalue(T1).
{
	if (!T1)
		fatal("you cannot take the address of an untyped constant");
	T = T1;
}

expression(T) ::= MINUS expression(T1).                    { T = T1; emit_mid_neg(T1 ? T1->u.type.width : 0); }
expression(T) ::= OPENPAREN expression(T1) CLOSEPAREN.     { T = T1; }
expression(T) ::= expression(T1) PLUS expression(T2).      { T = expr_add(T1, T2); }
expression(T) ::= expression(T1) MINUS expression(T2).     { T = expr_sub(T1, T2); }
expression(T) ::= expression(T1) STAR expression(T2).      { T = expr_simple(T1, T2, emit_mid_mul); }
expression(T) ::= expression(T1) SLASH expression(T2).     { T = expr_signed(T1, T2, emit_mid_divu, emit_mid_divs); }
expression(T) ::= expression(T1) PERCENT expression(T2).   { T = expr_signed(T1, T2, emit_mid_remu, emit_mid_rems); }
expression(T) ::= expression(T1) CARET expression(T2).     { T = expr_simple(T1, T2, emit_mid_eor); }
expression(T) ::= expression(T1) AMPERSAND expression(T2). { T = expr_simple(T1, T2, emit_mid_and); }
expression(T) ::= expression(T1) PIPE expression(T2).      { T = expr_simple(T1, T2, emit_mid_or); }
expression(T) ::= expression(T1) LSHIFT expression(T2).    { T = expr_shift(T1, T2, emit_mid_lshift, emit_mid_lshift); }
expression(T) ::= expression(T1) RSHIFT expression(T2).    { T = expr_shift(T1, T2, emit_mid_rshiftu, emit_mid_rshifts); }

lvalue(T) ::= oldid(S).
{
	if (S->kind == CONST)
	{
		emit_mid_constant(S->u.constant);
		T = NULL;
	}
	else
	{
		emit_mid_address(S);
		T = make_pointer_type(S->u.var.type);
	}
}

lvalue(T) ::= OPENSQ expression(T1) CLOSESQ.
{
	if (!is_ptr(T1))
		fatal("cannot dereference non-pointers");
	T = T1;
}

lvalue(T) ::= lvalue(TL) OPENSQ expression(TE) CLOSESQ.
{
	struct symbol* array;
	if (is_array_ptr(TL))
	{
		/* Direct reference to array. */
		array = TL->u.type.element;
	}
	else if (is_ptr(TL) && is_array_ptr(TL->u.type.element))
	{
		/* Pointer to array. */
		array = TL->u.type.element->u.type.element;
		emit_mid_load(intptr_type->u.type.width);
	}
	else
		fatal("you can only index arrays, not a %s", TL->u.type.element->name);
	if (!is_num(TE))
			fatal("array indices must be numbers");
	
	check_expression_type(&TE, intptr_type);
	emit_mid_constant(array->u.type.element->u.type.width);
	emit_mid_mul(intptr_type->u.type.width);
	emit_mid_add(intptr_type->u.type.width);
	T = make_pointer_type(array->u.type.element);
}

lvalue(T) ::= lvalue(LHS) DOT ID(X).
{
    /* Remember that T is a *pointer* to the record (or a pointer to a
	 * pointer). */
	struct symbol* record;
	if (is_record_ptr(LHS))
	{
		/* Direct reference to record. */
		record = LHS->u.type.element;
	}
	else if (is_ptr(LHS) && is_record_ptr(LHS->u.type.element))
	{
		/* Pointer to record. */
		record = LHS->u.type.element->u.type.element;
		emit_mid_load(intptr_type->u.type.width);
	}
	else
		fatal("you can only access members of records");

	struct symbol* member = lookup_symbol(&record->u.type.namespace, X->string);
	if (!member)
		fatal("%s does not contain member '%s'", record->name, X->string);

	emit_mid_constant(member->u.var.offset);
	emit_mid_add(intptr_type->u.type.width);
	T = make_pointer_type(member->u.var.type);
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
	emit_mid_label(condtrue);
	condtrue = current_label++;
}

condor ::= .
{
	emit_mid_label(condfalse);
	condfalse = current_label++;
}

conditional ::= expression(T1) EQOP expression(T2).
{
	cond_simple(condtrue, condfalse, T1, T2, emit_mid_bequ, emit_mid_beqs, emit_mid_beqp);
}

conditional ::= expression(T1) NEOP expression(T2).
{
	cond_simple(condfalse, condtrue, T1, T2, emit_mid_bequ, emit_mid_beqs, emit_mid_beqp);
}

conditional ::= expression(T1) LTOP expression(T2).
{
	cond_simple(condtrue, condfalse, T1, T2, emit_mid_bltu, emit_mid_blts, emit_mid_bltp);
}

conditional ::= expression(T1) GEOP expression(T2).
{
	cond_simple(condfalse, condtrue, T1, T2, emit_mid_bltu, emit_mid_blts, emit_mid_bltp);
}

conditional ::= expression(T1) GTOP expression(T2).
{
	cond_simple(condtrue, condfalse, T1, T2, emit_mid_bgtu, emit_mid_bgts, emit_mid_bgtp);
}

conditional ::= expression(T1) LEOP expression(T2).
{
	cond_simple(condfalse, condtrue, T1, T2, emit_mid_bgtu, emit_mid_bgts, emit_mid_bgtp);
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
	emit_mid_asmend();
}

asmstart ::= ASM.
{
	emit_mid_asmstart();
}

asms ::= asm.
asms ::= asm COMMA asms.

asm ::= STRING(token).
{
	unescape(token->string);
	emit_mid_asmtext(strdup(token->string));
}

asm ::= oldid(ID).
{
	if (ID->kind != VAR)
		fatal("you can only emit references to variables");
	emit_mid_asmsymbol(ID);
}
