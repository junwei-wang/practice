#!/usr/bin/python2
#
# Filename:      ex25.py
# Author:        Junwei Wang(wakemecn@gmail.com)
# Last Modified: 2012-08-17 12:18
# Description:
#
#

def break_words(stuff):
    '''This fuction will break words for us.'''
    return stuff.split(' ')

def sort_words(words):
    '''Sorts the words.'''
    return sorted(words)

def print_first_word(words):
    '''Prints the first word'''
    print words[0]

def print_last_word(words):
    '''Prints the last word'''
    print words[-1]

def sort_sentence(sentence):
    '''Sorts the words in the sentence'''
    return ' '.join(sort_words(break_words(sentence)))

def print_first_and_last(sentence):
    '''Hehe'''
    words = break_words(sentence)
    print_first_word(words)
    print_last_word(words)

def print_first_and_last_sorted(sentence):
    '''what the fuck'''
    words = sort_words(break_words(sentence))
    print_first_word(words)
    print_last_word(words)

sentence = 'Sort the word by alphbet'
print sort_sentence(sentence)


