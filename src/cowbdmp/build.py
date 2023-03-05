from build.ab2 import normalrule
from src.build import TOOLCHAINS, cowgol

for toolchain in TOOLCHAINS:
    cowgol(
        name="cowbdmp-with-" + toolchain.localname,
        toolchain=toolchain,
        srcs=[
            "./main.cow",
            "./types.coh",
            "src+midcodesbecoh",
            "src+cobincoh",
        ],
    )
