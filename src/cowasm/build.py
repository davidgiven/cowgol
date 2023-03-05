from build.ab2 import normalrule
from src.build import TOOLCHAINS, cowgol
from tools.newgen.build import newgencowgol

ARCHS = ["8080", "pdp11", "6303", "tlcs90", "obp"]

for toolchain in TOOLCHAINS:
    toolchain.materialise()
    for arch in ARCHS:
        cowgol(
            name="cowasm-for-" + arch + "-with-" + toolchain.localname,
            toolchain=toolchain,
            srcs=[
                "./arch" + arch + ".cow",
                "./cowasm.coh",
                "./stdsyms.coh",
            ],
        )
