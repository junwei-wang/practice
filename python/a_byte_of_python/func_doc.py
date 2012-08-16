#!/usr/bin/python2

def printMax(x, y):
    '''Print the maximum of two numbers,
 
    some others?
    The two values must be integers.
    '''
    x = int(x)
    y = int(y)

    if x > y:
        print x, 'is maximum'
    else:
        print y, 'is maximum'

printMax(3.2, 5.1)
print printMax.__doc__
