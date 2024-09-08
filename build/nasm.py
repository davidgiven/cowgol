from build.ab import simplerule, Rule, Targets, filenameof


@Rule
def nasm(self, name, srcs: Targets = []):
    simplerule(
        replaces=self,
        ins=srcs,
        outs=[f"={self.localname}.obj"],
        commands=["nasm -f obj -o {outs} {ins}"],
        label="NASM",
    )
