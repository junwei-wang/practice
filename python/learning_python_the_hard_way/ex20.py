#!/usr/bin/python2
#
# Filename:      ex20.py
# Author:        Junwei Wang(wakemecn@gmail.com)
# Last Modified: 2012-08-17 11:46
# Description:
#
#

import sys

input_file = sys.argv[1]

def print_all(f):
    print f.read()

def rewind(f):
    f.seek(0)

def print_a_line(line_cnt, f):
    print line_cnt, f.readline()

f = open(input_file)

print 'First let\'s print the whole file'
print_all(f)

print 'Now we rewind'
rewind(f)

print 'now we print three lines: '
current_line = 1
print_a_line(current_line, f)
current_line += 1
print_a_line(current_line, f)
current_line += 1
print_a_line(current_line, f)
