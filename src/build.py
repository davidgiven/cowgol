from build.ab import (
    Rule,
    Target,
    Targets,
    simplerule,
    filenamesof,
)
from build.utils import targetswithtraitsof
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

    cob = simplerule(
        name=name + "/cowfe",
        ins=[toolchain.cowfe, cow] + srcs + deps,
        outs=[f"={self.localname}.cob"],
        commands=[
            "chronic {ins[0]} " + (" ".join(flags)) + " {ins[1]} {outs[0]}"
        ],
        label="COWFE-" + toolchain.localname.upper(),
    )

    simplerule(
        replaces=self,
        ins=[toolchain.cowbe, cob],
        outs=[f"={self.localname}.coo"],
        commands=["chronic {ins[0]} {ins[1]} {outs}"],
        label="COWBE-" + toolchain.localname.upper(),
    )


@Rule
def cowlink(self, name, deps: Targets = [], toolchain: Target = None):
    coos = filenamesof(targetswithtraitsof(deps, "cowlib"))

    asm = simplerule(
        name=name + "/cowlink",
        ins=[toolchain.cowlink] + [coos],
        outs=[f"={self.localname}{toolchain.asmext}"],
        commands=["chronic {ins[0]} -o {outs} {filenamesof(ins[1:])}"],
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
    self.traits.add("cowlib")
    simplerule(
        replaces=self,
        ins=[toolchain.cowwrap, src],
        outs=["=cowgol.coo"],
        label="COWWRAP-" + toolchain.localname.upper(),
        commands=["chronic {ins[0]} {ins[1]} {outs}"],
    )


simplerule(
    name="midcodesfecoh",
    ins=[
        "scripts/mkmidcodescoh.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    ],
    outs=["=midcodesfe.coh"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]} fe"],
    label="MKMIDCODESFE",
)

simplerule(
    name="midcodesbecoh",
    ins=[
        "scripts/mkmidcodescoh.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    ],
    outs=["=midcodesbe.coh"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]} be"],
    label="MKMIDCODESBE",
)

simplerule(
    name="coboutcoh",
    ins=[
        "scripts/mkcobout.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    ],
    outs=["=cobout.coh"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]}"],
    label="MKCOBOUT",
)

simplerule(
    name="iburgcodes",
    ins=[
        "scripts/mkiburgcodes.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    ],
    outs=["=iburgcodes-coh.h"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]}"],
    label="MKIBURGCODES",
)

simplerule(
    name="cobincoh",
    ins=[
        "scripts/mkcobin.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    ],
    outs=["=cobin.coh"],
    commands=["lua {ins[0]} -- {ins[2]} {outs[0]}"],
    label="MKCOBIN",
)
