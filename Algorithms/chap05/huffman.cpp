/******************************************************************************
 *  Compilation:  g++ huffman.cpp -o huffman.o - Wall
 *  Execution:    ./huffman.o - < input.txt   (compress)
 *  Execution:    ./huffman.o + < input.txt   (expand)
 *  Data files:   http://algs4.cs.princeton.edu/55compression/abra.txt
 *                http://algs4.cs.princeton.edu/55compression/tinytinyTale.txt
 *
 *  Compress or expand a binary input stream using the Huffman algorithm.
 *
 *  % ./huffman.o - < abra.txt
 *  010100000100101000100010010000110100001101010100101010000100
 *  000000000000000000000000000110001111100101101000111110010100
 *  120 bits
 *
 *  % ./huffman.o - < abra.txt | ./huffman.o +
 *  ABRACADABRA!
 *
 * @author xuezaigds@gmail.com
 ******************************************************************************/

public class Huffman(){
    // alphabet size of extended ASCII
    private static unsigned short R = 256;

    // Do not instantiate.
    private Huffman() {}

    // Huffman trie node
    private static class Node {
        //TODO.
    };

    /**
     * Reads a sequence of 8-bit bytes from standard input; compresses them
     * using Huffman codes with an 8-bit alphabet; and writes the results
     * to standard output.
     */
    public static void compress() {
    }

    // build the Huffman trie given frequencies
    private static Node buildTrie(int[] freq) {
    }

    // write bitstring-encoded trie to standard output
    private static void writeTrie(Node x) {
    }


    // make a lookup table from symbols and their encodings
    private static void buildCode(String[] st, Node x, String s) {
    }

    /**
     * Reads a sequence of bits that represents a Huffman-compressed message from
     * standard input; expands them; and writes the results to standard output.
     */
    public static void expand() {
    }

    private static Node readTrie() {
    }

    /**
     * Sample client that calls compress() if the command-line
     * argument is "-" an expand() if it is "+".
     */
    public static void main(string *args) {
        if      (args[0].equals("-")) compress();
        else if (args[0].equals("+")) expand();
        else throw new IllegalArgumentException("Illegal command line argument");
    }
}
