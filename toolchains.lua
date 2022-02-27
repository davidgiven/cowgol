toolchain_ataritos = {
	name = "ataritos",
	cowfe = "bin/cowfe-32bita2.nncgen.exe",
	cowbe = "bin/cowbe-68000.nncgen.exe",
	linker = "bin/cowlink-ataritos.nncgen.exe",
	assembler = buildgasataritos,
	runtime = "rt/ataritos",
	asmext = ".s",
	binext = ".ataritos.tos",
	tester = ataritosemutest,
}

toolchain_ncgen = {
	name = "ncgen",
	cowfe = "bin/cowfe-cgen.bootstrap.exe",
	cowbe = "bin/cowbe-cgen.bootstrap.exe",
	linker = "bin/cowlink-cgen.bootstrap.exe",
	assembler = buildcgen,
	runtime = "rt/cgen",
	asmext = ".c",
	binext = ".exe",
	tester = nativetest
}

toolchain_nncgen = {
	name = "nncgen",
	cowbe = "bin/cowbe-cgen.ncgen.exe",
	cowfe = "bin/cowfe-cgen.ncgen.exe",
	linker = "bin/cowlink-cgen.ncgen.exe",
	assembler = buildcgen,
	runtime = "rt/cgen",
	asmext = ".c",
	binext = ".exe",
	tester = nativetest
}

toolchain_ncpm = {
	name = "ncpm",
	cowfe = "bin/cowfe-16bit.nncgen.exe",
	cowbe = "bin/cowbe-8080.nncgen.exe",
	linker = "bin/cowlink-8080.nncgen.exe",
	assembler = buildcowasm8080,
	runtime = "rt/cpm",
	asmext = ".asm",
	binext = ".8080.com",
	tester = cpmtest,
}

toolchain_ncpmz = {
	name = "ncpmz",
	cowfe = "bin/cowfe-16bit.nncgen.exe",
	cowbe = "bin/cowbe-z80.nncgen.exe",
	linker = "bin/cowlink-8080.nncgen.exe",
	assembler = buildzmac,
	runtime = "rt/cpmz",
	asmext = ".z80",
	binext = ".z80.com",
	tester = cpmtest,
}

toolchain_lxthumb2 = {
	name = "lxthumb2",
	cowfe = "bin/cowfe-32bita.nncgen.exe",
	cowbe = "bin/cowbe-thumb2.nncgen.exe",
	linker = "bin/cowlink-lxthumb2.nncgen.exe",
	assembler = buildgasarm,
	runtime = "rt/lxthumb2",
	asmext = ".s",
	binext = ".lxthumb2.exe",
	tester = qemuarmtest
}

toolchain_lx386 = {
	name = "lx386",
	cowfe = "bin/cowfe-80386.nncgen.exe",
	cowbe = "bin/cowbe-80386.nncgen.exe",
	linker = "bin/cowlink-lx386.nncgen.exe",
	assembler = buildgas386,
	runtime = "rt/lx386",
	asmext = ".s",
	binext = ".lx386.exe",
	tester = qemu386test
}

toolchain_lx68k = {
	name = "lx68k",
	cowfe = "bin/cowfe-32bita2.nncgen.exe",
	cowbe = "bin/cowbe-68000.nncgen.exe",
	linker = "bin/cowlink-lx68k.nncgen.exe",
	assembler = buildgas68k,
	runtime = "rt/lx68k",
	asmext = ".s",
	binext = ".lx68k.exe",
	tester = qemu68ktest
}

toolchain_lxppc = {
	name = "lxppc",
	cowfe = "bin/cowfe-32bita.nncgen.exe",
	cowbe = "bin/cowbe-powerpc.nncgen.exe",
	linker = "bin/cowlink-lxppc.nncgen.exe",
	assembler = buildgasppc,
	runtime = "rt/lxppc",
	asmext = ".s",
	binext = ".lxppc.exe",
	tester = qemuppctest
}

toolchain_bbct = {
	name = "bbct",
	cowfe = "bin/cowfe-6502.nncgen.exe",
	cowbe = "bin/cowbe-65c02.nncgen.exe",
	linker = "bin/cowlink-bbct.nncgen.exe",
	assembler = buildtass64,
	runtime = "rt/bbct",
	asmext = ".asm",
	binext = ".bbct",
	tester = tubeemutest,
	archs = { "8080" }
}

toolchain_bbctiny = {
	name = "bbctiny",
	cowfe = "bin/cowfe-6502.nncgen.exe",
	cowbe = "bin/cowbe-65c02-tiny.nncgen.exe",
	linker = "bin/cowlink-bbct.nncgen.exe",
	assembler = buildtass64,
	runtime = "rt/bbct",
	asmext = ".asm",
	binext = ".bbctiny",
	tester = tubeemutest,
}

toolchain_bbct6502 = {
	name = "bbct6502",
	cowfe = "bin/cowfe-6502.nncgen.exe",
	cowbe = "bin/cowbe-6502.nncgen.exe",
	linker = "bin/cowlink-bbct.nncgen.exe",
	assembler = buildtass64,
	runtime = "rt/bbct",
	asmext = ".asm",
	binext = ".bbct6502",
	tester = tubeemutest,
	archs = { "8080" },
}

toolchain_unixv7 = {
	name = "unixv7",
	cowfe = "bin/cowfe-pdp11.nncgen.exe",
	cowbe = "bin/cowbe-pdp11.nncgen.exe",
	linker = "bin/cowlink-v7unix.nncgen.exe",
	assembler = buildcowasmpdp11,
	runtime = "rt/unixv7",
	asmext = ".asm",
	binext = ".exe",
	tester = apouttest
}

toolchain_fuzix6303 = {
	name = "fuzix6303",
	cowfe = "bin/cowfe-16bit.nncgen.exe",
	cowbe = "bin/cowbe-6303.nncgen.exe",
	linker = "bin/cowlink-fuzix6303.nncgen.exe",
	assembler = buildcowasm6303,
	runtime = "rt/fuzix6303",
	asmext = ".asm",
	binext = ".6303.exe",
	tester = fuzix6303test,
}

toolchain_msdos = {
	name = "msdos",
	cowfe = "bin/cowfe-16bit.nncgen.exe",
	cowbe = "bin/cowbe-8086.nncgen.exe",
	linker = "bin/cowlink-msdos.nncgen.exe",
	assembler = buildnasm,
	runtime = "rt/msdos",
	asmext = ".asm",
	binext = ".msdos.exe",
	tester = emu2test,
}

toolchain_tlcs90 = {
	name = "tlcs90",
	cowfe = "bin/cowfe-tlcs90.nncgen.exe",
	cowbe = "bin/cowbe-tlcs90.nncgen.exe",
	linker = "bin/cowlink-tlcs90.nncgen.exe",
	assembler = nil,
	runtime = "rt/tlcs90",
	asmext = ".asm",
	binext = ".msdos.com",
	tester = nil,
}

ALL_TOOLCHAINS = {}
addto(ALL_TOOLCHAINS, toolchain_nncgen)
addto(ALL_TOOLCHAINS, toolchain_ncgen)

addto(ALL_TOOLCHAINS, toolchain_bbct)
addto(ALL_TOOLCHAINS, toolchain_bbct6502)
addto(ALL_TOOLCHAINS, toolchain_bbcti)
addto(ALL_TOOLCHAINS, toolchain_bbctiny)
addto(ALL_TOOLCHAINS, toolchain_fuzix6303)
addto(ALL_TOOLCHAINS, toolchain_ncpm)
addto(ALL_TOOLCHAINS, toolchain_ncpmz)
addto(ALL_TOOLCHAINS, toolchain_unixv7)

if WITH_ATARITOS then addto(ALL_TOOLCHAINS, toolchain_ataritos) end
if WITH_LX386    then addto(ALL_TOOLCHAINS, toolchain_lx386) end
if WITH_LX68K    then addto(ALL_TOOLCHAINS, toolchain_lx68k) end
if WITH_LXPPC    then addto(ALL_TOOLCHAINS, toolchain_lxppc) end
if WITH_LXTHUMB2 then addto(ALL_TOOLCHAINS, toolchain_lxthumb2) end
if WITH_MSDOS    then addto(ALL_TOOLCHAINS, toolchain_msdos) end

