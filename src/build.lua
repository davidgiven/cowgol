definerule("cowgol",
	{
		srcs = { type="targets" },
		toolchain = { type="string" },
	},
	function (e)
		return _G[e.toolchain] {
			name = e.name,
			srcs = e.srcs
		}
	end
)

definerule("oldcom",
	{
		srcs = { type="targets" },
		rtdir = { type="string" },
		arch = { type="string" },
	},
	function (e)
		local coo = normalrule {
			name = e.name.."-coo",
			ins = {
				"src/oldcom+oldcom-"..e.arch,
				e.srcs,
				"rt/*.coh",
				"rt/"..e.rtdir.."/*.coh",
			},
			outleaves = { e.name..".coo" },
			commands = {
				"%{ins[1]} -Irt/ -Irt/"..e.rtdir.."/ %{ins[2]} %{outs[1]}"
			}
		}
		return coo
	end
)

definerule("oldcom-cpm-8080",
	{
		srcs = { type="targets" },
	},
	function (e)
		return oldcom {
			name = e.name,
			srcs = e.srcs,
			rtdir = "cpm",
			arch = "8080"
		}
	end
)

definerule("oldcom-linux-80386",
	{
		srcs = { type="targets" },
	},
	function (e)
		return oldcom {
			name = e.name,
			srcs = e.srcs,
			rtdir = "80386-linux",
			arch = "80386"
		}
	end
)

definerule("oldcom-linux-thumb2",
	{
		srcs = { type="targets" },
	},
	function (e)
		return oldcom {
			name = e.name,
			srcs = e.srcs,
			rtdir = "thumb2-linux",
			arch = "thumb2"
		}
	end
)

definerule("oldcom-cgen",
	{
		srcs = { type="targets" },
	},
	function (e)
		return oldcom {
			name = e.name,
			srcs = e.srcs,
			rtdir = "cgen",
			arch = "cgen"
		}
	end
)

