package(default_visibility = ["//visibility:public"])

load("//:config.bzl", "HOST_DATA", "TARGET_DATA")
load("//scripts:rules.bzl", "lexify", "cowgol")

[
	cowgol(
		name = "{}_on_{}".format(target, host),
		srcs = [
			"//src:numbers_lib.cow",
		] + td["globals"] + [
			"//src/utils:stringtablewriter.cow",
			"//src/utils:things.cow",
			"init.cow",
			"//src:token_names",
			"emitter.cow",
			"tables.cow",
			"lexer.cow",
			"main.cow",
			"deinit.cow",
		],
		hd = hd
	)
	for (host, hd) in HOST_DATA.items()
	for (target, td) in TARGET_DATA.items()
]

lexify(
	name = "tables",
	src = "lexer.l"
)

