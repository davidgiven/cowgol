%include
{
    #include "globals.h"
    #include "parser.h"
}

%token_type {Token}
%type regdata {Register*}
%type regspec {uint32_t}
%type reg {Register*}
%type rule {Rule*}
%type tree {Node*}
%type midcode {int}
%type optionalpredicatescomma {Predicate*}
%type optionalpredicatesnocomma {Predicate*}
%type predicates {Predicate*}
%type predicate {Predicate*}
%type optionallabel {Label*}
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
{ R = R1; }

rules ::= rules rule(R) action(A).
{ R->action = A; }

rule(R) ::= GEN(G) tree(TREE).
{ R = rule(G.lineno, TREE, 0); }

rule(R) ::= GEN(G) regspec(LHS) ASSIGN tree(TREE).
{ R = rule(G.lineno, TREE, LHS); }

rule(R) ::= rule(R1) USES regspec(USES).
{ R = R1; R->uses_regs = USES; }

regspec(R) ::= reg(R1).
{ R = R1->id; }

regspec(R) ::= regspec(R1) PIPE reg(R2).
{ R = R1 | (R2->id); }

reg(R) ::= ID(ID).
{ R = lookup_register(ID.u.string); }

midcode(R) ::= ID(ID).
{ R = lookup_midcode(ID.u.string); }

tree(R) ::= regspec(R1) optionallabel(L).
{ R = register_matcher(R1, L); }

tree(R) ::= midcode(ID) OPENPAREN optionalpredicatesnocomma(PRED) CLOSEPAREN optionallabel(L).
{ R = tree_matcher(ID, NULL, NULL, PRED, L); }

tree(R) ::= midcode(ID) OPENPAREN tree(R1) optionalpredicatescomma(PRED) CLOSEPAREN optionallabel(L).
{ R = tree_matcher(ID, R1, NULL, PRED, L); }

tree(R) ::= midcode(ID) OPENPAREN tree(R1) COMMA tree(R2) optionalpredicatescomma(PRED) CLOSEPAREN optionallabel(L).
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
    R->value = I3;
}

operator(R) ::= EQUALS.
{ R = EQUALS; }

operator(R) ::= NOTEQUALS.
{ R = NOTEQUALS; }

int(R) ::= INT(I1).
{ R = I1.u.number; }

int(R) ::= MINUS INT(I1).
{ R = -I1.u.number; }

optionallabel(R) ::= .
{ R = NULL; }

optionallabel(R) ::= COLON ID(ID).
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

