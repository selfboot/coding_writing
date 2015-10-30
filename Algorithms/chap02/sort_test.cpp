#include "Selection.h"

int main() {
    // Selection Sort test.
    char chr_test[] = {'d', 'a', 'e', 'c', 'b'};
    Selection<char> chr_sort;
    chr_sort.sort(chr_test, 5);
    chr_sort.show(chr_test, 5);

    int int_test[] = {3, 8, 12, 10, 5};
    Selection<int> int_sort;
    int_sort.sort(int_test, 5);
    int_sort.show(int_test, 5);
    return 0;
}
