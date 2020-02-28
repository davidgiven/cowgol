require "./scripts/libcowgol"

local args = {...}
local infilename = args[2]
local outfilename = args[3]

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

for m, md in pairs(midcodes) do
    if (#md.args > 0) then
        hfp:write("record Midcode", title(m), "\n")
        for _, a in ipairs(md.args) do
            hfp:write("\t", a.name, ": ", a.type, ";\n")
        end
        hfp:write("end record;\n")
    end
end

-- Midcode structure itself.

hfp:write("record Midnode\n");
for m, md in pairs(midcodes) do
    if (#md.args > 0) then
        hfp:write("\t", m:lower(), " @at(0): Midcode", title(m), ";\n")
    end
end
hfp:write("\top: uint8;\n")
hfp:write("\tleft: [Midnode];\n")
hfp:write("\tright: [Midnode];\n")
hfp:write("end record;\n");

-- Routines for allocating midnodes.

local function write_midcode_constructor(m, t)
	local first = true
	if t.hassizes then
		if not m:find("0$") then
			return
		end
		hfp:write("sub mid_", m:lower():gsub("0$", ""), "(width: uint8")
		first = false
	else
		hfp:write("sub mid_", m:lower(), "(")
	end

	if t.ins >= 1 then
		if not first then
			hfp:write(', ')
		end
		hfp:write('left: [Midnode]')
		first = false
	end
	if t.ins == 2 then
		if not first then
			hfp:write(', ')
		end
		hfp:write('right: [Midnode]')
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
    hfp:write("): (m: [Midnode])\n")
    hfp:write("\tm := AllocBlock(@bytesof Midnode) as [Midnode];\n")
    hfp:write("\tm.op := MIDCODE_", m)
	if t.hassizes then
		hfp:write(" + WidthToIndex(width)")
	end
	hfp:write(";\n")

	if t.ins >= 1 then
		hfp:write('\tm.left := left;\n')
	end
	if t.ins == 2 then
		hfp:write('\tm.right := right;\n')
	end
    for _, a in ipairs(t.args) do
        hfp:write("\tm.", m:lower(), ".", a.name, " := ", a.name, ";\n")
    end
    hfp:write("end sub;\n")
end

for m, t in pairs(midcodes) do
	write_midcode_constructor(m, t)
end

hfp:close()
