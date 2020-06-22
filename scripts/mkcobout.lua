require "./scripts/libcowgol"

local args = {...}
local infilename = args[2]
local outfilename = args[3]

local midcodes = loadmidcodes(infilename)

local hfp = io.open(outfilename, "w")

local function title(s)
	return s:sub(1, 1):upper()..s:sub(2):lower()
end

-- Compute signatures.

local signatures = {}
for m, md in pairs(midcodes) do
	local t = {}
	for _, a in ipairs(md.args) do
		t[#t+1] = a.name
		t[#t+1] = a.type
	end
	local sig = table.concat(t, ":")
	signatures[sig] = {md = md}
	md.signature = sig
end

local sigid = 1
for sig, sigd in pairs(signatures) do
	sigd.id = sigid
	sigid = sigid + 1
end

for sig, sigd in pairs(signatures) do
	hfp:write("# ", sig, "\n")
	hfp:write("sub WriteMid", sigd.id, " implements MidWriter is\n")
	for _, a in ipairs(sigd.md.args) do
		n = "node."..sigd.md.base:lower().."."..a.name
		if a.type == "uint8" then
			hfp:write("\tE_b8(", n, ");\n")
		elseif (a.type == "uint16") or (a.type == "LabelRef") then
			hfp:write("\tE_b16(", n, ");\n")
		elseif a.type == "int32" then
			hfp:write("\tE_b32(", n, " as uint32);\n")
		elseif a.type == "Size" then
			hfp:write("\tE_bsize(", n, ");\n")
		elseif a.type == "[Subroutine]" then
			hfp:write("\tE_b16(", n, ".id);\n")
		elseif a.type == "[Symbol]" then
			hfp:write("\tE_b16(", n, ".vardata.subr.id);\n")
			hfp:write("\tE_b8(", n, ".vardata.wsid);\n")
			hfp:write("\tE_bsize(", n, ".vardata.offset);\n")
			hfp:write("\tE_b8(", n, ".vardata.type.width as uint8);\n")
		elseif a.type == "string" then
			hfp:write("\tE_countedstring(", n, ");\n")
		else
			error("unknown type "..a.type)
		end
	end
	hfp:write("end sub;\n")
end
hfp:write("var writers: MidWriter[] := {\n")
for i = 1, sigid-1 do
	hfp:write("\tWriteMid"..i..",\n")
end
hfp:write("};\n")

local bynumber = {}
for m, md in pairs(midcodes) do
	bynumber[md.id] = md
end
hfp:write("var signatures: uint8[] := {\n")
for _, md in ipairs(bynumber) do
	hfp:write("\t", signatures[md.signature].id-1, ", # ", md.name, "\n")
end
hfp:write("};\n")

