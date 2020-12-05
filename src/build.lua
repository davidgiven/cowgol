rule {
    ins = {
        "scripts/mkiburgcodes.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    },
    outs = { "$OBJ/iburgcodes-coh.h" },
    cmd = "$LUA @1 -- @3 &1"
}

rule {
    ins = {
        "scripts/mkmidcodescoh.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    },
    outs = { "$OBJ/midcodes.coh" },
    cmd = "$LUA @1 -- @3 &1 combined"
}

rule {
    ins = {
        "scripts/mkcobin.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    },
    outs = { "$OBJ/cobin.coh" },
    cmd = "$LUA @1 -- @3 &1"
}

rule {
    ins = {
        "scripts/mkcobout.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    },
    outs = { "$OBJ/cobout.coh" },
    cmd = "$LUA @1 -- @3 &1"
}

rule {
    ins = {
        "scripts/mkmidcodescoh.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    },
    outs = { "$OBJ/midcodesfe.coh" },
    cmd = "$LUA @1 -- @3 &1 fe"
}

rule {
    ins = {
        "scripts/mkmidcodescoh.lua",
        "scripts/libcowgol.lua",
        "src/midcodes.coh.tab",
    },
    outs = { "$OBJ/midcodesbe.coh" },
    cmd = "$LUA @1 -- @3 &1 be"
}

function uncoo(e)
    rule {
        ins = concat {
            "scripts/uncoo.lua",
            e.ins
        },
        outs = e.outs,
        cmd = "$LUA @1 @2 &1"
    }
end

function buildcgen(e)
    cprogram {
        ins = concat {
            e.ins,
            "rt/cgen/cowgol.h",
        },
        outs = e.outs
    }
end

function buildgas(arch, e)
    local obj = e.outs[1]:ext(".o"):obj()
    rule {
        ins = e.ins,
        outs = { obj },
        cmd = arch.."-as -g @1 -o &1"
    }

    rule {
        ins = { obj },
        outs = e.outs,
        cmd = arch.."-ld -g @1 -o &1"
    }
end

function buildgas386(e)
    return buildgas("i686-linux-gnu", e)
end

function buildgasarm(e)
    return buildgas("arm-linux-gnueabihf", e)
end

function buildzmac(e)
    local cim = e.outs[1]:ext(".cim"):obj()
    zmac {
        ins = e.ins,
        outs = { cim }
    }

    rule {
        ins = { cim },
        outs = e.outs,
        cmd = "cp @1 &1"
    }
end

function buildcowasm(e, asm)
    local lst = e.outs[1]:ext(".lst"):obj()
    rule {
        ins = concat {
            "scripts/quiet",
            "bin/cowasm-"..asm..".nncgen.exe",
            e.ins
        },
        outs = { e.outs[1], lst },
        cmd = "@1 @2 @3 -o &1 -l &2"
    }
end

function buildcowasm8080(e)
    buildcowasm(e, "8080")
end

function buildcowasmpdp11(e)
    buildcowasm(e, "pdp11")
end

function buildcowasm6303(e)
    buildcowasm(e, "6303")
end

function buildtass64(e)
    local img = e.outs[1]:ext(".img"):obj()
    tass64 {
        ins = e.ins,
        outs = e.outs,
    }
end

function buildnasm(e)
    local lst = e.outs[1]:ext(".lst"):obj()
    local obj = e.outs[1]:ext(".obj"):obj()
    rule {
        ins = e.ins,
        outs = { obj, lst },
        cmd = "nasm -f obj -o &1 -l &2 @1",
    }

    djlink {
        ins = { obj },
        outs = { e.outs[1] }
    }
end

function simpletest(interpreter, e)
    local badfile = e.ins[1]:ext(".bad")
    rule {
        ins = e.ins,
        outs = { badfile },
        cmd = "timeout 5s "..interpreter.." @1 > &1.tmp && mv &1.tmp &1 && diff -u -w &1 "..e.goodfile,
    }
end

function nativetest(e)
    return simpletest("", e)
end

function qemu386test(e)
    return simpletest("qemu-i386", e)
end

function qemuarmtest(e)
    return simpletest("qemu-arm", e)
end

function cpmtest(e)
    e.ins = concat { e.ins, "bin/cpmemu" }
    return simpletest("bin/cpmemu", e)
end

function tubeemutest(e)
    e.ins = concat { e.ins, "bin/tubeemu" }
    return simpletest("bin/tubeemu -l 0x400 -e 0x400 -f", e)
end

function apouttest(e)
    e.ins = concat { e.ins, "bin/apout" }
    return simpletest("bin/apout ", e)
end

function fuzix6303test(e)
    e.ins = concat { e.ins, "bin/fuzix6303emu" }
    return simpletest("bin/fuzix6303emu -f", e)
end

function emu2test(e)
    e.ins = concat { e.ins, "bin/emu2" }
    return simpletest("bin/emu2", e)
end

function cowgol(e)
    local out = e.outs[1].."."..e.toolchain.name..e.toolchain.binext
    local coo = out:ext(".coo"):obj()
    local asm = out:ext(e.toolchain.asmext):obj()

    local hdrs = {}
    for _, src in ipairs(e.ins) do
        local f = src:gsub("[^/]*$", "")
        if f == "" then
            f = "."
        end
        hdrs[#hdrs+1] = "-I"..f
    end

    if e.toolchain.compiler then
        rule {
            ins = concat {
                e.toolchain.compiler,
                e.ins,
                "scripts/quiet",
                "rt/common-file.coh",
                "rt/common.coh",
                "rt/fileio.coh",
                "rt/malloc.coh",
                "rt/strings.coh",
                (e.toolchain.runtime.."/cowgol.coh"),
                (e.toolchain.runtime.."/file.coh"),
                (e.toolchain.runtime.."/argv.coh"),
            },
            outs = { coo },
            cmd = "scripts/quiet @1 -Irt/ -I"..e.toolchain.runtime.."/ "..joined(hdrs).." @2 &1"
        }
    else
        local cob = out:ext(".cob"):obj()
        rule {
            ins = concat {
                e.toolchain.cowfe,
                e.ins,
                "scripts/quiet",
                "rt/common-file.coh",
                "rt/common.coh",
                "rt/fileio.coh",
                "rt/malloc.coh",
                "rt/strings.coh",
                (e.toolchain.runtime.."/cowgol.coh"),
                (e.toolchain.runtime.."/file.coh"),
                (e.toolchain.runtime.."/argv.coh"),
            },
            outs = { cob },
            cmd = "scripts/quiet @1 -Irt/ -I"..e.toolchain.runtime.."/ "..joined(hdrs).." @2 &1"
        }

        rule {
            ins = concat {
                e.toolchain.cowbe,
                "scripts/quiet",
                cob,
            },
            outs = { coo },
            cmd = "scripts/quiet @1 @3 &1"
        }
    end

    rule {
        ins = concat {
            "scripts/quiet",
            e.toolchain.linker,
            (e.toolchain.runtime.."/cowgol.coo"):obj(),
            coo
        },
        outs = { asm },
        cmd = "@1 @2 -o &1 @3 @4"
    }

    e.toolchain.assembler {
        ins = { asm },
        outs = { out }
    }

    return out
end

function cowwrap(e)
    rule {
        ins = concat {
            "scripts/quiet",
            "bin/cowwrap.bootstrap.exe",
            e.ins
        },
        outs = e.outs,
        cmd = "@1 @2 @3 &1"
    }
end

