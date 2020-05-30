local function writespec(mode, name, width)
	if mode == "pop" then
		io.write("v32:"..name)
	elseif mode == "mem" then
		io.write("LOAD"..width.."(ADDRESS():"..name..")")
	elseif mode == "memi" then
		io.write("LOAD"..width.."(LOAD2(ADDRESS():"..name.."))")
	elseif mode == "constant" then
		io.write("CONSTANT():"..name)
	end
end

local function writeparm(mode, prefix, name)
	if mode == "pop" then
		io.write("\t"..prefix.."Pop($"..name..");\n")
	elseif mode == "push" then
		io.write("\t"..prefix.."Push($$);\n")
	elseif mode == "mem" then
		io.write("\t"..prefix.."Sym($"..name..".sym, $"..name..".off);\n")
	elseif mode == "memi" then
		io.write("\t"..prefix.."SymI($"..name..".sym, $"..name..".off);\n")
	elseif mode == "constant" then
		io.write("\t"..prefix.."Const($"..name..".value);\n")
	end
end

local operations = { "ADD", "SUB", "EOR", "OR", "AND" }
local opcodes = {
	ADD = "adc",
	SUB = "sbc",
	EOR = "eor",
	OR = "ora",
	AND = "and"
}

for _, op in ipairs(operations) do
	for _, rhs in ipairs({"pop", "mem", "constant"}) do
		io.write("gen xa := "..op.."2(xa, ")
		writespec(rhs, "rhs", 2)
		io.write(")\n")

		io.write("{\n");
		if op == "ADD" then
			io.write("\tE_clc();\n");
		end
		if op == "SUB" then
			io.write("\tE_sec();\n");
		end
		io.write("\tparamwidth := 2;\n");
		writeparm(rhs, "Rhs", "rhs")
		io.write("\tDoXA(\"", opcodes[op], "\");\n")
		io.write("}\n");
	end
end

for _, lhs in ipairs({"pop", "mem", "constant"}) do
	for _, dest in ipairs({"push", "mem"}) do
		if (lhs ~= "pop") or (dest ~= "push") then
			if (dest == "mem") or (dest == "memi") then
				io.write("gen STORE4(")
			else
				io.write("gen v32 := ")
			end
			writespec(lhs, "lhs", 4)
			if dest == "mem" then
				io.write(", ADDRESS():dest)\n")
			elseif dest == "memi" then
				io.write(", LOAD2(ADDRESS():dest))\n")
			else
				io.write("\n")
			end

			io.write("{\n");
			io.write("\tparamwidth := 4;\n");
			writeparm(lhs, "Lhs", "lhs")
			writeparm(dest, "Dest", "dest")
			io.write("\tDoCopy();\n")
			io.write("}\n");
		end
	end
end

for _, op in ipairs(operations) do
	for _, lhs in ipairs({"pop", "mem", "constant"}) do
		for _, rhs in ipairs({"pop", "mem", "constant"}) do
			for _, dest in ipairs({"push", "mem"}) do
				if dest == "mem" then
					io.write("gen STORE4(")
				else
					io.write("gen v32 := ")
				end
				io.write(op.."4(")
				writespec(lhs, "lhs", 4)
				io.write(", ")
				writespec(rhs, "rhs", 4)
				if dest == "mem" then
					io.write("), ADDRESS():dest)\n")
				else
					io.write(")\n")
				end

				io.write("{\n");
				if op == "ADD" then
					io.write("\tE_clc();\n");
				end
				if op == "SUB" then
					io.write("\tE_sec();\n");
				end
				io.write("\tparamwidth := 4;\n");
				writeparm(rhs, "Rhs", "rhs")
				writeparm(lhs, "Lhs", "lhs")
				writeparm(dest, "Dest", "dest")
				io.write("\tDo3Op(\"", opcodes[op], "\");\n")
				io.write("}\n");
			end
		end
	end
end

