from build.ab import export
from tools.build import tocpm

tocpm(name="demosub", src="./demo.sub")

export(
    name="ataritos",
    items={
        "bin/dist/ataritos/mandel.cow": "examples/mandel.cow",
        "bin/dist/ataritos/cowgol.coh": "rt/ataritos/cowgol.coh",
        "bin/dist/ataritos/common.coh": "rt/common.coh",
        "bin/dist/ataritos/cowgol.coo": "rt/ataritos+cowgolcoo",
        "bin/dist/ataritos/cowfe.com": "src/cowfe+cowfe-for-32bita2-with-ataritos",
        "bin/dist/ataritos/cowbe.com": "src/cowbe+cowbe-for-68000-with-ataritos",
        "bin/dist/ataritos/cowlink.com": "src/cowlink+cowlink-for-ataritos-with-ataritos",
    },
)
