#!/usr/bin/python2
#
# Filename:      ex8.py
# Author:        Junwei Wang(wakemecn@gmail.com)
# Last Modified: 2012-08-16 22:14
# Description:
#
#

formatter = "%r %r %r %r"

print formatter % (1, 2, 3, 4)
print formatter % ("one", "Two", "Three", "Four")
print formatter % (True, False, False, True)
print formatter % (formatter, formatter, formatter, formatter)
print formatter % (
    "I had this thing.",
    "That you could type up right.",
    "But it did't sing.",
    "So I said good night."
)
