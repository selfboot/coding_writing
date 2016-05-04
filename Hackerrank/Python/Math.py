#! /usr/bin/env python
# -*- coding: utf-8 -*-
# @Author: xuezaigds@gmail.com
# @Last Modified time: 2016-05-04 20:42:07


'''
You are given a complex z. Your task is to convert it to polar coordinates.
'''
import cmath
com = raw_input()
pha = cmath.phase(complex(com))
r = abs(complex(com))

print "{0}\n{1}".format(r, pha)


'''
ABC is a right triangle, 90° at B.  Therefore, ∡ABC=90°.
Point M is the midpoint of hypotenuse AC.
You are given the lengths AB and BC.
Your task is to find ∡MBC in degrees.
'''
import math
AB = int(raw_input())
BC = int(raw_input())
print str(int(round(math.degrees(math.atan2(AB, BC))))) + '°'


'''
You are given a positive integer N.
Your task is to print a palindromic triangle of size N.
For example, a palindromic triangle of size 5 is:
1
121
12321
1234321
123454321

You can't take more than two lines.
The first line (a for-statement) is already written for you.
You have to complete the code using exactly one print statement.
'''
for i in range(1, int(raw_input()) + 1):
    print ((10 ** i - 1) // 9)**2


'''
You are given a positive integer N.
Print a numerical triangle of height N−1 like the one below:
1
22
333
4444
55555
......
Can you do it using only arithmetic operations,
a single for loop and print statement?
Use no more than two lines.
'''
for i in range(1, input()):
    print ((10 ** i - 1) // 9) * i
