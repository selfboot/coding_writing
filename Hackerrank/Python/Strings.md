## [split](https://www.hackerrank.com/challenges/python-string-split-and-join)

In Python, a string can be split on a delimiter.

    >>> a = "this is a string"
    >>> a = a.split(" ") # a is converted to a list of strings. 
    >>> print a
    ['this', 'is', 'a', 'string']

## [Validators](https://www.hackerrank.com/challenges/string-validators)

Python has built-in string validation methods for basic data. It can check if a string is composed of alphabetical characters, alphanumeric characters, digits, etc.


* `str.isalnum()`: This method checks if all the characters of a string are alphanumeric (a-z, A-Z and 0-9).
* `str.isalpha()`: This method checks if all the characters of a string are alphabetical (a-z and A-Z).
* `str.isdigit()`: This method checks if all the characters of a string are digits (0-9).
* `str.islower()`: This method checks if all the characters of a string are lowercase characters (a-z).
* `str.isupper()`: This method checks if all the characters of a string are uppercase characters (A-Z).

Demos:

    >>> print 'ab123'.isalnum()
    True
    >>> print 'ab123#'.isalnum()
    False
    >>> print 'ABCD123#'.isupper()
    True

## [Alignment](https://www.hackerrank.com/challenges/text-alignment)

In Python, a string of text can be aligned left, right and center.

* `.ljust(width)`: This method returns a left aligned string of length width.
* `.center(width)`: This method returns a centered string of length width.
* `.rjust(width)`: This method returns a right aligned string of length width.

Demos:

    >>> width = 20
    >>> print 'HackerRank'.ljust(width,'-')
    HackerRank----------  
    >>> print 'HackerRank'.center(width,'-')
    -----HackerRank-----
    >>> print 'HackerRank'.rjust(width,'-')
    ----------HackerRank

## [Textwrap](https://www.hackerrank.com/challenges/text-wrap)

`textwrap.wrap()`

The wrap() function wraps a single paragraph in text (a string) so that every line is width characters long at most.  It returns a list of output lines.

    >>> import textwrap
    >>> string = "This is a very very very very very long string."
    >>> print textwrap.wrap(string,8)
    ['This is', 'a very', 'very', 'very', 'very', 'very', 'long', 'string.'] 

`textwrap.fill()` 

The fill() function wraps a single paragraph in text and returns a single string containing the wrapped paragraph.

    >>> import textwrap
    >>> string = "This is a very very very very very long string."
    >>> print textwrap.fill(string,8)
    This is
    a very
    very
    very
    very
    very
    long
    string.



