#!/usr/bin/python2

import sys

print 'The command line arguements are: '

for arg in sys.argv:
    print arg

print '\n\nThe PYTHONPATH is', sys.path,'\n'
