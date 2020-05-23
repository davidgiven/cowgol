%include
{
    #include "globals.h"
    #include "parser.h"
}

%token_type {Token}
%type regdata {Register*}
%type regspec {uint32_t}
%type reg {Register*}
%type regc {reg_t}
%type gen {Rule*}
%type rewritetree {Node*}
%type gentree {Node*}
%type midcode {int}
%type optionalpredicatescomma {Predicate*}
%type optionalpredicatesnocomma {Predicate*}
%type predicates {Predicate*}
%type predicate {Predicate*}
%type optionallabel {Label*}
%type label {Label*}
%type operator {int}
%type int {int}
%type action {Action*}
%type string {Element*}
%type cstring {Element*}
%type cstrings {Element*}

%token INT.
%token BEGINCSTRING CSTRING CID ENDCSTRING.

%syntax_error
{
    yyerror("syntax error: unexpected %s", yyTokenName[yymajor]);
}

%stack_overflow
{
    yyerror("parser stack overflow; giving up");
}

spec ::= rules.

rules ::= .
rules ::= rules SEMICOLON.
rules ::= rules REGISTER regdecls SEMICOLON.
rules ::= rules regdata SEMICOLON.

regdecls ::= .
regdecls ::= regdecls ID(ID).
{ define_register(ID.u.string); }

rules ::= rules REGCLASS ID(ID) ASSIGN regspec(R).
{ define_regclass(ID.u.string, R); }

regdata(R) ::= REGDATA reg(R1).
{ R = R1; }

regdata(R) ::= regdata(R1) USES regspec(R2).
{
    R = R1;
    R->uses |= R2;
}

regdata(R) ::= regdata(R1) COMPATIBLE regspec(R2).
{
    R = R1;
    R->compatible |= R2;
}

regdata(R) ::= regdata(R1) STACKED.
{
    R = R1;
    R->isstacked = true;
}

/* --- Width ------------------------------------------------------------- */

rules ::= rules WORDSIZE int(R) SEMICOLON.
{
    machine_word = R;
}

/* --- Rewrite rules ----------------------------------------------------- */

rules ::= rules REWRITE(R) rewritetree(TS) ASSIGN rewritetree(TD) SEMICOLON.
{ rewriterule(R.lineno, TS, TD); }

rewritetree(R) ::= label(L).
{ R = register_matcher(0, L); }

rewritetree(R) ::= midcode(M) OPENPAREN CLOSEPAREN.
{ R = tree_matcher(M, NULL, NULL, NULL, NULL); }

rewritetree(R) ::= midcode(M) OPENPAREN rewritetree(T) CLOSEPAREN.
{ R = tree_matcher(M, T, NULL, NULL, NULL); }

rewritetree(R) ::= midcode(M) OPENPAREN rewritetree(TL) COMMA rewritetree(TR) CLOSEPAREN.
{ R = tree_matcher(M, TL, TR, NULL, NULL); }

/* --- Gen rules --------------------------------------------------------- */

rules ::= rules gen(R) action(A).
{ R->action = A; }

gen(R) ::= GEN(G) gentree(TREE).
{ R = genrule(G.lineno, TREE, 0); }

gen(R) ::= GEN(G) regspec(LHS) ASSIGN gentree(TREE).
{ R = genrule(G.lineno, TREE, LHS); }

gen(R) ::= gen(R1) USES regspec(USES).
{ R = R1; R->uses_regs = USES; }

regspec(R) ::= STRINGSTRING.
{ R = REG_SAME_AS_INSTRUCTION_RESULT; }

regspec(R) ::= regc(R1).
{ R = R1; }

regspec(R) ::= regspec(R1) PIPE regc(R2).
{ R = R1 | R2; }

regspec(R) ::= regspec(R1) PIPE TILDE regc(R2).
{ R = R1 & ~R2; }

reg(R) ::= ID(ID).
{ R = lookup_register(ID.u.string); }

regc(R) ::= ID(ID).
{ R = lookup_register_or_class(ID.u.string); }

midcode(R) ::= ID(ID).
{ R = lookup_midcode(ID.u.string); }

gentree(R) ::= regspec(R1) optionallabel(L).
{ R = register_matcher(R1, L); }

gentree(R) ::= midcode(ID) OPENPAREN optionalpredicatesnocomma(PRED) CLOSEPAREN optionallabel(L).
{ R = tree_matcher(ID, NULL, NULL, PRED, L); }

gentree(R) ::= midcode(ID) OPENPAREN gentree(R1) optionalpredicatescomma(PRED) CLOSEPAREN optionallabel(L).
{ R = tree_matcher(ID, R1, NULL, PRED, L); }

gentree(R) ::= midcode(ID) OPENPAREN gentree(R1) COMMA gentree(R2) optionalpredicatescomma(PRED) CLOSEPAREN optionallabel(L).
{ R = tree_matcher(ID, R1, R2, PRED, L); }

optionalpredicatesnocomma(R) ::= .
{ R = NULL; }

optionalpredicatesnocomma(R) ::= predicates(P1).
{ R = P1; }

optionalpredicatescomma(R) ::= .
{ R = NULL; }

optionalpredicatescomma(R) ::= COMMA predicates(P1).
{ R = P1; }

predicates(R) ::= predicate(P1).
{ R = P1; }

predicates(R) ::= predicates(P1) COMMA predicate(P2).
{ P2->next = P1; R = P2; }

predicate(R) ::= ID(I1) operator(I2) int(I3).
{
    R = calloc(sizeof(Predicate), 1);
    R->field = I1.u.string;
    R->operator = I2;
    R->u.value = I3;
}

predicate(R) ::= ID(I1) IS ID(I2).
{
    R = calloc(sizeof(Predicate), 1);
    R->field = I1.u.string;
    R->operator = IS;
    R->u.callback = I2.u.string;
}

operator(R) ::= EQOP.
{ R = EQOP; }

operator(R) ::= NEOP.
{ R = NEOP; }

operator(R) ::= LTOP.
{ R = LTOP; }

operator(R) ::= LEOP.
{ R = LEOP; }

operator(R) ::= GTOP.
{ R = GTOP; }

operator(R) ::= GEOP.
{ R = GEOP; }

int(R) ::= INT(I1).
{ R = I1.u.number; }

int(R) ::= MINUS INT(I1).
{ R = -I1.u.number; }

optionallabel(R) ::= .
{ R = NULL; }

optionallabel(R) ::= COLON label(L).
{ R = L; }

label(R) ::= ID(ID).
{
    R = calloc(sizeof(Label), 1);
    R->name = ID.u.string;
}

action(R) ::= SEMICOLON.
{ R = NULL; }

action(R) ::= string(S) SEMICOLON.
{
    R = calloc(sizeof(Action), 1);
    R->iscomplex = false;
    R->first_element = S;
}

action(R) ::= cstring(S).
{
    R = calloc(sizeof(Action), 1);
    R->iscomplex = true;
    R->first_element = S;
}

string(R) ::= BEGINSTRING cstrings(S) ENDSTRING.
{ R = S; }

cstring(R) ::= BEGINCSTRING cstrings(S) ENDCSTRING.
{ R = S; }

cstrings(R) ::= .
{ R = NULL; }

cstrings(R) ::= cstrings(LHS) CSTRING(RHS).
{
    R = calloc(1, sizeof(Element));
    R->islabel = false;
    R->text = RHS.u.string;
    R->next = LHS;
}

cstrings(R) ::= cstrings(LHS) CID(RHS).
{
    R = calloc(1, sizeof(Element));
    R->islabel = true;
    R->text = RHS.u.string;
    R->next = LHS;
}

// vim: sw=4 ts=4 et

