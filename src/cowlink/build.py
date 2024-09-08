from build.ab import simplerule, export
from src.build import cowgol
from src.toolchains import TOOLCHAINS

ARCHS = [
    "ataritos",
    "basic",
    "bbct",
    "bbctn",
    "cgen",
    "fuzix6303",
    "lx386",
    "lx68k",
    "lxppc",
    "lxthumb2",
    "msdos",
    "ncpm",
    "ncpmz",
    "rt11",
    "v7unix",
]

for arch in ARCHS:
    simplerule(
        name="arch-" + arch,
        ins=["./arch" + arch + ".coh"],
        outs=["=archlink.coh"],
        commands=["cp {ins} {outs}"],
        label="COPY",
    )

items = {}
for toolchain in TOOLCHAINS:
    for arch in ARCHS:
        name = "cowlink-for-" + arch + "-with-" + toolchain.localname
        items["bin/" + name] = cowgol(
            name="cowlink-for-" + arch + "-with-" + toolchain.localname,
            toolchain=toolchain,
            srcs=[
                "include/coodecls.coh",
                ".+arch-" + arch,
                "./main.cow",
                "./asmwrite.coh",
                "./cooread.coh",
                "./emitter.coh",
                "./graph.coh",
                "./streams.coh",
                "./types.coh",
                "./utils.coh",
            ],
        )
export(name="cowlink", items=items)
