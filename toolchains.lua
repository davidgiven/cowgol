toolchain_ocpm = {
	name = "ocpm",
	compiler = "bin/oldcom-8080",
	linker = uncoo,
	assembler = buildzmac,
	runtime = "rt/cpm",
	asmext = ".asm",
	binext = ".8080.com",
	tester = cpmtest,
}

toolchain_olx386 = {
	name = "olx386",
	compiler = "bin/oldcom-80386",
	linker = uncoo,
	assembler = buildgas386,
	runtime = "rt/80386-linux",
	asmext = ".s",
	binext = ".exe",
	tester = qemu386test
}

toolchain_olxthumb2 = {
	name = "olxthumb2",
	compiler = "bin/oldcom-thumb2",
	linker = uncoo,
	assembler = buildgasarm,
	runtime = "rt/thumb2-linux",
	asmext = ".s",
	binext = ".exe",
	tester = qemuarmtest
}

toolchain_ocgen = {
	name = "ocgen",
	compiler = "bin/oldcom-cgen",
	linker = uncoo,
	assembler = buildcgen,
	runtime = "rt/cgen",
	asmext = ".c",
	binext = ".exe",
	tester = nativetest
}

toolchain_ncpm = {
	name = "ncpm",
	compiler = "bin/cowcom.8080.ocgen.exe",
	linker = cowlink,
	assembler = buildzmac,
	runtime = "rt/cpm",
	asmext = ".asm",
	binext = ".8080.com",
	tester = cpmtest,
}

ALL_TOOLCHAINS = {
	toolchain_ocpm,
	toolchain_olx386,
	toolchain_olxthumb2,
	toolchain_ocgen,
	toolchain_ncpm,
}

