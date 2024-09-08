from build.ab import simplerule
from src.build import cowgol
from src.toolchains import TOOLCHAINS

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
