local LITERAL = "LITERAL" -- #value          0
local VARIABLE = "VARIABLE" -- variable      1
local ARRAYV = "ARRAYV" -- array[variable]   2
local ARRAYO = "ARRAYO" -- array[literal]    3
local CODE = "CODE" -- code pointer          4

local MOV = "MOV"
local ADD = "ADD"
local SUB = "SUB"
local AND = "AND"
local OR = "OR"
local EOR = "EOR"
local ROL = "ROL"
local ROR = "ROR"
local ASL = "ASL"
local ASR = "ASR"
local LSR = "LSR"
local JMP = "JMP"
local JSR = "JSR"
local RET = "RET"
local LBL = "LBL"
local BEQ = "BEQ"
local BNE = "BNE"
local BLT = "BLT"
local BGE = "BGE"
local BGT = "BGT"
local BLE = "BLE"

local registers =
    {
        a = {size=1, uses=0, values={}},
        x = {size=1, uses=0, values={}},
        y = {size=1, uses=0, values={}},
    }

local temporaries = 0

function log(...)
    print(string.format(...))
end

function fatal(...)
    error(string.format(...))
end

function memberof(needle, haystack)
    for _, i in ipairs(haystack) do
        if (i == needle) then
            return true
        end
    end
    return false
end

function value(kind, size, left, right)
    return {kind=kind, size=size, left=left, right=right}
end

function value1(kind, left, right)
    return value(kind, 1, left, right)
end

function value2(kind, left, right)
    return value(kind, 2, left, right)
end

function value_to_string(v)
    return "{" .. table.concat({v.kind, v.size, v.left, v.right}, ", ") .. "}"
end

function equal_values(v1, v2)
    return (v1.kind == v2.kind) and (v1.size == v2.size) and (v1.left == v2.left) and (v1.right == v2.right)
end

function alloc_reg(candidate_rns)
    local candidates
    candidates = {}
    for _, rn in ipairs(candidate_rns) do
        candidates[rn] = registers[rn]
    end

    for rn, r in pairs(candidates) do
        if (r.uses == 0) then
            log("allocating %s", rn)
            ref_reg(rn)
            return rn
        end
    end
    fatal("cannot allocate register, all candidates busy")
end

function add_value(rn, v)
    local values = registers[rn].values
    for _, vv in ipairs(values) do
        if equal_values(vv, v) then
            return
        end
    end

    log("%s now also contains %s", rn, value_to_string(v))
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
    if rn then
        log("value in %s is stale, flushing", rn)
        flush_reg(rn)
    end
end

function ref_reg(rn)
    local r = registers[rn]
    r.uses = r.uses + 1
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

function flush_regs()
    for rn, r in pairs(registers) do
        flush_reg(rn)
    end
end

local loaders =
    {
        LITERAL = function(v, rn)
            log("* load size=%d value=%d into %s", registers[rn].size, v.left, rn)
        end,

        ARRAYV = function(v, rn)
            local indexrn = coerce_rvalue(value1(VARIABLE, v.right), {"x", "y"})
            log("* array load size=%d base=%s offset=%s into %s", registers[rn].size,
                v.left, indexrn, rn)
            deref_reg(indexrn)
        end,
    }

function move_reg(src, dest)
    log("* move %s to %s", src, dest)
end

function coerce_rvalue(value, candidate_rns)
    local rn = find_reg_with_value(value)
    if rn then
        log("found %s containing %s", rn, value_to_string(value))
        if memberof(rn, candidate_rns) then
            ref_reg(rn)
            return rn
        else
            local newrn = alloc_reg(candidate_rns)
            move_reg(rn, newrn)
            add_value(newrn, value)
            return newrn
        end
    end

    rn = alloc_reg(candidate_rns)
    loaders[value.kind](value, rn)
    registers[rn].values = {v}
    return rn
end

function coerce_rvalue_to_var(v)
    if (v.kind == VARIABLE) then
        return v
    elseif (v.kind == LITERAL) then
        return value(VARIABLE, v.size, "literal_"..v.left)
    else
        fatal("cannot coerce %s to a variable", value_to_string(v))
    end
end

local function write_to_dest(rn, destv)
    if destv.kind == VARIABLE then
        log("* store size=%d reg=%s into %s", destv.size, rn, destv.left)
    else
        fatal("cannot use %s as a simple destination", value_to_string(destv))
    end
end

local generators = {
    MOV = function(o)
        local leftv = o.left
        local destv = o.dest
        log("copy %s -> %s", value_to_string(o.left), value_to_string(o.dest))
        if (leftv.size == destv.size) then
            if (leftv.size == 1) then
                local inputrn = coerce_rvalue(o.left, {"a", "x", "y"})
                add_value(inputrn, o.dest)
                write_to_dest(inputrn, o.dest)
            else
                fatal("copy with unsupported size")
            end
        else
            fatal("copy of mismatched sizes")
        end
    end,

    ADD = function(o)
        local leftv = o.left
        local rightv = o.right
        local destv = o.dest
        log("add %s, %s -> %s", value_to_string(leftv), value_to_string(rightv), value_to_string(destv))
        if (leftv.size == destv.size) and (rightv.size == destv.size) then
            if (leftv.size == 1) then
                if (rightv.kind == LITERAL) then
                    local leftrn
                    if (rightv.left == 1) then
                        leftrn = coerce_rvalue(leftv, {"a", "x", "y"})
                        log("* increment reg=%s", leftrn)
                    else
                        leftrn = coerce_rvalue(leftv, {"a"})
                        log("* add reg=%s value=%s", leftrn, rightv.left)
                    end
                    deref_reg(leftrn)
                    flush_value(leftv)
                    add_value(leftrn, destv)
                    write_to_dest(leftrn, destv)
                else
                    fatal("unsupported add")
                end
            elseif (leftv.size == 2) then
                local leftvar = coerce_rvalue_to_var(leftv)
                local rightvar = coerce_rvalue_to_var(rightv)
                local destvar = coerce_rvalue_to_var(destv)
                local tempreg = alloc_reg({"a"})
                registers[tempreg].values = {}
                log("* add16 %s + %s -> %s", leftvar.left, rightvar.left, destvar.left)
            end
        else
            fatal("add of mismatched sizes")
        end
    end,

    BNE = function(o)
        local leftv = o.left
        local rightv = o.right
        log("bne %s = %s", value_to_string(leftv), value_to_string(rightv))
        if (rightv.kind == LITERAL) then
            local leftrn = coerce_rvalue(leftv, {"x", "y"})
            log("* bne %s against #%s", leftrn, rightv.left)
            deref_reg(leftrn)
        else
            fatal("unsupported bne")
        end
        flush_regs()
    end,

}

local code =
    {
        {opcode=MOV, left=value1(LITERAL, 0), dest=value1(VARIABLE, "i")},
        {opcode=ADD, left=value1(VARIABLE, "i"), right=value1(LITERAL, 3), dest=value1(VARIABLE, "i")},
        {opcode=MOV, left=value1(ARRAYV, "array", "i"), dest=value1(VARIABLE, "j")},
        {opcode=BNE, left=value1(VARIABLE, "j"), right=value1(LITERAL, 100)},
        {opcode=ADD, left=value1(LITERAL, 1), right=value1(LITERAL, 2), dest=value1(VARIABLE, "i")},
        {opcode=ADD, left=value2(LITERAL, 1), right=value2(LITERAL, 2), dest=value2(VARIABLE, "word")},
    }

for _, o in ipairs(code) do
    log("")
    generators[o.opcode](o)

    for rn, r in pairs(registers) do
        r.uses = 0

        local t = {rn..":"}
        for _, vv in ipairs(r.values) do
            t[#t+1] = value_to_string(vv)
        end
        if (#t > 1) then
            log("%s", table.concat(t, " "))
        end
    end
end
