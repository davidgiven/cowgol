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

for m, t in pairs(midcodes) do
    hfp:write("sub mid_", m:lower(), "(")
	local first = true
	if t.ins >= 1 then
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
    hfp:write("\tm.op := MIDCODE_", m, ";\n")
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

-- And now the factory routines.

for m, t in pairs(midcodes) do
	if t.hassizes and m:find("0$") then
		m = m:gsub("0$", "")

		hfp:write("sub mid_", m:lower(), "(width: uint8")
		if t.ins >= 1 then
			hfp:write(', left: [Midnode]')
		end
		if t.ins == 2 then
			hfp:write(', right: [Midnode]')
		end
		if (#t.args > 0) then
			for _, a in ipairs(t.args) do
				hfp:write(", ", a.name, ": ", a.type)
			end
		end
		hfp:write("): (result: [Midnode])\n")

		local function caller(name)
			hfp:write("result := mid_", name:lower(), "(")
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

		hfp:write("\tif width == 0 then ") caller(m.."0")
		hfp:write("\telseif width == 1 then ") caller(m.."1")
		hfp:write("\telseif width == 2 then ") caller(m.."2")
		hfp:write("\telseif width == 4 then ") caller(m.."4")
		hfp:write("\telseif width == 8 then ") caller(m.."8")
		hfp:write("\telse BadMidcodeWidth(width);\n")
		hfp:write("\tend if;\n")
		hfp:write("end sub;\n")
	end
end

hfp:close()
