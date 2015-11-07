#include <iostream>
using std::cout;
using std::endl;

int main() {
    /* 1. 类型别名
     * 给一个类型起一个新的名字而已
     */
    cout << "# 1 #" << endl;
    using int_pointer = int *;
    int int_num = 8;
    int_pointer int_ptr = &int_num;
    cout << "Pointer alias int_pointer is " << int_ptr
         << ", value is " << *int_ptr << endl;

    /* 2. auto 类型说明符
     * 编译器分析表达式所属的类型，然后定义变量的类型；
     * 对于引用，会将引用对象的类型作为auto的类型
     */
    cout << "# 2 #" << endl;
    int_num = 9;
    auto variable = &int_num;
    cout << "Variable of auto type is " << variable
         << ", value is " << *int_ptr << endl;

    int &ref_int = int_num;
    auto variable_2 = ref_int;
    cout << "int_num is " << int_num << endl;
    cout << "variable_2 add 1 is " << ++variable_2 << endl;

    /* 3. decltype 类型指示符
     * 表达式是一个变量，则decltype 返回该变量的类型
     */
    cout << "# 3 #" << endl;
    const int const_int = 10;
    const int &int_ref = const_int;
    decltype(const_int) one_num = 11;
    // one_num += 1;        // one_num 是常量类型
    decltype(int_ref) sec_num = const_int;
    // decltype(int_ref) third_num;   // int_ref 是引用类型，必须初始化
    cout << "one_num is " << one_num
         << " , sec_num is " << sec_num << endl;
}
