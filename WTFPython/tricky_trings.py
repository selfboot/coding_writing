#! /usr/bin/env python3
# -*- coding: utf-8 -*-


def case_1():
    a = "some_string"
    print(id(a))
    print(id("some" + "_" + "string")) # Notice that both the ids are same.

def case_2():
    a = "wtf"
    b = "wtf"
    print(a is b)

    a = "wtf!"
    b = "wtf!"
    print(a is b)

if __name__ == '__main__':
    case_1()
    case_2()