#! /usr/bin/env python
# -*- coding: utf-8 -*-

def Case():
    some_dict = {}
    some_dict[5.5] = "JavaScript"
    some_dict[5.0] = "Ruby"
    some_dict[5] = "Python"
    print(some_dict[5.5])
    print(some_dict[5.0])
    print(some_dict[5])

    complex_five = 5 + 0j
    print(type(complex_five))           # complex
    print(some_dict[complex_five])


def Explanation():
    # Uniqueness of keys in a Python dictionary is by equivalence, not identity.
    # So even though 5, 5.0, and 5 + 0j are distinct objects of different types,
    # since they're equal, they can't both be in the same dict (or set).
    # As soon as you insert any one of them, attempting to look up any distinct
    # but equivalent key will succeed with the original mapped value
    # (rather than failing with a KeyError)
    print(5 == 5.0 == 5 + 0j)
    print(5 is not 5.0 is not 5 + 0j)
    some_dict = {}
    some_dict[5.0] = "Ruby"
    print(5.0 in some_dict)
    print((5 in some_dict) and (5 + 0j in some_dict))

    # This applies when setting an item as well. So when you do some_dict[5] = "Python",
    # Python finds the existing item with equivalent key 5.0 -> "Ruby", 
    # overwrites its value in place, and leaves the original key alone.
    print(some_dict)
    some_dict[5] = "Python"
    print(some_dict)

    # How did Python find 5 in a dictionary containing 5.0? 
    # Python does this in constant time without having to 
    # scan through every item by using hash functions. 
    # When Python looks up a key foo in a dict, it first computes hash(foo) 
    # (which runs in constant-time). Since in Python it is required that objects 
    # that compare equal also have the same hash value (docs here), 5, 5.0, 
    # and 5 + 0j have the same hash value.
    print(hash(5) == hash(5.0) == hash(5 + 0j))

    # So how can we update the key to 5 (instead of 5.0)? We can't actually do this 
    # update in place, but what we can do is first delete the key (del some_dict[5.0]), 
    # and then set it (some_dict[5]) to get the integer 5 as the key instead of floating 5.0,
    #  though this should be needed in rare cases.
    del some_dict[5.0]
    some_dict[5] = "Python"
    print(some_dict)

if __name__ == '__main__':
    Case()
    print('#' * 20)
    Explanation()
