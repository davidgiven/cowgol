from build.ab2 import normalrule, Rule, Targets


@Rule
def yacc(self, name, srcs: Targets() = []):
    normalrule(
        replaces=self,
        ins=srcs,
        outleaves=["y.tab.c", "y.tab.h"],
        commands=["bison -y -t -o {outs[0]} --defines={outs[1]} {ins}"],
        label="YACC",
    )
