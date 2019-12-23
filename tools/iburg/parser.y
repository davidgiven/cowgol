%include
{
    #include "globals.h"
    #include "parser.h"
    #include "iburg.h"
}

%token_type {Token}
%type lhs {const char*}
%type label {const char*}
%type tree {Tree}
%type cost {int}
%type action {struct action*}
%type cstring {struct action*}
%type cstrings {struct action*}

%token STRING.

%syntax_error {
    yyerror("syntax error: unexpected %s", yyTokenName[yymajor]);
}

%stack_overflow {
    yyerror("parser stack overflow; giving up");
}

spec ::= rules.
{ emittables(); }

rules ::= .
rules ::= rules SEMICOLON.
rules ::= rules lhs(LHS) COLON tree(TREE) cost(COST) action(A).
{ rule(LHS, TREE, COST+1, A); }

lhs(R) ::= ID(ID).
{
    R = ID.string;
    nonterm(R);
}

tree(R) ::= ID(ID) label(L).
{ R = tree(ID.string, L, NULL, NULL); }

tree(R) ::= ID(ID) OPENPAREN tree(R1) CLOSEPAREN label(L).
{ R = tree(ID.string, L, R1, NULL); }

tree(R) ::= ID(ID) OPENPAREN tree(R1) COMMA tree(R2) CLOSEPAREN label(L).
{ R = tree(ID.string, L, R1, R2); }

label(R) ::= .
{ R = NULL; }

label(R) ::= COLON ID(ID).
{ R = ID.string; }

cost(R) ::= .
{ R = 1; }

cost(R) ::= COSTS INT(VAL).
{ R = VAL.number; }

action(A) ::= SEMICOLON.
{ A = NULL; }

action(A) ::= cstring(S).
{ A = S; }

cstring(R) ::= BEGINCSTRING cstrings(S) ENDCSTRING.
{ R = S; }

cstrings(R) ::= .
{ R = NULL; }

cstrings(R) ::= cstrings(LHS) CSTRING(RHS).
{
    R = calloc(1, sizeof(struct action));
    R->islabel = false;
    R->text = RHS.string;
    R->next = LHS;
}

cstrings(R) ::= cstrings(LHS) CID(RHS).
{
    R = calloc(1, sizeof(struct action));
    R->islabel = true;
    R->text = RHS.string;
    R->next = LHS;
}

// vim: sw=4 ts=4 et

