require "./scripts/libcowgol"

local args = {...}
local infilename = args[2]
local outfilename = args[3]

local midcodes = loadmidcodes(infilename)

local bynumber = {}
for m, t in pairs(midcodes) do
	bynumber[t.id] = m
end

local hfp = io.open(outfilename, "w")
hfp:write("static const char* terminals[] = {\n")
hfp:write('\t"",\n')

for _, m in ipairs(bynumber) do
	hfp:write(string.format('\t%q,\n', m))
end
hfp:write("};\n");

hfp:close()
