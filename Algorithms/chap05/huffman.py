# -*- coding: utf-8 -*-
"""
 Execution:    python huffman.py - < input.txt   (compress)
 Execution:    python huffman.py + < input.txt   (expand)

 Data files:   http://algs4.cs.princeton.edu/55compression/abra.txt
               http://algs4.cs.princeton.edu/55compression/tinytinyTale.txt

 Compress or expand a binary input stream using the Huffman algorithm.

 % python huffman.py - < abra.txt | java BinaryDump 60
 010100000100101000100010010000110100001101010100101010000100
 000000000000000000000000000110001111100101101000111110010100
 120 bits

 % python huffman.py - < abra.txt | python huffman.py +
 ABRACADABRA!

 @author Fei Zhao
"""

