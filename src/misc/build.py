from build.ab import simplerule
from src.build import cowgol
from src.toolchains import TOOLCHAINS

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
