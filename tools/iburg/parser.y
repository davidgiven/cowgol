%include
{
    #include "globals.h"
    #include "parser.h"
    #include "iburg.h"

    static int id = 0;
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

spec ::= body PPERCENT.

body ::= decls PPERCENT rules.
{ emittables(); }

decls ::= .
decls ::= decls decl.

decl ::= SEMICOLON.
decl ::= error SEMICOLON.
decl ::= START lhs(LHS) SEMICOLON.
{
    if (nonterm(LHS)->number != 1)
        yyerror("redeclaration of the start symbol");
}

rules ::= .
rules ::= rules SEMICOLON.
rules ::= error SEMICOLON.
rules ::= rules lhs(LHS) COLON tree(TREE) cost(COST) action(A).
{ rule(LHS, TREE, id++, COST, A); }

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
{ R = 0; }

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

cstrings(R) ::= CSTRING(LHS) cstrings(RHS).
{
    R = calloc(1, sizeof(struct action));
    R->islabel = false;
    R->text = LHS.string;
    R->next = RHS;
}

cstrings(R) ::= CID(LHS) cstrings(RHS).
{
    R = calloc(1, sizeof(struct action));
    R->islabel = true;
    R->text = LHS.string;
    R->next = RHS;
}

// vim: sw=4 ts=4 et

