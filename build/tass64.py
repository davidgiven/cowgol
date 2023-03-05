from build.ab2 import normalrule, Rule, Targets, filenameof


@Rule
def tass64(self, name, srcs: Targets = []):
    normalrule(
        replaces=self,
        ins=srcs,
        outs=[self.localname + ".bin"],
        commands=[
            "64tass --quiet --long-branch --ascii --case-sensitive --nostart -o {outs} {ins}"
        ],
        label="TASS64",
    )
