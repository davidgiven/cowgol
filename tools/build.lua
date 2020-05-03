definerule("objectify",
    {
        srcs = { type="targets" },
		symbol = { type="string" },
    },
    function (e)
        return normalrule {
            name = e.name,
            ins = {
                "tools/objectify",
                e.srcs,
            },
            outleaves = { e.symbol..".c" },
            commands = {
                "lua %{ins[1]} "..e.symbol.." < %{ins[2]} > %{outs}"
            }
        }
    end
)

