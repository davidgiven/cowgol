from build.ab import export
from tools.build import tocpm

tocpm(name="demosub", src="./demo.sub")

export(
    name="amigacpm",
    items={
        "bin/dist/amigacpm/mandel.cow": "examples/mandel.cow",
        "bin/dist/amigacpm/cowgol.coh": "rt/amigacpm/cowgol.coh",
        "bin/dist/amigacpm/common.coh": "rt/common.coh",
        "bin/dist/amigacpm/cowgol.coo": "rt/amigacpm+cowgolcoo",
        "bin/dist/amigacpm/cowfe.com": "src/cowfe+cowfe-for-32bita2-with-amigacpm",
        "bin/dist/amigacpm/cowbe.com": "src/cowbe+cowbe-for-68000-with-amigacpm",
        "bin/dist/amigacpm/cowlink.com": "src/cowlink+cowlink-for-amigacpm-with-amigacpm",
    },
)
