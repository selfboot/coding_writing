#include <iostream>
using std::cout;
using std::endl;

int main() {
    /* 1. 引用
     * 允许一条语句定义多个引用，其中每个应用都必须以&开头。
     * 对引用的所有操作都是在与之绑定的对象上进行的
     * 无法将引用重新绑定到另一个对象上
     * 引用必须初始化
     * 引用类型和与之绑定的对象类型要严格匹配
     * 不能用字面值初始化一个非常量引用
     */
    cout << "# 1 #" << endl;
    int ival = 10, ival_2 = 100;
    int &r1 = ival, r2 = ival;          // r1是引用，r2不是
    // 对r1进行加一操作，其实就是对它绑定的对象ival进行加一
    cout << ++r1 << ". After operator ++: " << ival << endl;
    r1 = ival_2;
    // 经过赋值语句之后，r1将变为一个int类型对象，不再是引用
    cout << ++r1 << ". After operator ++: " << ival_2 << endl;

    // 定义引用时，程序将引用值和初始值绑定在一起，而不是将初始值拷贝给引用。
    // 因此，定义引用时必须给定一个初始值用来绑定。
    // int &r3;

    // 引用类型不匹配
    // string str("I'm a string");
    // int &ref_int = str;

    // 字面值不能用来初始化非常量引用
    // int &ref_int_iteral = 123;

    /* 2. 指针
     * 如果指针访问了一个对象，使用解引用符(*)来访问该对象
     * 指针定义时无须初始化，但是在块作用域内定义的指针如果没有初始化，将拥有不确定值
     * 指针存放对象的地址，可以用&操作符取得对象的地址
     * 指针类型和它指向的类型要严格匹配
     * 空指针: 不指向任何对象，可以用字面值nullptr或者字面值0来初始化一个空指针
     *        对空指针解引用将导致不可预料的后果，一般解引用前需要判断是否为空
     * 赋值: 指针是一个对象，因此可以给它赋值
     *      为指针赋值意味着令它存放一个新的地址，从而指向一个新的对象
     *
     */
    cout << "# 2 #" << endl;
    // 解引用没有初始化的指针导致未知错误.
    // int *ptr_without_initinal;
    // cout << *ptr_without_initinal << endl;

    double double_num = 10.0, *double_pointer = &double_num;
    cout << "Address of an object: " << &double_num << ", "
         << double_pointer << endl;

    // 指针类型不匹配
    // int *int_pointer = double_pointer;
    // int *int_pointer_2 = &double_num;

    int *null_ptr_1 = nullptr;
    // 只要指针有一个合法值，就能将它用在条件表达式中，空指针返回False
    if (null_ptr_1) {
        cout << "You can access the value of an empty pointer." << endl;
    }
    // 解引用空指针导致未知错误.
    // int *null_ptr_2 = 0;
    // cout << *null_ptr_2 << endl;

    int num_1 = 88, num_2 = 99;
    int *one_pointer = &num_1;
    cout << "Current value of pointer: " << one_pointer
         << ". Object it points to is: " << *one_pointer << endl;
    one_pointer = &num_2;               //指针的值发生改变，现在指针指向新的对象
    cout << "After assignment, value of pointer: " << one_pointer
         << ". Object it points to is: " << *one_pointer << endl;
    *one_pointer = 0;
    cout << "No assignment, value of pointer: " << one_pointer
         << ". Object it points to is: " << *one_pointer << endl;
}

/* Output
# 1 #
11. After operator ++: 11
101. After operator ++: 100
# 2 #
Address of an object: 0x7fff5d2a0848, 0x7fff5d2a0848
Current value of pointer: 0x7fff5d2a0834. Object it points to is: 88
After assignment, value of pointer: 0x7fff5d2a0830. Object it points to is: 99
No assignment, value of pointer: 0x7fff5d2a0830. Object it points to is: 0
*/
