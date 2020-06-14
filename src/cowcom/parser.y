%token ASM ASSIGN BREAK CLOSEPAREN CLOSESQ.
%token COLON CONST DOT ELSE END EXTERN.
%token IF LOOP MINUS NOT OPENPAREN OPENSQ.
%token PERCENT PLUS RECORD RETURN SEMICOLON SLASH STAR.
%token SUB THEN TILDE VAR WHILE TYPE.
%token OPENBR CLOSEBR ID NUMBER AT BYTESOF ELSEIF.
%token INT TYPEDEF SIZEOF STRING.
%token IMPL DECL EXTERN INTERFACE.

%left COMMA.
%left AND.
%left OR.
%left PIPE.
%left CARET.
%nonassoc LTOP LEOP GTOP GEOP EQOP NEOP.
%left LSHIFT RSHIFT.
%left PLUS MINUS.
%left STAR SLASH PERCENT.
%left AS.
%left AMPERSAND.
%right NEXT PREV.
%right NOT TILDE.
%right BYTESOF INDEXOF.
%right OPENSQ CLOSESQ.
%right DOT.

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
	InitVariable(current_subr, S, T);
}

statement ::= VAR newid(S) COLON typeref(T) ASSIGN expression(E) SEMICOLON.
{
	S.kind := VAR;
	InitVariable(current_subr, S, T);
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
	InitVariable(current_subr, S, type);
	CheckExpressionType(E, S.vardata.type);

	Generate(MidStore(E.type.typedata.width as uint8, E, MidAddress(S, 0)));
}

/* --- Assignments ------------------------------------------------------- */

statement ::= expression(E1) ASSIGN expression(E2) SEMICOLON.
{
	var type := E1.type;
	var address := UndoLValue(E1);

	CheckExpressionType(E2, type);
	Generate(MidStore(type.typedata.width as uint8, E2, address));
}

/* --- Simple loops ------------------------------------------------------ */

%include
{
	sub BeginNormalLoop(): (ll: [LoopLabels]) is
		ll := Alloc(@bytesof LoopLabels) as [LoopLabels];
		ll.loop_label := AllocLabel();
		ll.exit_label := AllocLabel();
		ll.old_break_label := break_label;
		ll.old_continue_label := continue_label;
		break_label := ll.exit_label;
		continue_label := ll.loop_label;
	end sub;

	sub TerminateNormalLoop(ll: [LoopLabels]) is
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
	var t := AllocLabel();
	break_label := AllocLabel();
	C.beq0.truelabel := t;
	C.beq0.falselabel := break_label;
	C.beq0.fallthrough := t;
	GenerateConditional(C);
	LL.exit_label := break_label;
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
	if continue_label == 0 then
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
	var t := AllocLabel();
	var f := AllocLabel();
	current_if.true_label := t;
	current_if.false_label := f;
	C.beq0.truelabel := t;
	C.beq0.falselabel := f;
	C.beq0.fallthrough := t;
	GenerateConditional(C);
}

if_statements ::= statements.
{
	Generate(MidJump(current_if.exit_label));
	Generate(MidLabel(current_if.false_label));
}

if_optional_else ::= .
if_optional_else ::= ELSE statements.
if_optional_else ::= ELSEIF if_conditional THEN if_statements if_optional_else.

/* --- Case -------------------------------------------------------------- */

statement ::= startcase whens END CASE SEMICOLON.
{
	if (current_case.seenelse == 0) and (current_case.next_label != 0) then
		Generate(MidLabel(current_case.next_label));
	end if;
	Generate(MidLabel(current_case.break_label));
	Generate(MidEndcase(current_case.width));

	var c := current_case;
	current_case := c.old_case;
	Free(c as [uint8]);
}

startcase ::= CASE expression(E) IS.
{
	var c := Alloc(@bytesof CaseLabels) as [CaseLabels];
	c.old_case := current_case;
	c.old_break_label := break_label;
	c.break_label := AllocLabel();
	current_case := c;

	if IsNum(E.type) == 0 then
		SimpleError("case only works on numbers");
	end if;

	c.width := NodeWidth(E);
	Generate(MidStartcase(c.width, E));
}

whens ::= .
whens ::= whens when.

when ::= beginwhen statements.

beginwhen ::= WHEN cvalue(C) COLON.
{
	if current_case.seenelse != 0 then
		SimpleError("when else must go last");
	end if;

	if current_case.next_label != 0 then
		Generate(MidJump(current_case.break_label));
		Generate(MidLabel(current_case.next_label));
	end if;
	current_case.next_label := AllocLabel();

	Generate(MidWhencase(current_case.width, C, current_case.next_label));
}

beginwhen ::= WHEN ELSE COLON.
{
	if current_case.seenelse != 0 then
		SimpleError("only one when else allowed");
	end if;
	if current_case.next_label != 0 then
		Generate(MidJump(current_case.break_label));
		Generate(MidLabel(current_case.next_label));
	end if;
	current_case.next_label := 0;

	current_case.seenelse := 1;
}

/* --- Conditional expressions ------------------------------------------- */

%type conditional {[Node]}
conditional(R) ::= OPENPAREN conditional(C) CLOSEPAREN.
{
	R := C;
}

%include
{
	sub Negate(node: [Node]) is
		node.beq0.negated := node.beq0.negated ^ 1;
	end sub;
}

conditional(R) ::= NOT conditional(C).
{
	R := C;
	Negate(C);
}

conditional(R) ::= conditional(C1) AND conditional(C2).
{
	R := MidBand(C1, C2, 0, 0, 0, 0);
}

conditional(R) ::= conditional(C1) OR conditional(C2).
{
	R := MidBor(C1, C2, 0, 0, 0, 0);
}

%include
{
	sub ConditionalEq(lhs: [Node], rhs: [Node], negated: uint8): (result: [Node]) is
		CondSimple(lhs, rhs);
		var truelabel := AllocLabel();
		var falselabel := AllocLabel();
		var w := NodeWidth(lhs);

		result := MidBeq(w, lhs, rhs, truelabel, falselabel, 0, negated);
	end sub;

	sub ConditionalLt(lhs: [Node], rhs: [Node], negated: uint8): (result: [Node]) is
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

%type leafexpression {[Node]}
leafexpression(E) ::= NUMBER(T).                           { E := MidConstant(T.number); }
leafexpression(E) ::= OPENPAREN expression(E1) CLOSEPAREN. { E := E1; }

%type expression {[Node]}
expression(E) ::= leafexpression(E1).                      { E := E1; }
expression(E) ::= MINUS expression(E1).                    { E := Expr1Simple(MIDCODE_NEG0, E1); }
expression(E) ::= TILDE expression(E1).                    { E := Expr1Simple(MIDCODE_NOT0, E1); }
expression(E) ::= expression(E1) PLUS expression(E2).      { E := ExprAdd(E1, E2); }
expression(E) ::= expression(E1) MINUS expression(E2).     { E := ExprSub(E1, E2); }
expression(E) ::= expression(E1) STAR expression(E2).      { E := Expr2Simple(MIDCODE_MUL0, MIDCODE_MUL0, E1, E2); }
expression(E) ::= expression(E1) SLASH expression(E2).     { E := Expr2Simple(MIDCODE_DIVS0, MIDCODE_DIVU0, E1, E2); }
expression(E) ::= expression(E1) PERCENT expression(E2).   { E := Expr2Simple(MIDCODE_REMS0, MIDCODE_REMU0, E1, E2); }
expression(E) ::= expression(E1) CARET expression(E2).     { E := Expr2Simple(MIDCODE_EOR0, MIDCODE_EOR0, E1, E2); }
expression(E) ::= expression(E1) AMPERSAND expression(E2). { E := Expr2Simple(MIDCODE_AND0, MIDCODE_AND0, E1, E2); }
expression(E) ::= expression(E1) PIPE expression(E2).      { E := Expr2Simple(MIDCODE_OR0, MIDCODE_OR0, E1, E2); }
expression(E) ::= expression(E1) LSHIFT expression(E2).    { E := ExprShift(MIDCODE_LSHIFT0, MIDCODE_LSHIFT0, E1, E2); }
expression(E) ::= expression(E1) RSHIFT expression(E2).    { E := ExprShift(MIDCODE_RSHIFTS0, MIDCODE_RSHIFTU0, E1, E2); }

expression(E) ::= expression(E1) AS typeref(T).
{
	CheckNotPartialType(T);
	if (E1.op != MIDCODE_CONSTANT) and (E1.type.typedata.width != T.typedata.width) then
		if (IsPtr(E1.type) != 0) or (IsPtr(T) != 0) then
			SimpleError("cast between pointer and non-pointer of different size");
		end if;

		E := MidCCast(T.typedata.width as uint8, E1, IsSNum(E1.type));
	else
		E := E1;
	end if;
	E.type := T;
}

expression(E) ::= AMPERSAND expression(E1).
{
	E := UndoLValue(E1);
	if E.op == MIDCODE_ADDRESS then
		var sym := E.address.sym;
		if IsScalar(sym.vardata.type) != 0 then
			SimpleError("you cannot take the address of scalar variables");
		end if;
	end if;
}

expression(E) ::= ALIAS AMPERSAND expression(E1).
{
	E := UndoLValue(E1);
}

%include
{
	sub parser_i_bad_next_prev() is
		SimpleError("@next and @prev only work on pointers");
	end sub;
}

expression(E) ::= NEXT expression(E1).
{
	if IsPtr(E1.type) == 0 then
		parser_i_bad_next_prev();
	end if;
	E := MidC2Op(MIDCODE_ADD0,
		intptr_type.typedata.width as uint8,
		E1,
		MidConstant(E1.type.typedata.pointertype.element.typedata.stride as Arith)
	);
	E.type := E1.type;
}

expression(E) ::= PREV expression(E1).
{
	if IsPtr(E1.type) == 0 then
		parser_i_bad_next_prev();
	end if;
	E := MidC2Op(MIDCODE_SUB0,
		intptr_type.typedata.width as uint8,
		E1,
		MidConstant(E1.type.typedata.pointertype.element.typedata.stride as Arith)
	);
	E.type := E1.type;
}

expression(E) ::= BYTESOF varortypeid(T).
{
	E := MidConstant(T.typedata.width as Arith);
}

expression(E) ::= SIZEOF varortypeid(T).
{
	if IsArray(T) == 0 then
		SimpleError("array expected");
	end if;
	E := MidConstant(T.typedata.arraytype.size as Arith);
}

leafexpression(E) ::= oldid(S).
{
	case S.kind is
		when CONST:
			E := MidConstant(S.constant);

		when VAR:
			E := MidAddress(S, 0);
			E.type := MakePointerType(S.vardata.type);
			E := MakeLValue(E);

		when SUB:
			E := MidAddress(S, 0);
			E.type := MakeSubroutineType(S.subr);

		when else:
			StartError();
			print(S.name);
			print(" is not a value");
			EndError();
	end case;
}

leafexpression(E) ::= OPENSQ expression(E1) CLOSESQ.
{
	if IsPtr(E1.type) == 0 then
		SimpleError("cannot dereference non-pointers");
	end if;

	E := MakeLValue(E1);
}

expression(E) ::= expression(E1) OPENSQ expression(E2) CLOSESQ.
{
	var type := E1.type;
	var address := UndoLValue(E1);

	if IsArray(type) == 0 then
		StartError();
		print("you can only index an array, not a ");
		print(type.name);
		EndError();
	end if;

	CheckExpressionType(E2, type.typedata.arraytype.indextype);
	if IsNum(E2.type) == 0 then
		SimpleError("array indices must be numbers");
	end if;

	var elementtype := type.typedata.arraytype.element;
	var w := intptr_type.typedata.width as uint8;

	var displacement := MidC2Op(MIDCODE_MUL0, w,
				MidCCast(intptr_type.typedata.width as uint8, E2, 0),
				MidConstant(elementtype.typedata.stride as int32));
	displacement.type := intptr_type;

	var adjustedaddress := MidC2Op(MIDCODE_ADD0, w, address, displacement);
	adjustedaddress.type := MakePointerType(elementtype);
	E := MakeLValue(adjustedaddress);
}

expression(E) ::= expression(E1) DOT ID(X).
{
	var type := E1.type;
	var address := UndoLValue(E1);

	# Dereference pointers.

	while IsPtr(type) != 0 loop
		type := type.typedata.pointertype.element;
		CheckNotPartialType(type);
		address := MidLoad(intptr_type.typedata.width as uint8, address);
	end loop;
	CheckNotPartialType(type);

	if IsRecord(type) == 0 then
		StartError();
		print(type.name);
		print(" is not a record or pointer to a record");
		EndError();
	end if;

	var member := LookupSymbol(&type.typedata.recordtype.namespace, X.string);
	if member == (0 as [Symbol]) then
		StartError();
		print(type.name);
		print(" does not contain a member '");
		print(X.string);
		print("'");
		EndError();
	end if;
	Free(X.string as [uint8]);

	E := MidC2Op(MIDCODE_ADD0,
		intptr_type.typedata.width as uint8,
		address, MidConstant(member.vardata.offset as Arith));
	E.type := MakePointerType(member.vardata.type);
	E := MakeLValue(E);
}

leafexpression(E) ::= STRING(S).
{
	# consumes S
	E := MidString(S.string);
	E.type := MakePointerType(uint8_type);
}

%include
{
	sub parser_i_constant_error() is
		SimpleError("only constant values are allowed here");
	end sub;
}

%type cvalue {Arith}
cvalue(C) ::= expression(E).
{
	if E.op != MIDCODE_CONSTANT then
		parser_i_constant_error();
	end if;
	C := E.constant.value;
	Discard(E);
}

statement ::= CONST newid(S) ASSIGN cvalue(C) SEMICOLON.
{
	S.kind := CONST;
	S.constant := C;
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

typeref(S) ::= typeref(S1) OPENSQ cvalue(C) CLOSESQ.
{
	S := MakeArrayType(S1, C as uint16);
}

typeref(S) ::= typeref(S1) OPENSQ CLOSESQ.
{
	S := MakeArrayType(S1, 0);
}

typeref(S) ::= INDEXOF varortypeid(S1).
{
	if IsArray(S1) == 0 then
		StartError();
		print(S1.name);
		print(" is not an array");
		EndError();
	end if;

	S := S1.typedata.arraytype.indextype;
}

statement ::= TYPEDEF ID(X) IS typeref(T) SEMICOLON.
{
	# consumes X
	var sym := AddAlias(0 as [Namespace], X.string, T);
}

/* --- Symbols ----------------------------------------------------------- */

%type newid {[Symbol]}
newid(S) ::= ID(T).
{
	# consumes X
	S := AddSymbol(0 as [Namespace], T.string);
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
	Free(name);
	S := sym;
}

%type eitherid {[Symbol]}
eitherid(S) ::= ID(T).
{
	var name := T.string;
	var sym := LookupSymbol(0 as [Namespace], name);
	if sym == (0 as [Symbol]) then
		sym := AddSymbol(0 as [Namespace], name);
	else
		Free(name);
	end if;
	S := sym;
}

%type varortypeid {[Symbol]}
varortypeid(T) ::= oldid(S).
{
	if S.kind == VAR then
		S := S.vardata.type;
	end if;
	if S.kind != TYPE then
		SimpleError("simple type or variable name expected");
	end if;
	T := S;
}

varortypeid(T) ::= OPENPAREN typeref(T1) CLOSEPAREN.
{
	T := T1;
}

/* --- Subroutine calls -------------------------------------------------- */

%include
{
	sub i_check_sub_call_args() is
		var subr := current_call.intfsubr;
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

	sub i_end_call() is
		EmitterReferenceSubroutine(current_subr, current_call.intfsubr);
		var call := current_call;
		current_call := call.parent;
		Free(call as [uint8]);
	end sub;
}

expression(E) ::= startsubcall inputargs(INA).
{
	var intfsubr := current_call.intfsubr;
	current_call.num_output_args := 1;
	i_check_sub_call_args();
	if intfsubr.num_output_parameters != 1 then
		SimpleError("subroutines called as functions must have exactly one output parameter");
	end if;

	var param := intfsubr.first_output_parameter;
	E := MidCalle(param.vardata.type.typedata.width as uint8, INA, current_call.expr, intfsubr);
	E.type := param.vardata.type;

	i_end_call();
}

statement ::= startsubcall inputargs(INA) SEMICOLON.
{
	var intfsubr := current_call.intfsubr;
	i_check_sub_call_args();
	if intfsubr.num_output_parameters != 0 then
		SimpleError("subroutine requires output arguments");
	end if;

	Generate(MidCall(INA, current_call.expr, intfsubr));

	i_end_call();
}

statement ::= outputargs(OUTA) ASSIGN startsubcall inputargs(INA) SEMICOLON.
{
	var intfsubr := current_call.intfsubr;
	i_check_sub_call_args();

	Generate(MidCall(INA, current_call.expr, intfsubr));

	var paramindex := intfsubr.num_output_parameters;
	var count: uint8 := 0;
	var node := OUTA;
	while node != (0 as [Node]) loop
		if paramindex == 0 then
			SimpleError("too many output arguments");
		end if;

		paramindex := paramindex - 1;
		var param := GetOutputParameter(intfsubr, paramindex);

		var arg := node.left;
		node.left := (0 as [Node]);
		node := node.right;

		if IsPtr(arg.type) == 0 then
			SimpleError("you can only assign to lvalues");
		end if;

		CheckExpressionType(arg, MakePointerType(param.vardata.type));
		CheckNotPartialType(param.vardata.type);
		CheckNotPartialType(arg.type);

		var w := param.vardata.type.typedata.width as uint8;
		Generate(
			MidStore(w,
				MidPoparg(w, intfsubr, count),
				arg
			)
		);

		count := count + 1;
		param := param.vardata.next_parameter;
	end loop;
	Discard(OUTA);

	if count != intfsubr.num_output_parameters then
		SimpleError("too few output arguments");
	end if;

	i_end_call();
}

startsubcall ::= leafexpression(E).
{
	if IsSubroutine(E.type) == 0 then
		StartError();
		print("expected ");
		print(E.type.name);
		print(" to be a subroutine");
		EndError();
	end if;

	var call := Alloc(@bytesof SubroutineCall) as [SubroutineCall];
	call.parent := current_call;
	var subr := E.type.typedata.subrtype.subr;
	call.expr := E;
	call.intfsubr := subr;
	call.input_parameter := subr.first_input_parameter;
	call.output_parameter := subr.first_output_parameter;
	current_call := call;
}


/* Produces a list of arguments to be passed into a CALL. The leftmost
 * argument is the *deepest*, so the top of the list is the rightmost.
 */

%type inputargs {[Node]}
inputargs(R) ::= OPENPAREN inputarglist(L) CLOSEPAREN.
{ R := L; }

inputargs(R) ::= OPENPAREN CLOSEPAREN.
{ R := MidEnd(); }

%type inputarglist {[Node]}
inputarglist(R) ::= inputarg(A).
{ R := A; }

inputarglist(R) ::= inputarglist(L) COMMA inputarg(A).
{
	Discard(A.left);
	A.left := L;
	R := A;
}

%type inputarg {[Node]}
inputarg(R) ::= expression(E).
{
	var param := current_call.input_parameter;
	if param == (0 as [Symbol]) then
		StartError();
		print("too many parameters in call to ");
		print(current_call.intfsubr.name);
		EndError();
	end if;

	current_call.input_parameter := current_call.input_parameter.vardata.next_parameter;
	CheckExpressionType(E, param.vardata.type);
	CheckNotPartialType(param.vardata.type);
	CheckNotPartialType(E.type);
	current_call.num_input_args := current_call.num_input_args + 1;
	R := MidArg(NodeWidth(E), MidEnd(), E,
		current_call.intfsubr,
		current_call.intfsubr.num_input_parameters - current_call.num_input_args);
}

/* Output arguments get parsed before we know what subroutine they belong
 * to. So, we can't type check and emit code for them. Instead we assemble
 * them into a chain of PAIRs so that the rule above which handles multi-
 * return-value statements can do the type checking and codegen.
 *
 * Note that this list is left-recursive, which means that the *last*
 * parameter is on the *head* of the list.
 */

%type outputargs {[Node]}
outputargs(R) ::= OPENPAREN outputarglist(L) COMMA outputarg(E) CLOSEPAREN.
{
	R := MidPair(E, L);
}

%type outputarglist {[Node]}
outputarglist(A) ::= outputarg(E).
{
	A := MidPair(E, 0 as [Node]);
}

outputarglist(A) ::= outputarglist(L) COMMA outputarg(E).
{
	A := MidPair(E, L);
}

%type outputarg {[Node]}
outputarg(E) ::= expression(E1).
{
	E := UndoLValue(E1);
}

/* --- Subroutine definitions -------------------------------------------- */

%include
{
	var preparing_subr: [Subroutine];
}

// Declare and implement a subroutine.
statement ::= SUB newsubid subparams submodifiers substart statements subend SEMICOLON.

// Declare a subroutine but don't implement it.
statement ::= DECL SUB newsubid subparams submodifiers SEMICOLON.

// Implement a previously declared subroutine.
statement ::= subimpldecl substart statements subend SEMICOLON.

// Declare an interface.
statement ::= INTERFACE newsubid(S) subparams submodifiers SEMICOLON.
{
	# newsubid created a subroutine symbol; we actually want this to
	# be a type.

	S.kind := TYPE;
	S.typedata.kind := TYPE_SUBROUTINE;
	S.typedata.width := intptr_type.typedata.width;
	S.typedata.alignment := intptr_type.typedata.alignment;
	S.typedata.stride := intptr_type.typedata.stride;
	S.typedata.subrtype.subr := preparing_subr;
	preparing_subr.flags := preparing_subr.flags | SUB_IS_INTERFACE;

	current_subr := preparing_subr;
	Generate(MidStartsub(current_subr));
	Generate(MidEndsub(current_subr));
	current_subr := current_subr.parent;
}

// Implement an interface.
statement ::= implementsstart substart statements subend SEMICOLON.

implementsstart ::= SUB newsubid IMPLEMENTS typeref(T).
{
	sub not_an_interface is
		SimpleError("type is not an interface");
	end sub;

	if IsSubroutine(T) == 0 then
		not_an_interface();
	end if;
	var intfsubr := T.typedata.subrtype.subr;
	if (intfsubr.flags & SUB_IS_INTERFACE) == 0 then
		not_an_interface();
	end if;

	preparing_subr.flags := preparing_subr.flags | SUB_IS_IMPLEMENTATION;
	preparing_subr.intfsubr := intfsubr;
	preparing_subr.type := T;
	EmitterReferenceSubroutine(current_subr, intfsubr);
	EmitterReferenceSubroutine(intfsubr, preparing_subr);

	preparing_subr.first_input_parameter :=
			CopyParameterList(intfsubr.first_input_parameter, preparing_subr);
	preparing_subr.num_input_parameters :=
			CountParameters(preparing_subr.first_input_parameter);

	preparing_subr.first_output_parameter :=
			CopyParameterList(intfsubr.first_output_parameter, preparing_subr);
	preparing_subr.num_output_parameters :=
			CountParameters(preparing_subr.first_output_parameter);
}

submodifiers ::= .

submodifiers ::= submodifiers EXTERN OPENPAREN STRING(X) CLOSEPAREN.
{
	EmitterDeclareExternalSubroutine(preparing_subr.id, X.string);
}

%type newsubid {[Symbol]}
newsubid(R) ::= newid(S).
{
	preparing_subr := Alloc(@bytesof Subroutine) as [Subroutine];
	preparing_subr.namespace.parent := &current_subr.namespace;
	preparing_subr.parent := current_subr;
	preparing_subr.id := AllocSubrId();

	preparing_subr.name := S.name;
	S.kind := SUB;
	S.subr := preparing_subr;
	EmitterDeclareSubroutine(preparing_subr);
	R := S;
}

subimpldecl ::= IMPL SUB oldid(S).
{
	if S.kind != SUB then
		SimpleError("not a subroutine");
	end if;
	preparing_subr := S.subr;
	if (preparing_subr.flags & SUB_HAS_IMPL) != 0 then
		SimpleError("subroutine already implemented");
	end if;
	if preparing_subr.parent != current_subr then
		SimpleError("cannot implement subroutine here");
	end if;
}

substart ::= IS.
{
	preparing_subr.old_break_label := break_label;
	break_label := 0;
	preparing_subr.old_continue_label := continue_label;
	continue_label := 0;

	current_subr := preparing_subr;
	Generate(MidStartsub(current_subr));
	current_subr.flags := current_subr.flags | SUB_HAS_IMPL;
}

subend ::= END SUB.
{
	Generate(MidEndsub(current_subr));

	var subr := current_subr;
	break_label := subr.old_break_label;
	continue_label := subr.old_continue_label;
	current_subr := subr.parent;

	DestructSubroutineContents(subr);
}

subparams ::= inparamlist.
{
	preparing_subr.num_output_parameters := 0;
}

subparams ::= inparamlist COLON paramlist(OUTS).
{
	preparing_subr.first_output_parameter := OUTS;
	preparing_subr.num_output_parameters := CountParameters(OUTS);
}

inparamlist ::= paramlist(INS).
{
	preparing_subr.first_input_parameter := INS;
	preparing_subr.num_input_parameters := CountParameters(INS);
}

inparamlist ::= .
{
	preparing_subr.first_input_parameter := 0 as [Symbol];
	preparing_subr.num_input_parameters := 0;
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
param(R) ::= ID(X) COLON typeref(T).
{
	# consumes X
	R := AddSymbol(&preparing_subr.namespace, X.string);

	R.kind := VAR;
	InitVariable(preparing_subr, R, T);
}

/* --- Records ----------------------------------------------------------- */

%include
{
	sub SymbolRedeclarationError() is
		StartError();
		print("attempt to redefine ");
		print(current_type.name);
		EndError();
	end sub;
}

statement ::= RECORD recordstart recordinherits IS recordmembers END RECORD.
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
	# consumes T
	S := AddSymbol(&current_type.typedata.recordtype.namespace, T.string);
	current_type.typedata.recordtype.members := current_type.typedata.recordtype.members + 1;
}

/* --- Static initialisers ----------------------------------------------- */

%include
{
	var current_member: [Symbol];    # for records only
	var current_offset: Size;        # within the current braced element
	var current_global_offset: Size; # overall

	record NestedTypeInit is
		old_current_type: [Symbol];
		old_current_member: [Symbol];
		old_current_offset: Size;
	end record;

	sub WrongNumberOfElementsError() is
		StartError();
		print("wrong number of elements in initialiser for ");
		print(current_type.name);
		EndError();
	end sub;

	sub CheckEndOfInitialiser() is
		if IsArray(current_type) != 0 then
			var memberwidth := current_type.typedata.arraytype.element.typedata.stride;
			if current_type.typedata.width == 0 then
				current_type.typedata.width := current_offset;
				var size := current_offset / memberwidth;
				current_type.typedata.arraytype.size := size;
				current_type.typedata.arraytype.indextype := ArchGuessIntType(0, (size-1) as Arith);
			end if;
			if current_offset != current_type.typedata.width then
				WrongNumberOfElementsError();
			end if;
		else
			if current_member != (0 as [Symbol]) then
				WrongNumberOfElementsError();
			end if;
		end if;
	end sub;

	sub GetInitedMember(): (member: [Symbol], type: [Symbol]) is
		member := 0 as [Symbol];

		if IsArray(current_type) != 0 then
			type := current_type.typedata.arraytype.element;
		else
			if current_member == (0 as [Symbol]) then
				type := 0 as [Symbol];
				return;
			end if;

			member := current_member;
			type := current_member.vardata.type;
			current_member := current_member.next;
		end if;
	end sub;

	sub AlignTo(alignment: uint8) is
		var newoffset := ArchAlignUp(current_global_offset, alignment);
		while current_global_offset != newoffset loop
			Generate(MidInit(1, 0));
			current_offset := current_offset + 1;
			current_global_offset := current_global_offset + 1;
		end loop;
	end sub;

	sub CheckForOverlaps(member: [Symbol]) is
		# Not for arrays.
		if member == (0 as [Symbol]) then
			return;
		end if;

		if member.vardata.offset < current_offset then
			SimpleError("out of order static initialisation");
		end if;
	end sub;

	sub GetInitedMemberChecked(): (member: [Symbol], type: [Symbol]) is
		(member, type) := GetInitedMember();
		if type == (0 as [Symbol]) then
			WrongNumberOfElementsError();
		end if;

		AlignTo(type.typedata.alignment);
		CheckForOverlaps(member);
	end sub;
}

statement ::= initdecl OPENBR initialisers CLOSEBR SEMICOLON.
{
	CheckEndOfInitialiser();
	Generate(MidEndinit());
}

initdecl ::= VAR newid(S) COLON typeref(T) ASSIGN.
{
	# We don't call InitVariable() because we don't want this variable
	# allocated to a workspace.

	CheckNotPartialType(T);
	S.kind := VAR;
	S.vardata.type := T;
	S.vardata.subr := current_subr;
	var name := Alloc(8);
	S.vardata.externname := name;
	[name+0] := COO_ESCAPE_THISCOO;
	[name+1] := 'a';
	var ptr := UIToA(AllocLabel() as uint32, 16, name+2);

	if (IsArray(T) == 0) and (IsRecord(T) == 0) then
		SimpleError("static initialisers only work on arrays or records");
	end if;
	if (IsRecord(T) != 0) and (T.typedata.recordtype.namespace.parent != (0 as [Namespace])) then
		SimpleError("you can't statically initialise an inherited record");
	end if;

	if IsRecord(T) != 0 then
		current_member := T.typedata.recordtype.namespace.first;
	end if;

	current_type := T;
	current_offset := 0;
	current_global_offset := 0;

	Generate(MidStartinit(S));
}

initialisers ::= initialiser.
initialisers ::= initialisers COMMA initialiser.

initialiser ::= .

initialiser ::= expression(E).
{
	var member: [Symbol];
	var type: [Symbol];
	(member, type) := GetInitedMemberChecked();

	AlignTo(type.typedata.alignment);
	var w := type.typedata.width;
	case E.op is
		when MIDCODE_CONSTANT:
			if IsNum(type) == 0 then
				SimpleError("initialiser must be an number");
			end if;
			Generate(MidInit(w as uint8, E.constant.value));

		when MIDCODE_STRING:
			if (IsPtr(type) == 0) or (type.typedata.pointertype.element != uint8_type) then
				SimpleError("initialiser must be a string");
			end if;
			Generate(MidInits(E.string.text));

		when MIDCODE_ADDRESS:
			if type != E.type then
				SimpleError("initialiser of wrong type");
			end if;
			Generate(MidInita(E.address.sym, E.address.off));

		when else:
			parser_i_constant_error();
	end case;
	Discard(E);

	current_offset := current_offset + w;
	current_global_offset := current_global_offset + w;
}

initialiser ::= startbracedinitialiser(R) initialisers CLOSEBR.
{
	CheckEndOfInitialiser();

	current_type := R.old_current_type;
	current_member := R.old_current_member;
	current_offset := R.old_current_offset;
	Free(R as [uint8]);
}

%type startbracedinitialiser {[NestedTypeInit]}
startbracedinitialiser(R) ::= OPENBR.
{
	var member: [Symbol];
	var type: [Symbol];
	(member, type) := GetInitedMemberChecked();
	AlignTo(type.typedata.alignment);

	R := Alloc(@bytesof NestedTypeInit) as [NestedTypeInit];
	R.old_current_type := current_type;
	R.old_current_member := current_member;
	R.old_current_offset := current_offset;

	current_type := type;
	current_offset := 0;
	if IsRecord(type) != 0 then
		current_member := type.typedata.recordtype.namespace.first;
	elseif IsArray(type) != 0 then
		current_member := 0 as [Symbol];
	else
		SimpleError("braced initialised can only initialise arrays or records");
	end if;
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
}

asm ::= NUMBER(T).
{
	Generate(MidAsmvalue(T.number));
}

asm ::= oldid(S).
{
	var k := S.kind;
	if (k == VAR) or (k == SUB) then
		if k == SUB then
			EmitterReferenceSubroutine(current_subr, S.subr);
		end if;
		Generate(MidAsmsymbol(S));
	elseif k == CONST then
		Generate(MidAsmvalue(S.constant));
	else
		SimpleError("you can only emit references to variables, subroutines, or constants");
	end if;
}

