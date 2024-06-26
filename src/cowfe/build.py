from build.ab import normalrule, export
from src.build import cowgol
from src.toolchains import TOOLCHAINS
from third_party.lemon.build import lemoncowgol

ARCHS = [
    "6502",
    "80386",
    "basic",
    "cgen",
    "pdp11",
    "16bit",
    "32bita2",
    "32bita",
]

lemoncowgol(name="parser", src="src/cowfe/parser.y")

for arch in ARCHS:
    normalrule(
        name="arch-" + arch,
        ins=["./arch" + arch + ".coh"],
        outs=["arch.coh"],
        commands=["cp {ins} {outs}"],
        label="COPY",
    )

items = {}
for toolchain in TOOLCHAINS:
    for arch in ARCHS:
        name = "cowfe-for-" + arch + "-with-" + toolchain.localname
        items["bin/" + name] = cowgol(
            name="cowfe-for-" + arch + "-with-" + toolchain.localname,
            toolchain=toolchain,
            srcs=[
                ".+arch-" + arch,
                ".+parser",
                "./allocator.coh",
                "./codegen.coh",
                "./emitter.coh",
                "./expressions.coh",
                "./lexer.coh",
                "./main.cow",
                "./midcodec.coh",
                "./namespace.coh",
                "./regcache.coh",
                "./symbols.coh",
                "./treewalker.coh",
                "./types.coh",
                "include/coodecls.coh",
                "src+coboutcoh",
                "src+midcodesfecoh",
            ],
        )

export(name="cowfe", items=items)
