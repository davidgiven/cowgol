function trim(s)
    return (s:gsub("^%s*(.-)%s*$", "%1"))
end

function split(s)
    local ss = {}
    s:gsub("[^,]+", function(c) ss[#ss+1] = trim(c) end)
    return ss
end

function parsearglist(argspec)
    local args = {}
    argspec = (argspec or ""):gsub("^%(", ""):gsub("%)$", "")
    for _, word in ipairs(split(argspec or "")) do
        _, _, type, name = word:find("^(.*) +(%w+)$")
        if not type then
            error("unparseable argument: '"..word.."'")
        end

        args[#args+1] = { name = name, type = type }
    end
    return args
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

            midcodes[name] = { args = parsearglist(args), emitter = emitter }
        end
    end
    return midcodes
end
