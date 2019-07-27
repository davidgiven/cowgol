require "./libcowgol"

local args = {...}
local infilename = args[2]
local outfilename = args[3]

local midcodes = loadmidcodes(infilename)

local hfp = io.open(outfilename, "w")
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
for m, md in pairs(midcodes) do
    if (#md.args > 0) then
        hfp:write("struct { ")
        for _, a in ipairs(md.args) do
            hfp:write(a.type, " ", a.name, "; ")
        end
        hfp:write("} ", m:lower(), ";\n")
    end
end
hfp:write("};\n");

for m, md in pairs(midcodes) do
    hfp:write("extern void emit_mid_", m:lower(), "(")
    if (#md.args > 0) then
        local first = true
        for _, a in ipairs(md.args) do
            if first then
                first = false
            else
                hfp:write(",")
            end
            hfp:write(a.type, " ", a.name)
        end
    else
        hfp:write("void")
    end
    hfp:write(");\n")
end

hfp:write("#else\n")

hfp:write("static struct midcode* add_midcode(void);\n")
hfp:write("static void push_midend_state_machine(void);\n")
for m, md in pairs(midcodes) do
    hfp:write("void emit_mid_", m:lower(), "(")
    if (#md.args > 0) then
        local first = true
        for _, a in ipairs(md.args) do
            if first then
                first = false
            else
                hfp:write(",")
            end
            hfp:write(a.type, " ", a.name)
        end
    else
        hfp:write("void")
    end
    hfp:write(") {\n")
    hfp:write("\tstruct midcode* m = add_midcode();\n")
    hfp:write("\tm->code = MIDCODE_", m, ";\n")
    for _, a in ipairs(md.args) do
        hfp:write("\tm->u.", m:lower(), ".", a.name, " = ", a.name, ";\n")
    end
    hfp:write("\tpush_midend_state_machine();\n")
    hfp:write("}\n")
end

hfp:write("void print_midcode(FILE* stream, struct midcode* m) {\n")
hfp:write("\tswitch (m->code) {\n")
for m, md in pairs(midcodes) do
    hfp:write("\t\tcase MIDCODE_", m, ":\n")
    hfp:write('\t\t\tfprintf(stream, "', m, '(");\n')
    local e = md.emitter
    if e then
        e = e:gsub("^%(", ""):gsub("%)$", ""):gsub("%$%$", "m->u."..m:lower())
        hfp:write("\t\t\tfprintf(stream, ", e, ");\n")
    end
    hfp:write('\t\t\tfprintf(stream, ")");\n')
    hfp:write("\t\t\tbreak;\n")
end
hfp:write("\t\tdefault:\n")
hfp:write('\t\t\tprintf("unknown(%d)", m->code);\n')
hfp:write("\t}\n")
hfp:write("}\n")

hfp:write("#endif\n")
hfp:close()
