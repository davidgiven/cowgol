local args = {...}
local infilename = args[1]
local outfilename = args[2]

local infile = io.open(infilename, "rb")
local outfile = io.open(outfilename, "wb")

while true do
	local kind = infile:read(1)
	if kind == 'E' then
		break
	elseif kind == 'S' then
		local len = tonumber("0x"..infile:read(4))
		local data = infile:read(len)
		outfile:write(data)
	else
		error("unknown record")
	end
end

infile:close()
outfile:close()

