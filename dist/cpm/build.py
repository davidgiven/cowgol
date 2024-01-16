from build.ab2 import export
from tools.build import tocpm

tocpm(name="demosub", src="./demo.sub")

export(
    name="cpm",
    items={
        "bin/dist/cpm/demo.sub": "+demosub",
        "bin/dist/cpm/mandel.cow": "examples/mandel.cow",
        "bin/dist/cpm/cowgol.coh": "rt/cpm/cowgol.coh",
        "bin/dist/cpm/common.coh": "rt/common.coh",
        "bin/dist/cpm/cowgol.coo": "rt/cpm+cowgolcoo",
        "bin/dist/cpm/cowfe.com": "src/cowfe+cowfe-for-16bit-with-ncpm",
        "bin/dist/cpm/cowbe.com": "src/cowbe+cowbe-for-8080-with-ncpm",
        "bin/dist/cpm/cowlink.com": "src/cowlink+cowlink-for-ncpm-with-ncpm",
    },
)
