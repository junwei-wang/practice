#!/usr/bin/python2

class SchoolMember:
    '''Represents any school member.'''
    
    def __init__(self, name, age):
        self.name = name
        self.age = age
        print '(Initialized SchoolMember: %s)' % self.name

    def __del__(self):
        pass

    def tell(self):
        '''Tell my details'''
        print 'Name: %s Age: %d' % (self.name, self.age),

class Teacher(SchoolMember):
    '''Represents a teacher.'''
    def __init__(self, name, age, salary):
        SchoolMember.__init__(self, name, age)
        self.salary = salary
        print '(Initilized Teacher: %s)' % self.name

    def tell(self):
        SchoolMember.tell(self)
        print 'Salary: %d' % self.salary

class Student(SchoolMember):
    '''Represent a teacher'''
    def __init__(self, name, age, marks):
        SchoolMember.__init__(self, name, age)
        self.marks = marks
        print '(Initilized Student: %s)' % self.name

    def tell(self):
        SchoolMember.tell(self)
        print 'Marks: %d' % self.marks

t = Teacher('Qiuliang Xu', 40, 30000)
s = Student('Junwei Wang', 22, 99)

print

members = [t, s]
for member in members:
    member.tell()
