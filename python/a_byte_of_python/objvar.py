#!/usr/bin/python2

class Person:
    '''Represents a person.'''
    population = 0;

    def __init__(self, name):
        '''Initilizes the person;s data.'''
        self.name = name
        print '(Initilizing %s)' % self.name
        
        Person.population += 1

    def __del__(self):
        '''I am dying.'''
        print '%s says bye.' % self.name

        Person.population -= 1

        if Person.population == 0:
            print 'I am the last one'
        else:
            print 'There are still %d people left.' % Person.population

    
    def sayHi(self):
        '''Greeting by the person'''
        print 'Hi, my name is', self.name

    def howMany(self):
        '''Prints the current popultion.'''
        if Person.population == 1:
            print 'I am the only person here.'
        else:
            print 'We have %d persons here.' % Person.population


junwei_wang = Person('Junwei Wang')
junwei_wang.sayHi()
junwei_wang.howMany()

rupeng_yang = Person('Rupeng Yang')
rupeng_yang.sayHi()
rupeng_yang.howMany()

xiaochao_wei = Person('Xiaochao Wei')
xiaochao_wei.sayHi()
xiaochao_wei.howMany()

del(xiaochao_wei)
print '==='
junwei_wang.howMany()
#print Person.__del__.__doc__
