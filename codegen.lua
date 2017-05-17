local LITERAL = "LITERAL" -- #value          0
local VARIABLE = "VARIABLE" -- variable      1
local ARRAYV = "ARRAYV" -- array[variable]   2
local ARRAYO = "ARRAYO" -- array[literal]    3
local CODE = "CODE" -- code pointer          4

local MOV = "MOV"
local ADD = "ADD"
local SUB = "SUB"
local AND = "AND"
local IOR = "IOR"
local EOR = "EOR"
local ROL = "ROL"
local ROR = "ROR"
local ASL = "ASL"
local ASR = "ASR"
local LSR = "LSR"
local JMP = "JMP"
local JSR = "JSR"
local RET = "RET"
local BEQ = "BEQ"
local BNE = "BNE"
local BLT = "BLT"
local BGE = "BGE"
local BGT = "BGT"
local BLE = "BLE"
local LBL = "LBL"
local KLL = "KLL"

local registers =
    {
        a = {size=1, uses=0, values={}},
        x = {size=1, uses=0, values={}},
        y = {size=1, uses=0, values={}},
    }

local all_values = {}
local precious_values = {}

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

function equal_values(v1, v2)
    return (v1.kind == v2.kind) and (v1.size == v2.size) and (v1.left == v2.left) and (v1.right == v2.right)
end

function value(kind, size, left, right)
    local v = {kind=kind, size=size, left=left, right=right}
    for vv in pairs(all_values) do
        if equal_values(v, vv) then
            return vv
        end
    end
    all_values[v] = true
    return v
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

function _find_valueless_reg(candidates)
    for rn, r in pairs(candidates) do
        if (r.uses == 0) and not next(r.values) then
            return rn
        end
    end
    return nil
end

function _find_unused_reg(candidates)
    for rn, r in pairs(candidates) do
        if (r.uses == 0) then
            return rn
        end
    end
    return nil
end

function alloc_reg(candidate_rns)
    local candidates
    candidates = {}
    for _, rn in ipairs(candidate_rns) do
        candidates[rn] = registers[rn]
    end

    local rn = _find_valueless_reg(candidates) or _find_unused_reg(candidates)
    if rn then
        log("allocating %s", rn)
        flush_all_values_in_reg(rn)
        ref_reg(rn)
        return rn
    end
    fatal("cannot allocate register, all candidates busy")
end

function add_value(rn, v)
    local values = registers[rn].values
    if values[v] then
        log("%s already contains %s", rn, value_to_string(v))
    else
        log("%s now also contains %s", rn, value_to_string(v))
        values[v] = true
    end
end

function add_precious_value(rn, v)
    add_value(rn, v)
    precious_values[v] = true
end

function find_reg_with_value(v)
    for rn, r in pairs(registers) do
        if r.values[v] then
            return rn
        end
    end
    return nil
end

function write_back_precious_value(rn, v)
    if not find_reg_with_value(v) then
        implicit_store(rn, v)
        precious_values[v] = nil
    end
end

function remove_value_from_reg(rn, v)
    local r = registers[rn]
    if r.values[v] then
        log("value %s is about to change, so removing from %s", value_to_string(v), rn)
        r.values[v] = nil
        if precious_values[v] then
            write_back_precious_value(rn, v)
        end
    end
end

function value_changing(v)
    for rn, r in pairs(registers) do
        remove_value_from_reg(rn, v)
    end
end

function replace_value(rn, v)
    local r = registers[rn]
    r.values[v] = true
    log("replacement value %s going in %s", value_to_string(v), rn)
    for rrn, _ in pairs(registers) do
        if (rrn ~= rn) then
            remove_value_from_reg(rrn, v)
        end
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

function flush_all_values_in_reg(rn)
    local r = registers[rn]
    if r.uses > 0 then
        fatal("flushing locked register %s", rn)
    end
    while true do
        local v = next(r.values)
        if not v then
            break
        end
        r.values[v] = nil
        if precious_values[v] then
            write_back_precious_value(rn, v)
        end
    end
    r.values = {}
    r.uses = 0
end

function flush_regs()
    for rn, r in pairs(registers) do
        flush_all_values_in_reg(rn)
    end
end

function implicit_store(rn, value)
    log("* implicit store of %s to %s", rn, value_to_string(value))
end


function find_or_load_value(v, candidate_rns)
    local rn = find_reg_with_value(v)
    if rn then
        log("found %s containing %s", rn, value_to_string(v))
        if memberof(rn, candidate_rns) then
            ref_reg(rn)
            return rn
        else
            local newrn = alloc_reg(candidate_rns)
            log("* move %s to %s", rn, newrn)
            add_value(newrn, v)
            return newrn
        end
    end

    rn = alloc_reg(candidate_rns)
    if (v.kind == LITERAL) then
        log("* implicit load literal #%d of size %d into %s", v.left, v.size, rn)
    elseif (v.kind == VARIABLE) then
        log("* implicit load variable %s of size %d into %s", v.left, v.size, rn)
    else
        fatal("cannot implicitly load %s", value_to_string(v))
    end

    add_value(rn, v)
    return rn
end

local function rule(opcode, dest, destsz, left, leftsz, right, rightsz)
    return {opcode=opcode, dest=dest, destsz=destsz, left=left, leftsz=leftsz, right=right, rightsz=rightsz}
end

local opcode_rules =
    {
        [rule(MOV, VARIABLE, 1, LITERAL, 1)] = function(opcode, destv, leftv)
            local leftrn = find_or_load_value(leftv, {"a", "x", "y"})
            add_precious_value(leftrn, destv)
        end,

        [rule(MOV, VARIABLE, 1, ARRAYV, 1)] = function(opcode, destv, leftv)
            local indexrn = find_or_load_value(value1(VARIABLE, leftv.right), {"x", "y"})
            local valuern = alloc_reg({"a", "x", "y"})
            value_changing(destv)
            log("* load array %s+%s into %s", leftv.left, indexrn, valuern)
            deref_reg(indexrn)
            add_value(valuern, leftv)
            add_precious_value(valuern, destv)
        end,

        [rule(MOV, ARRAYV, 1, VARIABLE, 1)] = function(opcode, destv, leftv)
            local indexrn = find_or_load_value(value1(VARIABLE, destv.right), {"x", "y"})
            local valuern = find_or_load_value(leftv, {"a", "x", "y"})
            log("* store array %s into %s+%s", valuern, destv.left, indexrn)
            add_value(valuern, destv)
        end,

        [rule(MOV, VARIABLE, 1, ARRAYO, 1)] = function(opcode, destv, leftv)
            local valuern = alloc_reg({"a", "x", "y"})
            value_changing(destv)
            log("* load array %s+#%s into %s", leftv.left, leftv.right, valuern)
            add_value(valuern, leftv)
            add_precious_value(valuern, destv)
        end,

        [rule(ADD, VARIABLE, 1, VARIABLE, 1, LITERAL, 1)] = function(opcode, destv, leftv, rightv)
            local leftrn
            if (rightv.left == 1) then
                leftrn = find_or_load_value(leftv, {"a", "x", "y"})
                deref_reg(leftrn)
                replace_value(leftrn, destv)
                log("* increment reg=%s", leftrn)
            else
                leftrn = find_or_load_value(leftv, {"a"})
                deref_reg(leftrn)
                replace_value(leftrn, destv)
                log("* add reg=%s value=%s", leftrn, rightv.left)
            end
        end,

        [rule(ADD, VARIABLE, 1, VARIABLE, 1, VARIABLE, 1)] = function(opcode, destv, leftv, rightv)
            local leftrn = find_or_load_value(leftv, {"a"})
            value_changing(rightv)
            replace_value(leftrn, destv)
            log("* add %s + variable %s -> %s", leftrn, rightv.left, leftrn)
        end,

        [rule(BNE, CODE, 2, VARIABLE, 1, LITERAL, 1)] = function(opcode, destv, leftv, rightv)
            local leftrn = find_or_load_value(leftv, {"a", "x", "y"})
            deref_reg(leftrn)
            flush_regs()
            log("* branch if %s != #%s to %s", leftrn, rightv.left, destv.left)
        end,
    }

local function find_rule(o)
    for r, cb in pairs(opcode_rules) do
        if (o.opcode == r.opcode) then
            local destmatches = not o.dest and not r.dest
            if not destmatches and o.dest and r.dest then
                destmatches = (o.dest.kind == r.dest) and (o.dest.size == r.destsz)
            end

            local leftmatches = not o.left and not r.left
            if not leftmatches and o.left and r.left then
                leftmatches = (o.left.kind == r.left) and (o.left.size == r.leftsz)
            end

            local rightmatches = not o.right and not r.right
            if not rightmatches and o.right and r.right then
                rightmatches = (o.right.kind == r.right) and (o.right.size == r.rightsz)
            end

            if leftmatches and rightmatches then
                return cb
            end
        end
    end
    return nil
end

local function no_rule(o)
    local t = {o.opcode}
    if o.dest then
        t[#t+1] = o.dest.kind
        t[#t+1] = o.dest.size
    end
    if o.left then
        t[#t+1] = o.left.kind
        t[#t+1] = o.left.size
    end
    if o.right then
        t[#t+1] = o.right.kind
        t[#t+1] = o.right.size
    end
    fatal("no rule for {%s}", table.concat(t, ", "))
end

local code =
    {
        {opcode=MOV, left=value1(LITERAL, 0), dest=value1(VARIABLE, "i")},
        {opcode=ADD, left=value1(VARIABLE, "i"), right=value1(LITERAL, 3), dest=value1(VARIABLE, "i")},
        {opcode=MOV, left=value1(ARRAYV, "array", "i"), dest=value1(VARIABLE, "i")},
        {opcode=ADD, left=value1(VARIABLE, "j"), right=value1(LITERAL, 1), dest=value1(VARIABLE, "j")},
        {opcode=MOV, left=value1(VARIABLE, "j"), dest=value1(ARRAYV, "array", "i")},
        {opcode=MOV, left=value1(ARRAYO, "array", 7), dest=value1(VARIABLE, "i")},
        {opcode=ADD, left=value1(VARIABLE, "i"), right=value1(VARIABLE, "j"), dest=value1(VARIABLE, "k")},
        {opcode=BNE, left=value1(VARIABLE, "k"), right=value1(LITERAL, 100), dest=value2(CODE, "label")},
    }

for _, o in ipairs(code) do
    log("")
    log("%s %s <- %s, %s", o.opcode,
        o.dest and value_to_string(o.dest) or "(none)",
        o.left and value_to_string(o.left) or "(none)",
        o.right and value_to_string(o.right) or "(none)")

    local rule_cb = find_rule(o)
    if not rule_cb then
    end
    if not rule_cb then
        no_rule(o)
    end
    rule_cb(o.opcode, o.dest, o.left, o.right)

    for rn, r in pairs(registers) do
        r.uses = 0

        local t = {rn..":"}
        for v in pairs(r.values) do
            t[#t+1] = value_to_string(v)
        end
        if (#t > 1) then
            log("%s", table.concat(t, " "))
        end
    end
    local t = {"precious:"}
    for v in pairs(precious_values) do
        t[#t+1] = value_to_string(v)
    end
    if (#t > 1) then
        log("%s", table.concat(t, " "))
    end
end
