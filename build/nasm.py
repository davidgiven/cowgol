from build.ab2 import normalrule, Rule, Targets, filenameof


@Rule
def nasm(self, name, srcs: Targets = []):
    normalrule(
        replaces=self,
        ins=srcs,
        outs=[self.localname + ".obj"],
        commands=["nasm -f obj -o {outs} {ins}"],
        label="NASM",
    )
