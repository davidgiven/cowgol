from build.ab2 import normalrule, export
from src.build import cowgol
from tools.newgen.build import newgencowgol
from src.toolchains import TOOLCHAINS

ARCHS = ["8080", "pdp11", "6303", "tlcs90", "obp"]

items = {}
for toolchain in TOOLCHAINS:
    toolchain.materialise()
    for arch in ARCHS:
        name = "cowasm-for-" + arch + "-with-" + toolchain.localname
        items[name] = cowgol(
            name=name,
            toolchain=toolchain,
            srcs=[
                "./arch" + arch + ".cow",
                "./cowasm.coh",
                "./stdsyms.coh",
            ],
        )

export(name="cowasm", items=items)
