from build.ab2 import normalrule, Rule, Targets


@Rule
def yacc(self, name, srcs: Targets = []):
    normalrule(
        replaces=self,
        ins=srcs,
        outs=["y.tab.c", "y.tab.h"],
        commands=["bison -y -t -o {outs[0]} --defines={outs[1]} {ins}"],
        label="YACC",
    )


@Rule
def flex(self, name, srcs: Targets = []):
    normalrule(
        replaces=self,
        ins=srcs,
        outs=["lexer.c"],
        commands=["flex -8 -Cem -s -t {ins[0]} > {outs[0]}"],
        label="FLEX",
    )
