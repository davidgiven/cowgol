#!/bin/sh
set -e

registertarget() {
	eval TARGET_$1_COMPILER=$2
	eval TARGET_$1_BUILDER=$3
}

registertarget cpm tinycowc-8080 scripts/build-cpm.sh scripts/run-cpm.sh

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

rule mkmidcodes
    command = lua mkmidcodes.lua -- \$in \$out
    description = MKMIDCODES \$in

rule mkpat
    command = lua mkpat.lua -- \$in \$out
    description = MKPAT \$in

rule lemon
    command = mkdir -p \$cfile.temp && lemon -d\$cfile.temp \$in && mv \$cfile.temp/*.c \$cfile && mv \$cfile.temp/*.h \$hfile
    description = LEMON \$in

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
            obj="$OBJDIR/${src%%.c*}.o"
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

    echo "build $prog-debug$EXTENSION : link $objs | $deps"
    echo "    flags=$flags"

    echo build $prog$EXTENSION : strip $prog-debug$EXTENSION
}

buildflex() {
    echo "build $1 : flex $2"
}

buildlemon() {
    local cfile
    local hfile
    cfile="${1%%.c*}.c"
    hfile="${1%%.c*}.h"
    echo "build $cfile $hfile : lemon $2"
    echo "  cfile=$cfile"
    echo "  hfile=$hfile"
}

buildmkmidcodes() {
    echo "build $1 : mkmidcodes $2 | mkmidcodes.lua libcowgol.lua"
}

buildmkpat() {
    local out
    out=$1
    shift
    echo "build $out : mkpat $@ | mkpat.lua libcowgol.lua"
}

zmac8() {
	rule "zmac -8 $1 -o $2" $1 $2 "ZMAC $1"
}

ld80() {
	local bin
	bin="$1"
	shift

	rule "ld80 -O bin -c -P0100 $* -o $bin" "$*" "$bin" "LD80 $bin"
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

	rule "./tinycowc-8080 $in $out > $log" "$in $deps tinycowc-8080" "$out $log" "COWGOL 8080 $in"
}

cowgol_cpm() {
	local base
	base="$OBJDIR/${1%.cow}.cpm"
	cowgol_cpm_asm $1 $base.asm $base.log "$3"
	zmac8 $base.asm $base.rel
	ld80 $base.bin \
		$OBJDIR/rt/cpm/cowgol.rel \
		$base.rel
	rule "dd if=$base.bin of=$2 bs=128 skip=2 status=none" "$base.bin" "$2" "DD $1"
}

test_cpm() {
	local base
	base=$OBJDIR/tests/cpm/$1
	cowgol_cpm tests/$1.test.cow $base.com tests/_framework.coh
	rule "./cpmemu $base.com > $base.bad" "cpmemu $base.com" "$base.bad" "TEST_CPM $1"
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

	rule "./tinycowc-c $in $out > $log" "$in $deps tinycowc-c" "$out $log" "COWGOL C $in"
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

buildlemon $OBJDIR/parser.c parser.y
buildflex $OBJDIR/lexer.c lexer.l
buildmkmidcodes $OBJDIR/midcodes.h midcodes.tab
buildmkpat $OBJDIR/arch8080.c midcodes.tab arch8080.pat
buildmkpat $OBJDIR/archagc.c midcodes.tab archagc.pat
buildmkpat $OBJDIR/archc.c midcodes.tab archc.pat

buildlibrary libmain.a \
    -I$OBJDIR \
	--dep $OBJDIR/parser.h \
	--dep $OBJDIR/midcodes.h \
    $OBJDIR/parser.c \
    $OBJDIR/lexer.c \
    main.c \
    emitter.c \
    midcode.c \
    regalloc.c \
    compiler.c

buildlibrary libagc.a \
    -I$OBJDIR \
    --dep $OBJDIR/midcodes.h \
    $OBJDIR/archagc.c \

buildlibrary lib8080.a \
    -I$OBJDIR \
    --dep $OBJDIR/midcodes.h \
    $OBJDIR/arch8080.c \

buildlibrary libc.a \
    -I$OBJDIR \
    --dep $OBJDIR/midcodes.h \
    $OBJDIR/archc.c \

buildprogram tinycowc-agc \
    -lbsd \
    libmain.a \
    libagc.a \

buildprogram tinycowc-8080 \
    libmain.a \
    lib8080.a \

buildprogram tinycowc-c \
    libmain.a \
    libc.a \

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
	
#runtest cpm addsub-8bit

zmac8 rt/cpm/cowgol.asm $OBJDIR/rt/cpm/cowgol.rel
cfile $OBJDIR/rt/c/cowgol.o rt/c/cowgol.c

test_cpm addsub-8bit
test_cpm addsub-16bit
#test_cpm addsub-32bit
test_cpm records
test_cpm inputparams

test_c addsub-8bit
test_c addsub-16bit
test_c addsub-32bit
test_c records
test_c inputparams

