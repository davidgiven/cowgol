require "./scripts/libcowgol"

local args = {...}
local infilename = args[2]
local outfilename = args[3]
local mode = args[4]

if mode == nil then
	error("must supply mode")
end

local midcodes = loadmidcodes(infilename)

local hfp = io.open(outfilename, "w")

local function title(s)
	return s:sub(1, 1):upper()..s:sub(2):lower()
end

-- Midcode names.

local first = true
for m, t in pairs(midcodes) do
	hfp:write(string.format("const MIDCODE_%s := %d;\n", m, t.id))
end

-- Midcode subrecords.

local basemidcodes = {}
for m, md in pairs(midcodes) do
	basemidcodes[md.base] = md
end
for m, md in pairs(basemidcodes) do
    if (#md.args > 0) then
        hfp:write("record Midcode", title(m), " is\n")
        for _, a in ipairs(md.args) do
			if mode == "be" then
				local name = a.name
				if name == "subr" then
					name = "subrid"
				end
				if a.type == "[Subroutine]" then
					hfp:write("\t", name, ": SubrId;\n")
				elseif a.type == "[Symbol]" then
					hfp:write("\t", name, ": Symbol;\n")
				else
					hfp:write("\t", name, ": ", a.type, ";\n")
				end
			else
				hfp:write("\t", a.name, ": ", a.type, ";\n")
			end
        end
        hfp:write("end record;\n")
    end
end

-- Midcode structure itself.

hfp:write("record Node is\n");
for m, md in pairs(basemidcodes) do
    if (#md.args > 0) then
        hfp:write("\t", m:lower(), " @at(0): Midcode", title(md.base), ";\n")
    end
end
if mode ~= "be" then
	hfp:write("\ttype: [Type];\n")
end
hfp:write("\tleft: [Node];\n")
hfp:write("\tright: [Node];\n")
if (mode == "combined") or (mode == "be") then
	hfp:write("\tproducer: [Instruction];\n")
	hfp:write("\tconsumer: [Instruction];\n")
	hfp:write("\tdesired_reg: RegId;\n")
	hfp:write("\tproduced_reg: RegId;\n")
end
if mode == "be" then
	hfp:write("\tnext: [Node];\n")
end
hfp:write("\top: uint8;\n")
hfp:write("end record;\n");

-- Routines for allocating midnodes.

if mode ~= "be" then
	local function write_midcode_constructor(m, t)
		local first = true
		if t.hassizes then
			if not m:find("0$") then
				return
			end
			hfp:write("sub Mid", title(m):gsub("0$", ""), "(width: uint8")
			first = false
		else
			hfp:write("sub Mid", title(m), "(")
		end

		if t.ins >= 1 then
			if not first then
				hfp:write(', ')
			end
			hfp:write('left: [Node]')
			first = false
		end
		if t.ins == 2 then
			if not first then
				hfp:write(', ')
			end
			hfp:write('right: [Node]')
			first = false
		end
		if (#t.args > 0) then
			for _, a in ipairs(t.args) do
				if not first then
					hfp:write(", ")
				end
				hfp:write(a.name, ": ", a.type)
				first = false
			end
		end
		hfp:write("): (m: [Node]) is\n")
		hfp:write("\tm := AllocateNewNode(MIDCODE_", m)
		if t.hassizes then
			hfp:write(" + WidthToIndex(width)")
		end
		hfp:write(");\n")

		if t.ins >= 1 then
			hfp:write('\tm.left := left;\n')
		end
		if t.ins == 2 then
			hfp:write('\tm.right := right;\n')
		end
		for _, a in ipairs(t.args) do
			hfp:write("\tm.", t.base:lower(), ".", a.name, " := ", a.name, ";\n")
		end
		hfp:write("end sub;\n")
	end

	for m, t in pairs(midcodes) do
		write_midcode_constructor(m, t)
	end
end

-- Midcode labels.

local bynumber = {}
for m, md in pairs(midcodes) do
	bynumber[md.id] = md
end

hfp:write("sub MidcodeName(op: uint8): (name: string) is\n")
hfp:write("\tvar labels: string[] := {\n")
for _, md in ipairs(bynumber) do
	hfp:write('\t\t"', md.name, '",\n')
end
hfp:write("\t};\n")
hfp:write("\tname := labels[op-1];\n")
hfp:write("end sub;\n")
hfp:close()
