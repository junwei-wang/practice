#!/usr/bin/python2

print 'Simple Assignment'
shoplist = ['apple', 'mango', 'carrot', 'banana']
mylist = shoplist

del shoplist[2]

print 'Shoplist is', shoplist
print 'mylist is', mylist

mylist = shoplist[:]


del shoplist[2]

print 'Shoplist is', shoplist
print 'mylist is', mylist

del mylist[1]

print 'Shoplist is', shoplist
print 'mylist is', mylist
