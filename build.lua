vars.cflags = { "-g", "-Og" }
vars.ldflags = { "-lm", "-g" }

installable {
	name = "all",
	map = {
		["cpmemu"] = "tools/cpmemu+cpmemu",
		["tubeemu"] = "tools/tubeemu+tubeemu",
	}
}

