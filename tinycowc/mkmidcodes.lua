function trim(s)
    return (s:gsub("^%s*(.-)%s*$", "%1"))
end

local args = {...}
local infilename = args[2]
local outfilename = args[3]

local infp = io.open(infilename, "r")
local hfp = io.open(outfilename, "w")

local midcodes = {}
for line in infp:lines() do
    local tokens = {}
    line = line:gsub(" *#.*$", "")
    if (line ~= "") then
        line:gsub("[^,]+", function(c) tokens[#tokens+1] = trim(c) end)
        if (#tokens == 0) then
            tokens[1] = trim(line)
        end
        midcodes[tokens[1]] = tokens
    end
end

hfp:write("#ifndef MIDCODES_IMPLEMENTATION\n")

hfp:write("enum {\n")
local first = true
for m, t in pairs(midcodes) do
    if not first then
        hfp:write(",")
    else
        first = false
    end
    hfp:write("MIDCODE_", m, "\n")
end
hfp:write("};\n");

hfp:write("union midcode_data {\n")
for m, t in pairs(midcodes) do
    if (#t > 1) then
        hfp:write("struct { ")
        for i=2, #t do
            hfp:write(t[i], "; ")
        end
        hfp:write("} ", m:lower(), ";\n")
    end
end
hfp:write("};\n");

for m, t in pairs(midcodes) do
    hfp:write("extern void emit_mid_", m:lower(), "(")
    for i=2, #t do
        if (i > 2) then
            hfp:write(",")
        end
        hfp:write(t[i])
    end
    hfp:write(");\n")
end

hfp:write("#else\n")

hfp:write("static const char* midcode_names[] = {\n")
for m, t in pairs(midcodes) do
    hfp:write("\t\"", m, "\",\n")
end
hfp:write("};\n")

hfp:write("static struct midcode* add_midcode(void);\n")
hfp:write("static void push_midend_state_machine(void);\n")
for m, t in pairs(midcodes) do
    hfp:write("void emit_mid_", m:lower(), "(")
    for i=2, #t do
        if (i > 2) then
            hfp:write(",")
        end
        hfp:write(t[i])
    end
    hfp:write(") {\n")
    hfp:write("\tstruct midcode* m = add_midcode();\n")
    hfp:write("\tm->code = MIDCODE_", m, ";\n")
    for i=2, #t do
        local _, _, n = t[i]:find("([^ ]+)$")
        hfp:write("\tm->u.", m:lower(), ".", n, " = ", n, ";\n")
    end
    hfp:write("\tpush_midend_state_machine();\n")
    hfp:write("}\n")
end

hfp:write("#endif\n")
hfp:close()
