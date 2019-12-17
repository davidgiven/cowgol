%include
{
    #include "globals.h"
    #include "parser.h"
    #include "iburg.h"

    static int id = 0;
}

%token_type {Token}
%type lhs {const char*}
%type tree {Tree}
%type cost {int}

spec ::= body PPERCENT.

body ::= decls PPERCENT rules.
{ emittables(); }

decls ::= .
decls ::= decls decl.

decl ::= TERMINAL blist SEMICOLON.
decl ::= SEMICOLON.
decl ::= error SEMICOLON.
decl ::= START lhs(LHS) SEMICOLON.
{
    if (nonterm(LHS)->number != 1)
        yyerror("redeclaration of the start symbol");
}

blist ::= .
blist ::= blist ID(ID) EQUALS INT(VAL).
{ term(ID.string, VAL.number); }

rules ::= .
rules ::= rules SEMICOLON.
rules ::= error SEMICOLON.
rules ::= rules lhs(LHS) COLON tree(TREE) cost(COST) SEMICOLON.
{ rule(LHS, TREE, id++, COST); }

lhs(R) ::= ID(ID).
{
    R = ID.string;
    nonterm(R);
}

tree(R) ::= ID(ID).
{ R = tree(ID.string, NULL, NULL); }

tree(R) ::= ID(ID) OPENPAREN tree(R1) CLOSEPAREN.
{ R = tree(ID.string, R1, NULL); }

tree(R) ::= ID(ID) OPENPAREN tree(R1) COMMA tree(R2) CLOSEPAREN.
{ R = tree(ID.string, R1, R2); }

cost(R) ::= .
{ R = 0; }

cost(R) ::= COSTS INT(VAL).
{ R = VAL.number; }

// vim: sw=4 ts=4 et

