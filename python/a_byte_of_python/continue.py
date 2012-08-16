#!/usr/bin/python2
#Filename: break.py

while True:
    s = raw_input('Enter something: ')
    if s == 'quit':
        break
    if len(s) < 3:
        print 'String is to short'
        continue
    print 'Length of the string is', len(s)
print 'Done'
