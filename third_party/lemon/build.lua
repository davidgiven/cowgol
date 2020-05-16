cprogram {
	ins = { "third_party/lemon/lemon.c" },
	outs = { "bin/lemon" }
}

cprogram {
	ins = { "third_party/lemon/lemon-cowgol.c" },
	outs = { "bin/lemon-cowgol" }
}

function lemon(e)
	local dir = e.outs[1]:gsub("/[^/]*$", "").."/tmp"
	rule {
		ins = concat {
			"bin/lemon",
			"third_party/lemon/lempar.c",
			e.ins,
		},
		outs = e.outs,
		cmd = "mkdir -p "..dir.." && @1 -l -T@2 -d"..dir.." @3"
			.." && mv "..dir.."/parser.c &1"
			.." && mv "..dir.."/parser.h &2"
	}
end

--[[
include "build/yacc.lua"

cprogram {
	name = "lemon",
	srcs = { "./lemon.c" }
}

cprogram {
	name = "lemon-cowgol",
	srcs = { "./lemon-cowgol.c" },
}

definerule("lemon",
	{
		srcs = { type="targets" },
	},
	function (e)
		return normalrule {
			name = e.name,
			ins = {
				"third_party/lemon+lemon",
				"third_party/lemon/lempar.c",
				e.srcs
			},
			outleaves = {
				e.name..".c",
				e.name..".h",
			},
			commands = {
				"%{ins[1]} -l -T%{ins[2]} -d%{dir} %{ins[3]}"
			}
		}
	end
)

definerule("lemoncowgol",
	{
		srcs = { type="targets" },
	},
	function (e)
		return normalrule {
			name = e.name,
			ins = {
				"third_party/lemon+lemon-cowgol",
				"src/cowcom/lempar.coh",
				e.srcs
			},
			outleaves = {
				e.name..".coh",
				e.name..".tokens.coh",
			},
			commands = {
				"%{ins[1]} -l -T%{ins[2]} -d%{dir} %{ins[3]}",
				"mv %{dir}/parser.c %{outs[1]}",
				"mv %{dir}/parser.h %{outs[2]}",
			}
		}
	end
)
--]]
--
