from src.build import TOOLCHAINS, cowgol

for toolchain in TOOLCHAINS:
    cowgol(
        name="cowwrap-with-" + toolchain.localname,
        toolchain=toolchain,
        srcs=[
            "include/coodecls.coh",
            "./main.cow",
            "./emitter.coh",
            "./reader.coh",
        ],
    )
