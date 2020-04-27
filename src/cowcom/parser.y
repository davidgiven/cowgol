%token ASM ASSIGN BREAK CLOSEPAREN CLOSESQ.
%token COLON CONST DOT ELSE END EXTERN.
%token IF LOOP MINUS NOT OPENPAREN OPENSQ.
%token PERCENT PLUS RECORD RETURN SEMICOLON SLASH STAR.
%token SUB THEN TILDE VAR WHILE TYPE.
%token OPENBR CLOSEBR ID NUMBER AT BYTESOF ELSEIF.
%token INT TYPEDEF SIZEOF STRING.

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

%syntax_error
{
	StartError();
	print("unexpected ");
	print(yyTokenName[yymajor]);
	EndError();
}

%stack_overflow
{
	StartError();
	print("parser stack overflow");
	EndError();
}

%token_destructor
{
	if $$ != (0 as [Token]) then
		Free($$.string as [uint8]);
		Free($$ as [uint8]);
	end if;
}

program ::= statements.

statements ::= /* empty */.
statements ::= statements statement.

/* --- Top-level statements ---------------------------------------------- */

statement ::= SEMICOLON.

/* --- Simple statements ------------------------------------------------- */

statement ::= RETURN SEMICOLON.
{
	Generate(MidReturn());
}

/* --- Variable declaration ---------------------------------------------- */

statement ::= VAR newid(S) COLON typeref(T) SEMICOLON.
{
	S.kind := VAR;
	InitVariable(S, T);
}

statement ::= VAR newid(S) COLON typeref(T) ASSIGN expression(E) SEMICOLON.
{
	S.kind := VAR;
	InitVariable(S, T);
    CheckExpressionType(E, S.vardata.type);

    Generate(MidStore(E.type.typedata.width as uint8, E, MidAddress(S, 0)));
}

statement ::= VAR newid(S) ASSIGN expression(E) SEMICOLON.
{
	var type := E.type;
	if type == (0 as [Symbol]) then
		SimpleError("types cannot be inferred for numeric constants");
	end if;
	if IsScalar(type) == 0 then
		SimpleError("you can only assign to lvalues");
	end if;

	S.kind := VAR;
	InitVariable(S, type);
	CheckExpressionType(E, S.vardata.type);

	Generate(MidStore(E.type.typedata.width as uint8, E, MidAddress(S, 0)));
}

/* --- Assignments ------------------------------------------------------- */

statement ::= lvalue(E1) ASSIGN expression(E2) SEMICOLON.
{
	if IsPtr(E1.type) == 0 then
		SimpleError("you can only assign to lvalues");
	end if;

	var e := E1.type.typedata.pointertype.element;
	CheckExpressionType(E2, e);
	Generate(MidStore(e.typedata.width as uint8, E2, E1));
}

/* --- Simple loops ------------------------------------------------------ */

%include
{
	sub BeginNormalLoop(): (ll: [LoopLabels])
		ll := Alloc(@bytesof LoopLabels) as [LoopLabels];
		ll.loop_label := AllocLabel();
		ll.exit_label := AllocLabel();
		ll.old_break_label := break_label;
		ll.old_continue_label := continue_label;
		break_label := ll.exit_label;
		continue_label := ll.loop_label;
	end sub;

	sub TerminateNormalLoop(ll: [LoopLabels])
		Generate(MidJump(continue_label));
		Generate(MidLabel(break_label));
		break_label := ll.old_break_label;
		continue_label := ll.old_continue_label;
		Free(ll as [uint8]);
	end sub;
}

statement ::= startloopstatement(LL) statements END LOOP.
{
	TerminateNormalLoop(LL);
}

%type startloopstatement {[LoopLabels]}
startloopstatement(LL) ::= LOOP.
{
	LL := BeginNormalLoop();
	Generate(MidLabel(continue_label));
}

/* --- While loops ------------------------------------------------------- */

statement ::= startwhilestatement(LL) statements END LOOP.
{
	TerminateNormalLoop(LL);
}

%type startwhilestatement {[LoopLabels]}
startwhilestatement(LL) ::= WHILE conditional(C) LOOP.
{
	LL := BeginNormalLoop();
	Generate(MidLabel(continue_label));
	var t := C.beqs0.truelabel;
	var f := C.beqs0.falselabel;
	C.beqs0.fallthrough := t;
	Generate(C);
	Generate(MidLabel(t));
	LL.exit_label := f;
	break_label := f;
}

/* --- Simple jumps ------------------------------------------------------ */

statement ::= BREAK SEMICOLON.
{
	if break_label == 0 then
		SimpleError("nothing to break to");
	end if;
	Generate(MidJump(break_label));
}

statement ::= CONTINUE SEMICOLON.
{
	if break_label == 0 then
		SimpleError("nothing to continue to");
	end if;
	Generate(MidJump(continue_label));
}

/* --- If...Then...Else...End if ----------------------------------------- */

statement ::= IF if_begin if_conditional THEN if_statements if_optional_else END IF.
{
	Generate(MidLabel(current_if.exit_label));
	var oldif := current_if;
	current_if := current_if.next;
	Free(oldif as [uint8]);
}

if_begin ::= .
{
	var newif := Alloc(@bytesof IfLabels) as [IfLabels];
	newif.next := current_if;
	current_if := newif;
	current_if.exit_label := AllocLabel();
}

if_conditional ::= conditional(C).
{
	current_if.true_label := C.beqs0.truelabel;
	current_if.false_label := C.beqs0.falselabel;
	C.beqs0.fallthrough := current_if.true_label;
	Generate(C);
	Generate(MidLabel(current_if.true_label));
}

if_statements ::= statements.
{
	Generate(MidJump(current_if.exit_label));
	Generate(MidLabel(current_if.false_label));
}

if_optional_else ::= .
if_optional_else ::= ELSE statements.
if_optional_else ::= ELSEIF if_conditional THEN if_statements if_optional_else.

/* --- Conditional expressions ------------------------------------------- */

%type conditional {[Node]}
conditional(R) ::= OPENPAREN conditional(C) CLOSEPAREN.
{
	R := C;
}

%include
{
	sub Negate(node: [Node])
		node.beqs0.negated := node.beqs0.negated ^ 1;
	end sub;
}

conditional(R) ::= NOT conditional(C).
{
	R := C;
	Negate(C);
}

conditional(R) ::= conditional(C1) AND conditional(C2).
{
	var t := C1.beqs0.truelabel;
	var f := C1.beqs0.falselabel;
	RewriteLabels(C2, C2.beqs0.falselabel, f);
	C1.beqs0.fallthrough := t;
	Generate(C1);
	Generate(MidLabel(t));
	R := C2;
}

conditional(R) ::= conditional(C1) OR conditional(C2).
{
	var t := C1.beqs0.truelabel;
	var f := C1.beqs0.falselabel;
	RewriteLabels(C2, C2.beqs0.truelabel, t);
	C1.beqs0.fallthrough := f;
	Generate(C1);
	Generate(MidLabel(f));
	R := C2;
}

%include
{
	sub ConditionalEq(lhs: [Node], rhs: [Node], negated: uint8): (result: [Node])
		CondSimple(lhs, rhs);
		var truelabel := AllocLabel();
		var falselabel := AllocLabel();
		var w := NodeWidth(lhs);

		if IsSNum(lhs.type) != 0 then
			result := MidBeqs(w, lhs, rhs, truelabel, falselabel, 0, negated);
		else
			result := MidBequ(w, lhs, rhs, truelabel, falselabel, 0, negated);
		end if;
	end sub;

	sub ConditionalLt(lhs: [Node], rhs: [Node], negated: uint8): (result: [Node])
		CondSimple(lhs, rhs);
		var truelabel := AllocLabel();
		var falselabel := AllocLabel();
		var w := NodeWidth(lhs);

		if IsSNum(lhs.type) != 0 then
			result := MidBlts(w, lhs, rhs, truelabel, falselabel, 0, negated);
		else
			result := MidBltu(w, lhs, rhs, truelabel, falselabel, 0, negated);
		end if;
	end sub;
}

conditional(R) ::= expression(T1) EQOP expression(T2).
{
	R := ConditionalEq(T1, T2, 0);
}

conditional(R) ::= expression(T1) NEOP expression(T2).
{
	R := ConditionalEq(T1, T2, 1);
}

conditional(R) ::= expression(T1) LTOP expression(T2).
{
	R := ConditionalLt(T1, T2, 0);
}

conditional(R) ::= expression(T1) GEOP expression(T2).
{
	R := ConditionalLt(T1, T2, 1);
}

conditional(R) ::= expression(T1) GTOP expression(T2).
{
	R := ConditionalLt(T2, T1, 0);
}

conditional(R) ::= expression(T1) LEOP expression(T2).
{
	R := ConditionalLt(T2, T1, 1);
}

/* --- Expressions ------------------------------------------------------- */

%type expression {[Node]}
expression(E) ::= NUMBER(T).                               { E := MidConstant(T.number); }
expression(E) ::= OPENPAREN expression(E1) CLOSEPAREN.     { E := E1; }
expression(E) ::= MINUS expression(E1).                    { E := ExprNeg(E1); }
expression(E) ::= expression(E1) PLUS expression(E2).      { E := ExprAdd(E1, E2); }
expression(E) ::= expression(E1) MINUS expression(E2).     { E := ExprSub(E1, E2); }
expression(E) ::= expression(E1) STAR expression(E2).      { E := ExprMul(E1, E2); }
expression(E) ::= expression(E1) SLASH expression(E2).     { E := ExprDiv(E1, E2); }
expression(E) ::= expression(E1) PERCENT expression(E2).   { E := ExprRem(E1, E2); }
expression(E) ::= expression(E1) CARET expression(E2).     { E := ExprEor(E1, E2); }
expression(E) ::= expression(E1) AMPERSAND expression(E2). { E := ExprAnd(E1, E2); }
expression(E) ::= expression(E1) PIPE expression(E2).      { E := ExprOr(E1, E2); }
expression(E) ::= expression(E1) LSHIFT expression(E2).    { E := ExprLShift(E1, E2); }
expression(E) ::= expression(E1) RSHIFT expression(E2).    { E := ExprRShift(E1, E2); }

expression(E) ::= expression(E1) AS typeref(T).
{
	CheckNotPartialType(T);
	if E1.type.typedata.width != T.typedata.width then
		if (IsPtr(E1.type) != 0) or (IsPtr(T) != 0) then
			SimpleError("cast between pointer and non-pointer of different size");
		end if;

		E := MidCCast(T.typedata.width as uint8, E1, IsSNum(E1.type));
	else
		E := E1;
	end if;
	E.type := T;
}

expression(E) ::= lvalue(E1).
{
	if E1.type != (0 as [Symbol]) then
		var dereftype := E1.type.typedata.pointertype.element;
		if IsScalar(dereftype) == 0 then
			SimpleError("non-scalars cannot be used in this context");
		end if;
		E := MidLoad(dereftype.typedata.width as uint8, E1);
		E.type := dereftype;
	else
		E := E1;
	end if;
}

/* --- Lvalues ----------------------------------------------------------- */

%type lvalue {[Node]}
lvalue(E) ::= oldid(S).
{
	case S.kind is
		when CONST:
			E := MidConstant(S.constant);

		when VAR:
			E := MidAddress(S, 0);
			E.type := MakePointerType(S.vardata.type);

		when else:
			StartError();
			print(S.name);
			print(" is not a value");
			EndError();
	end case;
}

lvalue(E) ::= OPENSQ expression(E1) CLOSESQ.
{
	if IsPtr(E1.type) == 0 then
		SimpleError("cannot dereference non-pointers");
	end if;
	E := E1;
}

%type cvalue {Arith}
cvalue(C) ::= expression(E).
{
	if E.type != (0 as [Symbol]) then
		SimpleError("only constant values are allowed here");
	end if;
	C := E.constant.value;
}

/* --- Types ------------------------------------------------------------- */

%type typeref {[Symbol]}
typeref(S) ::= INT OPENPAREN cvalue(MIN) COMMA cvalue(MAX) CLOSEPAREN.
{
	if MAX <= MIN then
		SimpleError("invalid integer type range");
	end if;
	S := ArchGuessIntType(MIN, MAX);
}

typeref(S) ::= eitherid(ID).
{
	var sym := ID;
	if sym.kind == 0 then
		# Create a partial type.
		sym.kind := TYPE;
		sym.typedata.kind := TYPE_PARTIAL;
	end if;
	if sym.kind != TYPE then
		StartError();
		print("expected ");
		print(sym.name);
		print(" to be a type");
		EndError();
	end if;
	S := sym;
}

typeref(S) ::= OPENSQ typeref(S1) CLOSESQ.
{
	S := MakePointerType(S1);
}

statement ::= TYPEDEF ID(X) ASSIGN typeref(T) SEMICOLON.
{
	var sym := AddAlias(0 as [Namespace], X, T);
}

/* --- Symbols ----------------------------------------------------------- */

%type newid {[Symbol]}
newid(S) ::= ID(T).
{
	S := AddSymbol(0 as [Namespace], T);
}

%type oldid {[Symbol]}
oldid(S) ::= ID(T).
{
	var name := T.string;
	var sym := LookupSymbol(0 as [Namespace], name);
	if sym == (0 as [Symbol]) then
		StartError();
		print("symbol '");
		print(name);
		print("' not found");
		EndError();
	end if;
	S := sym;
}

%type eitherid {[Symbol]}
eitherid(S) ::= ID(T).
{
	var sym := LookupSymbol(0 as [Namespace], T.string);
	if sym == (0 as [Symbol]) then
		sym := AddSymbol(0 as [Namespace], T);
	end if;
	S := sym;
}

/* --- Subroutine calls -------------------------------------------------- */

%include
{
	sub i_check_sub_call_args()
		var subr := current_call.subr;
		if current_call.num_input_args != subr.num_input_parameters then
			StartError();
			print("subroutine ");
			print(subr.name);
			print(" takes ");
			print_i8(subr.num_input_parameters);
			print(" but was given ");
			print_i8(current_call.num_input_args);
			EndError();
		end if;
	end sub;

	sub i_end_call()
		EmitterReferenceSubroutine(current_subr, current_call.subr);
		var call := current_call;
		current_call := call.parent;
		Free(call as [uint8]);
	end sub;
}

expression(E) ::= startsubcall inputargs.
{
	var subr := current_call.subr;
	current_call.num_output_args := 1;
	i_check_sub_call_args();
	if subr.num_output_parameters != 1 then
		SimpleError("subroutines called as functions must have exactly one output parameter");
	end if;

	var param := subr.first_output_parameter;
	E := MidCalle(param.vardata.type.typedata.width as uint8, subr);
	E.type := param.vardata.type;

	i_end_call();
}

statement ::= startsubcall inputargs SEMICOLON.
{
	var subr := current_call.subr;
	i_check_sub_call_args();
	if subr.num_output_parameters != 0 then
		SimpleError("subroutine requires output arguments");
	end if;

	Generate(MidCall(subr));

	i_end_call();
}

statement ::= outputargs(A) ASSIGN startsubcall inputargs SEMICOLON.
{
	var subr := current_call.subr;
	i_check_sub_call_args();

	Generate(MidCall(subr));

	var param := subr.first_output_parameter;
	var count: uint8 := 0;
	var node := A;
	while node != (0 as [Node]) loop
		if param == (0 as [Symbol]) then
			SimpleError("too many output arguments");
		end if;

		var arg := node.left;
		node.left := (0 as [Node]);
		node := node.right;

		if IsPtr(arg.type) == 0 then
			SimpleError("you can only assign to lvalues");
		end if;

		CheckExpressionType(arg, MakePointerType(param.vardata.type));
		CheckNotPartialType(param.vardata.type);
		CheckNotPartialType(arg.type);
		Generate(MidPoparg(param.vardata.type.typedata.width as uint8, arg, subr, count));

		count := count + 1;
		param := param.vardata.next_parameter;
	end loop;
	Discard(A);

	if count != subr.num_output_parameters then
		SimpleError("too few output arguments");
	end if;

	i_end_call();
}

startsubcall ::= oldid(S).
{
	if S.kind != SUB then
		StartError();
		print("expected ");
		print(S.name);
		print(" to be a subroutine");
		EndError();
	end if;

	var call := Alloc(@bytesof SubroutineCall) as [SubroutineCall];
	call.parent := current_call;
	call.subr := S.subr;
	call.input_parameter := S.subr.first_input_parameter;
	call.output_parameter := S.subr.first_output_parameter;
	current_call := call;
}

inputargs ::= OPENPAREN CLOSEPAREN.
inputargs ::= OPENPAREN inputarglist CLOSEPAREN.

inputarglist ::= inputarg.
inputarglist ::= inputarglist COMMA inputarg.

inputarg ::= expression(E).
{
	var param := current_call.input_parameter;
	if param == (0 as [Symbol]) then
		StartError();
		print("too many parameters in call to ");
		print(current_call.subr.name);
		EndError();
	end if;

	current_call.input_parameter := current_call.input_parameter.vardata.next_parameter;
	CheckExpressionType(E, param.vardata.type);
	CheckNotPartialType(param.vardata.type);
	CheckNotPartialType(E.type);
	Generate(MidPusharg(NodeWidth(E), E, current_call.subr, current_call.num_input_args));
	current_call.num_input_args := current_call.num_input_args + 1;
}

/* Output arguments get parsed before we know what subroutine they belong
 * to. So, we can't type check and emit code for them. Instead we assemble
 * them into a chain of PAIRs so that the rule above which handles multi-
 * return-value statements can do the type checking and codegen. */

%type outputargs {[Node]}
outputargs(R) ::= OPENPAREN outputarglist(A) CLOSEPAREN.
{
	R := A;
}

%type outputarglist {[Node]}
outputarglist(A) ::= lvalue(E).
{
	A := MidPair(E, 0 as [Node]);
}

outputarglist(A) ::= outputarglist(L) COMMA lvalue(E).
{
	A := MidPair(E, L);
}

/* --- Subroutine definitions -------------------------------------------- */

statement ::= SUB substart subparams subgen statements END SUB.
{
	Generate(MidEndsub(current_subr));

	break_label := current_subr.old_break_label;
	continue_label := current_subr.old_continue_label;
	current_subr := current_subr.parent;
}

substart ::= newid(S).
{
	var subr := Alloc(@bytesof Subroutine) as [Subroutine];
	subr.name := S.name;
	subr.namespace.parent := &current_subr.namespace;
	subr.id := AllocLabel();
	subr.old_break_label := break_label;
	break_label := 0;
	subr.old_continue_label := continue_label;
	continue_label := 0;

	S.kind := SUB;
	S.subr := subr;

	# Make sure that this subroutine refers to its lexical parent.

	EmitterDeclareSubroutine(subr);
	EmitterReferenceSubroutine(subr, current_subr);

	subr.parent := current_subr;
	current_subr := subr;
}

subgen ::= .
{
	Generate(MidStartsub(current_subr));
}

subparams ::= inparamlist.
{
	current_subr.num_output_parameters := 0;
}

subparams ::= inparamlist COLON paramlist(OUTS).
{
	current_subr.first_output_parameter := OUTS;
	current_subr.num_output_parameters := CountParameters(OUTS);
}

inparamlist ::= paramlist(INS).
{
	current_subr.first_input_parameter := INS;
	current_subr.num_input_parameters := CountParameters(INS);
}

%type paramlist {[Symbol]}
paramlist(R) ::= OPENPAREN CLOSEPAREN.
{
	R := 0 as [Symbol];
}

paramlist(R) ::= OPENPAREN params(R1) CLOSEPAREN.
{
	R := R1;
}

%type params {[Symbol]}
params(R) ::= param(P).
{
	R := P;
}

params(R) ::= param(P) COMMA params(R1).
{
	P.vardata.next_parameter := R1;
	R := P;
}

%type param {[Symbol]}
param(R) ::= newid(S) COLON typeref(T).
{
	S.kind := VAR;
	InitVariable(S, T);
	R := S;
}

/* --- Records ----------------------------------------------------------- */

%include
{
	sub SymbolRedeclarationError()
		StartError();
		print("attempt to redefine ");
		print(current_type.name);
		EndError();
	end sub;
}

statement ::= RECORD recordstart recordinherits recordmembers END RECORD.
{
	current_type.typedata.stride := ArchAlignUp(
		current_type.typedata.width, current_type.typedata.alignment);
}

recordstart ::= eitherid(S).
{
	current_type := S;
	if (current_type.kind != 0) and (current_type.kind != TYPE) then
		SymbolRedeclarationError();
	end if;
	if (current_type.typedata.kind != 0) and (current_type.typedata.kind != TYPE_PARTIAL) then
		SymbolRedeclarationError();
	end if;
	current_type.kind := TYPE;
	current_type.typedata.kind := TYPE_RECORD;
}

recordinherits ::= .

recordinherits ::= COLON typeref(T).
{
	CheckNotPartialType(T);
	if IsRecord(T) == 0 then
		StartError();
		print(T.name);
		print(" is not a record type");
		EndError();
	end if;

	current_type.typedata.alignment := T.typedata.alignment;
	current_type.typedata.width := T.typedata.width;
	current_type.typedata.recordtype.namespace.parent := &T.typedata.recordtype.namespace;
}

recordmembers ::= .
recordmembers ::= recordmember recordmembers.

recordmember ::= memberid(S) recordat(A) COLON typeref(T) SEMICOLON.
{
	CheckNotPartialType(T);
	S.kind := VAR;
	S.vardata.type := T;
	if T.typedata.alignment > current_type.typedata.alignment then
		current_type.typedata.alignment := T.typedata.alignment;
	end if;
	ArchInitMember(current_type, S, A);
}

%type recordat {Size}
recordat(A) ::= .
{
	A := current_type.typedata.width;
}

recordat(A) ::= AT OPENPAREN cvalue(C) CLOSEPAREN.
{
	A := C as Size;
}

%type memberid {[Symbol]}
memberid(S) ::= ID(T).
{
	S := AddSymbol(0 as [Namespace], T);
	current_type.typedata.recordtype.members := current_type.typedata.recordtype.members + 1;
}

/* --- Inline assembly --------------------------------------------------- */

statement ::= asmstart asms SEMICOLON.
{
	Generate(MidAsmend());
}

asmstart ::= ASM.
{
	Generate(MidAsmstart());
}

asms ::= asm.
asms ::= asm COMMA asms.

asm ::= STRING(T).
{
	Generate(MidAsmtext(T.string));
	Free(T.string);
	T.string := 0 as string;
}

asm ::= NUMBER(T).
{
	Generate(MidAsmvalue(T.number));
}

asm ::= oldid(S).
{
	var k := S.kind;
	if (k == VAR) or (k == SUB) then
		Generate(MidAsmsymbol(S));
	elseif k == CONST then
		Generate(MidAsmvalue(S.constant));
	else
		SimpleError("you can only emit references to variables, subroutines, or constants");
	end if;
}

