require "./scripts/libcowgol"

local args = {...}
local infilename = args[2]
local outfilename = args[3]

local midcodes = loadmidcodes(infilename)

local hfp = io.open(outfilename, "w")
hfp:write('#include "globals.h"\n')
hfp:write('#include "midcodes.h"\n')

-- Routine for printing a midnode.

hfp:write("void print_midnode(FILE* stream, struct midnode* n) {\n")
hfp:write("switch (n->op) {\n")
for m, t in pairs(midcodes) do
	hfp:write(string.format("case MIDCODE_%s:\n", m))
	hfp:write('fprintf(stream, "', m, '(");\n')
	local first = true
	if t.ins >= 1 then
		hfp:write('print_midnode(stream, n->left);\n')
		first = false
	end
	if t.ins == 2 then
		if not first then
			hfp:write('fprintf(stream, ", ");\n')
		end
		hfp:write('print_midnode(stream, n->right);\n')
		first = false
	end
		
	local e = t.emitter
	if e then
		e = e:gsub("^%(", ""):gsub("%)$", ""):gsub("%$%$", "n->u."..m:lower())
		hfp:write(string.format('fprintf(stream, %s%s);\n',
			(first == false) and '", " ' or '', e))
	end
	hfp:write("break;\n")
end
hfp:write('default: fprintf(stream, "UNKNOWN(%d", n->op);\n')
hfp:write("}\n");
hfp:write('fprintf(stream, ")");\n')
hfp:write("}\n");

-- Routines for allocating midnodes.

for m, t in pairs(midcodes) do
    hfp:write("struct midnode* mid_", m:lower(), "(")
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
    hfp:write(") {\n")
    hfp:write("\tstruct midnode* m = calloc(1, sizeof(struct midnode));\n")
    hfp:write("\tm->op = MIDCODE_", m, ";\n")
	if t.ins >= 1 then
		hfp:write('\tm->left = left;\n')
	end
	if t.ins == 2 then
		hfp:write('\tm->right = right;\n')
	end
    for _, a in ipairs(t.args) do
        hfp:write("\tm->u.", m:lower(), ".", a.name, " = ", a.name, ";\n")
    end
	hfp:write("\treturn m;\n")
    hfp:write("}\n")
end

-- And now the factory routines.

for m, t in pairs(midcodes) do
	if t.hassizes and m:find("0$") then
		m = m:gsub("0$", "")

		hfp:write("struct midnode* mid_", m:lower(), "(int width")
		if t.ins >= 1 then
			hfp:write(', struct midnode* left')
		end
		if t.ins == 2 then
			hfp:write(', struct midnode* right')
		end
		if (#t.args > 0) then
			for _, a in ipairs(t.args) do
				hfp:write(", ", a.type, " ", a.name)
			end
		end
		hfp:write(") {\n")

		local function caller(name)
			hfp:write("return mid_", name:lower(), "(")
			local first = true
			if t.ins >= 1 then
				hfp:write('left')
				first = false
			end
			if t.ins == 2 then
				if not first then
					hfp:write(", ")
				end
				hfp:write('right')
				first = false
			end
			if (#t.args > 0) then
				for _, a in ipairs(t.args) do
					if not first then
						hfp:write(", ")
					end
					hfp:write(a.name)
					first = false
				end
			end
			hfp:write(");\n")
		end

		hfp:write("switch (width) {\n")
		hfp:write("case 0: ") caller(m.."0")
		hfp:write("case 1: ") caller(m.."1")
		hfp:write("case 2: ") caller(m.."2")
		hfp:write("case 4: ") caller(m.."4")
		hfp:write("case 8: ") caller(m.."8")
		hfp:write('default: fatal("bad midnode width %d", width);\n')
		hfp:write("}\n")
		hfp:write("}\n")
	end
end

hfp:close()
