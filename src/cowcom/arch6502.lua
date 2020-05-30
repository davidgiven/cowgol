local function writespec(mode, name)
	if mode == "pop" then
		io.write("a16:"..name)
	elseif mode == "mem" then
		io.write("LOAD2(ADDRESS():"..name..")")
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
	elseif mode == "constant" then
		io.write("\t"..prefix.."Const($"..name..".value);\n")
	end
end

local opcodes = {
	ADD = "adc",
	SUB = "sbc",
	EOR = "eor",
	OR = "ora",
	AND = "and"
}

for _, lhs in ipairs({"pop", "mem", "constant"}) do
	for _, dest in ipairs({"push", "mem"}) do
		if (lhs ~= "pop") or (dest ~= "push") then
			if dest == "mem" then
				io.write("gen STORE2(")
			else
				io.write("gen a16 := ")
			end
			writespec(lhs, "lhs")
			if dest == "mem" then
				io.write(", ADDRESS():dest)\n")
			else
				io.write("\n")
			end

			io.write("{\n");
			io.write("\tparamwidth := 2;\n");
			writeparm(lhs, "Lhs", "lhs")
			writeparm(dest, "Dest", "dest")
			io.write("\tDoCopy();\n")
			io.write("}\n");
		end
	end
end

for _, op in ipairs({"ADD", "SUB", "EOR", "OR", "AND"}) do
	for _, lhs in ipairs({"pop", "mem", "constant"}) do
		for _, rhs in ipairs({"pop", "mem", "constant"}) do
			for _, dest in ipairs({"push", "mem"}) do
				if dest == "mem" then
					io.write("gen STORE2(")
				else
					io.write("gen a16 := ")
				end
				io.write(op.."2(")
				writespec(lhs, "lhs")
				io.write(", ")
				writespec(rhs, "rhs")
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
				io.write("\tparamwidth := 2;\n");
				writeparm(rhs, "Rhs", "rhs")
				writeparm(lhs, "Lhs", "lhs")
				writeparm(dest, "Dest", "dest")
				io.write("\tDo3Op(\"", opcodes[op], "\");\n")
				io.write("}\n");
			end
		end
	end
end

