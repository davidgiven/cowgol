%token EOS NUMBER STRING ID.
%token PERCENT OPENPAREN CLOSEPAREN OPENSQ CLOSESQ.
%token COLON PLUS SLASH STAR MINUS.
%token PIPE CARET COMMA AMPERSAND LSHIFT RSHIFT.
%token OPENBR CLOSEBR TILDE LEOP LTOP GEOP GTOP.
%token EQOP NEOP HASH AT.

%token CPUTYPE.
%token REG_A REG_C REG_DPTR REG_8 REG_16.
%token INSN_ALU.
%token INSN_ABSA.
%token INSN_ABSL.
%token INSN_EXT_A.

%left COMMA.
%left AMPERSAND.
%left PIPE.
%left CARET.
%nonassoc LTOP LEOP GTOP GEOP EQOP NEOP.
%left LSHIFT RSHIFT.
%left PLUS MINUS.
%left STAR SLASH PERCENT.
%right NOT TILDE.

%token_type {Token}

%syntax_error
{
        StartError();
        print("unexpected ");
        print(yyTokenName[yymajor]);
        EndError();
}

%stack_size 100
%stack_overflow
{
        StartError();
        print("parser stack overflow");
        EndError();
}

%token_destructor
{
        if (yymajor == STRING) or (yymajor == ID) then
                print("free unused string\n");
                Free($$.string as [uint8]);
        end if;
}

program ::= statements.

statements ::= /* empty */.
statements ::= statements statement.

statement ::= label instruction EOS.

label ::= /* empty */.
label ::= ID COLON.

instruction ::= /* empty */.

instruction ::= INSN_SIMPLE(I).
	{ Emit8(I.number as uint8); }

instruction ::= INSN_ABSA address.

instruction ::= INSN_ABSL address.

instruction ::= INSN_ALU REG_A COMMA address.

instruction ::= INSN_ALU REG_A COMMA HASH expression.

instruction ::= INSN_ALU(I) REG_A COMMA REG_8(R).
	{ Emit8((I.number as uint8) | (R.number as uint8) | 0x08); }

instruction ::= INSN_ALU REG_A COMMA AT REG_8.

instruction ::= INSN_EXT_A REG_16 COMMA REG_16.
	{ Emit8(0xa5); }

instruction ::= INSN_EXT_A REG_16 COMMA AT REG_16.
	{ Emit8(0xa5); }

instruction ::= INSN_EXT_A AT REG_16 COMMA REG_16.
	{ Emit8(0xa5); }

address ::= expression.

expression ::= NUMBER.

expression ::= ID.

