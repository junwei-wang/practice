#!/usr/bin/python2

def func(a, b=5, c=10):
    print 'a is', a
    print 'b is', b
    print 'c is', c
    print ''

func(3, 7)
func(25, c=60)
func(c=5, a=8)
func(c=5, a=8, b=3)
