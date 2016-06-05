#! /usr/bin/env python
# -*- coding: utf-8 -*-
# @Author: xuezaigds@gmail.com
# @Last Modified time: 2016-06-05 22:00:26


'''
You are given a two lists A and B.
Your task is to compute their cartesian product A X B.  For example:
A = [1, 2]
B = [3, 4]
AxB = [(1, 3), (1, 4), (2, 3), (2, 4)]
A and B are sorted lists, and the cartesian product's tuples should
be output in sorted order.
'''
from itertools import product

list_a = list(map(int, raw_input().split()))
list_b = list(map(int, raw_input().split()))
for i in list(product(list_a, list_b)):
    print i,


"""
You are given a string S.
Your task is to print all possible permutations of size k of
the string in lexicographic sorted order.
"""
from itertools import permutations
S, K = raw_input().split()
S = "".join(sorted(list(S)))
for i in map(lambda x: "".join(x), list(permutations(S, int(K)))):
    print i


"""
You are given a string S.
Your task is to print all possible combinations, up to size k,
of the string in lexicographic sorted order.
"""
from itertools import combinations
S, K = raw_input().split()
S = "".join(sorted(list(S)))
ans = []
for i in xrange(1, int(K) + 1):
    ans.extend(map(lambda x: "".join(x), list(combinations(S, i))))
for w in ans:
    print w
