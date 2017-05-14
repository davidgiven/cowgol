local LITERAL = "LITERAL" -- #value
local VARIABLE = "VARIABLE" -- label
local ARRAY = "ARRAY" -- array[index]
local CODE = "CODE" -- code pointer

local COPY = "COPY"
local ADD = "ADD"
local BNE = "BNE"

local registers =
    {
        p1 = {size=2, uses=0, values={}},
        p2 = {size=2, uses=0, values={}},
        p3 = {size=2, uses=0, values={}},
        a = {size=1, uses=0, values={}},
        x = {size=1, uses=0, values={}},
        y = {size=1, uses=0, values={}},
    }

function log(...)
    print(string.format(...))
end

function fatal(...)
    error(string.format(...))
end

function value_to_string(v)
    return "{" .. table.concat(v, ", ") .. "}"
end

function equal_values(v1, v2)
    return (v1[1] == v2[1]) and (v1[2] == v2[2]) and (v1[3] == v2[3])
end

function add_value(rn, v)
    local values = registers[rn].values
    for _, vv in ipairs(values) do
        if equal_values(vv, v) then
            return
        end
    end

    log("add value %s to %s", value_to_string(v), rn)
    values[#values+1] = v
end

function find_reg_with_value(v)
    for rn, r in pairs(registers) do
        for _, vv in ipairs(r.values) do
            if equal_values(vv, v) then
                return rn
            end
        end
    end
    return nil
end

function flush_value(v)
    local rn = find_reg_with_value(v)
    log("value in %s is stale, flushing", rn)
    flush_reg(rn)
end

function deref_reg(rn)
    local r = registers[rn]
    if r.uses == 0 then
        fatal("dereffing unused register %s", rn)
    end
    r.uses = r.uses - 1
end

function flush_reg(rn)
    local r = registers[rn]
    if r.uses > 0 then
        fatal("flushing locked register %s", rn)
    end
    r.values = {}
    r.uses = 0
end

local loaders =
    {
        LITERAL = function(v, rn)
            log("* load size=%d value=%d into %s", registers[rn].size, v[2], rn)
        end,
    }

function coerce_rvalue(value, size, candidates)
    local regs
    if candidates then
        regs = {}
        for rn in ipairs(candidates) do
            regs[rn] = registers[rn]
        end
    else
        regs = registers
    end

    for rn, r in pairs(registers) do
        if r.size == size then
            for _, v in ipairs(r.values) do
                if equal_values(value, v) then
                    log("reusing %s for %s", rn, value_to_string(value))
                    r.uses = r.uses + 1
                    return rn
                end
            end
        end
    end
    log("could not find existing value for %s", value_to_string(value))

    for rn, r in pairs(registers) do
        if (r.size == size) and (r.uses == 0) then
            r.values = {value}
            r.uses = 1
            log("allocated %s for %s", rn, value_to_string(value))
            loaders[value[1]](value, rn)
            return rn
        end
    end
    fatal("unable to allocate register for %s", value_to_string(value))
end

local function write_to_dest(size, rn, destv)
    if destv[1] == VARIABLE then
        log("* store size=%d reg=%s into %s", size, rn, destv[2])
    else
        fatal("cannot use %s as a simple destination", value_to_string(dest))
    end
end

local generators = {
    COPY = function(o)
        log("copy %s -> %s", value_to_string(o.left), value_to_string(o.dest))
        local inputrn = coerce_rvalue(o.left, o.size, {"a", "x", "y"})
        add_value(inputrn, o.dest)
        write_to_dest(o.size, inputrn, o.dest)
    end,

    ADD = function(o)
        local leftv = o.left
        local rightv = o.right
        local destv = o.dest
        log("add %s, %s -> %s", value_to_string(leftv), value_to_string(rightv), value_to_string(destv))
        if (rightv[1] == LITERAL) then
            local leftrn
            if (rightv[2] == 1) then
                leftrn = coerce_rvalue(leftv, o.size, {"a", "x", "y"})
                log("* increment size=%d reg=%s", o.size, leftrn)
            else
                leftrn = coerce_rvalue(leftv, o.size, {"a"})
                log("* add size=%d reg=%s value=%s", o.size, leftrn, rightv[2])
            end
            deref_reg(leftrn)
            flush_value(leftv)
            add_value(leftrn, destv)
            write_to_dest(o.size, leftrn, destv)
        end
    end,
}

local code =
    {
        {opcode=COPY, size=1, left={LITERAL, 0}, dest={VARIABLE, "i"}},
        {opcode=ADD, size=1, left={VARIABLE, "i"}, right={LITERAL, 3}, dest={VARIABLE, "i"}},
        {opcode=COPY, size=1, left={ARRAY, "array", "i"}, dest={VARIABLE, "j"}}
    }

for _, o in ipairs(code) do
    generators[o.opcode](o)

    for rn, r in pairs(registers) do
        r.uses = 0

        local t = {rn..":"}
        for _, vv in ipairs(r.values) do
            t[#t+1] = value_to_string(vv)
        end
        if (#t > 1) then
            log("%s\n", table.concat(t, " "))
        end
    end
end
