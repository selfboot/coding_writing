[Collections Doc](https://docs.python.org/2/library/collections.html)

## [collections.Counter()](https://www.hackerrank.com/challenges/collections-counter)

A counter is a container that stores elements as dictionary keys and their counts are stored as dictionary values.


    >>> from collections import Counter
    >>> 
    >>> myList = [1,1,2,3,4,5,3,2,3,4,2,1,2,3]
    >>> print Counter(myList)
    Counter({2: 4, 3: 4, 1: 3, 4: 2, 5: 1})
    >>>
    >>> print Counter(myList).items()
    [(1, 3), (2, 4), (3, 4), (4, 2), (5, 1)]
    >>> 
    >>> print Counter(myList).keys()
    [1, 2, 3, 4, 5]
    >>> 
    >>> print Counter(myList).values()
    [3, 4, 4, 2, 1]

## [Collections.deque()](https://www.hackerrank.com/challenges/py-collections-deque)

A deque is a double-ended queue. It can be used to add or remove elements from both ends.

Deques support thread safe, memory efficient appends and pops from either side of the deque with approximately the same O(1), O(1) performance in either direction.

    >>> from collections import deque
    >>> d = deque()
    >>> d.append(1)
    >>> print d
    deque([1])
    >>> d.appendleft(2)
    >>> print d
    deque([2, 1])
    >>> d.clear()
    >>> print d
    deque([])
    >>> d.extend('1')
    >>> print d
    deque(['1'])
    >>> d.extendleft('234')
    >>> print d
    deque(['4', '3', '2', '1'])
    >>> d.count('1')
    1


