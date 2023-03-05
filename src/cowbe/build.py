from build.ab2 import normalrule
from src.build import TOOLCHAINS, cowgol
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

for toolchain in TOOLCHAINS:
    for arch in ARCHS:
        cowgol(
            name="cowbe-for-" + arch + "-with-" + toolchain.localname,
            toolchain=toolchain,
            srcs=[
                "+gen-" + arch,
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
