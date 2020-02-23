%token ASM ASSIGN BREAK CLOSEPAREN CLOSESQ.
%token COLON CONST DOT ELSE END EXTERN.
%token IF LOOP MINUS NOT OPENPAREN OPENSQ.
%token PERCENT PLUS RECORD RETURN SEMICOLON SLASH STAR.
%token SUB THEN TILDE VAR WHILE TYPE.
%token OPENBR CLOSEBR ID NUMBER AT BYTESOF ELSEIF.
%token INT TYPEDEF SIZEOF.

%left COMMA.
%left AND.
%left OR.
%left PIPE.
%left CARET.
%left AMPERSAND.
%nonassoc LTOP LEOP GTOP GEOP EQOP NEOP.
%left LSHIFT RSHIFT.
%left PLUS MINUS.
%left STAR SLASH PERCENT.
%left AS.
%right NOT TILDE.

%token_type {[Token]}
%type typeref {[Symbol]}
%type expression {[Midnode]}
%type lvalue {[Midnode]}

program ::= statements.

statements ::= /* empty */.
statements ::= statements statement.

/* --- Top-level statements ---------------------------------------------- */

statement ::= SEMICOLON.

/* --- Simple statements ------------------------------------------------- */

statement ::= RETURN SEMICOLON.
{ }


