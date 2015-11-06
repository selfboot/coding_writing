#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

/* Use pointers whenever you need to be able to refer to
 * different things at different times.
 * (in which case you can change where the pointer points).
*/
 void swap_double(double *double_1, double *double_2);

int main() {
    string one_str("This is the original string.");
    string *str_point = &one_str;
    cout << one_str << endl;
    cout << *str_point << endl;
    *str_point = "Change the pointers of string.";
    cout << one_str << endl;

    string another_str("I'm an another string.");
    // Pointers can be reassigned to refer to different objects.
    str_point = &another_str;
    cout << *str_point << endl;

    double double_1(1.00);
    double double_2(2.00);
    cout << "Values of the two doubles is: "
         << double_1 << ", " << double_2 << endl;
    swap_double(&double_1, &double_2);

    // Access null pointer will cause unknown runtime error.
    // ptr *null_ptr = 0;
    // ptr *null_ptr_2 = nullptr;
    return 0;
}

void swap_double(double *double_1, double *double_2) {
    double *temp = double_1;
    double_1 = double_2;
    double_2 = temp;
    cout << "Swap the two values!\nValues of the two doubles is: "
         << *double_1 << ", " << *double_2 << endl;
}

/* Output
This is the original string.
This is the original string.
Change the pointers of string.
I'm an another string.
Values of the two doubles is: 1, 2
Swap the two values!
Values of the two doubles is: 2, 1
*/
