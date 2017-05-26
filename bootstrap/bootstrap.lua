#!/usr/bin/lua
-- Cowgol bootstrap compiler.
-- Shoddy compiler with compiles into shoddy C.

local stream
local functions = {}
local variables = {}
local current_fn = nil
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

local infix_operators = set("+", "-", "*", "/", "<", ">", "<=", ">=", "==", "!=", "&", "|", "^")

function log(...)
    io.stderr:write(string.format(...), "\n")
end

function fatal(...)
    local s = string.format(...)
    if stream then
        s = s .. string.format(" at about line %d", stream:line())
    end
    error(s)
end

function tokenstream(source)
    local patterns = {
        "^(\n)",
        "^(%w[%w%d_]*)",
        "^([<>!:=]=)",
        "^([-+*/():;,<>[%]&|^])"
    }

    local c = coroutine.create(
        function()
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
                            if (m == "n") then
                                m = "\n"
                            elseif (m == "0") then
                                m = "\0"
                            else
                                fatal("unrecognised string escape '\\%s'", m)
                            end

                            t[#t+1] = m
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

            while (o <= #source) do
                while true do
                    local nexto, m, _
                    _, nexto = source:find("^[\t\r ]+", o)
                    if nexto then
                        o = nexto + 1
                        break
                    end

                    _, nexto, m = source:find("^(-?0x[0-9a-fA-F]+)", o)
                    if nexto then
                        o = nexto + 1
                        coroutine.yield("number", m)
                        break
                    end

                    _, nexto, m = source:find("^(-?%d+)", o)
                    if nexto then
                        o = nexto + 1
                        coroutine.yield("number", m)
                        break
                    end

                    _, nexto = source:find('^"', o)
                    if nexto then
                        o = nexto + 1
                        coroutine.yield("string", parse_string())
                        break
                    end

                    _, nexto, m = source:find("^'(.)'", o)
                    if nexto then
                        o = nexto + 1
                        coroutine.yield("number", m:byte(1))
                        break
                    end

                    check_patterns()
                    break
                end
            end

            while true do
                coroutine.yield("eof")
            end
        end
    )

    local line = 1
    local peekedtoken = nil
    local peekedvalue = nil
    return {
        next = function(self)
            if peekedtoken then
                local p = peekedtoken
                peekedtoken = nil
                return p, peekedvalue
            else
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
            end
        end,

        peek = function(self)
            if not peekedtoken then
                peekedtoken, peekedvalue = self:next()
            end
            return peekedtoken, peekedvalue
        end,

        line = function(self)
            return line
        end,
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

function check_undefined(token)
    if current_ns[token] then
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

function lookup_symbol(id)
    local ns = current_ns
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

    check_undefined(name)
    current_ns[name] = sym
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

function create_deref(base, index)
    return {
        kind = "deref",
        storage = string.format("%s[%s]", base.storage, index.storage),
        type = base.type.elementtype
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
            local _, v = expect("number");
            expect("]");
            sym = array_of(sym, tonumber(v))
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

function do_parameter()
    local name = stream:next()
    local inout = "in"
    if (name == "in") or (name == "out") or (name == "inout") then
        inout = name
        name = stream:next()
    end
    expect(":")
    local type = read_type()

    local var = create_variable(name, type)
    current_fn.parameters[#current_fn.parameters + 1] = {
        name = name,
        inout = inout,
        variable = current_ns[name]
    }
end

function do_parameter_list()
    while true do
        local t = stream:peek()
        if (t == ")") then
            break
        end
        do_parameter()
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
    do_parameter_list()
    expect(")")

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
        elseif (t == "break") then
            expect("break")
            emit("break;")
        elseif (t == "return") then
            expect("return")
            emit("return;")
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

function do_var()
    expect("var")
    local varname = stream:next()
    expect(":")
    local type = read_type()
    local var = create_variable(varname, type)

    local t = stream:peek()
    if (t == ":=") then
        expect(":=")
        expression(var)
    end
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
        if (p.inout == "inout") then
            fatal("%s has inout parameters; can't call inside expressions")
        elseif (p.inout == "out") then
            if outvar then
                fatal("%s has more than one output parameter; can't call inside expressions")
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
        fatal("%s does not have a single output parameter; can't call inside expressions")
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
            local index = create_tempvar(root_ns["int16"])
            expression(index)
            sym = create_deref(sym, index)
            expect("]");
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
        local sym = lookup_symbol(t)
        if not sym then
            fatal("'%s' is not a symbol in scope", t)
        end
        if (sym.kind == "number") then
            return sym
        elseif (sym.kind == "function") then
            return do_expression_function_call(sym)
        elseif (sym.kind ~= "variable") then
            fatal("can't do %s in expressions yet", t)
        end

        while true do
            local t = stream:peek()
            if (t == "[") then
                expect("[");
                local index = create_tempvar(root_ns["int16"])
                expression(index)
                local result = create_tempvar(sym.type.elementtype)
                emit("%s = %s[%s];", result.storage, sym.storage, index.storage)
                free_tempvar(index)
                expect("]");
                if sym.temporary then
                    free_tempvar(sym)
                end
                sym = result
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
        local t = stream:peek()
        if (t == "(") then
            expect("(")
            operators[#operators+1] = t
            parens = parens + 1
        elseif (t == ")") then
            if (parens == 0) then
                break
            end
            expect(")")
            flush()
            if (operators[#operators] ~= "(") then
                fatal("mismatched parentheses")
            end
            operators[#operators] = nil
            parens = parens - 1
        elseif (t == "&") then
            expect("&")
            local lvalue = lvalue_leaf()
            rpn[#rpn+1] = create_addrof(lvalue)
        else
            rpn[#rpn+1] = rvalue_leaf()
        end

        t = stream:peek()
        if infix_operators[t] then
            operators[#operators+1] = {kind="infixop", op=stream:next()}
        elseif (t == ";") or (t == "loop") or (t == "then") or (t == ",") or (t == "]") then
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
                emit("%s = %s %s %s;", op.rvalue.storage, left.storage, op.op, right.storage)
                stack[#stack+1] = op.rvalue
                if left.temporary then
                    free_tempvar(left)
                end
                if right.temporary then
                    free_tempvar(right)
                end
            else
                stack[#stack+1] = op
            end
        end
    end
end

function do_function_call()
    local t = stream:next()
    local sym = lookup_symbol(t)

    expect("(")

    local lvalues = {}

    local first = true
    for _, p in ipairs(sym.parameters) do
        if not first then
            expect(",")
        end
        first = false

        if (p.inout == "in") then
            expression(p.variable)
        else
            local lvalue = lvalue_leaf()
            lvalues[#lvalues+1] = lvalue
            if (p.inout == "inout") then
                type_check(p.variable.type, lvalue.type)
                emit("%s = %s;", p.variable.storage, lvalue.storage)
            end
        end
    end

    expect(")")
    emit("%s();", sym.storage)

    local i = 1
    for _, p in ipairs(sym.parameters) do
        if (p.inout ~= "in") then
            local lvalue = lvalues[i]
            i = i + 1
            type_check(p.variable.type, lvalue.type)
            emit("%s = %s;", lvalue.storage, p.variable.storage)
        end
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
local extern_p8 = create_extern_variable(" p8", pointer_of(root_ns["int8"]), root_ns, "extern_p8")
local extern_u32 = create_extern_variable(" u32", root_ns["uint32"], root_ns, "extern_u32")
create_extern_function("print", "cowgol_print", { name="c", inout="in", variable=extern_p8 })
create_extern_function("print_char", "cowgol_print_char", { name="c", inout="in", variable=extern_i8 })
create_extern_function("print_i8", "cowgol_print_i8", { name="c", inout="in", variable=extern_i8 })
create_extern_function("print_i16", "cowgol_print_i16", { name="c", inout="in", variable=extern_i16 })
create_extern_function("print_hex_i8", "cowgol_print_hex_i8", { name="c", inout="in", variable=extern_i8 })
create_extern_function("print_hex_i16", "cowgol_print_hex_i16", { name="c", inout="in", variable=extern_i16 })

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
    { name="byte", inout="out", variable=extern_i8 }
)
create_extern_function("file_putchar", "cowgol_file_putchar",
    { name="fd", inout="in", variable=extern_i8 },
    { name="byte", inout="in", variable=extern_i8_2 }
)
create_extern_function("file_getblock", "cowgol_file_getblock",
    { name="fd", inout="in", variable=extern_i8 },
    { name="ptr", inout="in", variable=extern_p8 },
    { name="size", inout="in", variable=extern_u32 }
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
    local source = io.open(arg):read("*a")
    stream = tokenstream(source)
    do_statements()
    expect("eof")
end
emit("}")

print("#include <stdio.h>")
print("#include <stdlib.h>")
print("#include <stdint.h>")
print("#include <stdbool.h>")
print("#include \"cowgol.h\"")
for var in pairs(variables) do
    if var.type.array then
        print(var.type.ctype.." "..var.storage.."["..var.type.length.."];")
    else
        print(var.type.ctype.." "..var.storage..";")
    end
end
for fn in pairs(functions) do
    print(string.format("void %s(void);", fn.storage))
end
for fn in pairs(functions) do
    print(table.concat(fn.code, "\n"))
end
