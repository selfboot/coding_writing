#! /usr/bin/env python
# -*- coding: utf-8 -*-
# @Author: xuezaigds@gmail.com
# @Last Modified time: 2016-05-03 15:14:53


'''
Ms. Gabriel Williams is a botany professor at District College.
One day, she asked her student Mickey to compute the average
of all the plants with distinct heights in her greenhouse.
'''
N = int(raw_input())
heights = set(map(int, raw_input().split()))
print float(sum(heights)) / len(heights)


'''
There is an array of n integers. There are also 2 disjoint sets, A
and B, each containing m integers. You like all the integers in set A
and dislike all the integers in set B. Your initial happiness is 0.
For each i integer in the array, if i∈A, you add 1 to your happiness.
If i∈B, you add −1 to your happiness.
Otherwise, your happiness does not change.
Output your final happiness at the end.
'''
# Enter your code here. Read input from STDIN. Print output to STDOUT
n, m = map(int, raw_input().split())
arr = [int(x) for x in raw_input().split()]
A = set([int(x) for x in raw_input().split()])
B = set([int(x) for x in raw_input().split()])
count = 0
for x in arr:
    if x in A:
        count += 1
    if x in B:
        count -= 1
print count


'''
Rupal has a huge collection of country stamps.
She decided to count the total number of distinct country stamps
in her collection. She asked for your help.
You pick the stamps one by one from a stack of N country stamps.
Find the total number of distinct country stamps
'''
N = int(raw_input())
stamps = set()
for _ in range(N):
    stamps.add(raw_input())
print len(stamps)


'''
You have a non-empty set s,
and you have to execute N commands given in N lines.
The commands will be pop, remove and discard.
Print the sum of the elements of set s on a single line.
'''
n = input()
s = set(map(int, raw_input().split()))
cmd_cnt = input()
for _ in range(cmd_cnt):
    cmd = raw_input().split()
    if len(cmd) == 1:
        getattr(s, cmd[0])()
    else:
        getattr(s, cmd[0])(int(cmd[1]))
print sum(s)


'''
You are given two sets of student roll numbers.
One set has subscribed to the English newspaper,
and the other set is subscribed to the French newspaper.
The same student could be in both sets.
Your task is to find the total number of students
who have subscribed to at least one newspaper.
'''
input()
english_set = set([int(s) for s in raw_input().split()])
input()
french_set = set([int(s) for s in raw_input().split()])
print len(english_set | french_set)


'''
You are given two sets of student roll numbers.
One set has subscribed to the English newspaper,
one set has subscribed to the French newspaper.
Your task is to find the total number of students
who have subscribed to both newspapers.
'''
input()
english_set = set([int(s) for s in raw_input().split()])
input()
french_set = set([int(s) for s in raw_input().split()])
print len(english_set & french_set)


'''
You are given two sets of student roll numbers.
One set has subscribed to the English newspaper,
and one set has subscribed to the French newspaper.
Your task is to find the total number of students
who have subscribed to only English newspapers.
'''
input()
english_set = set([int(s) for s in raw_input().split()])
input()
french_set = set([int(s) for s in raw_input().split()])
print len(english_set - french_set)


'''
You are given two sets of student roll numbers.
One set has subscribed to the English newspaper,
and one set has subscribed to the French newspaper.
Your task is to find the total number of students
who have subscribed to either the English or the French newspaper but not both.
'''
input()
english_set = set([int(s) for s in raw_input().split()])
input()
french_set = set([int(s) for s in raw_input().split()])
print len(english_set ^ french_set)


'''
You are given a set A and N number of other sets.
These N number of sets have to perform some
specific mutation operations on set A.
Your task is to execute those operations and
print the sum of elements from set A.
'''
input()
setA = set([int(s) for s in raw_input().split()])
cnt = input()
for _ in range(cnt):
    ope, length = raw_input().split()
    set_tmp = set([int(s) for s in raw_input().split()])
    getattr(setA, ope)(set_tmp)
print sum(setA)


'''
Mr. Anant has an unordered list of randomly arranged room entries.
The list consists of the room numbers for all of the tourists.
The room numbers will appear K times per group except for the Captain's room.
'''
K = int(raw_input())
roomList = [int(i) for i in raw_input().split()]
roomSet = set(roomList)
sumRoomSet = sum(roomSet)
sumRoomList = sum(roomList)
print (sumRoomSet * K - sumRoomList) / (K - 1)


'''
You are given two sets, A and B.
Your job is to find whether set A is a subset of set B.
If set A is subset of set B, print True.
If set A is not a subset of set B, print False.
'''
for i in range(int(raw_input())):
    a, A = int(raw_input()), set(raw_input().split())
    b, B = int(raw_input()), set(raw_input().split())
    print ("True" if len(A - B) == 0 else "False")


'''
You are given one set A and a number of other sets, N.
Your job is to find whether set A is a strict superset of all the N sets.
Print True, if A is a strict superset of all of the N sets.
Otherwise, print False.
'''
A = set(raw_input().split())
b = int(raw_input())
ans = True
for _ in range(b):
    tmp = set(raw_input().split())
    if not (len(A) > len(A & tmp) and len(tmp - A) == 0):
        ans = False
        break
print ans
