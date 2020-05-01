local args = {...}
local infilename = args[1]
local outfilename = args[2]

local infile = io.open(infilename, "rb")
local outfile = io.open(outfilename, "wb")

local function readhex(bytes)
	return tonumber("0x"..infile:read(bytes*2))
end

while true do
	local kind = infile:read(1)
	local len = readhex(2)
	local here = infile:seek()
	if kind == 'E' then
		break
	elseif kind == 'S' then -- source for subroutine
		local subid = readhex(2)
		local data = infile:read(len - 4)
		outfile:write(data)
	elseif kind == 'R' then -- usage reference between subroutines
		local userid = readhex(2)
		local usedid = readhex(2)
		--outfile:write(string.format("; ref: user=%02x used=%02x\n", userid, usedid))
	elseif kind == 'X' then -- declare external subroutine
		local subid = readhex(2)
		local data = infile:read(len - 4)

	elseif kind == 'W' then -- workspace size declaration
		local subid = readhex(2)
		local wid = readhex(1)
		local size = readhex(2)
		outfile:write("\tdseg\n");
		outfile:write(string.format("w%d:\tds %d\n", subid, size))
	elseif kind == 'N' then
		-- ignore
	else
		error("unknown record")
	end
	infile:seek("set", here + len)
end

infile:close()
outfile:close()

