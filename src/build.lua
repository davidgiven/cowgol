definerule("cowgol",
	{
		srcs = { type="targets" },
		toolchain = { type="string" },
	},
	function (e)
		return _G["compile-"..e.toolchain] {
			name = e.name,
			srcs = e.srcs
		}
	end
)

definerule("cowlink",
	{
		srcs = { type="targets" },
		toolchain = { type="string" },
	},
	function (e)
		return _G["link-"..e.toolchain] {
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

definerule("uncoo",
	{
		srcs = { type="targets" },
		extension = { type="string" },
	},
	function (e)
		return normalrule {
			name = e.name,
			ins = {
				"scripts/uncoo.lua",
				e.srcs
			},
			outleaves = { e.name.."."..e.extension },
			commands = {
				"lua %{ins[1]} %{ins[2]} %{outs[1]}"
			}
		}
	end
)
				
definerule("compile-oldcom-cpm-8080",
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

definerule("link-oldcom-cpm-8080",
	{
		srcs = { type="targets" },
	},
	function (e)
		local asm = uncoo {
			name = e.name.."-asm",
			srcs = e.srcs,
			extension = "asm"
		}

		return zmac {
			name = e.name,
			relocatable = false,
			srcs = { asm },
			deps = {
				"rt/cpm/cowgol.inc",
				"rt/cpm/tail.inc",
			}
		}
	end
)

definerule("compile-oldcom-linux-80386",
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

definerule("link-oldcom-linux-80386",
	{
		srcs = { type="targets" },
	},
	function (e)
		local asm = uncoo {
			name = e.name.."-asm",
			srcs = {
				e.srcs,
				"rt/80386-linux/cowgol.inc",
			},
			extension = "s"
		}

		local obj = normalrule {
			name = e.name.."-o",
			ins = { asm },
			outleaves = { e.name..".o" },
			commands = {
				"i686-linux-gnu-as -g %{ins[1]} -o %{outs[1]}"
			}
		}

		return normalrule {
			name = e.name,
			ins = { obj },
			outleaves = { e.name..".386" },
			commands = {
				"i686-linux-gnu-ld -g %{ins[1]} -o %{outs[1]}"
			}
		}
	end
)

definerule("compile-oldcom-linux-thumb2",
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

definerule("link-oldcom-linux-thumb2",
	{
		srcs = { type="targets" },
	},
	function (e)
		local asm = uncoo {
			name = e.name.."-asm",
			srcs = {
				e.srcs,
				"rt/thumb2-linux/cowgol.inc",
			},
			extension = "s"
		}

		local obj = normalrule {
			name = e.name.."-o",
			ins = { asm },
			outleaves = { e.name..".o" },
			commands = {
				"arm-linux-gnueabihf-as -g %{ins[1]} -o %{outs[1]}"
			}
		}

		return normalrule {
			name = e.name,
			ins = { obj },
			outleaves = { e.name..".386" },
			commands = {
				"arm-linux-gnueabihf-ld -g %{ins[1]} -o %{outs[1]}"
			}
		}
	end
)

definerule("compile-oldcom-cgen",
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

definerule("link-oldcom-cgen",
	{
		srcs = { type="targets" },
	},
	function (e)
		local c = uncoo {
			name = e.name.."-c",
			srcs = e.srcs,
			extension = "c"
		}

		return cprogram {
			name = e.name,
			srcs = { c },
			deps = { "rt/cgen/cowgol.h" },
			vars = {
				["+cflags"] = "-Irt/cgen"
			}
		}
	end
)


