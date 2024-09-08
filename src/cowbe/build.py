from build.ab import simplerule, export
from src.build import cowgol
from src.toolchains import TOOLCHAINS
from tools.newgen.build import newgencowgol

ARCHS = [
    "6303",
    "6502",
    "65c02",
    "65c02-tiny",
    "68000",
    "80386",
    "8080",
    "8086",
    "basic",
    "cgen",
    "pdp11",
    "powerpc",
    "thumb2",
    "z80",
]

extras = {
    "65c02": ["src/cowbe/arch6502.cow.ng"],
    "65c02-tiny": ["src/cowbe/arch6502.cow.ng"],
}

for arch in ARCHS:
    newgencowgol(
        name="gen-" + arch,
        srcs=["src/cowbe/arch" + arch + ".cow.ng"] + extras.get(arch, []),
    )

items = {}
for toolchain in TOOLCHAINS:
    for arch in ARCHS:
        name = "cowbe-for-" + arch + "-with-" + toolchain.localname
        items["bin/" + name] = cowgol(
            name=name,
            toolchain=toolchain,
            srcs=[
                ".+gen-" + arch,
                "include/coodecls.coh",
                "src+midcodesbecoh",
                "src+cobincoh",
                "./main.cow",
                "./allocator.coh",
                "./codegen.coh",
                "./emitter.coh",
                "./inputter.coh",
                "./midcodec.coh",
                "./processor.coh",
                "./regcache.coh",
                "./treewalker.coh",
                "./types.coh",
                "./utils.coh",
            ],
        )

export(name="cowbe", items=items)
