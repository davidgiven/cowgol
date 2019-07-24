#!/bin/sh
set -e

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
    command = $CC $LDFLAGS -o \$out \$in \$flags $LIBS
    description = LINK \$in

rule test
    command = \$in && touch \$out
    description = TEST \$in

rule strip
    command = cp -f \$in \$out && $STRIP \$out
    description = STRIP \$in

rule flex
    command = flex -8 -Cem -o \$out \$in
    description = FLEX \$in

rule yacc
    command = yacc --report=all --report-file=report.txt --defines=\$hfile -o \$cfile \$in
    description = YACC \$in
EOF

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
        obj="$OBJDIR/${src%%.c*}.o"
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

buildyacc() {
    local cfile
    local hfile
    cfile="${1%%.c*}.c"
    hfile="${1%%.c*}.h"
    echo "build $cfile $hfile : yacc $2"
    echo "  cfile=$cfile"
    echo "  hfile=$hfile"
}

runtest() {
    local prog
    prog=$1
    shift

    buildlibrary lib$prog.a \
        "$@"

    buildprogram $OBJDIR/$prog \
        lib$prog.a \
        libbackend.a \
        libfmt.a

    echo build $OBJDIR/$prog.stamp : test $OBJDIR/$prog-debug$EXTENSION
}

buildyacc $OBJDIR/parser.c parser.y
buildflex $OBJDIR/lexer.c lexer.l

buildlibrary libmain.a \
    -I$OBJDIR \
	--dep $OBJDIR/parser.h \
    $OBJDIR/parser.c \
    $OBJDIR/lexer.c \
    main.c

buildlibrary libagc.a \
    archagc.c \

buildlibrary lib8080.a \
    arch8080.c \

buildprogram tinycowc-agc \
    libmain.a \
    libagc.a \

buildprogram tinycowc-8080 \
    libmain.a \
    lib8080.a \

