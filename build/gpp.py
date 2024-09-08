from build.ab import Rule, simplerule, Targets, filenamesof
from os.path import *


@Rule
def gpp(self, name, srcs: Targets = []):
    hdrs = set(["-I" + dirname(f) for f in filenamesof(srcs)])

    simplerule(
        replaces=self,
        ins=srcs,
        outs=[f"={self.localname}.i"],
        commands=[
            "gpp --nostdinc -U '' '' '(' ',' ')' '(' ')' '$$' '' -M '$$' '\\n' ' ' ' ' '\\n' '(' ')' "
            + (" ".join(hdrs))
            + " -o {outs} {ins[0]}"
        ],
    )
