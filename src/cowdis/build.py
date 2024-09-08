from build.ab import simplerule
from src.build import cowgol
from src.toolchains import TOOLCHAINS

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
