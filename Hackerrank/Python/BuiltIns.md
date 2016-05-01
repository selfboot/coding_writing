


## [zip](https://www.hackerrank.com/challenges/zipped)

This function returns a list of tuples. The
i^th tuple contains the i^th element from each of the argument sequences or iterables.

If the argument sequences are of unequal lengths, then the returned list is truncated to the length of the shortest argument sequence.

    >>> print zip([1,2,3,4,5,6],'Hacker')
    [(1, 'H'), (2, 'a'), (3, 'c'), (4, 'k'), (5, 'e'), (6, 'r')]
    >>> 
    >>> print zip([1,2,3,4,5,6],[0,9,8,7,6,5,4,3,2,1])
    [(1, 0), (2, 9), (3, 8), (4, 7), (5, 6), (6, 5)]
    >>> 
    >>> A = [1,2,3]
    >>> B = [6,5,4]
    >>> C = [7,8,9]
    >>> X = [A] + [B] + [C]
    >>> 
    >>> print zip(*X)
    [(1, 6, 7), (2, 5, 8), (3, 4, 9)]


## [input](https://www.hackerrank.com/challenges/input)

In Python 2, the expression input() is equivalent to eval(raw _input(prompt)).

    >>> input()  
    1+2
    3
    >>> company = 'HackerRank'
    >>> website = 'www.hackerrank.com'
    >>> input()
    'The company name: '+company+' and website: '+website
    'The company name: HackerRank and website: www.hackerrank.com'

## [eval](https://www.hackerrank.com/challenges/python-eval)

The eval() expression is a very powerful built-in function of Python. It helps in evaluating an expression. The expression can be a Python statement, or a code object.

    >>> eval("9 + 5")
    14
    >>> x = 2
    >>> eval("x + 3")
    5
    >>> type(eval("len"))
    <type 'builtin_function_or_method'>
    >>> type("len")
    <type 'str'>

## [any, all](https://www.hackerrank.com/challenges/any-or-all)

`any()`

This expression returns True if any element of the iterable is true.  If the iterable is empty, it will return False.

    >>> any([1>0,1==0,1<0])
    True
    >>> any([1<0,2<1,3<2])
    False

`all()`

This expression returns True if all of the elements of the iterable are true. If the iterable is empty, it will return True.

    >>> all(['a'<'b','b'<'c'])
    True
    >>> all(['a'<'b','c'<'b'])
    False

