from build.ab import (
    Rule,
    Target,
    Targets,
    export,
    simplerule,
    filenamesof,
    filenameof,
)
from build.c import cprogram
from os.path import *
from third_party.zmac.build import zmac
from types import SimpleNamespace
from build.tass64 import tass64
from build.nasm import nasm
from third_party.djlink.build import djlink
import config


@Rule
def cgen(self, name, srcs: Targets = []):
    cprogram(replaces=self, srcs=srcs + ["rt/cgen/cowgol.h"])


def buildgasimpl(self, prefix, flags=""):
    simplerule(
        replaces=self,
        ins=self.args["srcs"],
        outs=[f"={self.localname}.elf"],
        commands=[
            prefix + "-as " + flags + " -g {ins} -o {outs[0]}.s",
            prefix + "-ld -g {outs[0]}.s -o {outs[0]}",
        ],
        label="ASM-" + prefix.upper(),
    )


@Rule
def buildgasarm(self, name, srcs: Targets = None):
    buildgasimpl(self, "arm-linux-gnueabihf")


@Rule
def buildgas386(self, name, srcs: Targets = None):
    buildgasimpl(self, "i686-linux-gnu")


@Rule
def buildgas68k(self, name, srcs: Targets = None):
    buildgasimpl(self, "m68k-linux-gnu")


@Rule
def buildgasppc(self, name, srcs: Targets = None):
    buildgasimpl(self, "powerpc-linux-gnu")


@Rule
def buildgasataritos(self, name, srcs: Targets = None):
    buildgasimpl(self, "m68k-atari-mint")


@Rule
def buildtass64(self, name, srcs: Targets = None):
    tass64(replaces=self, srcs=srcs)


def buildcowasmimpl(self, asm):
    simplerule(
        replaces=self,
        ins=[asm] + self.args["srcs"],
        outs=[f"={self.localname}.bin"],
        commands=["chronic {ins[0]} -o {outs[0]} {ins[1]}"],
        label="ASM",
    )


@Rule
def buildcowasmpdp11(self, name, srcs: Targets = None):
    buildcowasmimpl(self, "src/cowasm+cowasm-for-pdp11-with-ncgen")


@Rule
def buildcowasm6303(self, name, srcs: Targets = None):
    buildcowasmimpl(self, "src/cowasm+cowasm-for-6303-with-ncgen")


@Rule
def buildnasm(self, name, srcs: Targets = None):
    o = nasm(name=name + "/obj", srcs=srcs)
    djlink(replaces=self, srcs=[o])


def testimpl(self, dep, command):
    goodfile = self.args["goodfile"]
    simplerule(
        replaces=self,
        ins=dep + [self.args["exe"]],
        outs=[f"={self.localname}.bad"],
        commands=[
            "timeout 5s " + command + " > {outs}; true",
            "diff -u -w {outs[0]} " + filenameof(goodfile),
        ],
        label="TEST",
    )


@Rule
def nativetest(self, name, goodfile: Target = None, exe: Target = None):
    testimpl(self, [], "{ins[0]}")


@Rule
def tubeemutest(self, name, goodfile: Target = None, exe: Target = None):
    testimpl(self, ["tools/tubeemu"], "{ins[0]} -l 0x400 -e 0x400 -f {ins[1]}")


@Rule
def cpmtest(self, name, goodfile: Target = None, exe: Target = None):
    testimpl(self, ["tools/cpmemu"], "{ins[0]} {ins[1]}")


@Rule
def apouttest(self, name, goodfile: Target = None, exe: Target = None):
    testimpl(self, ["third_party/apout"], "{ins[0]} {ins[1]}")


@Rule
def fuzix6303test(self, name, goodfile: Target = None, exe: Target = None):
    testimpl(self, ["tools/fuzix6303emu"], "{ins[0]} -f {ins[1]}")


@Rule
def ataritostest(self, name, goodfile: Target = None, exe: Target = None):
    testimpl(self, ["tools/ataritosemu"], "{ins[0]} {ins[1]}")


@Rule
def qemuarmtest(self, name, goodfile: Target = None, exe: Target = None):
    testimpl(self, [], "qemu-arm {ins[0]}")


@Rule
def qemu386test(self, name, goodfile: Target = None, exe: Target = None):
    testimpl(self, [], "qemu-i386 {ins[0]}")


@Rule
def qemu68ktest(self, name, goodfile: Target = None, exe: Target = None):
    testimpl(self, [], "qemu-m68k {ins[0]}")


@Rule
def qemuppctest(self, name, goodfile: Target = None, exe: Target = None):
    testimpl(self, [], "qemu-ppc {ins[0]}")


@Rule
def msdostest(self, name, goodfile: Target = None, exe: Target = None):
    testimpl(self, ["third_party/emu2"], "{ins[0]} {ins[1]}")


@Rule
def toolchain(
    self,
    name,
    cowfe: Target = None,
    cowbe: Target = None,
    cowlink: Target = None,
    cowwrap: Target = None,
    runtime=None,
    asmext=None,
    binext=None,
    assembler=None,
    tester=None,
):
    id = self.localname

    for k, v in self.args.items():
        setattr(self, k, v)

    items = {}
    if cowfe:
        items["bin/cowfe-" + id] = cowfe
    if cowbe:
        items["bin/cowbe-" + id] = cowbe
    if cowlink:
        items["bin/cowlink-" + id] = cowlink
    if cowwrap:
        items["bin/cowwrap-" + id] = cowwrap

    export(replaces=self, items=items)


TOOLCHAINS = []

TOOLCHAINS.append(
    toolchain(
        name="ncgen",
        cowfe="bootstrap+cowfe",
        cowbe="bootstrap+cowbe",
        cowlink="bootstrap+cowlink",
        cowwrap="bootstrap+cowwrap",
        runtime="rt/cgen",
        asmext=".c",
        binext=".exe",
        assembler=cgen,
    )
)

TOOLCHAINS.append(
    toolchain(
        name="nncgen",
        cowfe="src/cowfe+cowfe-for-cgen-with-ncgen",
        cowbe="src/cowbe+cowbe-for-cgen-with-ncgen",
        cowlink="src/cowlink+cowlink-for-cgen-with-ncgen",
        cowwrap="src/cowwrap+cowwrap-with-ncgen",
        runtime="rt/cgen",
        asmext=".c",
        binext=".exe",
        assembler=cgen,
        tester=nativetest,
    )
)

TOOLCHAINS.append(
    toolchain(
        name="ncpm",
        cowfe="src/cowfe+cowfe-for-16bit-with-nncgen",
        cowbe="src/cowbe+cowbe-for-8080-with-ncgen",
        cowlink="src/cowlink+cowlink-for-ncpm-with-ncgen",
        cowwrap="src/cowwrap+cowwrap-with-ncgen",
        runtime="rt/cpm",
        asmext=".asm",
        binext=".com",
        assembler=zmac,
        tester=cpmtest,
    )
)

TOOLCHAINS.append(
    toolchain(
        name="ncpmz",
        cowfe="src/cowfe+cowfe-for-16bit-with-nncgen",
        cowbe="src/cowbe+cowbe-for-z80-with-ncgen",
        cowlink="src/cowlink+cowlink-for-ncpmz-with-ncgen",
        cowwrap="src/cowwrap+cowwrap-with-ncgen",
        runtime="rt/cpmz",
        asmext=".z80",
        binext=".com",
        assembler=zmac,
        tester=cpmtest,
    )
)

TOOLCHAINS.append(
    toolchain(
        name="unixv7",
        cowfe="src/cowfe+cowfe-for-pdp11-with-nncgen",
        cowbe="src/cowbe+cowbe-for-pdp11-with-ncgen",
        cowlink="src/cowlink+cowlink-for-v7unix-with-ncgen",
        cowwrap="src/cowwrap+cowwrap-with-ncgen",
        runtime="rt/unixv7",
        asmext=".asm",
        binext=".exe",
        assembler=buildcowasmpdp11,
        tester=apouttest,
    )
)

TOOLCHAINS.append(
    toolchain(
        name="fuzix6303",
        cowfe="src/cowfe+cowfe-for-16bit-with-nncgen",
        cowbe="src/cowbe+cowbe-for-6303-with-ncgen",
        cowlink="src/cowlink+cowlink-for-fuzix6303-with-ncgen",
        cowwrap="src/cowwrap+cowwrap-with-ncgen",
        runtime="rt/fuzix6303",
        asmext=".asm",
        binext=".exe",
        assembler=buildcowasm6303,
        tester=fuzix6303test,
    )
)

if config.has_lxthumb2:
    TOOLCHAINS.append(
        toolchain(
            name="lxthumb2",
            cowfe="src/cowfe+cowfe-for-32bita-with-nncgen",
            cowbe="src/cowbe+cowbe-for-thumb2-with-ncgen",
            cowlink="src/cowlink+cowlink-for-lxthumb2-with-ncgen",
            cowwrap="src/cowwrap+cowwrap-with-ncgen",
            runtime="rt/lxthumb2",
            asmext=".s",
            binext=".exe",
            assembler=buildgasarm,
            tester=qemuarmtest if config.has_qemuarm else None,
        )
    )

if config.has_lx386:
    TOOLCHAINS.append(
        toolchain(
            name="lx386",
            cowfe="src/cowfe+cowfe-for-80386-with-nncgen",
            cowbe="src/cowbe+cowbe-for-80386-with-ncgen",
            cowlink="src/cowlink+cowlink-for-lx386-with-ncgen",
            cowwrap="src/cowwrap+cowwrap-with-ncgen",
            runtime="rt/lx386",
            asmext=".s",
            binext=".exe",
            assembler=buildgas386,
            tester=qemu386test if config.has_qemu386 else None,
        )
    )

if config.has_lx68k:
    TOOLCHAINS.append(
        toolchain(
            name="lx68k",
            cowfe="src/cowfe+cowfe-for-32bita2-with-nncgen",
            cowbe="src/cowbe+cowbe-for-68000-with-ncgen",
            cowlink="src/cowlink+cowlink-for-lx68k-with-ncgen",
            cowwrap="src/cowwrap+cowwrap-with-ncgen",
            runtime="rt/lx68k",
            asmext=".s",
            binext=".exe",
            assembler=buildgas68k,
            tester=qemu68ktest if config.has_qemu68k else None,
        )
    )

if config.has_lxppc:
    TOOLCHAINS.append(
        toolchain(
            name="lxppc",
            cowfe="src/cowfe+cowfe-for-32bita-with-nncgen",
            cowbe="src/cowbe+cowbe-for-powerpc-with-ncgen",
            cowlink="src/cowlink+cowlink-for-lxppc-with-ncgen",
            cowwrap="src/cowwrap+cowwrap-with-ncgen",
            runtime="rt/lxppc",
            asmext=".s",
            binext=".exe",
            assembler=buildgasppc,
            tester=qemuppctest if config.has_qemuppc else None,
        )
    )

if config.has_bbct:
    TOOLCHAINS.append(
        toolchain(
            name="bbct",
            cowfe="src/cowfe+cowfe-for-6502-with-nncgen",
            cowbe="src/cowbe+cowbe-for-65c02-with-ncgen",
            cowlink="src/cowlink+cowlink-for-bbct-with-ncgen",
            cowwrap="src/cowwrap+cowwrap-with-ncgen",
            runtime="rt/bbct",
            asmext=".asm",
            binext=".bin",
            assembler=buildtass64,
            tester=tubeemutest,
        )
    )

if config.has_bbctiny:
    TOOLCHAINS.append(
        toolchain(
            name="bbctiny",
            cowfe="src/cowfe+cowfe-for-6502-with-nncgen",
            cowbe="src/cowbe+cowbe-for-65c02-tiny-with-ncgen",
            cowlink="src/cowlink+cowlink-for-bbct-with-ncgen",
            cowwrap="src/cowwrap+cowwrap-with-ncgen",
            runtime="rt/bbct",
            asmext=".asm",
            binext=".bin",
            assembler=buildtass64,
            tester=tubeemutest,
        )
    )

if config.has_bbct6502:
    TOOLCHAINS.append(
        toolchain(
            name="bbct6502",
            cowfe="src/cowfe+cowfe-for-6502-with-nncgen",
            cowbe="src/cowbe+cowbe-for-6502-with-ncgen",
            cowlink="src/cowlink+cowlink-for-bbct-with-ncgen",
            cowwrap="src/cowwrap+cowwrap-with-ncgen",
            runtime="rt/bbct",
            asmext=".asm",
            binext=".bin",
            assembler=buildtass64,
            tester=tubeemutest,
        )
    )

if config.has_msdos:
    TOOLCHAINS.append(
        toolchain(
            name="msdos",
            cowfe="src/cowfe+cowfe-for-16bit-with-nncgen",
            cowbe="src/cowbe+cowbe-for-8086-with-ncgen",
            cowlink="src/cowlink+cowlink-for-msdos-with-ncgen",
            cowwrap="src/cowwrap+cowwrap-with-ncgen",
            runtime="rt/msdos",
            asmext=".asm",
            binext=".exe",
            assembler=buildnasm,
            tester=msdostest,
        )
    )

if config.has_ataritos:
    TOOLCHAINS.append(
        toolchain(
            name="ataritos",
            cowfe="src/cowfe+cowfe-for-32bita2-with-nncgen",
            cowbe="src/cowbe+cowbe-for-68000-with-ncgen",
            cowlink="src/cowlink+cowlink-for-ataritos-with-ncgen",
            cowwrap="src/cowwrap+cowwrap-with-ncgen",
            runtime="rt/ataritos",
            asmext=".asm",
            binext=".tos",
            assembler=buildgasataritos,
            tester=ataritostest,
        )
    )
