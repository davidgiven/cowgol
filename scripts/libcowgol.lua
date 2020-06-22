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
		_, _, name, type = word:find("^([^:]+): *(.*)$")
		if not name then
			_, _, type, name = word:find("^(.*) +(%w+)$")
			if not type then
				error("unparseable argument: '"..word.."'")
			end
        end

        args[#args+1] = { name = name, type = type }
    end
    return args
end

function loadmidcodes(filename)
    local infp = io.open(filename, "r")
    local midcodes = {}
	id = 1
    for line in infp:lines() do
        local tokens = {}
        line = line:gsub(" *#.*$", "")
        if (line ~= "") then
            local _, _, hassizes, ins, outs, name, args, emitter = line:find("^%s*(%S+)%s+(%S+)%s+(%S+)%s+(%w+)(%b())%s*=%s*(%b())%s*$")
            if not name then
				_, _, hassizes, ins, outs, name, args = line:find("^%s*(%S+)%s+(%S+)%s+(%S+)%s+(%w+)(%b())%s*$")
            end
            if not name then
                error("syntax error in: "..line)
            end
			hassizes = (hassizes == "y")
			ins = tonumber(ins)
			outs = tonumber(outs)

			local function add(base, name, id)
				midcodes[name] = {
					base = base,
					name = name,
					args = parsearglist(args),
					emitter = emitter,
					hassizes = hassizes,
					ins = ins,
					outs = outs,
					id = id
				}
			end

			if hassizes then
				add(name, name.."0", id+0)
				add(name, name.."1", id+1)
				add(name, name.."2", id+2)
				add(name, name.."4", id+3)
				add(name, name.."8", id+4)
				id = id + 5
			else
				add(name, name, id)
				id = id + 1
			end
        end
    end
    return midcodes
end
