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

### [DefaultDict](https://www.hackerrank.com/challenges/defaultdict-tutorial)

The defaultdict tool is a container in the collections class of Python. It's similar to the usual dictionary (dict) container, but it has one difference: The value fields' data type is specified upon initialization. 

    from collections import defaultdict
    d = defaultdict(list)
    d['python'].append("awesome")
    d['something-else'].append("not relevant")
    d['python'].append("language")
    for i in d.items():
        print i

## [Collections.namedtuple()](https://www.hackerrank.com/challenges/py-collections-namedtuple)

Basically, namedtuples are easy to create, lightweight object types.  They turn tuples into convenient containers for simple tasks.  With namedtuples, you don’t have to use integer indices for accessing members of a tuple.

    >>> from collections import namedtuple
    >>> Point = namedtuple('Point','x,y')
    >>> pt1 = Point(1,2)
    >>> pt2 = Point(3,4)
    >>> dot_product = ( pt1.x * pt2.x ) +( pt1.y * pt2.y )
    >>> print dot_product
    11
    
Demo 02
    
    >>> from collections import namedtuple
    >>> Car = namedtuple('Car','Price Mileage Colour Class')
    >>> xyz = Car(Price = 100000, Mileage = 30, Colour = 'Cyan', Class = 'Y')
    >>> print xyz
    Car(Price=100000, Mileage=30, Colour='Cyan', Class='Y')
    >>> print xyz.Class
    Y

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

## [OrderedDict](https://www.hackerrank.com/challenges/py-collections-ordereddict)

An OrderedDict is a dictionary that remembers the order of the keys that were inserted first. If a new entry overwrites an existing entry, the original insertion position is left unchanged.

    >>> from collections import OrderedDict
    >>> 
    >>> ordinary_dictionary = {}
    >>> ordinary_dictionary['a'] = 1
    >>> ordinary_dictionary['b'] = 2
    >>> ordinary_dictionary['c'] = 3
    >>> ordinary_dictionary['d'] = 4
    >>> ordinary_dictionary['e'] = 5
    >>> 
    >>> print ordinary_dictionary
    {'a': 1, 'c': 3, 'b': 2, 'e': 5, 'd': 4}
    >>> 
    >>> ordered_dictionary = OrderedDict()
    >>> ordered_dictionary['a'] = 1
    >>> ordered_dictionary['b'] = 2
    >>> ordered_dictionary['c'] = 3
    >>> ordered_dictionary['d'] = 4
    >>> ordered_dictionary['e'] = 5
    >>> 
    >>> print ordered_dictionary
    OrderedDict([('a', 1), ('b', 2), ('c', 3), ('d', 4), ('e', 5)])

