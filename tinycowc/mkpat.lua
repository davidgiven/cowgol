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

        args = args or ""
        args = args:gsub("^%(", ""):gsub("%)$", "")

        if midcodes[name] then
            error(string.format("value '%s' conflicts with a midcode of the same name", name))
        end
        values[name] = { lineno = lineno, args = split(args or ""), emitter = emitter }
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
        local inargs = {}
        local outargs = {}
        local code = {}
        local pattern = {inargs=inargs, outargs=outargs, code=code, lineno=lineno, pattern=line}
        patterns[#patterns+1] = pattern

        local s = 1
        local args = inargs
        while line do
            local _, e
            if line:find("^%s*$", s) then
                break
            end
            _, e = line:find("^%s*%-%-%s*", s)
            if e then
                args = outargs
            else
                _, e, name, argspec = line:find("^%s*(%w+)(%b())", s)
                if not e then
                    _, e, name = line:find("^%s*(%w+)", s)
                    if not e then
                        error("syntax error at line " .. lineno)
                    end
                end
                args[#args+1] = { name=name, argspec=split(argspec or "") }
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
    local function checkargs(args)
        local stackdepth = 0
        local midcodedepth = 0
        local stacking = true
        for _, arg in ipairs(args) do
            if stacking and midcodes[arg.name] then
                stacking = false
            elseif not stacking and not midcodes[arg.name] then
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

    pattern.inputstackdepth, pattern.inputmidcodedepth = checkargs(pattern.inargs)
    maxinputstackdepth = math.max(pattern.inputstackdepth, maxinputstackdepth)
    maxinputmidcodedepth = math.max(pattern.inputmidcodedepth, maxinputmidcodedepth)

    checkargs(pattern.outargs)
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
cfp:write("union value {\n")
for v, vd in pairs(values) do
    if (#vd.args > 0) then
        cfp:write("struct {\n")
        emitline(vd.lineno)
        for _, a in ipairs(vd.args) do
            cfp:write(a, "; ")
        end
        cfp:write("} ", v:lower(), ";\n")
    end
end
cfp:write("};\n")

-- Emit the matcher function.

cfp:write("bool matcher(struct matchcontext* ctx) {\n")

for i = 0, maxinputstackdepth-1 do
    cfp:write(string.format("\tstruct value* stack%d = &ctx->vstack[ctx->vsp+%d];\n", i, i+1))
end
for i = 0, maxinputmidcodedepth-1 do
    cfp:write(string.format("\tstruct midcode* midcode%d = &ctx->midcodes[(rdptr + %d) %% MIDBUFSZ];\n", i, i))
end
cfp:write("\tint midcodedepth = (MAXBUFSZ + ctx->wrptr - ctx->rdptr) % MIDBUFSZ\n")

for _, pattern in ipairs(patterns) do
    cfp:write("\n\t/* ", pattern.pattern, " */\n")
end

cfp:write("\treturn false;\n")
cfp:write("}\n")
