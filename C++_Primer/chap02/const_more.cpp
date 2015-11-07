#include <iostream>
#include "const.h"
using std::cout;
using std::endl;

int get_num(int val = 0){
    return val;
}

int main() {
    /* 1. 对常量的引用
     * 常量引用不能修改所绑定的对象，但支持其他的读操作
     * 常量引用所绑定的对象不一定是常量,
     *      因此该对象的值还是可以改变的（不通过引用改变而已）
     * 对一个常量对象的引用必须是常量引用
     * 对于一个临时量的引用必须是常量引用
     */
    cout << "# 1 #" << endl;
    const int int_const = 12;
    const int &ref_int_const = int_const;
    int sum = int_const + ref_int_const;
    cout << "Reference to const: " << ref_int_const << endl;
    cout << "Sum of ref and const is: " << sum << endl;
    // ref_int_const += 1;

    int int_num = 88;
    const int &ref_int = int_num;
    cout << "Reference to int: " << ref_int << endl;
    cout << "Change the int value: " << ++int_num << endl;

    // int &ref_int_const_2 = int_const;

    // 临时量的引用必须是常量引用
    const int &tem_ref = int_num * 2;
    const double &tem_ref_2 = int_num;
    cout << "Reference to temporary:\n"
         << tem_ref << ", " << tem_ref_2 << endl;
    // int &tem_ref = int_num * 2;
    // double &tem_ref_2 = int_num;

    /* 2. 指向常量的指针（底层const）
     * 不能改变其所指对象的值，但支持其他的读操作，比如可以指向其他对象
     * 指向常量的指针所指的对象不一定是常量,
     *      因此该对象的值还是可以改变的（不通过该指针改变而已）
     * 要想存放常量对象的地址，只能使用指向常量的指针。
     */
    cout << "# 2 #" << endl;
    const double d_const = 1.11;
    const double *ptr_d_const = &d_const;
    double d_sum = d_const + *ptr_d_const;
    cout << "Point to const: " << *ptr_d_const << endl;
    cout << "Sum of ptr and const is: " << d_sum << endl;
    // *ptr_d_const += 1;
    double d_const_2 = 3.1415;
    ptr_d_const = &d_const_2;
    cout << "Change the object it point to: " << *ptr_d_const << endl;

    double d_num = 8.88;
    const double *ptr_d = &d_num;
    cout << "Reference to int: " << *ptr_d << endl;
    cout << "Change the int value: " << ++d_num << endl;

    // double *ref_int_const_2 = &d_const;

    /* 3. 常量指针 （顶层const）
     * 常量指针不能改变自己所指的对象，但可以改变所指对象的值。
     * 必须初始化
     */
    cout << "# 2 #" << endl;
    // double * const ptr_without_inial;
    double * const const_ptr_d = &d_num;
    // const_ptr_d = ptr_d;
    cout << "Can't change value of const pointer: "
         << const_ptr_d << endl;
    cout << "Value it point to is: " << *const_ptr_d << endl;
    *const_ptr_d = 10.111;
    cout << "Change the value it point to: " << *const_ptr_d << endl;

    /* 4. 指向常量的常量指针
     * 既不能改变自己所指的对象，也不可以改变所指对象的值。
     */
    cout << "# 4 #" << endl;
    double one_num = 0.001;
    const double * const const_ptr = &one_num;
    cout << "Can't change itself and value it point to: "
         << const_ptr << " , " << *const_ptr << endl;
    // const_ptr = ptr_d;
    // *const_ptr = 0.999;

    /* 5. constexpr 和常量表达式
     * 将变量声明为constexpr以便由编译器来验证变量的值是否是一个常量表达式。
     */
    cout << "# 5 #" << endl;
    constexpr int num_expr = 5;
    cout << "Value of const expr is: " << num_expr << endl;
    // num_expr += 1;           // num_expr 是一个常量

    // get_num() 不是常量表达式，编译器会报错
    // constexpr int num_expr_1 = get_num();
}
/* Output
# 1 #
Reference to const: 12
Sum of ref and const is: 24
Reference to int: 88
Change the int value: 89
Reference to temporary:
178, 89
# 2 #
Point to const: 1.11
Sum of ptr and const is: 2.22
Change the object it point to: 3.1415
Reference to int: 8.88
Change the int value: 9.88
# 2 #
Can't change value of const pointer: 0x7fff5f205768
Value it point to is: 9.88
Change the value it point to: 10.111
# 4 #
Can't change itself and value it point to: 0x7fff5f205750 , 0.001
# 5 #
Value of const expr is: 5
*/
