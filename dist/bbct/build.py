from build.ab import export, Rule, Target, simplerule, targetof
from tools.build import tocpm, mkdfs


@Rule
def bbcify(self, name, *, src: Target):
    simplerule(
        replaces=self,
        ins=[src],
        outs=[f"={self.localname}.txt"],
        commands=[
            r"""sed -e 's/include "\(.*\)\.coh"/include "h.\1"/' < {ins} | expand -t4 | tr '\n' '\r' > {outs}"""
        ],
        label="BBCIFY",
    )


bbcify(name="mandelcow", src="examples/mandel.cow")
bbcify(name="cowgolcoh", src="rt/bbct/cowgol.coh")
bbcify(name="commoncoh", src="rt/common.coh")

mkdfs(
    name="ssd",
    flags=[
        ["-f", targetof("./!boot")],
        [
            "-f",
            targetof("src/cowfe+cowfe-for-16bit-with-bbct"),
            "-e0x400",
            "-l0x400",
            "-ncowfe",
        ],
        [
            "-f",
            targetof("src/cowbe+cowbe-for-6502-with-bbct"),
            "-e0x400",
            "-l0x400",
            "-ncowbe",
        ],
        [
            "-f",
            targetof("src/cowlink+cowlink-for-bbct-with-bbct"),
            "-e0x400",
            "-l0x400",
            "-ncowlink",
        ],
        ["-f", targetof("rt/bbct+cowgolcoo"), "-no.cowgol"],
        ["-f", targetof(".+cowgolcoh"), "-nh.cowgol"],
        ["-f", targetof(".+commoncoh"), "-nh.common"],
        ["-f", targetof(".+mandelcow"), "-nw.source"],
        "-B3",
    ],
)

export(
    name="bbct",
    items={
        "bin/dist/bbct/!boot": "./!boot",
        "bin/dist/bbct/mandel.cow": ".+mandelcow",
        "bin/dist/bbct/cowgol.coh": ".+cowgolcoh",
        "bin/dist/bbct/common.coh": ".+commoncoh",
        "bin/dist/bbct/cowgol.coo": "rt/bbct+cowgolcoo",
        "bin/dist/bbct/cowfe.com": "src/cowfe+cowfe-for-16bit-with-bbct",
        "bin/dist/bbct/cowbe.com": "src/cowbe+cowbe-for-6502-with-bbct",
        "bin/dist/bbct/cowlink.com": "src/cowlink+cowlink-for-bbct-with-bbct",
        "bin/dist/bbct.ssd": ".+ssd",
    },
)
