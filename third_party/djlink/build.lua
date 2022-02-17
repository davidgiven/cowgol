cxxprogram {
	ins = { "third_party/djlink/objdump.cc" },
	outs = { "bin/objdump" }
}

cxxprogram {
	ins = { "third_party/djlink/bindiff.cc" },
	outs = { "bin/bindiff" }
}

cxxprogram {
	ins = {
		"third_party/djlink/djlink.cc",
		"third_party/djlink/fixups.cc",
		"third_party/djlink/libs.cc",
		"third_party/djlink/list.cc",
		"third_party/djlink/map.cc",
		"third_party/djlink/objs.cc",
		"third_party/djlink/out.cc",
		"third_party/djlink/quark.cc",
		"third_party/djlink/segments.cc",
		"third_party/djlink/stricmp.cc",
		"third_party/djlink/symbols.cc",
		"third_party/djlink/fixups.h",
		"third_party/djlink/libs.h",
		"third_party/djlink/link.h",
		"third_party/djlink/list.h",
		"third_party/djlink/map.h",
		"third_party/djlink/objs.h",
		"third_party/djlink/omf.h",
		"third_party/djlink/out.h",
		"third_party/djlink/quark.h",
		"third_party/djlink/segments.h",
		"third_party/djlink/stricmp.h",
		"third_party/djlink/symbols.h",
		"third_party/djlink/vars.h",
	},
	outs = { "bin/djlink" }
}

function djlink(e)
	local map = e.outs[1]:ext(".map")
	rule {
		ins = concat {
			"bin/djlink",
			e.ins,
		},
		outs = concat {
			e.outs,
			map
		},
		cmd = "@1 -o &1 -m &2 @2 > /dev/null"
	}
end 
