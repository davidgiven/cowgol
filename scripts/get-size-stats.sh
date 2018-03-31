#!/bin/sh
get_stats() {
    total=$(find bin/$1 \! -name "*.log" -type f | xargs ls -l | gawk '{ total += $5 } END { print total }')
    echo "$1: $total bytes"
}

echo "Size stats:"
echo "-----------"
get_stats cpmz
get_stats bbc
