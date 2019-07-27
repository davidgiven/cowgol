require "./libcowgol"

local args = {...}
local midcodetab = args[2]
local archpat = args[3]
local outfile = args[4]

local midcodes = loadmidcodes(midcodetab)
local cfp = io.open(outfile, "w")

local infp = io.open(archpat, "r")
local lineno = 0

local function readline()
    lineno = lineno + 1
    return infp:read("*l")
end

local function emitline(lineno)
    cfp:write("#line ", lineno, " \"", midcodetab, "\"\n")
end

-- Emit C header

while true do
    local s = readline()
    if (s == "%%") then
        break
    end
    cfp:write(s, "\n")
end

-- Read values.

local values = {}
while true do
    local line = trim(readline())
    if (line == "%%") then
        break
    end
    if not line:find("^//") and (line ~= "") then
        local _, _, name, args, emitter = line:find("^(%w+)(%b()) *= *(%b())$")
        if not name then
            _, _, name, args = line:find("^(%w+)$")
        end
        if not name then
            error("syntax error in: "..lineno)
        end

        if midcodes[name] then
            error(string.format("value '%s' conflicts with a midcode of the same name", name))
        end
        values[name] = { lineno = lineno, args = parsearglist(args), emitter = emitter }
    end
end

-- Read patterns.

local patterns = {}
local line = readline()
while line do
    if (line == "%%") then
        break
    end
    if (line == "") then
        line = readline()
    else
        local inelements = {}
        local outelements = {}
        local code = {}
        local pattern = {inelements=inelements, outelements=outelements, code=code, lineno=lineno, pattern=line}
        patterns[#patterns+1] = pattern

        local s = 1
        local elements = inelements
        while line do
            local _, e
            if line:find("^%s*$", s) then
                break
            end
            _, e = line:find("^%s*%-%-%s*", s)
            if e then
                elements = outelements
            else
                local name, argspec
                _, e, name, argspec = line:find("^%s*(%w+)(%b())", s)
                if not e then
                    _, e, name = line:find("^%s*(%w+)", s)
                    if not e then
                        error("syntax error at line " .. lineno)
                    end
                end
                argspec = (argspec or ""):gsub("^%(", ""):gsub("%)$", "")

                local param
                if midcodes[name] then
                    param = midcodes[name]
                elseif values[name] then
                    param = values[name]
                else
                    error(string.format("'%s' is not a declared midcode or value", name))
                end

                elements[#elements+1] = { name=name, args=split(argspec), param=param }
            end
            s = e + 1
        end

        line = readline()
        while line and not line:find("^[^%s]") do
            code[#code+1] = line
            line = readline()
        end
    end
end

-- Check patterns.

local maxinputstackdepth = 0
local maxinputmidcodedepth = 0
for _, pattern in ipairs(patterns) do
    local function checkelements(elements)
        local stackdepth = 0
        local midcodedepth = 0
        local stacking = true
        for _, element in ipairs(elements) do
            if stacking and midcodes[element.name] then
                stacking = false
            elseif not stacking and not midcodes[element.name] then
                error("values must precede midcodes at line "..pattern.lineno)
            end

            if stacking then
                stackdepth = stackdepth + 1
            else
                midcodedepth = midcodedepth + 1
            end
        end

        return stackdepth, midcodedepth
    end

    pattern.inputstackdepth, pattern.inputmidcodedepth = checkelements(pattern.inelements)
    maxinputstackdepth = math.max(pattern.inputstackdepth, maxinputstackdepth)
    maxinputmidcodedepth = math.max(pattern.inputmidcodedepth, maxinputmidcodedepth)
    checkelements(pattern.outelements)
end

-- Sort by cost.

table.sort(patterns,
    function(a, b)
        if (a.inputmidcodedepth ~= b.inputmidcodedepth) then
            return a.inputmidcodedepth > b.inputmidcodedepth
        else
            return a.inputstackdepth > b.inputstackdepth
        end
    end
)

-- Emit value enum and union.

cfp:write("enum {\n")
local first = true
for v, vd in pairs(values) do
    if first then
        first = false
    else
        cfp:write(",\n")
    end
    emitline(vd.lineno)
    cfp:write("VALUE_", v:upper(), "\n")
end
cfp:write("};\n");
cfp:write("struct value {\n")
cfp:write("int code;\n")
cfp:write("union {\n")
for v, vd in pairs(values) do
    if (#vd.args > 0) then
        cfp:write("struct {\n")
        emitline(vd.lineno)
        for _, a in ipairs(vd.args) do
            cfp:write(a.type, " ", a.name, "; ")
        end
        cfp:write("} ", v:lower(), ";\n")
    end
end
cfp:write("} u;\n")
cfp:write("};\n")

-- Emit the value printer function.

cfp:write("void print_value(FILE* stream, struct value* value) {\n")
cfp:write("\tswitch (value->code) {\n")
for v, vd in pairs(values) do
    cfp:write("\t\tcase VALUE_", v:upper(), ":\n")
    cfp:write('\t\t\tfprintf(stream, "', v:lower(), '");\n')
    if vd.emitter then
        local e = vd.emitter:gsub("^%(", ""):gsub("%)$", ""):gsub("%$%$", "value->u."..v:lower())
        cfp:write('\t\t\tfprintf(stream, "(");\n')
        emitline(vd.lineno)
        cfp:write('\t\t\tfprintf(stream, ', e, ');\n')
        cfp:write('\t\t\tfprintf(stream, ")");\n')
    end
    cfp:write("\t\t\tbreak;\n")
end
cfp:write("\t\tdefault:\n")
cfp:write('\t\t\tfprintf(stream, "unknown(%d) ", value->code);\n')
cfp:write("\t}\n")
cfp:write("}\n")

-- Emit the matcher function.

cfp:write("bool arch_instruction_matcher(struct matchcontext* ctx) {\n")

for i = 0, maxinputstackdepth-1 do
    cfp:write(string.format("\tstruct value* stack%d = &ctx->vstack[ctx->vsp-%d];\n", i, i+1))
end
for i = 0, maxinputmidcodedepth-1 do
    cfp:write(string.format("\tstruct midcode* midcode%d = &ctx->midcodes[(rdptr + %d) %% MIDBUFSZ];\n", i, i))
end
cfp:write("\tint midcodedepth = (MAXBUFSZ + ctx->wrptr - ctx->rdptr) % MIDBUFSZ\n")

for id, pattern in ipairs(patterns) do
    cfp:write("\n\t/* ", pattern.pattern, " */\n")
    emitline(pattern.lineno)
    cfp:write("\tif ((midcodedepth >= ", pattern.inputmidcodedepth, ")")
    if (pattern.inputstackdepth > 0) then
        cfp:write(" && (ctx->vsp >= ", pattern.inputstackdepth, ")")
    end
    local ac = pattern.inputstackdepth - 1
    local mc = 0
    for _, element in ipairs(pattern.inelements) do
        local function emit_argspec(varname, params, args)
            if (#params ~= #args) then
                error("parameter count mismatch at line "..pattern.lineno)
            end

            for i = 1, #params do
                local pd = params[i]
                local ad = args[i]
                if not ad:find("^[a-z]") then
                    cfp:write(string.format(" && (%s->u.%s.%s == %s)",
                        varname, element.name:lower(), pd.name, ad))
                end
            end
        end

        if midcodes[element.name] then
            element.var = "midcode"..mc
            cfp:write(string.format(" && (midcode%d->code == MIDCODE_%s)", mc, element.name:upper()))
            emit_argspec(element.var, midcodes[element.name].args, element.args)
            mc = mc + 1
        else
            element.var = "stack"..ac
            cfp:write(string.format(" && (stack%d->code = VALUE_%s)", ac, element.name:upper()))
            emit_argspec(element.var, values[element.name].args, element.args)
            ac = ac - 1
        end
    end
    cfp:write(") {\n")
    local processedvars = {}
    local ac = pattern.inputstackdepth - 1
    local mc = 0
    for _, element in pairs(pattern.inelements) do
        local params = element.param.args
        for i = 1, #params do
            local a = element.args[i]
            if a:find("^[a-z]") then
                if processedvars[a] then
                    error("input variable used in more than one place at line "..lineno)
                end
                local p = params[i]
                cfp:write(string.format("\t\t%s %s = %s->u.%s.%s;\n",
                    p.type, a, element.var, element.name:lower(), p.name))
                processedvars[a] = p
            end
        end
    end
    for _, element in pairs(pattern.outelements) do
        local params = element.param.args
        for i = 1, #params do
            local a = element.args[i]
            if a:find("^[a-z]") then
                local p = params[i]
                if processedvars[a] and (processedvars[a].type ~= p.type) then
                    error("output variable used in more than one place with conflicting types at line "..lineno)
                end
                if not processedvars[a] then
                    cfp:write(string.format("\t\t%s %s;\n", p.type, a))
                end
                processedvars[a] = p
            end
        end
    end

    cfp:write(string.format("\t\t#define REJECT goto reject%d\n", id))
    emitline(pattern.lineno + 1)
    for _, line in ipairs(pattern.code) do
        cfp:write(line, "\n")
    end

    -- Push stackable output elements.
    if (pattern.inputstackdepth > 0) then
        cfp:write(string.format("\t\tctx->vsp -= %d;\n", pattern.inputstackdepth))
    end
    cfp:write("\t\tstruct value __outputvalue;\n")
    for _, element in pairs(pattern.outelements) do
        if not midcodes[element.name] then
            cfp:write("\t\t__outputvalue = &ctx->vstack[ctx.vsp++];\n")
            cfp:write(string.format("\t\t__outputvalue->code = VALUE_%s;\n", element.name:upper()))
            local params = element.param.args
            for i = 1, #params do
                local a = element.args[i]
                if a:find("^[a-z]") then
                    local p = params[i]
                    cfp:write(string.format("\t\t__outputvalue->u.%s.%s = %s;\n",
                        element.name:lower(), p.name, a))
                end
            end
        else
            error("can't emit midcodes yet at line "..lineno)
        end
    end

    if (pattern.inputmidcodedepth > 0) then
        cfp:write(string.format("\t\tctx->rdptr = (ctx->rdptr + %d) %% MIDBUFSF;\n", pattern.inputmidcodedepth))
    end
        
    cfp:write("\t\t#undef REJECT\n")
    cfp:write("\t\treturn true;\n")
    cfp:write(string.format("\t\treject%s:;\n", id))
    cfp:write("\t}\n")
end

cfp:write("\treturn false;\n")
cfp:write("}\n")
