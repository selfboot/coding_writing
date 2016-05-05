#! /usr/bin/env python
# -*- coding: utf-8 -*-
# @Author: xuezaigds@gmail.com
# @Last Modified time: 2016-05-05 16:57:18


'''
You are given a string S.
Your task is to swap cases. In other words,
convert all lowercase letters to uppercase letters and vice versa.
'''
print ''.join(map(lambda x: x.upper()
                  if x.islower() else x.lower(), raw_input()))


'''
You are given a string.
Split the string on a " " (space) delimiter and join using a - hyphen.
'''
str = raw_input()
print '-'.join(str.split(' '))


'''
Read a given string, change the character at a given index and
then print the modified string.
'''
orig = list(raw_input())
pos, char = raw_input().split()
orig[int(pos)] = char
print ''.join(orig)

# orig = raw_input()
# pos, char = raw_input().split()
# print orig[:int(pos)] + char + orig[int(pos)+1:]


'''
In this challenge, the user enters a string and a substring.
You have to print the number of times that the substring
occurs in the given string.
String traversal will take place from left to right, not from right to left.
'''
line, target = [raw_input() for _ in range(2)]
score = 0
for i in range(len(line)):
    if line[i:i + len(target)] == target:
        score += 1
print score


'''
You are given a string S.
Your task is to find out if the string S contains:
alphanumeric characters, alphabetical characters,
digits, lowercase and uppercase characters.
'''
demo_str = raw_input()
print any([x.isalnum() for x in demo_str])
print any([x.isalpha() for x in demo_str])
print any([x.isdigit() for x in demo_str])
print any([x.islower() for x in demo_str])
print any([x.isupper() for x in demo_str])


'''
You are given a partial code that is used for
generating the HackerRank Logo of variable thickness.
Your task is to replace the blank (______) with rjust, ljust or center.
'''
thickness = int(raw_input())  # This must be an odd number
c = 'H'

# Top Cone
for i in range(thickness):
    print (c * i).rjust(thickness - 1) + c + (c * i).ljust(thickness - 1)
# Top Pillars
for i in range(thickness + 1):
    print (c * thickness).center(thickness * 2) + \
        (c * thickness).center(thickness * 6)
# Middle Belt
for i in range((thickness + 1) / 2):
    print (c * thickness * 5).center(thickness * 6)
# Bottom Pillars
for i in range(thickness + 1):
    print (c * thickness).center(thickness * 2) + \
        (c * thickness).center(thickness * 6)
# Bottom Cone
for i in range(thickness):
    print ((c * (thickness - i - 1)).rjust(thickness) + c +
           (c * (thickness - i - 1)).ljust(thickness)).rjust(thickness * 6)


'''
You are given a string S and width w.
Your task is to wrap the string into a paragraph of width w.
'''
from textwrap import fill
print fill(raw_input(), input())


'''
Mr. Vincent works in a door mat manufacturing company.
One day, he designed a new door mat with the following specifications:

Mat size must be NXM. (N is an odd natural number, and M is 3 times N.)
The design should have 'WELCOME' written in the center.
The design pattern should only use |, . and - characters.

Size: 7 x 21
    ---------.|.---------
    ------.|..|..|.------
    ---.|..|..|..|..|.---
    -------WELCOME-------
    ---.|..|..|..|..|.---
    ------.|..|..|.------
    ---------.|.---------
'''
N, M = map(int, raw_input().split())
for i in xrange(1, N, 2):
    print (".|." * i).center(M, '-')
print "WELCOME".center(M, '-')
for i in xrange(N - 2, -1, -2):
    print (".|." * i).center(M, '-')


'''
Read the integer, N and print the decimal, octal, hexadecimal,
and binary values from 1 to N with space padding so that
all fields take the same width as the binary value.
'''
n = int(raw_input())
width = len("{0:b}".format(n))
for i in xrange(1, n + 1):
    print "{0:{width}d} {0:{width}o} {0:{width}X} {0:{width}b}".format(i, width=width)


'''
You are given an integer, N.
Your task is to print an alphabet rangoli of size N.
(Rangoli is a form of Indian folk art based on creation of patterns.)
#size 3

----c----
--c-b-c--
c-b-a-b-c
--c-b-c--
----c----

#size 5

--------e--------
------e-d-e------
----e-d-c-d-e----
--e-d-c-b-c-d-e--
e-d-c-b-a-b-c-d-e
--e-d-c-b-c-d-e--
----e-d-c-d-e----
------e-d-e------
--------e--------
'''
import string
size = int(input())
alphabet = string.ascii_lowercase

for i in range(size - 1, 0, -1):
    row = ["-"] * (size * 2 - 1)
    for j in range(0, size - i):
        row[size - 1 - j] = alphabet[j + i]
        row[size - 1 + j] = alphabet[j + i]
    print("-".join(row))

for i in range(0, size):
    row = ["-"] * (size * 2 - 1)
    for j in range(0, size - i):
        row[size - 1 - j] = alphabet[j + i]
        row[size - 1 + j] = alphabet[j + i]
    print("-".join(row))


'''
You are given a string S. Your task is to capitalize each word of S.
'''
print " ".join((s.capitalize() for s in raw_input().split(" ")))


'''
Both players are given the same string, S.
Both players have to make substrings using the letters of the string S.
Stuart has to make words starting with consonants.
Kevin has to make words starting with vowels.
The game ends when both players have made all possible substrings.
'''
s = raw_input()

vowels = 'AEIOU'

kevsc = 0
stusc = 0
for i in range(len(s)):
    if s[i] in vowels:
        kevsc += (len(s) - i)
    else:
        stusc += (len(s) - i)

if kevsc > stusc:
    print "Kevin", kevsc
elif kevsc < stusc:
    print "Stuart", stusc
else:
    print "Draw"
