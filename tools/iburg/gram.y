%{
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include "globals.h"
#include "iburg.h"
static int id = 0;
extern int yylex(void);
extern int yylineno;
%}
%union {
        int n;
        char *string;
        Tree tree;
}
%term TERMINAL
%term START
%term PPERCENT
%term COSTS
%term OPENPAREN CLOSEPAREN
%term COLON SEMICOLON COMMA EQUALS

%debug

%token  <string>        ID
%token  <n>             INT
%type   <string>        lhs
%type   <tree>          tree
%type   <n>             cost
%%
spec
    : decls PPERCENT rules PPERCENT { emittables(); }
    ;

decls
    : /* lambda */
    | decls decl
    ;

decl    : TERMINAL blist SEMICOLON
        | START lhs SEMICOLON           {
                if (nonterm($2)->number != 1)
                        yyerror("redeclaration of the start symbol\n");
                }
        | SEMICOLON
        | error SEMICOLON                       { yyerrok; }
        ;

blist   : /* lambda */
        | blist ID EQUALS INT           { term($2, $4); }
        ;

rules   : /* lambda */
        | rules lhs COLON tree cost SEMICOLON   { rule($2, $4, id++, $5); }
        | rules SEMICOLON
        | rules error SEMICOLON         { yyerrok; }
        ;

lhs     : ID                            { nonterm($$ = $1); }
        ;

tree    : ID                            { $$ = tree($1, NULL, NULL); }
        | ID OPENPAREN tree CLOSEPAREN               { $$ = tree($1,   $3, NULL); }
        | ID OPENPAREN tree COMMA tree CLOSEPAREN      { $$ = tree($1,   $3, $5); }
        ;

cost    : /* lambda */                  { $$ = 0; }
        | COSTS INT                     { if ($2 > maxcost) {
                                                yyerror("%d exceeds maximum cost of %d\n", $2, maxcost);
                                                $$ = maxcost;
                                        } else
                                                $$ = $2; }
        ;
%%

int errcnt = 0;

void yyerror(const char *fmt, ...) {
        va_list ap;

        va_start(ap, fmt);
        if (yylineno > 0)
                fprintf(stderr, "line %d: ", yylineno);
        vfprintf(stderr, fmt, ap);
        if (fmt[strlen(fmt)-1] != '\n')
                 fprintf(stderr, "\n");
        errcnt++;
}

void warning(const char *fmt, ...) {
        va_list ap;

        va_start(ap, fmt);
        if (yylineno > 0)
                fprintf(stderr, "line %d: ", yylineno);
        fprintf(stderr, "warning: ");
        vfprintf(stderr, fmt, ap);
        if (fmt[strlen(fmt)-1] != '\n')
                 fprintf(stderr, "\n");
}

void fatal(const char *fmt, ...) {
        va_list ap;

        va_start(ap, fmt);
        if (yylineno > 0)
                fprintf(stderr, "line %d: ", yylineno);
        fprintf(stderr, "fatal: ");
        vfprintf(stderr, fmt, ap);
        if (fmt[strlen(fmt)-1] != '\n')
                 fprintf(stderr, "\n");
        exit(1);
}

// vim: sw=4 ts=4 et

