#!/usr/bin/python2
#
# Filename:      ex15.py
# Author:        Junwei Wang(wakemecn@gmail.com)
# Last Modified: 2012-08-16 22:38
# Description:
#
#

import sys

script, filename = sys.argv

txt = open(filename)
print txt.read() 
txt.close()

print "Type the filename again:"
file_again = raw_input('> ')
txt_again = open(file_again)
print txt_again.read()
txt.close()
