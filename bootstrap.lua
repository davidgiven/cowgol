#!/usr/bin/lua
-- Cowgol bootstrap compiler.
-- Shoddy compiler with compiles into shoddy C.

local stream
local functions = {}
local variables = {}
local current_fn = nil
local current_ns = {}
local unique_id = 0

function log(...)
    print(string.format(...))
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
        "^([():;,])"
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

            while (o < #source) do
                while true do
                    local nexto, m
                    _, nexto = source:find("^[\t\r ]+", o)
                    if nexto then
                        o = nexto + 1
                        break
                    end

                    _, nexto, m = source:find("^(-?%d+)", o)
                    if nexto then
                        o = nexto + 1
                        coroutine.yield("number", tonumber(m))
                        break
                    end

                    check_patterns()
                end
            end
        end
    )

    local line = 1
    local peeked = nil
    local savedvalue = nil
    return {
        next = function(self)
            if peeked then
                local p = peeked
                peeked = nil
                return p
            else
                if not c then
                    return "eof"
                end

                while true do
                    local status, token, value = coroutine.resume(c)
                    if not status then
                        fatal("parse error: %s", token)
                    elseif (token == "\n") then
                        line = line + 1
                    else
                        savedvalue = value
                        return token
                    end
                end
            end
        end,

        peek = function(self)
            if not peeked then
                peeked = self:next()
            end
            return peeked
        end,

        line = function(self)
            return line
        end,

        value = function(self)
            return savedvalue
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

function create_variable(name, type)
    local var = {
        kind = "variable",
        storage = new_storage_for(name),
        type = type
    }
    check_undefined(name)
    current_ns[name] = var
    return var
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
    return fn
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

    expect("end")
    expect("sub")
    expect(";")
    emit("}")

    current_fn = old_fn
    current_ns = old_ns
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

    local var = create_variable(varname, typename)

    local t = stream:peek()
    if (t == ":=") then
        expect(":=")
        do_expression(var)
    end
    expect(";")
end

function do_assignment()
    local t = stream:next()
    local sym = lookup_symbol(t)
    expect(":=")
    do_expression(sym)
    expect(";")
end

function do_expression(outputvar)
    local t = stream:next()
    if (t == "number") then
        emit("%s = %d;", outputvar.storage, stream:value())
    else
        fatal("unsupported token in expression '%s'", t)
    end
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

            do_expression(p.variable)
        end
    end

    expect(")")
    emit("%s();", sym.storage)
    expect(";")
end

function do_while()
    expect("while")
    fatal("unsupported")
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

current_ns["int8"] = {
    kind = "type",
    name = "int8",
    size = "1",
    ctype = "int8_t",
    numeric = true
}

current_ns["uint8"] = {
    kind = "type",
    name = "uint8",
    size = "1",
    ctype = "uint8_t",
    numeric = true
}

current_ns["int16"] = {
    kind = "type",
    name = "int16",
    size = "2",
    ctype = "int16_t",
    numeric = true
}

current_ns["uint16"] = {
    kind = "type",
    name = "uint16",
    size = "2",
    ctype = "uint16_t",
    numeric = true
}

local fn = create_function("printn", "global_printn")
fn.parameters[#fn.parameters+1] = {name="c", inout="in",
    variable=create_variable("printn_c", current_ns["uint8"]) }

for _, arg in ipairs({...}) do
    local source = io.open(arg):read("*a")
    stream = tokenstream(source)
    compile_stream()
end
