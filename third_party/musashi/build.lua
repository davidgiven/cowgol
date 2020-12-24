cprogram {
	ins = {
		"third_party/musashi/m68kmake.c"
	},
	outs = {
		"$OBJ/third_party/musashi/m68kmake"
	}
}

rule {
	ins = {
		"$OBJ/third_party/musashi/m68kmake",
		"third_party/musashi/m68k_in.c"
	},
	outs = {
		"$OBJ/third_party/musashi/m68kops.c",
		"$OBJ/third_party/musashi/m68kops.h"
	},
	cmd = "@1 $OBJ/third_party/musashi @2 > /dev/null"
}

clibrary {
	ins = {
		"third_party/musashi/m68kconf.h",
		"third_party/musashi/m68kcpu.c",
		"third_party/musashi/m68kcpu.h",
		"third_party/musashi/m68kdasm.c",
		"third_party/musashi/m68k.h",
		"third_party/musashi/m68kmmu.h",
		"third_party/musashi/softfloat/softfloat.c",
		"third_party/musashi/softfloat/softfloat.h",
		"$OBJ/third_party/musashi/m68kops.c",
		"$OBJ/third_party/musashi/m68kops.h"
	},
	outs = { "$OBJ/libmusashi.a" }
}
