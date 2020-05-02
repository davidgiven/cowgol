include "third_party/zmac/build.lua"
include "tools/build.lua"

zmac {
    name = "biosbdos_cim",
    srcs = { "./biosbdos.z80" },
	relocatable = false
}

objectify {
    name = "biosbdos_cim_c",
    srcs = { "+biosbdos_cim" },
	symbol = "biosbdosdata",
}

cprogram {
    name = "cpmemu",
    srcs = {
		"./*.c",
		"+biosbdos_cim_c",
	},
    vars = {
        ["+ldflags"] = { "-lz80ex", "-lz80ex_dasm", "-lreadline" } 
    }
}
