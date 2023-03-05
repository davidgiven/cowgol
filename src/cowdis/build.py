from build.ab2 import normalrule
from src.build import TOOLCHAINS, cowgol

ARCHS = ["tlcs90"]

for toolchain in TOOLCHAINS:
    for arch in ARCHS:
        cowgol(
            name="cowdis-for-" + arch + "-with-" + toolchain.localname,
            toolchain=toolchain,
            srcs=[
                "./arch" + arch + ".cow",
            ],
        )
