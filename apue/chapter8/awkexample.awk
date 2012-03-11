#!/bin/awk -f
BEGIN {
	for (i = 0; i < AGRC; i++)
		printf "ARGV[%d] = %s\n", i, ARGV[i]
	exit
}
