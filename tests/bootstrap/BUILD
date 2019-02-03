exports_files(glob(["*.cow"]))

load("//:config.bzl", "HOST_DATA")
load("//scripts:rules.bzl", "cowgol", "simple_test")

TESTS = [filename[0:-9] for filename in glob(["*.test.cow"])]

[
    [
        cowgol(
            name = "{}-exe".format(test),
            srcs = [
                "_test.cow",
                "{}.test.cow".format(test)
            ],
            hd = HOST_DATA["native"],
        ),

        simple_test(
            name = "{}-test".format(test),
            srcs = [":{}-exe".format(test)]
        )
    ]
    for test in TESTS
]
