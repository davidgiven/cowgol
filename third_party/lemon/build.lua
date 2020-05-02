cprogram {
	name = "lemon",
	srcs = { "./lemon.c" }
}

cprogram {
	name = "lemon-cowgol",
	srcs = { "./lemon-cowgol.c" }
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

