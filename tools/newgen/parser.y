%include
{
    #include "globals.h"
    #include "parser.h"
}

%token_type {Token}
%type regspec {uint32_t}
%type reg {uint32_t}
%type tree {Node*}
%type midcode {int}
%type optionalpredicatescomma {Predicate*}
%type optionalpredicatesnocomma {Predicate*}
%type predicates {Predicate*}
%type predicate {Predicate*}
%type optionallabel {Label*}
%type operator {int}
%type int {int}
%type cstring {Action*}
%type cstrings {Action*}

%token STRING INT.
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
rules ::= rules REGISTER ID(ID).
{ define_register(ID.string); }

rules ::= rules GEN tree(TREE) SEMICOLON.
{ rule(TREE, 0); }

rules ::= rules GEN regspec(LHS) ASSIGN tree(TREE) SEMICOLON.
{ rule(TREE, LHS); }

regspec(R) ::= reg(R1).
{ R = R1; }

regspec(R) ::= regspec(R1) PIPE reg(R2).
{ R = R1|R2; }

reg(R) ::= ID(ID).
{ R = lookup_register(ID.string); }

midcode(R) ::= ID(ID).
{ R = lookup_midcode(ID.string); }

tree(R) ::= regspec(R1) optionallabel(L).
{ R = terminal(R1, L); }

tree(R) ::= midcode(ID) OPENPAREN optionalpredicatesnocomma(PRED) CLOSEPAREN optionallabel(L).
{ R = tree(ID, NULL, NULL, PRED, L); }

tree(R) ::= midcode(ID) OPENPAREN tree(R1) optionalpredicatescomma(PRED) CLOSEPAREN optionallabel(L).
{ R = tree(ID, R1, NULL, PRED, L); }

tree(R) ::= midcode(ID) OPENPAREN tree(R1) COMMA tree(R2) optionalpredicatescomma(PRED) CLOSEPAREN optionallabel(L).
{ R = tree(ID, R1, R2, PRED, L); }

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
    R->field = I1.string;
    R->operator = I2;
    R->value = I3;
}

operator(R) ::= EQUALS.
{ R = EQUALS; }

operator(R) ::= NOTEQUALS.
{ R = NOTEQUALS; }

int(R) ::= INT(I1).
{ R = I1.number; }

int(R) ::= MINUS INT(I1).
{ R = -I1.number; }

optionallabel(R) ::= .
{ R = NULL; }

optionallabel(R) ::= COLON ID(ID).
{
    R = calloc(sizeof(Label), 1);
    R->name = ID.string;
}

//cstring(R) ::= BEGINCSTRING cstrings(S) ENDCSTRING.
//{ R = S; }
//
//cstrings(R) ::= .
//{ R = NULL; }
//
//cstrings(R) ::= cstrings(LHS) CSTRING(RHS).
//{
//    R = calloc(1, sizeof(struct action));
//    R->islabel = false;
//    R->text = RHS.string;
//    R->next = LHS;
//}
//
//cstrings(R) ::= cstrings(LHS) CID(RHS).
//{
//    R = calloc(1, sizeof(struct action));
//    R->islabel = true;
//    R->text = RHS.string;
//    R->next = LHS;
//}

// vim: sw=4 ts=4 et

