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

local infix_operators = set("+", "-", "*", "/", "<", ">", "<=", ">=", "and", "or", "eor")

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
        "^(:=)",
        "^([<>!]=)",
        "^([-+*/():;,<>])"
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

            while (o <= #source) do
                while true do
                    local nexto, m
                    _, nexto = source:find("^[\t\r ]+", o)
                    if nexto then
                        o = nexto + 1
                        break
                    end

                    _, nexto, m = source:find("^(-?%d+U?)", o)
                    if nexto then
                        o = nexto + 1
                        coroutine.yield("number", m)
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
                        savedvalue = value
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
    log("* %s", s)
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
    local t = stream:next()
    for _, tt in ipairs(e) do
        if (t == tt) then
            return t
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

function create_variable(name, type, ns)
    if not ns then
        ns = current_ns
    end

    local var = {
        kind = "variable",
        storage = new_storage_for(name),
        type = type
    }
    check_undefined(name)
    current_ns[name] = var
    variables[var] = true
    return var
end

function create_number(value)
    local _, _, v, u = value:find("(-?%d+)(U?)")
    local type
    v = tonumber(v)
    if (u == "U") then
        if (v < 0) then
            fatal("unsigned literal out of range")
        elseif (v < 256) then
            type = root_ns["uint8"]
        elseif (v < 65536) then
            type = root_ns["uint16"]
        else
            fatal("unsigned literal out of range")
        end
    else
        if (v >= -128) and (v <= 127) then
            type = root_ns["int8"]
        elseif (v >= -32768) and (v <= 32767) then
            type = root_ns["int16"]
        else
            fatal("signed literal out of range")
        end
    end

    return {
        kind = "number",
        type = type,
        storage = value
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

function create_tempvar(type)
    for v in pairs(temporaries) do
        if (v.type == type) then
            temporaries[v] = nil
            return v
        end
    end

    local var = create_variable("_temp_"..type.name.."_"..nextid(), type, root_ns)
    var.temporary = true
    return var
end

function free_tempvar(var)
    temporaries[var] = true
end

function type_check(want, got)
    if got and (want ~= got) then
        fatal("type mismatch: wanted %s, but got %s", want.name, got.name)
    end
end

function do_type()
    local id = stream:next()
    local sym = lookup_symbol(id)
    if not sym or (sym.kind ~= "type") then
        fatal("'%s' is not a type in scope", id)
    end
    return sym
end

function do_parameter()
    local name = stream:next()
    local inout = "in"
    if (name == "in") or (name == "out") or (name == "ref") then
        inout = name
        name = stream:next()
    end
    expect(":")
    local type = do_type()

    local var = create_variable(name, type)
    current_fn.parameters[#current_fn.parameters] = {
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
        if (t == "end") then
            break
        end

        local t = stream:peek()
        if (t == "sub") then
            do_sub()
        elseif (t == "var") then
            do_var()
        elseif (t == "while") then
            do_while()
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
    end
end

function do_var()
    expect("var")
    local varname = stream:next()
    expect(":")
    local typename = stream:next()
    local type = lookup_symbol(typename)
    if not type or (type.kind ~= "type") then
        fatal("'%s' is not a type in scope", typename)
    end

    local var = create_variable(varname, type)

    local t = stream:peek()
    if (t == ":=") then
        expect(":=")
        expression(var)
    end
    expect(";")
end

function do_assignment()
    local t = stream:next()
    local sym = lookup_symbol(t)
    expect(":=")
    expression(sym)
    expect(";")
end

function rvalue_leaf()
    local t, v = stream:next()
    if (t == "number") then
        return create_number(v)
    else
        local sym = lookup_symbol(t)
        if not sym then
            fatal("'%s' is not a symbol in scope", t)
        end
        if (sym.kind == "variable") then
            return sym
        end
        fatal("can't do %s in expressions yet", t)
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
        else
            rpn[#rpn+1] = rvalue_leaf()
        end

        t = stream:peek()
        if infix_operators[t] then
            operators[#operators+1] = stream:next()
        elseif (t == ";") or (t == "do") or (t == "then") then
            break
        end
    end
    flush()
    if next(operators) then
        fatal("mismatched parentheses")
    end

    local stack = {}
    for _, s in ipairs(rpn) do
        if (type(s) == "string") then
            local right = stack[#stack]
            stack[#stack] = nil
            local left = stack[#stack]
            stack[#stack] = nil

            type_check(left.type, right.type)
            local type
            if (s == "<") or (s == ">") or (s == "<=") or (s == ">=") or (s == "==") or (s == "!=") then
                type = root_ns["bool"]
            else
                type = left.type
            end
            stack[#stack+1] = {kind="op", type=type, op=s, left=left, right=right}
        else
            stack[#stack+1] = s
        end
    end
    assert(#stack == 1)

    local function unparse(op, outputvar)
        if (op.kind == "op") then
            local t1, t2
            if (op.left.kind == "op") then
                t1 = create_tempvar(op.type)
                unparse(op.left, t1)
            else
                t1 = op.left
            end

            if (op.right.kind == "op") then
                t2 = create_tempvar(op.type)
                unparse(op.right, t2)
            else
                t2 = op.right
            end

            type_check(outputvar.type, op.type)
            emit("%s = %s %s %s;", outputvar.storage, t1.storage, op.op, t2.storage)
            if t1.temporary then
                free_tempvar(t1)
            end
            if t2.temporary then
                free_tempvar(t2)
            end
        else
            type_check(outputvar.type, op.type)
            emit("%s = %s;", outputvar.storage, op.storage)
        end
    end

    unparse(stack[1], outputvar)
end

function do_function_call()
    local t = stream:next()
    local sym = lookup_symbol(t)

    expect("(")

    local first = true
    for _, p in ipairs(sym.parameters) do
        if (p.inout == "in") or (p.inout == "ref") then
            if not first then
                expect(",")
            end
            first = false

            expression(p.variable)
        end
    end

    expect(")")
    emit("%s();", sym.storage)
    expect(";")
end

function do_while()
    expect("while")
    emit("for (;;) {")
    local tempvar = create_tempvar(root_ns["bool"])
    expression(tempvar)
    emit("if (!(%s)) break;", tempvar.storage)
    free_tempvar(tempvar)
    expect("do")
    do_statements()
    expect("end")
    expect("while")
    emit("}")
end

function compile_stream()
    while true do
        local t = stream:peek()
        if (t == "eof") then
            break
        elseif (t == "sub") then
            do_sub()
        else
            unexpected_keyword(t)
        end
    end
end

root_ns["int8"] = {
    kind = "type",
    name = "int8",
    size = "1",
    ctype = "int8_t",
    numeric = true
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

root_ns["bool"] = {
    kind = "type",
    name = "bool",
    size = "1",
    ctype = "bool",
    numeric = false
}

current_ns = root_ns
local fn = create_function("printn", "global_printn")
fn.parameters[#fn.parameters+1] = {name="c", inout="in",
    variable=create_variable("printn_c", current_ns["int8"]) }

fn = create_function("newline", "global_newline")

for _, arg in ipairs({...}) do
    local source = io.open(arg):read("*a")
    stream = tokenstream(source)
    compile_stream()
end

print("#include <stdio.h>")
print("#include <stdlib.h>")
print("#include <stdint.h>")
print("#include <stdbool.h>")
print("#include \"cowgol.h\"")
for var in pairs(variables) do
    print(var.type.ctype.." "..var.storage..";")
end
for fn in pairs(functions) do
    print(table.concat(fn.code, "\n"))
end
