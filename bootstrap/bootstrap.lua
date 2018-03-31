#!/usr/bin/lua5.2
-- Cowgol bootstrap compiler.
-- Shoddy compiler which compiles into shoddy C.

local stream
local current_filename = nil
local functions = {}
local variables = {}
local current_fn = nil
local record_fn = {name="record", code={}}
local root_ns = {}
local current_ns = root_ns
local unique_id = 0
local temporaries = {}

function set(...)
    local t = {}
    for _, s in ipairs({...}) do
        t[s] = true
    end
    return t
end

local compilation_flags = {} -- set("DEBUG")

local infix_operators = set("+", "-", "*", "/", "<<", ">>", "<", ">", "<=", ">=", "==", "!=",
    "&", "|", "^", "%", "and", "or")
local postfix_operators = set("as")

function log(...)
    io.stderr:write(string.format(...), "\n")
end

function fatal(...)
    local s = string.format(...)
    if stream then
        s = s .. string.format(" at about line %s of %s", stream:line() or "?", current_filename)
    end
    error(s)
end

function tokenstream(source)
    local patterns = {
        "^(\n)",
        "^([%w@$][%w%d_]*)",
        "^(<<)",
        "^(>>)",
        "^([<>!:=]=)",
        "^([-+*/():;,.'<>[%]&|^%%~{}])"
    }

    local line = 1
    local function parser()
        local pushed_contexts = {}
        local o = 1

        local function check_patterns()
            for _, p in ipairs(patterns) do
                local _, nexto, m = source:find(p, o)
                if nexto then
                    o = nexto + 1
                    coroutine.yield(m)
                    return
                end
            end

            fatal("cannot parse text: %s...", source:sub(o, o+20))
        end

        local function decode_escape(s)
            if (s == "n") then
                return "\n"
            elseif (s == "r") then
                return "\r"
            elseif (s == "0") then
                return "\0"
            elseif (s == "\\") then
                return "\\"
            elseif (s == "'") or (s == "\"") then
                return s
            else
                fatal("unrecognised string escape '\\%s'", s)
            end
        end

        local function parse_string()
            local t = {}
            while true do
                while true do
                    local _, nexto, m = source:find('^([^"\\]+)', o)
                    if nexto then
                        t[#t+1] = m
                        o = nexto + 1
                        break
                    end

                    _, nexto, m = source:find("^\\(.)", o)
                    if nexto then
                        t[#t+1] = decode_escape(m)
                        o = nexto + 1
                        break
                    end

                    _, nexto = source:find('^"', o)
                    if nexto then
                        o = nexto + 1
                        return table.concat(t)
                    end

                    break
                end
            end
        end

        while true do
            while (o <= #source) do
                while true do
                    local nexto, m, _
                    _, nexto = source:find("^[\t\r ]+", o)
                    if nexto then
                        o = nexto + 1
                        break
                    end

                    _, nexto = source:find("^#[^\n]*", o)
                    if nexto then
                        o = nexto + 1
                        break
                    end

                    _, nexto, m = source:find("^(0x[0-9a-fA-F_]+)", o)
                    if nexto then
                        o = nexto + 1
                        coroutine.yield("number", tonumber(m:sub(3):gsub("_", ""), 16))
                        break
                    end

                    _, nexto, m = source:find("^(0o[0-1_]+)", o)
                    if nexto then
                        o = nexto + 1
                        coroutine.yield("number", tonumber(m:sub(3):gsub("_", ""), 8))
                        break
                    end

                    _, nexto, m = source:find("^(0b[0-1_]+)", o)
                    if nexto then
                        o = nexto + 1
                        coroutine.yield("number", tonumber(m:sub(3):gsub("_", ""), 2))
                        break
                    end

                    _, nexto, m = source:find("^([%d_]+)", o)
                    if nexto then
                        o = nexto + 1
                        coroutine.yield("number", tonumber(m:gsub("_", ""), 10))
                        break
                    end

                    _, nexto = source:find('^"', o)
                    if nexto then
                        o = nexto + 1
                        coroutine.yield("string", parse_string())
                        break
                    end

                    _, nexto, m = source:find("^'\\(.)'", o)
                    if nexto then
                        o = nexto + 1
                        m = decode_escape(m)
                        coroutine.yield("number", m:byte(1))
                        break
                    end

                    _, nexto, m = source:find("^'(.)'", o)
                    if nexto then
                        o = nexto + 1
                        coroutine.yield("number", m:byte(1))
                        break
                    end

                    _, nexto = source:find("^%$include[ \t\r]+\"", o)
                    if nexto then
                        o = nexto + 1
                        local new_filename = parse_string()
                        pushed_contexts[#pushed_contexts+1] = {current_filename, line, source, o}
                        current_filename = new_filename
                        line = 1
                        o = 1
                        source = io.open(current_filename):read("*a")
                        if not source then
                            fatal("couldn't open hack include %s", current_filename)
                        end
                        break
                    end

                    check_patterns()
                    break
                end
            end

            if #pushed_contexts == 0 then
                while true do
                    coroutine.yield("eof")
                end
            else
                current_filename, line, source, o = unpack(pushed_contexts[#pushed_contexts])
                pushed_contexts[#pushed_contexts] = nil
            end
        end
    end

    local c = coroutine.create(parser)
    return {
        next = function(self)
			while true do
				local status, token, value = coroutine.resume(c)
				if not status then
					fatal("parse error: %s", token)
				elseif (token == "\n") then
					line = line + 1
				else
					return token, value
				end
			end
        end,

        line = function(self)
            return line
        end,
    }
end

function filteredtokenstream(stream)
	local c = coroutine.create(
		function()
			while true do
				local token, value = stream:next()
				if token == "$if" then
					token, value = stream:next()
					if not compilation_flags[token] then
						while true do
							token, value = stream:next()
							if token == "$endif" then
								break
							end
						end
					end
				elseif token == "$endif" then
                    -- consume silently
                elseif token == "$set" then
                    token, value = stream:next()
                    compilation_flags[token] = true
                elseif token == "$unset" then
                    token, value = stream:next()
                    compilation_flags[token] = false
				else
					coroutine.yield(token, value)
				end
			end
		end
	)

	return {
		next = function(self)
			local status, token, value = coroutine.resume(c)
			if not status then
				fatal("parse error: %s", token)
			end
			return token, value
		end,

		line = function(self)
			return stream:line()
		end
	}
end

function peekabletokenstream(stream)
	local peekedline, peekedtoken, peekedvalue
	local line

	return {
		next = function(self)
			local t, v
			if peekedtoken then
				line = peekedline
				t, v = peekedtoken, peekedvalue
				peekedtoken = nil
			else
				t, v = stream:next()
				line = stream:line()
			end
			return t, v
		end,

		peek = function(self)
			if not peekedtoken then
				peekedtoken, peekedvalue = stream:next()
				peekedline = stream:line()
			end
			return peekedtoken, peekedvalue
		end,

		line = function(self)
			return line
		end
	}
end

function nextid()
    unique_id = unique_id + 1
    return unique_id
end

function emit(...)
    local s = string.format(...)
    current_fn.code[#current_fn.code + 1] = s
end

function unexpected_keyword(token)
    fatal("unexpected keyword '%s'", token)
end

function already_defined(token)
    fatal("name '%s' is already defined at this level of scope", token)
end

function check_undefined(token, ns)
    if not ns then
        ns = current_ns
    end

    if ns[token] then
        already_defined(token)
    end
end

function expect(...)
    local e = {...}
    local t, v = stream:next()
    for _, tt in ipairs(e) do
        if (t == tt) then
            return t, v
        end
    end
    fatal("got '%s', expected %s", t, table.concat(e, ", "))
end

function lookup_symbol(id, ns)
    ns = ns or current_ns
    while ns do
        local sym = ns[id]
        if sym then
            return sym
        end
        ns = ns[".prev"]
    end
    return nil
end

function new_storage_for(name)
    local fn = current_fn

    local fnname
    if not fn then
        return "global_"..name
    else
        return fn.name.."_"..name.."_"..nextid()
    end
end

function create_symbol(name, ns)
    if not ns then
        ns = current_ns
    end

    local sym = {}

    check_undefined(name, ns)
    ns[name] = sym
    return sym
end

function create_variable(name, type, ns)
    local var = create_symbol(name, ns)
    var.kind = "variable"
    var.storage = new_storage_for(name)
    var.type = type
    variables[var] = true
    return var
end

function create_extern_variable(name, type, ns, storage)
    local var = create_variable(name, type, ns)
    var.storage = storage
    return var
end

function create_const(name, value, ns)
    local const = create_symbol(name, ns)
    const.kind = "number"
    const.storage = tonumber(value)
    const.type = root_ns["number"]
    return const
end

function create_number(value)
    v = tonumber(value)

    return {
        kind = "number",
        type = root_ns["number"],
        storage = value
    }
end

function create_string(v)
    local storage = "string_"..nextid()
    local bytes = {}
    for i = 1, #v do
        bytes[#bytes+1] = v:byte(i)
    end
    bytes[#bytes+1] = 0
    emit("static int8_t %s[] = {%s};", storage, table.concat(bytes, ", "))

    return {
        kind = "string",
        type = pointer_of(root_ns["int8"]),
        storage = storage
    }
end

function create_array_deref(base, index)
    return {
        kind = "arrayderef",
        storage = string.format("%s[%s]", base.storage, index.storage),
        type = base.type.elementtype
    }
end

function create_record_deref(base, membername)
    local recordtype
    if base.type.pointer then
        recordtype = base.type.elementtype
    else
        recordtype = base.type
    end
    if not recordtype then
        fatal("type '%s' is not a record or a pointer to a record", base.type.name)
    end

    local member
    local currenttype = recordtype
    while true do
        member = lookup_symbol(membername, currenttype.members)
        if member then
            break
        end
        currenttype = currenttype.supertype
        if not currenttype then
            fatal("'%s' is not a member of %s", membername, recordtype.name)
        end
    end

    return {
        kind = "recordderef",
        storage = string.format("%s%s%s", base.storage,
            base.type.pointer and "->" or ".", member.storage),
        type = member.type
    }
end

function create_addrof(value)
    return {
        kind = "variable",
        storage = "&"..value.storage,
        type = pointer_of(value.type)
    }
end

function create_function(name, storage)
    local fn = {}
    fn.kind = "function"
    fn.name = name
    fn.storage = storage
    fn.parameters = {}
    fn.namespace = {[".prev"] = current_ns}
    fn.code = {}

    check_undefined(name)
    current_ns[name] = fn
    functions[fn] = true
    return fn
end

function create_extern_function(name, storage, ...)
    local fn = create_function(name, storage)
    fn.parameters = {...}
    return fn
end

function create_tempvar(type)
    for v in pairs(temporaries) do
        if (v.type == type) then
            temporaries[v] = nil
            return v
        end
    end

    local var = create_variable("_temp_"..nextid(), type, root_ns)
    var.temporary = true
    return var
end

function free_tempvar(var)
    temporaries[var] = true
end

function type_check(want, got)
    if want.numeric and got.numeric then
        return
    end
    if got and (want ~= got) then
        fatal("type mismatch: wanted %s, but got %s", want.name, got.name)
    end
end

function read_type()
    local indirections = 0
    local t

    while true do
        t = stream:next()
        if (t == "[") then
            indirections = indirections + 1
        else
            break
        end
    end

    local sym = lookup_symbol(t)
    if not sym or (sym.kind ~= "type") then
        fatal("'%s' is not a type in scope", t)
    end

    while true do
        local t = stream:peek()
        if (t == "]") then
            if (indirections > 0) then
                sym = pointer_of(sym)
                expect("]")
                indirections = indirections - 1
            else
                break
            end
        elseif (t == "[") then
            expect("[");
            local t, v = stream:next();
            if t == "number" then
                v = tonumber(v)
            else
                vsym = lookup_symbol(t)
                if not vsym or (vsym.kind ~= "number") then
                    fatal("'%s' is not a number in scope", t)
                end
                v = vsym.storage
            end
            expect("]");
            sym = array_of(sym, v)
        else
            break
        end
    end
    return sym
end

function pointer_of(type)
    if not type.pointertype then
        type.pointertype = {
            kind = "type",
            name = "["..type.name.."]",
            size = 1,
            ctype = type.ctype.."*",
            numeric = false,
            elementtype = type,
            pointer = true,
        }
    end
    return type.pointertype
end

function array_of(type, length)
    return {
        kind = "type",
        name = type.name.."["..length.."]",
        length = length,
        ctype = type.ctype,
        numeric = false,
        elementtype = type,
        array = true
    }
end

function do_parameter(inout)
    local name = stream:next()
    expect(":")
    local type = read_type()

    local var = create_variable(name, type)
    current_fn.parameters[#current_fn.parameters + 1] = {
        name = name,
        inout = inout,
        variable = current_ns[name]
    }
end

function do_parameter_list(inout)
    while true do
        local t = stream:peek()
        if (t == ")") then
            break
        end
        do_parameter(inout)
        t = stream:peek()
        if (t == ")") then
            break
        end
        expect(",")
    end
end

function do_sub()
    expect("sub")
    local name = stream:next()

    local fn = create_function(name, new_storage_for(name))

    local old_ns = current_ns
    current_ns = {}
    current_ns[".prev"] = old_ns
    local old_fn = current_fn
    current_fn = fn

    expect("(")
    do_parameter_list("in")
    expect(")")

    if (stream:peek() == ":") then
        stream:next()
        expect("(")
        do_parameter_list("out")
        expect(")")
    end

    emit("void %s(void) {", current_fn.storage)
    do_statements()
    expect("end")
    expect("sub")
    emit("}")

    current_fn = old_fn
    current_ns = old_ns
end

function do_statements()
    while true do
        local t = stream:peek()
        if (t == "end") or (t == "else") or (t == "elseif") or (t == "eof") then
            break
        end

        local t = stream:peek()
        if (t == ";") then
            -- do nothing
        elseif (t == "sub") then
            do_sub()
        elseif (t == "var") then
            do_var()
        elseif (t == "const") then
            do_const()
        elseif (t == "while") then
            do_while()
        elseif (t == "loop") then
            do_loop()
        elseif (t == "if") then
            do_if()
        elseif (t == "record") then
            do_record()
        elseif (t == "type") then
            do_type()
        elseif (t == "break") then
            expect("break")
            emit("break;")
        elseif (t == "return") then
            expect("return")
            emit("return;")
        elseif (t == "(") then
            do_function_call()
        else
            local sym = lookup_symbol(t)
            if sym then
                if (sym.kind == "function") then
                    do_function_call()
                elseif (sym.kind == "variable") then
                    do_assignment()
                else
                    fatal("don't know what to do with %s '%s'", sym.kind, t)
                end
            else
                fatal("unsupported statement '%s'", t)
            end
        end
        expect(";")
    end
end

function do_array_initialiser(var)
    local type = var.type
    if not type.array or not type.elementtype.numeric then
        fatal("you can only use array initialisers on arrays of numbers")
    end

    expect("{")
    local i = 0
    while (i < type.length) do
        if stream:peek() == "}" then
            break
        end

        local deref = create_array_deref(var, create_number(i))
        expression(deref)
        i = i + 1

        if stream:peek() == "}" then
            break
        end
        expect(",")
    end
    expect("}")

    while (i < type.length) do
        i = i + 1
    end

    var.initialiser = {}
end

function do_var()
    expect("var")
    local varname = stream:next()
    expect(":")
    local type = read_type()
    local var = create_variable(varname, type)

    local t = stream:peek()
    if (t == ":=") then
        expect(":=")
        t = stream:peek()
        if (t == "{") then
            do_array_initialiser(var);
        else
            expression(var)
        end
    end
end

function do_record()
    expect("record")
    local typename = stream:next()

    local supertype = nil
    if (stream:peek() == ":") then
        expect(":")
        supertype = read_type()
        if not supertype.record then
            fatal("can't inherit from '%s' as it's not a record type", supertype.name)
        end
    end

    local sym = create_symbol(typename)
    sym.kind = "type"
    sym.name = typename
    sym.ctype = "struct " .. new_storage_for(typename)
    sym.members = {}
    sym.record = true
    sym.supertype = supertype

    local old_fn = current_fn
    current_fn = record_fn
    local old_ns = current_ns
    current_ns = sym.members
    current_ns[".prev"] = old_ns
    emit(sym.ctype .. " {")

    if sym.supertype then
        emit(supertype.ctype..";")
    end

    while true do
        local t = stream:peek()
        if (t == "end") then
            break
        end

        local membername = stream:next()
        expect(":")
        local membertype = read_type()
        expect(";")

        local member = create_symbol(membername)
        member.kind = "member"
        member.storage = new_storage_for(membername)
        member.type = membertype

        if member.type.array then
            emit(member.type.ctype.." "..member.storage.."["..member.type.length.."];")
        else
            emit(member.type.ctype.." "..member.storage..";")
        end
    end

    emit("} __attribute__((packed));")
    current_fn = old_fn
    current_ns = old_ns

    expect("end")
    expect("record")
end

function do_type()
    expect("type")
    local newname = stream:next()
    expect(":=")
    local oldtype = read_type()

    check_undefined(newname)
    current_ns[newname] = oldtype
end

function do_const()
    expect("const")
    local name = stream:next()
    expect(":=")
    local _, v = expect("number")
    local var = create_const(name, v)
end

function do_assignment()
    local lvalue = lvalue_leaf()
    expect(":=")
    expression(lvalue)
end

function do_expression_function_call(sym)
    expect("(")

    local outvar = nil
    local first = true
    for _, p in ipairs(sym.parameters) do
        if (p.inout == "out") then
            if outvar then
                fatal("%s has more than one output parameter; can't call inside expressions", sym.name)
            end
            outvar = p
        else
            if not first then
                expect(",")
            end
            first = false

            expression(p.variable)
        end
    end
    if not outvar then
        fatal("%s does not have a single output parameter; can't call inside expressions", sym.name)
    end

    expect(")")
    emit("%s();", sym.storage)

    local temp = create_tempvar(outvar.variable.type)
    emit("%s = %s;", temp.storage, outvar.variable.storage)
    return temp
end

function lvalue_leaf()
    local t = stream:next()
    if (t == "number") or (t == "string") then
        fatal("can't use constants as lvalues")
    end
    local sym = lookup_symbol(t)
    if not sym then
        fatal("'%s' is not a symbol in scope", t)
    end
    if (sym.kind ~= "variable") then
        fatal("can't assign to '%s'", t)
    end

    while true do
        local t = stream:peek()
        if (t == "[") then
            expect("[");
            local index = create_tempvar(root_ns["uint16"])
            expression(index)
            sym = create_array_deref(sym, index)
            expect("]");
        elseif (t == ".") then
            expect(".")
            t = stream:next()
            sym = create_record_deref(sym, t)
        else
            break
        end
    end
    return sym
end

function rvalue_leaf()
    local t, v = stream:next()
    if (t == "number") then
        return create_number(v)
    elseif (t == "string") then
        return create_string(v)
    else
        if (t == "-") and (stream:peek() == "number") then
            t, v = stream:next()
            return create_number(-v)
        end

        local sym = lookup_symbol(t)
        if not sym then
            fatal("'%s' is not a symbol in scope", t)
        end
        if (sym.kind == "number") then
            return sym
        elseif (sym.kind == "function") then
            return do_expression_function_call(sym)
        elseif (sym.kind == "type") then
            t = stream:next()
            if (t == "@bytes") then
                local suffix = ""
                if sym.array then
                    suffix = "*"..sym.length
                end
                return {
                    kind = "number",
                    type = root_ns["number"],
                    storage = "sizeof("..sym.ctype..")"..suffix
                }
            elseif (t == "@size") then
                if not sym.array then
                    fatal("'%s' is not an array", sym.name);
                end
                return create_number(sym.length)
            else
                fatal("unknown type attribute '%s'", t)
            end
        elseif (sym.kind ~= "variable") then
            fatal("can't do %s in expressions yet", t)
        end

        while true do
            local t = stream:peek()
            if (t == "[") then
                expect("[");
                local index = create_tempvar(root_ns["uint16"])
                expression(index)
                local result = create_tempvar(sym.type.elementtype)
                emit("%s = %s[%s];", result.storage, sym.storage, index.storage)
                free_tempvar(index)
                expect("]");
                if sym.temporary then
                    free_tempvar(sym)
                end
                sym = result
            elseif (t == ".") then
                expect(".")
                t = stream:next()
                local result = create_record_deref(sym, t)
                if sym.temporary then
                    free_tempvar(sym)
                end
                sym = result
            elseif (t == "@bytes") then
                stream:next()
                local suffix = ""
                if sym.type.array then
                    suffix = "*"..sym.type.length
                end
                sym = {
                    kind = "number",
                    type = root_ns["number"],
                    storage = "sizeof("..sym.type.ctype..")"..suffix
                }
            elseif (t == "@size") then
                stream:next()
                if not sym.type.array then
                    fatal("'%s' is not an array", sym.type.name);
                end
                return create_number(sym.type.length)
            else
                break
            end
        end
        return sym
    end
end

function expression(outputvar)
    local rpn = {}
    local operators = {}

    local function flush()
        while next(operators) do
            local operator = operators[#operators]
            if (operator == "(") then
                return
            end
            operators[#operators] = nil

            rpn[#rpn+1] = operator
        end
    end

    local parens = 0
    while true do
        local t
        while true do
            t = stream:peek()
            if (t == "(") then
                expect("(")
                operators[#operators+1] = t
                parens = parens + 1
            elseif (t == "&") then
                expect("&")
                local lvalue = lvalue_leaf()
                rpn[#rpn+1] = create_addrof(lvalue)
                break
            else
                rpn[#rpn+1] = rvalue_leaf()
                break
            end
        end

        while true do
            t = stream:peek()
            if (t == "as") then
                expect("as")
                local desttype = read_type()
                rpn[#rpn+1] = {kind="cast", type=desttype}
            elseif (t == ")") and (parens > 0) then
                expect(")")
                flush()
                if (operators[#operators] ~= "(") then
                    fatal("mismatched parentheses")
                end
                operators[#operators] = nil
                parens = parens - 1
            else
                break
            end
        end
        if infix_operators[t] then
            operators[#operators+1] = {kind="infixop", op=stream:next()}
        elseif (t == ";") or (t == "loop") or (t == "then") or (t == ",") or (t == "]") or (t == "}") then
            break
        elseif (t == ")") and (parens == 0) then
            break
        end
    end
    flush()
    if next(operators) then
        fatal("mismatched parentheses")
    end

    if (#rpn == 1) then
        local op = rpn[1]
        type_check(outputvar.type, op.type)
        emit("%s = %s;", outputvar.storage, op.storage)
    else
        rpn[#rpn].rvalue = outputvar
        stack = {}

        for _, op in ipairs(rpn) do
            if (op.kind == "infixop") then
                local right = stack[#stack]
                stack[#stack] = nil
                local left = stack[#stack]
                stack[#stack] = nil

                local type
                if (op.op == "!=") or (op.op == "==") then
                    type = root_ns["bool"]
                    if left.type.pointer and right.type.numeric then
                        -- yup, okay
                    else
                        type_check(left.type, right.type)
                    end
                elseif (op.op == "<") or (op.op == "<=") or (op.op == ">") or (op.op == ">=") then
                    type_check(left.type, right.type)
                    type = root_ns["bool"]
                elseif left.type.pointer and ((op.op == "+") or (op.op == "-")) then
                    if right.type.pointer then
                        type = root_ns["int16"]
                        type_check(left.type, right.type)
                    elseif right.type.numeric then
                        type = left.type
                    else
                        fatal("can't do that to a pointer")
                    end
                else
                    type = left.type
                    type_check(type, right.type)
                end
                if not op.rvalue then
                    op.rvalue = create_tempvar(type)
                end

                type_check(type, op.rvalue.type)
                local cop = op.op
                if (cop == "or") then
                    cop = "|"
                elseif (cop == "and") then
                    cop = "&"
                end
                if left.type.pointer and not right.type.pointer then
                    emit("%s = (%s)((intptr_t)%s %s %s);",
                        op.rvalue.storage, op.rvalue.type.ctype, left.storage, cop, right.storage)
                elseif (cop == "-") and left.type.pointer and right.type.pointer then
                    emit("%s = (intptr_t)%s - (intptr_t)%s;",
                        op.rvalue.storage, left.storage, right.storage)
                else
                    emit("%s = %s %s %s;", op.rvalue.storage, left.storage, cop, right.storage)
                end
                stack[#stack+1] = op.rvalue
                if left.temporary then
                    free_tempvar(left)
                end
                if right.temporary then
                    free_tempvar(right)
                end
            elseif (op.kind == "cast") then
                local value = stack[#stack]
                stack[#stack] = nil

                if not op.rvalue then
                    op.rvalue = create_tempvar(op.type)
                end
                type_check(op.type, op.rvalue.type)

                emit("%s = (%s) %s;", op.rvalue.storage, op.type.ctype, value.storage)
                stack[#stack+1] = op.rvalue
                if value.temporary then
                    free_tempvar(value)
                end
            else
                stack[#stack+1] = op
            end
        end
    end
end

function do_function_call()
    local lvalues = {}
    if stream:peek() == "(" then
        expect("(")
        local first = true
        while stream:peek() ~= ")" do
            if not first then
                expect(",")
            end
            first = false
            local lvalue = lvalue_leaf()
            lvalues[#lvalues+1] = lvalue
        end
        expect(")")
        expect(":=")
    end

    local t = stream:next()
    local sym = lookup_symbol(t)
    if not sym then
        fatal("symbol '%s' not defined", t)
    end

    expect("(")
    local first = true
    for _, p in ipairs(sym.parameters) do
        if (p.inout == "in") then
            if not first then
                expect(",")
            end
            first = false
            expression(p.variable)
        end
    end
    expect(")")

    emit("%s();", sym.storage)

    local i = 1
    for _, p in ipairs(sym.parameters) do
        if (p.inout == "out") then
            local lvalue = lvalues[i]
            if not lvalue then
                fatal("not enough return values")
            end
            i = i + 1
            type_check(p.variable.type, lvalue.type)
            emit("%s = %s;", lvalue.storage, p.variable.storage)
        end
    end
    if (i - 1) ~= #lvalues then
        fatal("too many return values")
    end
end

function do_while()
    expect("while")
    emit("for (;;) {")
    local tempvar = create_tempvar(root_ns["bool"])
    expression(tempvar)
    emit("if (!(%s)) break;", tempvar.storage)
    free_tempvar(tempvar)
    expect("loop")
    do_statements()
    expect("end")
    expect("loop")
    emit("}")
end

function do_loop()
    expect("loop")
    emit("for (;;) {")
    do_statements()
    expect("end")
    expect("loop")
    emit("}")
end

function do_if()
    local nesting = 0
    expect("if")

    while true do
        local tempvar = create_tempvar(root_ns["bool"])
        expression(tempvar)
        emit("if (%s) {", tempvar.storage)
        free_tempvar(tempvar)
        expect("then")
        do_statements()

        local t = stream:peek()
        if (t ~= "elseif") then
            break;
        end
        expect("elseif")
        emit("} else {")
        nesting = nesting + 1
    end

    local t = stream:peek()
    if (t == "else") then
        expect("else")
        emit("} else {")
        do_statements()
    end
    emit("}")

    for i = 1, nesting do
        emit("}")
    end

    expect("end")
    expect("if")
end

root_ns["number"] = {
    kind = "type",
    name = "number",
    size = "1",
    ctype = "int64_t",
    numeric = true,
}

root_ns["int8"] = {
    kind = "type",
    name = "int8",
    size = "1",
    ctype = "int8_t",
    numeric = true,
}

root_ns["uint8"] = {
    kind = "type",
    name = "uint8",
    size = "1",
    ctype = "uint8_t",
    numeric = true
}

root_ns["int16"] = {
    kind = "type",
    name = "int16",
    size = "2",
    ctype = "int16_t",
    numeric = true
}

root_ns["uint16"] = {
    kind = "type",
    name = "uint16",
    size = "2",
    ctype = "uint16_t",
    numeric = true
}

root_ns["int32"] = {
    kind = "type",
    name = "int32",
    size = "4",
    ctype = "int32_t",
    numeric = true
}

root_ns["uint32"] = {
    kind = "type",
    name = "uint32",
    size = "4",
    ctype = "uint32_t",
    numeric = true
}

root_ns["bool"] = {
    kind = "type",
    name = "bool",
    size = "1",
    ctype = "bool",
    numeric = false
}

current_ns = root_ns

local extern_i8 = create_extern_variable(" i8", root_ns["int8"], root_ns, "extern_i8")
local extern_i8_2 = create_extern_variable(" i8_2", root_ns["int8"], root_ns, "extern_i8_2")
local extern_i16 = create_extern_variable(" i16", root_ns["int16"], root_ns, "extern_i16")
local extern_i32 = create_extern_variable(" i32", root_ns["int32"], root_ns, "extern_i32")
local extern_p8 = create_extern_variable(" p8", pointer_of(root_ns["int8"]), root_ns, "extern_p8")
local extern_u32 = create_extern_variable(" u32", root_ns["uint32"], root_ns, "extern_u32")
create_extern_function("print", "cowgol_print", { name="c", inout="in", variable=extern_p8 })
create_extern_function("print_bytes", "cowgol_print_bytes",
    { name="c", inout="in", variable=extern_p8 },
    { name="len", inout="in", variable=extern_i8 })
create_extern_function("print_char", "cowgol_print_char", { name="c", inout="in", variable=extern_i8 })
create_extern_function("print_i8", "cowgol_print_i8", { name="c", inout="in", variable=extern_i8 })
create_extern_function("print_i16", "cowgol_print_i16", { name="c", inout="in", variable=extern_i16 })
create_extern_function("print_i32", "cowgol_print_i32", { name="c", inout="in", variable=extern_i32 })
create_extern_function("print_hex_i8", "cowgol_print_hex_i8", { name="c", inout="in", variable=extern_i8 })
create_extern_function("print_hex_i16", "cowgol_print_hex_i16", { name="c", inout="in", variable=extern_i16 })
create_extern_function("print_hex_i32", "cowgol_print_hex_i32", { name="c", inout="in", variable=extern_i32 })

create_extern_function("exit", "cowgol_exit", { name="c", inout="in", variable=extern_i8 })

create_extern_function("file_openin", "cowgol_file_openin",
    { name="name", inout="in", variable=extern_p8 },
    { name="fd", inout="out", variable=extern_i8 }
)
create_extern_function("file_openout", "cowgol_file_openout",
    { name="name", inout="in", variable=extern_p8 },
    { name="fd", inout="out", variable=extern_i8 }
)
create_extern_function("file_openup", "cowgol_file_openup",
    { name="name", inout="in", variable=extern_p8 },
    { name="fd", inout="out", variable=extern_i8 }
)
create_extern_function("file_getchar", "cowgol_file_getchar",
    { name="fd", inout="in", variable=extern_i8 },
    { name="byte", inout="out", variable=extern_i8 },
    { name="eof", inout="out", variable=extern_i8_2 }
)
create_extern_function("file_putchar", "cowgol_file_putchar",
    { name="fd", inout="in", variable=extern_i8 },
    { name="byte", inout="in", variable=extern_i8_2 }
)
create_extern_function("file_getblock", "cowgol_file_getblock",
    { name="fd", inout="in", variable=extern_i8 },
    { name="ptr", inout="in", variable=extern_p8 },
    { name="size", inout="in", variable=extern_u32 },
    { name="eof", inout="out", variable=extern_i8_2 }
)
create_extern_function("file_putblock", "cowgol_file_putblock",
    { name="fd", inout="in", variable=extern_i8 },
    { name="ptr", inout="in", variable=extern_p8 },
    { name="size", inout="in", variable=extern_u32 }
)
create_extern_function("file_seek", "cowgol_file_seek",
    { name="fd", inout="in", variable=extern_i8 },
    { name="offset", inout="in", variable=extern_u32 }
)
create_extern_function("file_tell", "cowgol_file_tell",
    { name="fd", inout="in", variable=extern_i8 },
    { name="offset", inout="out", variable=extern_u32 }
)
create_extern_function("file_ext", "cowgol_file_ext",
    { name="fd", inout="in", variable=extern_i8 },
    { name="offset", inout="out", variable=extern_u32 }
)
create_extern_function("file_eof", "cowgol_file_eof",
    { name="fd", inout="in", variable=extern_i8 },
    { name="eof", inout="out", variable=extern_i8 }
)
create_extern_function("file_close", "cowgol_file_close",
    { name="fd", inout="in", variable=extern_i8 }
)

fn = create_function("print_newline", "cowgol_print_newline")

create_extern_variable("LOMEM", pointer_of(root_ns["int8"]), root_ns, "lomem")
create_extern_variable("HIMEM", pointer_of(root_ns["int8"]), root_ns, "himem")
create_extern_variable("ARGC", root_ns["int8"], root_ns, "cowgol_argc")
create_extern_variable("ARGV", pointer_of(pointer_of(root_ns["int8"])), root_ns, "cowgol_argv")

current_fn = create_function("main", "compiled_main")

emit("void compiled_main(void) {")
for _, arg in ipairs({...}) do
    --log("reading %s", arg)
    current_filename = arg
    local source = io.open(arg):read("*a")
    stream = peekabletokenstream(filteredtokenstream(tokenstream(source)))
    do_statements()
    expect("eof")
end
emit("}")

print("#include <stdio.h>")
print("#include <stdlib.h>")
print("#include <stdint.h>")
print("#include <stdbool.h>")
print("#include \"cowgol.h\"")
print(table.concat(record_fn.code, "\n"))
for var in pairs(variables) do
    local initialiser = ""
    if var.initialiser then
        initialiser = " = {"..table.concat(var.initialiser, ", ").."}"
    end

    if var.type.array then
        print(var.type.ctype.." "..var.storage.."["..var.type.length.."]"..initialiser..";")
    else
        print(var.type.ctype.." "..var.storage..initialiser..";")
    end
end
for fn in pairs(functions) do
    print(string.format("void %s(void);", fn.storage))
end
for fn in pairs(functions) do
    print(table.concat(fn.code, "\n"))
end
