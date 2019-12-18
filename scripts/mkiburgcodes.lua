require "./scripts/libcowgol"

local args = {...}
local infilename = args[2]
local outfilename = args[3]

local midcodes = loadmidcodes(infilename)

local hfp = io.open(outfilename, "w")
hfp:write("static struct terminal terminals[] = {\n")

for m, t in pairs(midcodes) do
	hfp:write(string.format('\t{ %d, "%s", %d },\n', t.id, m, t.ins))
end
hfp:write("};\n");

hfp:close()
