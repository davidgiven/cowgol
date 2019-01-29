package(default_visibility = ["//visibility:public"])

load("//:config.bzl", "HOST_DATA", "TARGET_DATA")
load("//scripts:rules.bzl", "lexify", "cowgol")

[
	cowgol(
		name = "{}_on_{}".format(target, host),
		srcs = [
			"//src:ctype_lib.cow",
			"//src:numbers_lib.cow",
			] + td["globals"] + [
			"//src/utils:stringtable.cow",
			"//src/utils:things.cow",
			"//src:token_names",
			"//src/utils:types.cow",
			"//src/utils:iops.cow",
			"init.cow",
			"symbols.cow",
			"//src/utils:symbols.cow",
			"iopwriter.cow",
			"tokenreader.cow",
			"constant.cow",
			"types.cow",
			"expression.cow",
			"main.cow",
			"deinit.cow",
		],
		hd = hd
	)
	for (host, hd) in HOST_DATA.items()
	for (target, td) in TARGET_DATA.items()
]

