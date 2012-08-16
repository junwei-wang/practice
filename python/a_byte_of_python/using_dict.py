#!/usr/bin/python2

# 'ab' is short for 'address book'
ab = {
    'Junwei Wang'   : 'wakemecn@gmail.com',
    'Larry'         : 'larry@wall.org',
    'Matsumoto'     : 'matz@ruby-lang.org',
    'Spammer'       : 'spammer@hotmail.com',
}

print 'Junwei Wang\'s address is %s' % ab['Junwei Wang']

ab['Guido'] = 'guido@python.org'

del ab['Spammer']

print '\nThere are %d contacts in the address-book\n' %len(ab)

for name, address in ab.items():
    print 'Contact %s at %s' % (name, address, )

if 'Guido' in ab:
    print 'Guido\'s address is %s' % ab['Guido']
