local args = {...}
local infilename = args[1]
local outfilename = args[2]

local infile = io.open(infilename, "rb")
local outfile = io.open(outfilename, "wb")

while true do
	local kind = infile:read(1)
	local len = tonumber("0x"..infile:read(4))
	local here = infile:seek()
	if kind == 'E' then
		break
	elseif kind == 'S' then
		local subid = tonumber("0x"..infile:read(4))
		local data = infile:read(len - 4)
		outfile:write(data)
	elseif kind == 'R' then
		local userid = tonumber("0x"..infile:read(4))
		local usedid = tonumber("0x"..infile:read(4))
	else
		error("unknown record")
	end
	infile:seek("set", here + len)
end

infile:close()
outfile:close()

