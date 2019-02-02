#!/bin/sh

echo "difftest"
echo "$@"

bad=$1
good=$2

if ! diff -q $bad $good; then
    echo "-------"
    echo "Raw bad output follows:"
    cat $bad
    echo "-------"
    echo "Diff follows:"
    diff -u $bad $good
    exit 1
fi
