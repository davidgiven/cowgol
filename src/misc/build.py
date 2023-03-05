from build.ab2 import normalrule
from src.build import TOOLCHAINS, cowgol

PROGRAMS = ["basicify"]

for toolchain in TOOLCHAINS:
    for program in PROGRAMS:
        cowgol(
            name=program + "-with-" + toolchain.localname,
            toolchain=toolchain,
            srcs=[
                "./" + program + ".cow",
            ],
        )
