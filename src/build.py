from build.ab2 import Rule, Target, Targets, export, normalrule, filenamesof
from build.c import cprogram
from os.path import *
from third_party.zmac.build import zmac
from types import SimpleNamespace
from build.tass64 import tass64
from build.nasm import nasm
from third_party.djlink.build import djlink


@Rule
def cgen(self, name, srcs: Targets() = []):
    cprogram(replaces=self, srcs=srcs + ["rt/cgen/cowgol.h"])


def buildgasimpl(self, prefix):
    normalrule(
        replaces=self,
        ins=self.args["srcs"],
        outs=[self.localname + ".elf"],
        commands=[
            prefix + "-as -g {ins} -o {outs[0]}.s",
            prefix + "-ld -g {outs[0]}.s -o {outs[0]}",
        ],
        label="ASM-" + prefix.upper(),
    )


@Rule
def buildgasarm(self, name, srcs: Targets() = None):
    buildgasimpl(self, "arm-linux-gnueabihf")


@Rule
def buildgas386(self, name, srcs: Targets() = None):
    buildgasimpl(self, "i686-linux-gnu")


@Rule
def buildgas68k(self, name, srcs: Targets() = None):
    buildgasimpl(self, "m68k-linux-gnu")


@Rule
def buildgasppc(self, name, srcs: Targets() = None):
    buildgasimpl(self, "powerpc-linux-gnu")


@Rule
def buildgasataritos(self, name, srcs: Targets() = None):
    buildgasimpl(self, "m68k-atari-mint")


@Rule
def buildtass64(self, name, srcs: Targets() = None):
    tass64(replaces=self, srcs=srcs)


def buildcowasmimpl(self, asm):
    normalrule(
        replaces=self,
        ins=[asm] + self.args["srcs"],
        outs=[self.localname + ".bin"],
        commands=["scripts/quiet {ins[0]} -o {outs[0]} {ins[1]}"],
        label="ASM",
    )


@Rule
def buildcowasmpdp11(self, name, srcs: Targets() = None):
    buildcowasmimpl(self, "src/cowasm+cowasm-for-pdp11-with-ncgen")


@Rule
def buildcowasm6303(self, name, srcs: Targets() = None):
    buildcowasmimpl(self, "src/cowasm+cowasm-for-6303-with-ncgen")


@Rule
def buildnasm(self, name, srcs: Targets() = None):
    o = nasm(name=name + "/obj", srcs=srcs)
    djlink(replaces=self, srcs=[o])


@Rule
def toolchain(
    self,
    name,
    cowfe: Target() = None,
    cowbe: Target() = None,
    cowlink: Target() = None,
    cowwrap: Target() = None,
    runtime=None,
    asmext=None,
    binext=None,
    assembler=None,
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


@Rule
def cowlib(
    self,
    name,
    srcs: Targets() = [],
    deps: Targets() = [],
    toolchain: Target() = None,
):
    srcs += [
        "rt/common-file.coh",
        "rt/common.coh",
        "rt/fileio.coh",
        "rt/malloc.coh",
        "rt/strings.coh",
        toolchain.runtime + "/cowgol.coh",
        toolchain.runtime + "/file.coh",
        toolchain.runtime + "/argv.coh",
    ]

    cow = [f for f in filenamesof(srcs) if f.endswith(".cow")]
    dirs = set([dirname(f) for f in filenamesof(srcs)])
    flags = [f"-I{dir}/" for dir in dirs]

    cob = normalrule(
        name=name + "/cowfe",
        ins=[toolchain.cowfe, cow] + srcs,
        outs=[self.localname + ".cob"],
        commands=[
            "scripts/quiet {ins[0]} "
            + (" ".join(flags))
            + " {ins[1]} {outs[0]}"
        ],
        label="COWFE-" + toolchain.localname.upper(),
    )

    normalrule(
        replaces=self,
        ins=[toolchain.cowbe, cob],
        outs=[self.localname + ".coo"],
        commands=["scripts/quiet {ins[0]} {ins[1]} {outs}"],
        label="COWBE-" + toolchain.localname.upper(),
    )


@Rule
def cowlink(self, name, deps: Targets() = [], toolchain: Target() = None):
    coos = []
    for d in deps:
        if hasattr(d, "cowlib"):
            coos += filenamesof(d)

    asm = normalrule(
        name=name + "/cowlink",
        ins=[toolchain.cowlink] + [coos],
        outs=[self.localname + toolchain.asmext],
        commands=["scripts/quiet {ins[0]} -o {outs} {' '.join(ins[1:])}"],
        label="COWLINK-" + toolchain.localname.upper(),
    )

    toolchain.assembler(replaces=self, srcs=[asm])


@Rule
def cowgol(
    self,
    name,
    srcs: Targets() = [],
    deps: Targets() = [],
    toolchain: Target() = None,
):
    coo = cowlib(name=name + "/main", srcs=srcs, toolchain=toolchain)

    cowlink(
        replaces=self,
        deps=[coo, toolchain.runtime + "+cowgolcoo"] + deps,
        toolchain=toolchain,
    )


@Rule
def cowwrap(
    self, name, src: Target() = None, toolchain: Target() = "src+ncgen"
):
    self.cowlib = SimpleNamespace()
    normalrule(
        replaces=self,
        ins=[toolchain.cowwrap, src],
        outs=["cowgol.coo"],
        label="COWWRAP-" + toolchain.localname.upper(),
        commands=["scripts/quiet {ins[0]} {ins[1]} {outs}"],
    )


TOOLCHAINS = [
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
    ),
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
    ),
    toolchain(
        name="ncpm",
        cowfe="src/cowfe+cowfe-for-16bit-with-nncgen",
        cowbe="src/cowbe+cowbe-for-8080-with-ncgen",
        cowlink="src/cowlink+cowlink-for-8080-with-ncgen",
        cowwrap="src/cowwrap+cowwrap-with-ncgen",
        runtime="rt/cpm",
        asmext=".asm",
        binext=".com",
        assembler=zmac,
    ),
    toolchain(
        name="ncpmz",
        cowfe="src/cowfe+cowfe-for-16bit-with-nncgen",
        cowbe="src/cowbe+cowbe-for-z80-with-ncgen",
        cowlink="src/cowlink+cowlink-for-8080-with-ncgen",
        cowwrap="src/cowwrap+cowwrap-with-ncgen",
        runtime="rt/cpmz",
        asmext=".z80",
        binext=".com",
        assembler=zmac,
    ),
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
    ),
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
    ),
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
    ),
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
    ),
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
    ),
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
    ),
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
    ),
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
    ),
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
    ),
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
    ),
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
    ),
]

normalrule(
    name="midcodesfecoh",
    ins=[
        "scripts/mkmidcodescoh.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    ],
    outs=["midcodesfe.coh"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]} fe"],
    label="MKMIDCODESFE",
)

normalrule(
    name="midcodesbecoh",
    ins=[
        "scripts/mkmidcodescoh.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    ],
    outs=["midcodesbe.coh"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]} be"],
    label="MKMIDCODESBE",
)

normalrule(
    name="coboutcoh",
    ins=[
        "scripts/mkcobout.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    ],
    outs=["cobout.coh"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]}"],
    label="MKCOBOUT",
)

normalrule(
    name="iburgcodes",
    ins=[
        "scripts/mkiburgcodes.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    ],
    outs=["iburgcodes-coh.h"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]}"],
    label="MKIBURGCODES",
)

normalrule(
    name="cobincoh",
    ins=[
        "scripts/mkcobin.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    ],
    outs=["cobin.coh"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]}"],
    label="MKCOBIN",
)
