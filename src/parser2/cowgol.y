%{
%}
%token EOF
%token ID NUMBER STRING
%token SUB WHILE LOOP IF ELSE ELSEIF VAR BREAK CONTINUE
%token CONST RECORD RETURN GOTO NAMESPACE TYPE END THEN
%token SEGMENT INDEX
%token SEMICOLON COLON ASSIGN COMMA
%token CLOSEPAREN CLOSESQUARE CLOSEBRACE
%left COMMA
%left OR
%left AND
%left PIPE
%left CARET
%left AMPERSAND
%left LTOP LEOP GTOP GEOP EQOP NEOP
%left LEFTSHIFT RIGHTSHIFT
%left PLUS MINUS
%left STAR SLASH PERCENT
%left AS
%left SIZE BYTES
%right TILDE
%right NOT
%left OPENBRACE OPENSQUARE OPENPAREN
%left DOT

%union {
    constval: int32;
    thing_id: uint16;
    type_id: uint16;
}
%%
prog
    : statements EOF
    ;

statements
    : terminatedstatement
    | terminatedstatement statements
    ;

terminatedstatement
    : SEMICOLON
    | statement SEMICOLON
    ;

statement
    : SUB ID inputparams outputparams END SUB
    | WHILE condition LOOP statements END LOOP
    | BREAK
    | CONTINUE
    | RETURN
    | GOTO ID
    | BYTES byteslist
    | VAR vardecl
    | expression ASSIGN expression;

inputparams
    : OPENPAREN paramlist CLOSEPAREN
    ;

outputparams
    : 
    | COLON OPENPAREN paramlist CLOSEPAREN
    ;

paramlist
    : param
    | param paramlist
    ;

param
    : ID COLON type
    ;

bytessymbol
    : AMPERSAND ID
    | AMPERSAND ID PLUS NUMBER
    | AMPERSAND ID MINUS NUMBER
    ;

bytesparam
    : NUMBER
    | bytessymbol
    | GTOP bytessymbol
    | LTOP bytessymbol
    ;

byteslist
    : bytesparam
    | bytesparam COMMA byteslist
    ;

type
    : ID                            { print("type id\n"); }
    | OPENSQUARE type CLOSESQUARE
    | type INDEX
    ;

longtype
    : type                          { print("longtype with type\n"); }
    | type OPENSQUARE expression CLOSESQUARE
    ;
    
vardecl
    : ID COLON longtype optionalsegment optionalassignment
    ;

optionalsegment
    :
    | SEGMENT OPENPAREN expression CLOSEPAREN
    ;

optionalassignment
    :
    | ASSIGN expression
    | ASSIGN OPENBRACE arrayinitialiserlist CLOSEBRACE
    ;
    
arrayinitialiserlist
    : 
    | expression
    | expression COMMA arrayinitialiserlist
    ;

condition
    : expression LTOP expression
    | expression LEOP expression
    | expression GTOP expression
    | expression GEOP expression
    | expression EQOP expression
    | expression NEOP expression
    | OPENPAREN condition CLOSEPAREN
    | condition AND condition
    | condition OR condition
    | NOT condition
    ;

expression
    : NUMBER
    | ID
    | STRING
    | type BYTES
    | type SIZE
    | OPENPAREN expression CLOSEPAREN
    | TILDE expression
    | MINUS expression
    | AMPERSAND expression
    | expression OPENSQUARE expression CLOSESQUARE
    | expression PLUS expression
    | expression MINUS expression
    | expression STAR expression
    | expression SLASH expression
    | expression PERCENT expression
    | expression LEFTSHIFT expression
    | expression RIGHTSHIFT expression
    | expression AMPERSAND expression
    | expression PIPE expression
    | expression CARET expression
    | expression AS type
    | expression DOT ID
    ;
