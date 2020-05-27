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
	compiler = "bin/cowcom.8080.nncgen.exe",
	linker = cowlink_cpm,
	assembler = buildzmac,
	runtime = "rt/cpm",
	asmext = ".asm",
	binext = ".8080.com",
	tester = cpmtest,
}

toolchain_ncpmz = {
	name = "ncpmz",
	compiler = "bin/cowcom.z80.nncgen.exe",
	linker = cowlink_cpmz,
	assembler = buildzmac,
	runtime = "rt/cpmz",
	asmext = ".z80",
	binext = ".z80.com",
	tester = cpmtest,
}

toolchain_ncgen = {
	name = "ncgen",
	compiler = "bin/cowcom.cgen.ocgen.exe",
	linker = cowlink_cgen,
	assembler = buildcgen,
	runtime = "rt/cgen",
	asmext = ".c",
	binext = ".exe",
	tester = nativetest
}

toolchain_nncgen = {
	name = "nncgen",
	compiler = "bin/cowcom.cgen.ncgen.exe",
	linker = cowlink_cgen,
	assembler = buildcgen,
	runtime = "rt/cgen",
	asmext = ".c",
	binext = ".exe",
	tester = nativetest
}

ALL_TOOLCHAINS = {
	toolchain_olx386,
	toolchain_olxthumb2,
	toolchain_ocgen,
	toolchain_ncpm,
	toolchain_ncpmz,
	toolchain_ncgen,
	toolchain_nncgen,
}

