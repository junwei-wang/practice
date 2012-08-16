#!/usr/bin/python2

def func():
    global x

    print 'x is', x
    x = 2
    print 'x is changed to', x
x = 50
func()
print 'value of x is', x
