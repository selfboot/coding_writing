#! /usr/bin/env python
# -*- coding: utf-8 -*-
# @Author: xuezaigds@gmail.com
# @Last Modified time: 2016-05-01 14:57:57


'''
The National University conducts an examination of N students in X subjects.
Your task is to compute the average scores of each student.
Student ID → ___1_____2_____3_____4_____5__
Subject 1   |  89    90    78    93    80
Subject 2   |  90    91    85    88    86
Subject 3   |  91    92    83    89    90.5
            |______________________________
Average        90    91    82    90    85.5
'''
N, X = map(int, raw_input().split())
Scores = [0] * X
for i in range(X):
    Scores[i] = list(map(float, raw_input().split()))
Student = zip(*Scores)
for s in Student:
    print sum(s) / len(s)


'''
You are given a polynomial P of a single indeterminate (or variable), x.
You are also given the values of x and k.  Your task is to verify if P(x)=k.
'''
x, k = map(int, raw_input().split())
p = input()
print p == k


'''
You are given an expression in a line.
Read that line as a string variable, such as var,
and print the result using eval(var).
'''
from __future__ import print_function
# get print() function like python3.
eval(raw_input())
# Input:  print(2 + 3)
# Output: 5


'''
You are given data in a tabular format. The data contains N rows,
and each row contains M space separated elements.
You can imagine the M items to be different attributes,
(like height, weight, energy, etc.)
and each of the N rows as an instance or a sample.
Your task is to sort the table on the Kth attribute and
print the final resulting table.
'''
N, M = list(map(int, raw_input().split()))
tables = [map(int, raw_input().split()) for i in range(N)]
K = int(raw_input())
tables.sort(key=lambda x: x[K])
for row in tables:
    print ' '.join(map(str, row))


'''
You are given a space separated list of integers.
If all the integers are positive,
then you need to check if any integer is a palindromic integer.
'''
N = int(raw_input())
numbers = raw_input().split()
print ("True" if all(int(x) > 0 for x in numbers) and
       any(x == x[::-1] for x in numbers) else "False")


'''
You are given a string S contains alphanumeric characters only.
Your task is to sort the string S in the following manner:
- All sorted lowercase letters are ahead of uppercase letters.
- All sorted uppercase letters are ahead of digits.
- All sorted odd digits are ahead of sorted even digits.

Sorting1234 ---> ginortS1324
Donot use join, for or while, just use sorted for once.
'''
from __future__ import print_function
# get print() function like python3.
print(*sorted(raw_input(),
              key=lambda x: (x.isdigit(), x.isdigit() and int(x) % 2 == 0,
                             x.isupper(), x.islower(), x)), sep='')
