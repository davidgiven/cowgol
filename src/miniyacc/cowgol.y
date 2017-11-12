%{
%}
%token ID NUMBER STRING
%token SUB WHILE LOOP IF ELSE ELSEIF VAR BREAK CONTINUE
%token CONST RECORD RETURN GOTO END
%token SEGMENT INDEX
%token SEMICOLON COLON ASSIGN COMMA
%token CLOSEP CLOSEB
%left COMMA
%left OR
%left AND
%left PIPE
%left CARET
%left AMPERSAND
%left LT LE GT GE EQ NE
%left LEFTSHIFT RIGHTSHIFT
%left PLUS MINUS
%left STAR SLASH PERCENT
%left AS
%left SIZE BYTES
%right TILDE
%right NOT
%left OPENB OPENP
%left DOT
%%
prog
    : statements
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
    : OPENP paramlist CLOSEP
    ;

outputparams
    : 
    | COLON OPENP paramlist CLOSEP
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
    | GT bytessymbol
    | LT bytessymbol
    ;

byteslist
    : bytesparam
    | bytesparam COMMA byteslist
    ;

type
    : ID
    | OPENB type CLOSEB
    | type INDEX
    ;

longtype
    : type
    | type OPENB expression CLOSEB
    ;
    
vardecl
    : ID COLON longtype optionalsegment optionalassignment
    ;

optionalsegment
    :
    | SEGMENT OPENP expression CLOSEP
    ;

optionalassignment
    :
    | ASSIGN expression
    ;
    
condition
    : expression LT expression
    | expression LE expression
    | expression GT expression
    | expression GE expression
    | expression EQ expression
    | expression NE expression
    | OPENP condition CLOSEP
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
    | OPENP expression CLOSEP
    | TILDE expression
    | MINUS expression
    | AMPERSAND expression
    | expression OPENB expression CLOSEB
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
