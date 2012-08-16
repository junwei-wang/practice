#!/usr/bin/python2

def make_repeater(n):
    return lambda s: s * n

twice = make_repeater(2)

print twice

print twice('word')
print twice(5)
