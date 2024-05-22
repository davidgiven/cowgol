from build.ab import export
from tools.build import tocpm

tocpm(name="demosub", src="./demo.sub")

export(
    name="cpmz",
    items={
        "bin/dist/cpmz/demo.sub": ".+demosub",
        "bin/dist/cpmz/mandel.cow": "examples/mandel.cow",
        "bin/dist/cpmz/cowgol.coh": "rt/cpmz/cowgol.coh",
        "bin/dist/cpmz/common.coh": "rt/common.coh",
        "bin/dist/cpmz/cowgol.coo": "rt/cpmz+cowgolcoo",
        "bin/dist/cpmz/cowfe.com": "src/cowfe+cowfe-for-16bit-with-ncpmz",
        "bin/dist/cpmz/cowbe.com": "src/cowbe+cowbe-for-z80-with-ncpmz",
        "bin/dist/cpmz/cowlink.com": "src/cowlink+cowlink-for-ncpmz-with-ncpmz",
    },
)
