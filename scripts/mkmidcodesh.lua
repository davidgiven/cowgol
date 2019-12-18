require "./scripts/libcowgol"

local args = {...}
local infilename = args[2]
local outfilename = args[3]

local midcodes = loadmidcodes(infilename)

local hfp = io.open(outfilename, "w")
hfp:write("#ifndef MIDCODES_H\n")
hfp:write("#define MIDCODES_H\n")

hfp:write("enum midcodes {\n")
local first = true
for m, t in pairs(midcodes) do
	if not first then
		hfp:write(",")
	else
		first = false
	end
	hfp:write(string.format("MIDCODE_%s = %d\n", m, t.id))
end
hfp:write("};\n");

hfp:write("struct midnode {\n")
hfp:write("uint8_t op;\n");
hfp:write("int iburg;\n");
hfp:write("struct midnode* left;\n")
hfp:write("struct midnode* right;\n")
hfp:write("union {\n");
for m, md in pairs(midcodes) do
    if (#md.args > 0) then
        hfp:write("struct { ")
        for _, a in ipairs(md.args) do
            hfp:write(a.type, " ", a.name, "; ")
        end
        hfp:write("} ", m:lower(), ";\n")
    end
end
hfp:write("} u;\n");
hfp:write("};\n");

hfp:write("extern void print_midnode(FILE* stream, struct midnode* node);\n")

-- Routines for allocating midnodes.

for m, t in pairs(midcodes) do
    hfp:write("extern struct midnode* mid_", m:lower(), "(")
	local first = true
	if t.ins >= 1 then
		hfp:write('struct midnode* left')
		first = false
	end
	if t.ins == 2 then
		if not first then
			hfp:write(', ')
		end
		hfp:write('struct midnode* right')
		first = false
	end
    if (#t.args > 0) then
        for _, a in ipairs(t.args) do
            if not first then
                hfp:write(", ")
            end
            hfp:write(a.type, " ", a.name)
			first = false
        end
    elseif (t.ins == 0) and (#t.args == 0) then
        hfp:write("void")
    end
    hfp:write(");\n")
end

hfp:write("#endif\n")
hfp:close()
