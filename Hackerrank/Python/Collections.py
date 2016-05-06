#! /usr/bin/env python
# -*- coding: utf-8 -*-
# @Author: xuezaigds@gmail.com
# @Last Modified time: 2016-05-06 21:35:31


'''
Raghu is a shoe shop owner. His shop has X number of shoes.
He has a list containing the size of each shoe he has in his shop.
There are N number of customers who are willing to pay xi amount
of money only if they get the shoe of their desired size.
Your task is to compute how much money Raghu earned.
'''
from collections import Counter
X = int(raw_input())
sizes = list(map(int, raw_input().split()))
sizes_cnt = Counter(sizes)
N = int(raw_input())
sum = 0
for i in range(N):
    size, price = list(map(int, raw_input().split()))
    if sizes_cnt.get(size, 0) > 0:
        sum += price
        sizes_cnt[size] -= 1
print sum


'''
In this challenge, you will be given 2 integers, n and m.
There are n words, which might repeat, in word group A.
There are m words belonging to word group B.
For each m words, check whether the word has appeared in group A or not.
Print the indices of each occurrence of m in group A.
If it does not appear, print −1.
'''
from collections import defaultdict
M, N = map(int, raw_input().split())
groupA = [raw_input() for _ in range(M)]
groupB = [raw_input() for _ in range(N)]
A_dict = defaultdict(list)
for i, word in enumerate(groupA):
    A_dict[word].append(i + 1)
for word in groupB:
    if word in A_dict:
        print ' '.join([str(s) for s in A_dict[word]])
    else:
        print -1


'''
Dr. John Wesley has a spreadsheet containing a list of student's IDs,
marks, class and name.
Your task is to help Dr. Wesley calculate the average marks of the students.
Average = Sum of all marksTotal Students / Total Students
Note:
1. Columns can be in any order. IDs, marks, class and
name can be written in any order in the spreadsheet.
2. Column names are ID, MARKS, CLASS and NAME.
(The spelling and case type of these names won't change.)
'''
from collections import namedtuple
N = input()
fields = raw_input()
Grade = namedtuple('Grade', fields)
records = [Grade(*raw_input()) for _ in range(N)]
print 1.0 * sum(map(lambda x: int(x.MARKS), records)) / N


'''
You are the manager of a supermarket.
You have a list of N items together with their prices
that consumers bought on a particular day.
Your task is to print each item_name and net_price
in order of its first occurrence.
'''
from collections import OrderedDict
N = input()
ordered_dict = OrderedDict()
for _ in range(N):
    record = list(raw_input().split())
    item_name = ' '.join(record[:-1])
    ordered_dict[item_name] = ordered_dict.get(item_name, 0) + int(record[-1])
for item, price in ordered_dict.items():
    print item, price


'''
You are given n words. Some words may repeat.
For each word, output its number of occurrences.
The output order should correspond with the
input order of appearance of the word.
'''
from collections import Counter
n = int(raw_input())
words = [raw_input().strip() for _ in range(n)]
counts = Counter(words)

print len(counts)
for word in words:
    cnt = counts.pop(word, None)
    if cnt:
        print cnt,


'''
Perform append, pop, popleft and appendleft methods on an empty deque d.
The first line contains an integer N, the number of operations.
The next N lines contains the space
separated names of methods and their values.
'''
from collections import deque
d = deque()
for _ in range(int(raw_input())):
    oper = raw_input().split()
    getattr(d, oper[0])(*[oper[1]] if len(oper) > 1 else [])
for x in d:
    print int(x),


'''
There is a horizontal row of n cubes.  The length of each cube is given.
You need to create a new vertical pile of cubes.
The new pile should follow these directions:
if cube is on top of cubej then sideLengthj ≥ sideLengthi.

When stacking the cubes,
you can only pick up either the leftmost or the rightmost cube each time.
Print "Yes" if it is possible to stack the cubes.
Otherwise, print "No". Do not print the quotation marks.
'''
from collections import deque
T = input()
while T:
    N = input()
    cubs = deque(int(i) for i in raw_input().split())
    cur_head = None
    can_pick = True
    while cubs and can_pick:
        left, right = cubs[0], cubs[-1]
        if left >= right and (not cur_head or left <= cur_head):
            cubs.popleft()
            cur_head = left
        elif left < right and (not cur_head or right <= cur_head):
            cubs.pop()
            cur_head = right
        else:
            can_pick = False
    print "Yes" if can_pick else "No"
    T -= 1


'''
You are given a string S.
The string contains only lowercase English alphabet characters.
Your task is to find the top three most common characters in the string S.
'''
voc = [0] * 26
for v in raw_input():
    voc[ord(v) - 97] += 1

chars = sorted(zip(range(97, 123), voc), key=lambda v: (-v[1], v[0]))
for v in chars[:3]:
    print ' '.join([chr(v[0]), str(v[1])])
