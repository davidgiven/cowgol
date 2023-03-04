from build.ab2 import Rule, Target, Targets, installable, normalrule, filenamesof
from build.c import cprogram
from os.path import *


@Rule
def cgen(self, name, srcs: Targets() = []):
    cprogram(replaces=self, srcs=srcs + ["rt/cgen/cowgol.h"])


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

    installable(replaces=self, items=items)


@Rule
def cowgol(self, name, srcs: Targets() = [], toolchain: Target() = None):
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
        outleaves=[self.localname + ".cob"],
        commands=[
            "scripts/quiet {ins[0]} " + (" ".join(flags)) + " {ins[1]} {outs[0]}"
        ],
        label="COWFE-" + toolchain.localname.upper(),
    )

    coo = normalrule(
        name=name + "/cowbe",
        ins=[toolchain.cowbe, cob],
        outleaves=[self.localname + ".coo"],
        commands=["scripts/quiet {ins[0]} {ins[1]} {outs}"],
        label="COWBE-" + toolchain.localname.upper(),
    )

    asm = normalrule(
        name=name + "/cowlink",
        ins=[toolchain.cowlink, coo],
        outleaves=[self.localname + toolchain.asmext],
        commands=["scripts/quiet {ins[0]} -o {outs} {' '.join(ins[1:])}"],
        label="COWLINK-" + toolchain.localname.upper(),
    )

    toolchain.assembler(replaces=self, srcs=[asm])


TOOLCHAINS = [
    toolchain(
        name="ncgen",
        cowfe="bootstrap+cowfe",
        cowbe="bootstrap+cowbe",
        cowlink="bootstrap+cowlink",
        cowwrap="bootstrap+cowwrap",
        runtime="rt/cgen",
        asmext=".c",
        assembler=cgen,
    ),
    toolchain(
        name="nncgen",
        cowfe="src/cowfe+cowfe-for-cgen-with-ncgen",
        cowbe="src/cowbe+cowbe-for-cgen-with-ncgen",
        cowlink="bootstrap+cowlink",
        cowwrap="bootstrap+cowwrap",
        runtime="rt/cgen",
        asmext=".c",
        assembler=cgen,
    ),
    #toolchain(
    #    name="ncpm", cowfe="src/cowfe+cowfe-for-16bit-with-nncgen", runtime="rt/cpm",
    #    asmext=".asm",
    #),
]

installable(name="toolchains", deps=TOOLCHAINS)

normalrule(
    name="midcodesfecoh",
    ins=["scripts/mkmidcodescoh.lua", "scripts/libcowgol.lua", "src/midcodes.coh.tab"],
    outleaves=["midcodesfe.coh"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]} fe"],
    label="MKMIDCODESFE",
)

normalrule(
    name="midcodesbecoh",
    ins=["scripts/mkmidcodescoh.lua", "scripts/libcowgol.lua", "src/midcodes.coh.tab"],
    outleaves=["midcodesbe.coh"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]} be"],
    label="MKMIDCODESBE",
)

normalrule(
    name="coboutcoh",
    ins=["scripts/mkcobout.lua", "scripts/libcowgol.lua", "src/midcodes.coh.tab"],
    outleaves=["cobout.coh"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]}"],
    label="MKCOBOUT",
)

normalrule(
    name="iburgcodes",
    ins=["scripts/mkiburgcodes.lua", "scripts/libcowgol.lua", "src/midcodes.coh.tab"],
    outleaves=["iburgcodes-coh.h"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]}"],
    label="MKIBURGCODES",
)

normalrule(
    name="cobincoh",
    ins=["scripts/mkcobin.lua", "scripts/libcowgol.lua", "src/midcodes.coh.tab"],
    outleaves=["cobin.coh"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]}"],
    label="MKCOBIN",
)
