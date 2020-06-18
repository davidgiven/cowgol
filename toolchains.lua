toolchain_ncgen = {
	name = "ncgen",
	compiler = "bin/cowcom-cgen.bootstrap.exe",
	linker = "bin/cowlink-cgen.bootstrap.exe",
	assembler = buildcgen,
	runtime = "rt/cgen",
	asmext = ".c",
	binext = ".exe",
	tester = nativetest
}

toolchain_nncgen = {
	name = "nncgen",
	compiler = "bin/cowcom-cgen.ncgen.exe",
	linker = "bin/cowlink-cgen.ncgen.exe",
	assembler = buildcgen,
	runtime = "rt/cgen",
	asmext = ".c",
	binext = ".exe",
	tester = nativetest
}

toolchain_ncpm = {
	name = "ncpm",
	compiler = "bin/cowcom-8080.nncgen.exe",
	linker = "bin/cowlink-8080.nncgen.exe",
	assembler = buildzmac,
	runtime = "rt/cpm",
	asmext = ".asm",
	binext = ".8080.com",
	tester = cpmtest,
}

toolchain_ncpmz = {
	name = "ncpmz",
	compiler = "bin/cowcom-z80.nncgen.exe",
	linker = "bin/cowlink-8080.nncgen.exe",
	assembler = buildzmac,
	runtime = "rt/cpmz",
	asmext = ".z80",
	binext = ".z80.com",
	tester = cpmtest,
}

toolchain_lx386 = {
	name = "lx386",
	compiler = "bin/cowcom-80386.nncgen.exe",
	linker = "bin/cowlink-lx386.nncgen.exe",
	assembler = buildgas386,
	runtime = "rt/lx386",
	asmext = ".s",
	binext = ".lx386.exe",
	tester = qemu386test
}

toolchain_bbct = {
	name = "bbct",
	compiler = "bin/cowcom-65c02.nncgen.exe",
	linker = "bin/cowlink-bbct.nncgen.exe",
	assembler = buildtass64,
	runtime = "rt/bbct",
	asmext = ".asm",
	binext = ".bbct",
	tester = tubeemutest,
	archs = { "6502i", "8080" }
}

toolchain_bbctiny = {
	name = "bbctiny",
	compiler = "bin/cowcom-65c02-tiny.nncgen.exe",
	linker = "bin/cowlink-bbct.nncgen.exe",
	assembler = buildtass64,
	runtime = "rt/bbct",
	asmext = ".asm",
	binext = ".bbctiny",
	tester = tubeemutest,
	archs = {},
}

toolchain_bbct6502 = {
	name = "bbct6502",
	compiler = "bin/cowcom-6502.nncgen.exe",
	linker = "bin/cowlink-bbct.nncgen.exe",
	assembler = buildtass64,
	runtime = "rt/bbct",
	asmext = ".asm",
	binext = ".bbct6502",
	tester = tubeemutest,
	archs = { "6502i", "8080" },
}

toolchain_bbcti = {
	name = "bbcti",
	compiler = "bin/cowcom-6502i.nncgen.exe",
	linker = "bin/cowlink-bbcti.nncgen.exe",
	assembler = buildtass64,
	runtime = "rt/bbcti",
	asmext = ".asm",
	binext = ".bbcti",
	tester = tubeemutest,
}

ALL_TOOLCHAINS = {
	toolchain_nncgen,
	toolchain_ncgen,
	toolchain_ncpm,
	toolchain_ncpmz,
	toolchain_lx386,
	toolchain_bbct,
	toolchain_bbctiny,
	toolchain_bbct6502,
	toolchain_bbcti,
}

