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
local signaturesbynumber = {}
for sig, sigd in pairs(signatures) do
	sigd.id = sigid
	sigid = sigid + 1
	signaturesbynumber[sigd.id] = sigd
end

for sig, sigd in pairs(signatures) do
	hfp:write("# ", sig, "\n")
	hfp:write("sub ReadMid", (sigd.id-1), " implements MidReader is\n")
	for _, a in ipairs(sigd.md.args) do
		local name = a.name
		local n = "node."..sigd.md.base:lower().."."..name
		if a.type == "uint8" then
			hfp:write("\t", n, " := I_b8();\n")
		elseif (a.type == "uint16") or (a.type == "LabelRef") then
			hfp:write("\t", n, " := I_b16();\n")
		elseif a.type == "int32" then
			hfp:write("\t", n, " := I_b32() as int32;\n")
		elseif a.type == "Size" then
			hfp:write("\t", n, " := I_bsize();\n")
		elseif a.type == "[Subroutine]" then
			hfp:write("\t", n, " := FindSubr(I_b16());\n")
		elseif a.type == "[Symbol]" then
			hfp:write("\t", n, ".subr := FindSubr(I_b16());\n")
			hfp:write("\t", n, ".wsid := I_b8();\n")
			hfp:write("\t", n, ".off := I_bsize();\n")
			hfp:write("\t", n, ".width := I_b8();\n")
		elseif a.type == "string" then
			hfp:write("\t", n, " := I_countedstring();\n")
		else
			error("unknown type "..a.type)
		end
	end
	hfp:write("end sub;\n")
end

hfp:write("var midcode_readers: MidReader[] := {\n")
for i = 1, sigid-1 do
	hfp:write("\tReadMid"..(i-1)..",\n")
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

hfp:write("var midcode_ins: uint8[] := {\n")
for _, md in ipairs(bynumber) do
	hfp:write("\t", md.ins, ", # ", md.name, "\n")
end
hfp:write("};\n")


