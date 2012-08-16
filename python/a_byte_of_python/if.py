#!/usr/bin/python2
#Filename: if.py

number = 23
guess = int(raw_input('Enter an integer: '))

if guess == number :
	print 'Congratulations, you guessed it.'
	print '(but you do not win any puzzles.'
elif guess > number :
	print 'No it is a little greater than that.'
else :
    print "No it is a little lower than that."

print 'Done!'
