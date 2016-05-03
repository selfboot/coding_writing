
A set is an unordered collection of elements without duplicate entries.  When printed, iterated or converted into a sequence, its elements will appear in an arbitrary order.

Basically, sets are used for membership testing and eliminating duplicate entries. 

    >>> print set()
    set([])
    
    >>> print set('HackerRank')
    set(['a', 'c', 'e', 'H', 'k', 'n', 'r', 'R'])
    
    >>> print set([1,2,1,2,3,4,5,6,0,9,12,22,3])
    set([0, 1, 2, 3, 4, 5, 6, 9, 12, 22])
    
    >>> print set((1,2,3,4,5,5))
    set([1, 2, 3, 4, 5])
    
    >>> print set({'Hacker' : 'DOSHI', 'Rank' : 616 })
    set(['Hacker', 'Rank'])

    >>> print set(enumerate(['H','a','c','k','e','r','r','a','n','k']))
    set([(6, 'r'), (7, 'a'), (3, 'k'), (4, 'e'), (5, 'r'), (9, 'k'), (2, 'c'), (0, 'H'), (1, 'a'), (8, 'n')])


## [add](https://www.hackerrank.com/challenges/py-set-add)

If we want to add a single element to an existing set, we can use the `.add()` operation.  It adds the element to the set and returns 'None'.

    >>> s = set('HackerRank')
    >>> s.add('H')
    >>> print s
    set(['a', 'c', 'e', 'H', 'k', 'n', 'r', 'R'])
    >>> print s.add('HackerRank')
    None
    >>> print s
    set(['a', 'c', 'e', 'HackerRank', 'H', 'k', 'n', 'r', 'R'])

## [remove](https://www.hackerrank.com/challenges/py-set-discard-remove-pop)

This operation removes element x from the set.  If element x does not exist, it raises a KeyError.  The `.remove(x)` operation returns None.

    >>> s = set([1, 2, 3, 4, 5, 6, 7, 8, 9])
    >>> s.remove(5)
    >>> print s
    set([1, 2, 3, 4, 6, 7, 8, 9])
    >>> print s.remove(4)
    None
    >>> print s
    set([1, 2, 3, 6, 7, 8, 9])
    >>> s.remove(0)
    KeyError: 0

This operation also removes element x from the set.  If element x does not exist, it does not raise a KeyError.  The `.discard(x)` operation returns None.

The `.pop()` operation removes and return an arbitrary element from the set.   If there are no elements to remove, it raises a KeyError.

    >>> s = set([1])
    >>> print s.pop()
    1
    >>> print s
    set([])
    >>> print s.pop()
    KeyError: pop from an empty set

## [union](https://www.hackerrank.com/challenges/py-set-union) 

The `.union()` operator returns the union of a set and the set of elements in an iterable.   Sometimes, the | operator is used in place of .union() operator, but it operates only on the set of elements in set.  Set is immutable to the .union() operation (or | operation).

    >>> s = set("Hacker")
    >>> print s.union("Rank")
    set(['a', 'R', 'c', 'r', 'e', 'H', 'k', 'n'])
    
    >>> print s.union(set(['R', 'a', 'n', 'k']))
    set(['a', 'R', 'c', 'r', 'e', 'H', 'k', 'n'])
    
    >>> print s.union(['R', 'a', 'n', 'k'])
    set(['a', 'R', 'c', 'r', 'e', 'H', 'k', 'n'])
    
    >>> print s.union({"Rank":1})
    set(['a', 'c', 'r', 'e', 'H', 'k', 'Rank'])
    
    >>> s | set("Rank")
    set(['a', 'R', 'c', 'r', 'e', 'H', 'k', 'n'])

## [intersection](https://www.hackerrank.com/challenges/py-set-intersection-operation)

The `.intersection()` operator returns the intersection of a set and the set of elements in an iterable.  Sometimes, the & operator is used in place of the .intersection() operator, but it only operates on the set of elements in set.  The set is immutable to the .intersection() operation (or & operation).

    >>> s = set("Hacker")
    >>> print s.intersection("Rank")
    set(['a', 'k'])
    
    >>> print s.intersection(set(['R', 'a', 'n', 'k']))
    set(['a', 'k'])
    
    >>> print s.intersection(['R', 'a', 'n', 'k'])
    set(['a', 'k'])
    
    >>> print s.intersection(enumerate(['R', 'a', 'n', 'k']))
    set([])
    
    >>> print s.intersection({"Rank":1})
    set([])
    
    >>> s & set("Rank")
    set(['a', 'k'])

## [difference](https://www.hackerrank.com/challenges/py-set-difference-operation)

The tool `.difference()` returns a set with all the elements from the set that are not in an iterable.
Sometimes the operator is used in place of the .difference() tool, but it only operates on the set of elements in set.  Set is immutable to the .difference() operation (or the - operation).

    >>> s = set("Hacker")
    >>> print s.difference("Rank")
    set(['c', 'r', 'e', 'H'])
    
    >>> print s.difference(set(['R', 'a', 'n', 'k']))
    set(['c', 'r', 'e', 'H'])
    
    >>> print s.difference(['R', 'a', 'n', 'k'])
    set(['c', 'r', 'e', 'H'])
    
    >>> print s.difference(enumerate(['R', 'a', 'n', 'k']))
    set(['a', 'c', 'r', 'e', 'H', 'k'])
    
    >>> print s.difference({"Rank":1})
    set(['a', 'c', 'e', 'H', 'k', 'r'])
    
    >>> s - set("Rank")
    set(['H', 'c', 'r', 'e'])

## [symmetric_difference](https://www.hackerrank.com/challenges/py-set-symmetric-difference-operation)

The .symmetric_difference() operator returns a set with all the elements that are in the set and the iterable but not both.

Sometimes, a ^ operator is used in place of the .symmetric_difference() tool, but it only operates on the set of elements in set.  The set is immutable to the .symmetric_difference() operation (or ^ operation).

    >>> s = set("Hacker")
    >>> print s.symmetric_difference("Rank")
    set(['c', 'e', 'H', 'n', 'R', 'r'])
    
    >>> print s.symmetric_difference(set(['R', 'a', 'n', 'k']))
    set(['c', 'e', 'H', 'n', 'R', 'r'])
    
    >>> print s.symmetric_difference(['R', 'a', 'n', 'k'])
    set(['c', 'e', 'H', 'n', 'R', 'r'])
    
    >>> print s.symmetric_difference(enumerate(['R', 'a', 'n', 'k']))
    set(['a', 'c', 'e', 'H', (0, 'R'), 'r', (2, 'n'), 'k', (1, 'a'), (3, 'k')])
    
    >>> print s.symmetric_difference({"Rank":1})
    set(['a', 'c', 'e', 'H', 'k', 'Rank', 'r'])
    
    >>> s ^ set("Rank")
    set(['c', 'e', 'H', 'n', 'R', 'r'])

## [Mutation](https://www.hackerrank.com/challenges/py-set-mutations)

We can use the following operations to create mutations to a set: `.update()` or |=.  Update the set by adding elements from an iterable/another set.
    
    >>> H = set("Hacker")
    >>> R = set("Rank")
    >>> H.update(R)
    >>> print H
    set(['a', 'c', 'e', 'H', 'k', 'n', 'r', 'R'])
    
Others:

* `.intersection_update() or &=`:  Update the set by keeping only the elements found in it and an iterable/another set.
* `.difference_update() or -=`:  Update the set by removing elements found in an iterable/another set.
* `.symmetric_difference_update() or ^=`:  Update the set by only keeping the elements found in either set, but not in both.

