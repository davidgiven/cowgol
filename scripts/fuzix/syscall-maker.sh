#!/bin/sh
set -e

write_with_commas() {
    if [ -z "$1" ]; then
        return
    fi

    echo -n "$1"
    shift
    while [ ! -z "$1" ]; do
        echo -n ", $1"
        shift
    done
}

write_pushes() {
    while [ "$9" != "zzz" ]; do
        if [ ! -z "$9" ]; then
            p="${9%:*}"
            echo "\t@bytes 0x2a, &$p; # ld hl, ($p)"
            if [ -z "${9##*: uint8}*}" -o -z "${9##*: int8*}" ]; then
                echo "\t@bytes 0x67; # ld h, a"
            fi
            echo "\t@bytes 0xe5; # push hl"
        fi

        set -- zzz "$@"
    done
}

write_pops() {
    while [ ! -z "$1" ]; do
        echo "\t@bytes 0xe1; # pop hl"
        shift
    done
}

syscall() {
    number=$1
    name=$2
    retspec=$3
    shift 3
    echo -n "sub $name("
    write_with_commas "$@"
    echo -n ")"
    if [ "$retspec" != "void" ]; then
        echo ": ($retspec)"
    else
        echo ""
    fi

    if [ -z "${*##*: uint8}*}" -o -z "${*##*: int8*}" ]; then
        echo "\t@bytes 0xaf; # xor a"
    fi

    write_pushes "$@"
    echo "\t@bytes 0x2e, $number; # ld l, #$number"
    echo "\t@bytes 0xe5; # push hl"
    echo "\t@bytes 0xcd, &__raw_syscall; # call __raw_syscall"
    if [ "$retspec" != "void" ]; then
        p="${retspec%:*}"
        if [ -z "${retspec##*: uint8}*}" -o -z "${retspec##*: int8*}" ]; then
            echo "\t@bytes 0x7d; # ld a, l"
            echo "\t@bytes 0x32, &$p; # ld ($p), a"
        else
            echo "\t@bytes 0x22, &$p; # ld ($p), hl"
        fi
    fi
    write_pops extra "$@"
    echo "end sub;"
    echo ""
}

syscall 1 open "fd: int8" "path: [int8]" "flags: uint16" "mode: uint16"
syscall 2 close "status: int8" "fd: int8"
syscall 3 rename "status: int8" "oldpath: [int8]" "newpath: [int8]"
syscall 4 mknod "status: int8" "pathname: [int8]" "mode: uint16" "dev: uint16"
syscall 5 link "status: int8" "oldpath: [int8]" "newpath: [int8]"
syscall 6 unlink "status: int8" "path: [int8]"
syscall 7 read "countout: int16" "fd: int8" "buf: [int8]" "countin: uint16"
syscall 8 write "countout: int16" "fd: int8" "buf: [int8]" "countin: uint16"
syscall 9 _lseek "status: int8" "fd: int8" "offset: [uint32]" "mode: uint16"
syscall 10 chdir "status: int8" "path: [int8]"
syscall 11 sync "void"
syscall 12 access "status: int8" "path: [int8]" "mode: uint16"
syscall 13 chmod "status: int8" "path: [int8]" "mode: uint16"
syscall 14 chown "status: int8" "path: [int8]" "owner: uint16" "group: uint16"
syscall 15 stat "status: int8" "path: [int8]" "s: [int8]"
syscall 16 fstat "status: int8" "fd: int8" "s: [int8]"
syscall 17 dup "newfs: int8" "oldfd: int8"
syscall 18 getpid "pid: uint16"
syscall 19 getppid "pid: uint16"
syscall 20 getuid "uid: uint16"
syscall 21 umask "oldmode: uint16" "newmode: uint16"
syscall 22 getfsys "status: int8" "dev: uint16" "fs: [int8]"
syscall 23 execve "status: int8" "filename: [int8]" "argv: [[int8]]" "envp: [[int8]]"
syscall 24 getdirent "status: int8" "fd: int8" "buf: [int8]" "len: uint16"
syscall 25 setuid "status: int8" "uid: uint16"
syscall 26 setgid "status: int8" "gid: uint16"
syscall 27 time "status: int8" "t: [int8]" "clock: uint16"
syscall 28 stime "status: int8" "t: [int8]"
syscall 29 ioctl "result: uint16" "fd: int8" "request: uint16" "argp: [int8]"
syscall 30 brk "result: int8" "addr: [int8]"
syscall 31 sbrk "void" "delta: int16"
syscall 32 _fork "pid: uint16" "flags: uint16" "addr: [int8]"
syscall 33 mount "status: int8" "dev: [int8]" "path: [int8]" "flags: uint16"
syscall 34 _umount "status: int8" "dev: [int8]" "flags: uint16"
syscall 35 signal "oldhandler: uint16" "signum: uint8" "newhandler: uint16"
syscall 36 dup2 "oldfd: int8" "newfd: int8"
syscall 37 pause "status: int8" "dsecs: uint16"
syscall 38 alarm "oldalarm: uint16" "newalarm: uint16"
syscall 39 kill "status: int8" "pid: uint16" "sig: int8"
syscall 40 pipe "status: int8" "pipefds: [int16]"
syscall 41 getgid "gid: uint16"
syscall 42 _times "status: int8" "tms: [int8]"
syscall 43 utime "status: int8" "file: [int8]" "ktime: [int8]"
syscall 44 geteuid "uid: uint16"
syscall 45 getegid "gid: uint16"
syscall 46 chroot "status: int8" "path: [int8]"
syscall 47 fcntl "fd: int8" "cmd: uint16" "arg: uint16"
syscall 48 fchdir "status: int8" "fd: int8"
syscall 49 fchmod "status: int8" "fd: int8" "mode: uint16"
syscall 50 fchown "status: int8" "fd: int8" "owner: uint16" "group: uint16"
syscall 51 mkdir "status: int8" "path: [int8]" "mode: uint16"
syscall 52 rmdir "status: int8" "path: [int8]"
syscall 53 setpgrp "status: int8"
syscall 54 uname "uzib: [int8]"
syscall 55 waitpid "result: int16" "pid: int16" "wstatus: [int16]" "options: uint16"
# skipping 56, _profil
# skipping 57, uadmin
syscall 58 nice "status: int8" "prio: int16"
# skipping 59, _sigdisk
syscall 60 flock "status: int8" "fd: int8" "operation: int16"
syscall 61 getpgrp "pid: uint16"
syscall 62 sched_yield "status: int8"
# skipping 63, act (what is this?)
# skipping 64, memalloc
# skipping 65, memfree
# skipping 66..71 (unused)
# skipping 72, _select
syscall 73 setgroups "status: int8" "size: uint8" "gids: [uint16]"
syscall 74 getgroups "status: int8" "size: uint8" "gids: [uint16]"
# skipping 75, getrlimit
# skipping 76, setrlimit
# skipping 77, setpgid
# skipping 78, setsid
# skipping 79, getsid
# skipping 80..89 (unused)
# skipping 90, socket
# skipping 91, listen
# skipping 92, bind
# skipping 93, connect
# skipping 94, accept
# skipping 95, getsockaddrs
# skipping 96, sendto
# skipping 97, recvfrom
# skipping 98, shutdown
