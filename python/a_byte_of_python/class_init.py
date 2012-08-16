#!/usr/bin/python2

class Person:
    def __init__(self, name):
        self.name = name
    def sayHi(self):
        print "Hello, my name is", self.name

p = Person("Junwei Wang")
p.sayHi()
