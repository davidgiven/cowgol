from build.ab import simplerule, Rule, Targets, filenameof


@Rule
def tass64(self, name, srcs: Targets = []):
    simplerule(
        replaces=self,
        ins=srcs,
        outs=[f"={self.localname}.bin"],
        commands=[
            "64tass --quiet --long-branch --ascii --case-sensitive --nostart -o {outs} {ins}"
        ],
        label="TASS64",
    )
