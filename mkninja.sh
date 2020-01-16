#!/bin/sh
set -e

stdlib=$(find rt -name "*.coh" | xargs echo)

cat <<EOF
rule cc
    command = $CC $CFLAGS \$flags -I. -c -o \$out \$in -MMD -MF \$out.d
    description = CC \$in
    depfile = \$out.d
    deps = gcc
    
rule library
    command = $AR \$out \$in
    description = AR \$in

rule link
    command = $CC $LDFLAGS -o \$out -Wl,--start-group \$in -Wl,--end-group \$flags $LIBS
    description = LINK \$in

rule strip
    command = cp -f \$in \$out && $STRIP \$out
    description = STRIP \$in

rule flex
    command = flex -8 -Cem -o \$out \$in
    description = FLEX \$in

rule mkmidcodesh
    command = lua scripts/mkmidcodesh.lua -- \$in \$out
    description = MKMIDCODESH \$in

rule mkmidcodesc
    command = lua scripts/mkmidcodesc.lua -- \$in \$out
    description = MKMIDCODESC \$in

rule mkiburgcodes
    command = lua scripts/mkiburgcodes.lua -- \$in \$out
    description = MKIBURGCODES \$in

rule mkpat
    command = lua scripts/mkpat.lua -- \$in \$out
    description = MKPAT \$in

rule lemon
    command = mkdir -p \$cfile.temp && bin/lemon -Ttools/lemon/lempar.c -d\$cfile.temp \$in && mv \$cfile.temp/*.c \$cfile && mv \$cfile.temp/*.h \$hfile
    description = LEMON \$in

rule bison
    command = bison --defines=\$hfile -o \$cfile \$in
    description = BISON \$in

rule buildcowgol
    command = \$builder \$in \$out
    description = COWGOL \$target \$in

rule runtest
    command = \$skeleton \$in > \$out
    description = TEST \$in

rule command
    command = \$cmd
    description = \$msg

EOF


rule() {
	local cmd
	local ins
	local outs
	local msg
	cmd=$1
	ins=$2
	outs=$3
	msg=$4

	echo "build $outs : command | $ins"
	echo "  cmd=$cmd"
	echo "  msg=$msg"
}

cfile() {
    local obj
    obj=$1
    shift

    local flags
    flags=
	local deps
	deps=
    while true; do
        case $1 in
			--dep)
				deps="$deps $2"
				shift
				shift
				;;

            -*)
                flags="$flags $1"
                shift
                ;;

            *)
                break
        esac
    done

	rule "$CC -g $flags -c -o $obj $1" "$1 $deps" "$obj" "CC $1"
}

buildlibrary() {
    local lib
    lib=$1
    objdir=${lib%%.a}.obj
    shift

    local flags
    flags=
	local deps
	deps=
    while true; do
        case $1 in
			--dep)
				deps="$deps $2"
				shift
				shift
				;;

            -*)
                flags="$flags $1"
                shift
                ;;

            *)
                break
        esac
    done

    local objs
    objs=
    for src in "$@"; do
        local obj
        case $src in
            $OBJDIR/*)
                obj="${src%%.c*}.o"
                ;;

            *)
            obj="$OBJDIR/$objdir/${src%%.c*}.o"
        esac
        objs="$objs $obj"

        echo "build $obj : cc $src | $deps"
        echo "    flags=$flags"
    done

    echo build $OBJDIR/$lib : library $objs
}

buildprogram() {
    local prog
    prog=$1
    shift

    local flags
    flags=
    while true; do
        case $1 in
            -*)
                flags="$flags $1"
                shift
                ;;

            *)
                break
        esac
    done

    local objs
    objs=
    for src in "$@"; do
        objs="$objs $OBJDIR/$src"
    done

    echo "build bin/$prog-debug$EXTENSION : link $objs | $deps"
    echo "    flags=$flags"

    echo build bin/$prog$EXTENSION : strip bin/$prog-debug$EXTENSION
}

buildflex() {
    echo "build $1 : flex $2"
}

buildbison() {
    local cfile
    local hfile
    cfile="${1%%.c*}.c"
    hfile="${1%%.c*}.h"
    echo "build $cfile $hfile : bison $2"
    echo "  cfile=$cfile"
    echo "  hfile=$hfile"
}

buildlemon() {
    local cfile
    local hfile
    cfile="${1%%.c*}.c"
    hfile="${1%%.c*}.h"
    echo "build $cfile $hfile : lemon $2 | bin/lemon tools/lemon/lempar.c"
    echo "  cfile=$cfile"
    echo "  hfile=$hfile"
}

buildmkmidcodesh() {
    echo "build $1 : mkmidcodesh $2 | scripts/mkmidcodesh.lua scripts/libcowgol.lua"
}

buildmkmidcodesc() {
    echo "build $1 : mkmidcodesc $2 | scripts/mkmidcodesc.lua scripts/libcowgol.lua"
}

buildmkiburgcodes() {
    echo "build $1 : mkiburgcodes $2 | scripts/mkiburgcodes.lua scripts/libcowgol.lua"
}

buildmkpat() {
    local out
    out=$1
    shift
    echo "build $out : mkpat $@ | scripts/mkpat.lua scripts/libcowgol.lua"
}

buildnewgen() {
    rule \
        "bin/newgen $3 $1 $2" \
        "$3 bin/newgen" \
        "$1 $2" \
        "NEWGEN $3"
}

zmac8() {
	rule \
		"bin/zmac -8 $1 -o $2" \
		"$1 bin/zmac" \
		$2 \
		"ZMAC $1"
}

as_thumb2_linux() {
    rule \
        "arm-linux-gnueabihf-as -g $1 -o $2" \
        "$1" \
        "$2" \
        "AS THUMB2 $base.s"
}

as_80386_linux() {
    rule \
        "i686-linux-gnu-as -g $1 -o $2" \
        "$1" \
        "$2" \
        "AS 80386 $base.s"
}

ld80() {
	local bin
	bin="$1"
	shift

	rule \
		"bin/ld80 -O bin -c -P0100 $* -s $bin.sym -o $bin" \
		"$* bin/ld80" \
		"$bin" \
		"LD80 $bin"
}

cowgol_cpm_asm() {
	local in
	local out
	local log
	local deps
	in=$1
	out=$2
	log=$3
	deps=$4
    
	rule \
		"bin/tinycowc-8080 -Irt/ -Irt/cpm/ $in $out > $log" \
		"$in $deps bin/tinycowc-8080 $stdlib" \
		"$out $log" \
		"COWGOL 8080 $in"
}

cowgol_cpm() {
	local base
	base="$OBJDIR/$(dirname $1)/cpm/${1%.cow}"
	cowgol_cpm_asm $1 $base.asm $base.log "$3"
	zmac8 $base.asm $base.rel
	ld80 $base.bin \
		$OBJDIR/rt/cpm/cowgol.rel \
		$base.rel \
		$OBJDIR/rt/cpm/tail.rel
	rule "dd if=$base.bin of=$2 bs=128 skip=2 status=none" "$base.bin" "$2" "DD $1"
}

test_cpm() {
	local base
	base=$OBJDIR/tests/cpm/$1
	cowgol_cpm tests/$1.test.cow $base.com tests/_framework.coh
	rule "bin/cpmemu $base.com > $base.bad" "bin/cpmemu $base.com" "$base.bad" "TEST_CPM $1"
	rule "diff -u tests/$1.good $base.bad && touch $base.stamp" "tests/$1.good $base.bad" "$base.stamp" "DIFF $1"
}

cowgol_thumb2_s() {
	local in
	local out
	local log
	local deps
	in=$1
	out=$2
	log=$3
	deps=$4

	rule \
		"bin/tinycowc-thumb2 -Irt/ -Irt/thumb2-linux/ $in $out > $log" \
		"$in $deps bin/tinycowc-thumb2 rt/thumb2-linux/cowgol.coh" \
		"$out $log" \
		"COWGOL THUMB2 $in"
}

cowgol_thumb2_linux() {
	local base
	base="$OBJDIR/$(dirname $1)/thumb2-linux/${1%.cow}"
	cowgol_thumb2_s $1 $base.s $base.log "$3"
    as_thumb2_linux $base.s $base.o
    rule \
        "arm-linux-gnueabihf-ld $OBJDIR/rt/thumb2-linux/cowgol.o $base.o -o $2" \
        "$OBJDIR/rt/thumb2-linux/cowgol.o $base.o" \
        "$2" \
        "LD THUMB2 $1"
}

test_thumb2_linux() {
	local base
	base=$OBJDIR/tests/thumb2-linux/$1
	cowgol_thumb2_linux tests/$1.test.cow $base.exe tests/_framework.coh
	rule "$base.exe > $base.bad" "$base.exe" "$base.bad" "TEST_THUMB2 $1"
	rule "diff -u tests/$1.good $base.bad && touch $base.stamp" "tests/$1.good $base.bad" "$base.stamp" "DIFF $1"
}

cowgol_80386_s() {
	local in
	local out
	local log
	local deps
	in=$1
	out=$2
	log=$3
	deps=$4

	rule \
		"bin/tinycowc-80386 -Irt/ -Irt/80386-linux/ $in $out > $log" \
		"$in $deps bin/tinycowc-80386 rt/80386-linux/cowgol.coh" \
		"$out $log" \
		"COWGOL 80386 $in"
}

cowgol_80386_linux() {
	local base
	base="$OBJDIR/$(dirname $1)/80386-linux/${1%.cow}"
	cowgol_80386_s $1 $base.s $base.log "$3"
    as_80386_linux $base.s $base.o
    rule \
        "i686-linux-gnu-ld $OBJDIR/rt/80386-linux/cowgol.o $base.o -o $2" \
        "$OBJDIR/rt/80386-linux/cowgol.o $base.o" \
        "$2" \
        "LD 80386 $1"
}

test_80386_linux() {
	local base
	base=$OBJDIR/tests/80386-linux/$1
	cowgol_80386_linux tests/$1.test.cow $base.exe tests/_framework.coh
	rule "$base.exe > $base.bad" "$base.exe" "$base.bad" "TEST_80386 $1"
	rule "diff -u tests/$1.good $base.bad && touch $base.stamp" "tests/$1.good $base.bad" "$base.stamp" "DIFF $1"
}

cowgol_c_c() {
	local in
	local out
	local log
	local deps
	in=$1
	out=$2
	log=$3
	deps=$4

	rule \
		"bin/tinycowc-c -Irt/ -Irt/c/ $in $out > $log" \
		"$in $deps bin/tinycowc-c rt/c/cowgol.coh" \
		"$out $log" \
		"COWGOL C $in"
}

cowgol_c() {
	local base
	base="$OBJDIR/${1%.cow}.c"
	cowgol_c_c $1 $base.c $base.log "$3"
	rule "$CC -g -c -ffunction-sections -fdata-sections -I. -o $base.o $base.c" \
		$base.c $base.o "CC $1"
	rule "$CC -g -o $2 $OBJDIR/rt/c/cowgol.o $base.o" \
		"$OBJDIR/rt/c/cowgol.o $base.o" $2 \
		"LINK $1"
}

test_c() {
	local base
	base=$OBJDIR/tests/c/$1
	cowgol_c tests/$1.test.cow $base.exe tests/_framework.coh
	rule "$base.exe > $base.bad" "$base.exe" "$base.bad" "TEST_C $1"
	rule "diff -u tests/$1.good $base.bad && touch $base.stamp" "tests/$1.good $base.bad" "$base.stamp" "DIFF $1"
}

objectify() {
	rule "./tools/objectify $3 < $1 > $2" \
		"./tools/objectify $1" "$2" "OBJECTIFY $1"
}

pasmo() {
	rule "pasmo $1 $2" "$1" "$2" "PASMO $1"
}

cowgol_target() {
    local name
    name=$1
    shift

    buildnewgen \
        $OBJDIR/arch$name/inssel.c $OBJDIR/arch$name/inssel.h \
        src/arch$name.ng

    buildlibrary lib$name.a \
        -I$OBJDIR \
        -I$OBJDIR/arch$name \
        -Isrc \
        --dep $OBJDIR/midcodes.h \
        --dep $OBJDIR/arch$name/inssel.h \
        $OBJDIR/arch$name/inssel.c \
        src/codegen.c

    buildprogram tinycowc-$name \
        -lbsd \
        libmain.a \
        lib$name.a
}

buildlibrary liblemon.a \
	tools/lemon/lemon.c

buildprogram lemon \
	liblemon.a

buildbison $OBJDIR/third_party/zmac/zmac.c third_party/zmac/zmac.y

buildlibrary libzmac.a \
	-Ithird_party/zmac \
	$OBJDIR/third_party/zmac/zmac.c \
	third_party/zmac/mio.c \
	third_party/zmac/zi80dis.cpp

buildprogram zmac \
	libzmac.a

buildlibrary libld80.a \
	third_party/ld80/main.c \
	third_party/ld80/readobj.c \
	third_party/ld80/section.c \
	third_party/ld80/symbol.c \
	third_party/ld80/fixup.c \
	third_party/ld80/do_out.c \
	third_party/ld80/optget.c

buildprogram ld80 \
	libld80.a

buildmkiburgcodes $OBJDIR/tools/newgen/iburgcodes.h src/midcodes.tab
buildlemon $OBJDIR/tools/newgen/parser.c tools/newgen/parser.y
buildflex $OBJDIR/tools/newgen/lexer.c tools/newgen/lexer.l

buildlibrary libnewgen.a \
    -Itools/newgen \
    -I$OBJDIR/tools/newgen \
    --dep $OBJDIR/tools/newgen/parser.h \
    $OBJDIR/tools/newgen/parser.c \
    $OBJDIR/tools/newgen/lexer.c \
    tools/newgen/utils.c \
    tools/newgen/main.c

buildprogram newgen \
    libnewgen.a

buildmkmidcodesh $OBJDIR/midcodes.h src/midcodes.tab
buildmkmidcodesc $OBJDIR/midcodes.c src/midcodes.tab

buildlemon $OBJDIR/parser.c src/parser.y
buildflex $OBJDIR/lexer.c src/lexer.l
#buildiburg $OBJDIR/arch8080.c src/arch8080.pat
#buildiburg $OBJDIR/archc.c src/archc.pat

buildlibrary libmain.a \
    -I$OBJDIR \
    -Isrc \
	--dep $OBJDIR/parser.h \
	--dep $OBJDIR/midcodes.h \
    $OBJDIR/parser.c \
    $OBJDIR/lexer.c \
    $OBJDIR/midcodes.c \
    src/main.c \
    src/emitter.c \
    src/compiler.c

cowgol_target 8080
cowgol_target 80386
cowgol_target thumb2

pasmo tools/cpmemu/bdos.asm $OBJDIR/tools/cpmemu/bdos.img
pasmo tools/cpmemu/ccp.asm $OBJDIR/tools/cpmemu/ccp.img
objectify $OBJDIR/tools/cpmemu/bdos.img $OBJDIR/tools/cpmemu/bdos.c bdos
objectify $OBJDIR/tools/cpmemu/ccp.img $OBJDIR/tools/cpmemu/ccp.c ccp

buildlibrary libcpmemu.a \
	$OBJDIR/tools/cpmemu/bdos.c \
	$OBJDIR/tools/cpmemu/ccp.c \
	tools/cpmemu/biosbdos.c \
	tools/cpmemu/emulator.c \
	tools/cpmemu/fileio.c \
	tools/cpmemu/main.c \

buildprogram cpmemu -lz80ex -lz80ex_dasm -lreadline libcpmemu.a
	
buildlibrary libtubeemu.a \
	tools/tubeemu/lib6502.c \
	tools/tubeemu/bbctube.c

buildprogram tubeemu libtubeemu.a

buildlibrary libmkadfs.a \
	tools/mkadfs.c

buildprogram mkadfs libmkadfs.a

buildlibrary libmkdfs.a \
	tools/mkdfs.c

buildprogram mkdfs libmkdfs.a

zmac8 rt/cpm/cowgol.asm $OBJDIR/rt/cpm/cowgol.rel
zmac8 rt/cpm/tail.asm $OBJDIR/rt/cpm/tail.rel
as_thumb2_linux rt/thumb2-linux/cowgol.s $OBJDIR/rt/thumb2-linux/cowgol.o
as_80386_linux rt/80386-linux/cowgol.s $OBJDIR/rt/80386-linux/cowgol.o
cfile $OBJDIR/rt/c/cowgol.o rt/c/cowgol.c

test_cpm addsub-8bit
test_cpm addsub-16bit
test_cpm addsub-32bit
test_cpm mul-8bit-u
test_cpm mul-8bit-s
test_cpm mul-16bit-u
test_cpm mul-16bit-s
test_cpm mul-32bit-u
test_cpm mul-32bit-s
test_cpm shifts-8bit
test_cpm shifts-16bit
test_cpm shifts-32bit
test_cpm records
test_cpm inputparams
test_cpm outputparams
test_cpm conditionals

test_thumb2_linux addsub-8bit
test_thumb2_linux addsub-16bit
test_thumb2_linux addsub-32bit
test_thumb2_linux mul-8bit-u
test_thumb2_linux mul-8bit-s
test_thumb2_linux mul-16bit-u
test_thumb2_linux mul-16bit-s
test_thumb2_linux mul-32bit-u
test_thumb2_linux mul-32bit-s
test_thumb2_linux shifts-8bit
test_thumb2_linux shifts-16bit
test_thumb2_linux shifts-32bit
test_thumb2_linux records
test_thumb2_linux inputparams
test_thumb2_linux outputparams
test_thumb2_linux conditionals

test_80386_linux addsub-8bit
test_80386_linux addsub-16bit
test_80386_linux addsub-32bit
test_80386_linux mul-8bit-u
test_80386_linux mul-8bit-s
test_80386_linux mul-16bit-u
test_80386_linux mul-16bit-s
test_80386_linux mul-32bit-u
test_80386_linux mul-32bit-s
test_80386_linux shifts-8bit
test_80386_linux shifts-16bit
test_80386_linux shifts-32bit
test_80386_linux records
test_80386_linux inputparams
test_80386_linux outputparams
test_80386_linux conditionals

#test_c addsub-8bit
#test_c addsub-16bit
#test_c addsub-32bit
#test_c records
#test_c inputparams
#test_c outputparams
#test_c conditionals

cowgol_80386_linux examples/malloc.cow examples/malloc.386
cowgol_80386_linux examples/argv.cow examples/argv.386
cowgol_cpm examples/argv.cow examples/argv.com 
cowgol_cpm examples/empty.cow examples/empty.com
cowgol_cpm examples/file.cow examples/file.com 
cowgol_cpm examples/malloc.cow examples/malloc.com 
cowgol_thumb2_linux examples/argv.cow examples/argv.thumb2 
cowgol_thumb2_linux examples/empty.cow examples/empty.thumb2
cowgol_thumb2_linux examples/malloc.cow examples/malloc.thumb2 
#cowgol_c examples/malloc.cow examples/malloc

cowgol_80386_linux src/cowlink/main.cow bin/cowlink

# vim: sw=4 ts=4 et
