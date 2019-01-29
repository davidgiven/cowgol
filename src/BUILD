package(default_visibility = ["//visibility:public"])

exports_files(glob(["*.cow"]))

genrule(
	name = "token_maker",
	srcs = ["tokens.txt"],
	tools = ["mk-token-maker.awk"],
	outs = ["token-maker.cow"],
	cmd = "gawk -f $(location mk-token-maker.awk) $< > $@"
)

genrule(
	name = "token_names",
	srcs = ["tokens.txt"],
	tools = ["mk-token-names.awk"],
	outs = ["token-names.cow"],
	cmd = "gawk -f $(location mk-token-names.awk) $< > $@"
)

