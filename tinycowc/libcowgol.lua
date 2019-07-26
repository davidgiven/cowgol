function trim(s)
    return (s:gsub("^%s*(.-)%s*$", "%1"))
end

function split(s)
    local ss = {}
    s:gsub("[^,]+", function(c) ss[#ss+1] = trim(c) end)
    return ss
end

function loadmidcodes(filename)
    local infp = io.open(filename, "r")
    local midcodes = {}
    for line in infp:lines() do
        local tokens = {}
        line = line:gsub(" *#.*$", "")
        if (line ~= "") then
            local _, _, name, args, emitter = line:find("^(%w+)(%b()) *= *(%b())$")
            if not name then
                _, _, name, args = line:find("^(%w+)(%b())$")
            end
            if not name then
                error("syntax error in: "..line)
            end

            args = args or ""
            args = args:gsub("^%(", ""):gsub("%)$", "")

            midcodes[name] = { args = split(args or ""), emitter = emitter }
        end
    end
    return midcodes
end
