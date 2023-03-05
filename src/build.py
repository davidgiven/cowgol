from build.ab2 import (
    Rule,
    Target,
    Targets,
    export,
    normalrule,
    filenamesof,
    filenameof,
)
from build.c import cprogram
from os.path import *
from types import SimpleNamespace
import config


@Rule
def cowlib(
    self,
    name,
    srcs: Targets = [],
    deps: Targets = [],
    toolchain: Target = None,
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
def cowlink(self, name, deps: Targets = [], toolchain: Target = None):
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
    srcs: Targets = [],
    deps: Targets = [],
    toolchain: Target = None,
):
    coo = cowlib(name=name + "/main", srcs=srcs, toolchain=toolchain)

    cowlink(
        replaces=self,
        deps=[coo, toolchain.runtime + "+cowgolcoo"] + deps,
        toolchain=toolchain,
    )


@Rule
def cowwrap(self, name, src: Target = None, toolchain: Target = "src+ncgen"):
    self.cowlib = SimpleNamespace()
    normalrule(
        replaces=self,
        ins=[toolchain.cowwrap, src],
        outs=["cowgol.coo"],
        label="COWWRAP-" + toolchain.localname.upper(),
        commands=["scripts/quiet {ins[0]} {ins[1]} {outs}"],
    )


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
