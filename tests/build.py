from build.ab import normalrule, Rule, Target, export
from src.build import cowgol
from src.toolchains import TOOLCHAINS

TESTS = [
    "addsub-16bit",
    "addsub-32bit",
    "addsub-8bit",
    "atoi",
    "arrayinitialisers",
    "case",
    "casts",
    "conditionals",
    "divrem-16bit-s",
    "divrem-16bit-u",
    "divrem-32bit-s",
    "divrem-32bit-u",
    "divrem-8bit-s",
    "divrem-8bit-u",
    # "empty",  # causes qemu to crash, but works on real hardware
    "fileio",
    "folding",
    "forwards",
    "inputparams",
    "interfaces",
    "itoa",
    "logic-16bit",
    "logic-32bit",
    "logic-8bit",
    "loops",
    "lvalues",
    "malloc",
    "mul-16bit-s",
    "mul-16bit-u",
    "mul-32bit-s",
    "mul-32bit-u",
    "mul-8bit-s",
    "mul-8bit-u",
    "nested-calls",
    "null",
    "outputparams",
    "pointers",
    "rangetypes",
    "recordinitialisers",
    "records",
    "regalloc",
    "regcache",
    "shifts-16bit",
    "shifts-32bit",
    "shifts-8bit",
    "unions",
]


@Rule
def testsuite(self, name, toolchain: Target = None):
    tests = []
    if toolchain.tester:
        for test in TESTS:
            bin = cowgol(
                name=name + "/" + test + "/bin",
                srcs=["./" + test + ".test.cow"],
                toolchain=toolchain,
            )

            tests.append(
                toolchain.tester(
                    name=name + "/" + test,
                    goodfile="./" + test + ".good",
                    exe=bin,
                )
            )

    normalrule(
        replaces=self,
        ins=tests,
        outs=["stamp"],
        commands=["touch {outs}"],
        label="TESTSUITE",
    )


export(
    name="tests",
    deps=[
        testsuite(name="tests-" + toolchain.localname, toolchain=toolchain)
        for toolchain in TOOLCHAINS
    ],
)
