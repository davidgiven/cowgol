package(default_visibility = ["//visibility:public"])

load("//:config.bzl", "HOST_DATA")
load("//scripts:rules.bzl", "cowgol", "diff_test", "emulate")

TESTS = [filename[0:-9] for filename in glob(["*.test.cow"])]

[
    [
        cowgol(
            name = "{}-{}".format(test, host),
            srcs = ["{}.test.cow".format(test)],
            hd = hd
        ),
        
        emulate(
            name = "{}-{}-out".format(test, host),
            binary = ":{}-{}".format(test, host),
            emulator = hd["emulator"]
        ),
        
        diff_test(
            name = "{}-{}-test".format(test, host),
            input = ":{}-{}-out".format(test, host),
            good = "{}.good".format(test)
        )
    ]
    for (host, hd) in HOST_DATA.items() if hd["emulator"]
    for test in TESTS
]

