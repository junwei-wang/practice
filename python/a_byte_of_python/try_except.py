#!/usr/bin/python2

import sys

try:
    s = raw_input("Enter something --> ")
except EOFError:
    print
    print 'Why did you do an EOF on me?'
    sys.exit()
except:
    print 'Some error occurred'

print 'Done'
