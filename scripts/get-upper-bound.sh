#!/bin/sh
# Run on a set of log files; it'll return the highest address seen. Useful for
# determining memory usage.
gawk 'BEGIN { FS=":" } /^0x/ { m = strtonum($1); if (m > max) max = m } END { print max }' "$@"
