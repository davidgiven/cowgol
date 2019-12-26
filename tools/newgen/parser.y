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

rules ::= rules GEN regspec(LHS) EQUALS tree(TREE) SEMICOLON.
{ rule(TREE, LHS); }

regspec(R) ::= reg(R1).
{ R = R1; }

regspec(R) ::= regspec(R1) PIPE reg(R2).
{ R = R1|R2; }

reg(R) ::= ID(ID).
{ R = lookup_register(ID.string); }

midcode(R) ::= ID(ID).
{ R = lookup_midcode(ID.string); }

tree(R) ::= regspec(R1).
{ R = terminal(R1); }

tree(R) ::= midcode(ID) OPENPAREN CLOSEPAREN.
{ R = tree(ID, NULL, NULL); }

tree(R) ::= midcode(ID) OPENPAREN tree(R1) CLOSEPAREN.
{ R = tree(ID, R1, NULL); }

tree(R) ::= midcode(ID) OPENPAREN tree(R1) COMMA tree(R2) CLOSEPAREN.
{ R = tree(ID, R1, R2); }

// vim: sw=4 ts=4 et

