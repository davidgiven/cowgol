require "./libcowgol"

local args = {...}
local midcodetab = args[2]
local archpat = args[3]
local outfile = args[4]

local midcodes = loadmidcodes(midcodetab)
local cfp = io.open(outfile, "w")

local infp = io.open(archpat, "r")
local lineno = 0

local function readline()
    lineno = lineno + 1
    return infp:read("*l")
end

-- Emit C header

while true do
    local s = readline()
    if (s == "%%") then
        break
    end
    cfp:write(s, "\n")
end

-- Read values.

local values = {}
while true do
    local line = trim(readline())
    if (line == "%%") then
        break
    end
    if not line:find("^//") and (line ~= "") then
        local _, _, name, args, emitter = line:find("^(%w+)(%b()) *= *(%b())$")
        if not name then
            _, _, name, args = line:find("^(%w+)$")
        end
        if not name then
            error("syntax error in: "..lineno)
        end

        args = args or ""
        args = args:gsub("^%(", ""):gsub("%)$", "")

        if midcodes[name] then
            error(string.format("value '%s' conflicts with a midcode of the same name", name))
        end
        values[name] = { args = split(args or ""), emitter = emitter }
    end
end
