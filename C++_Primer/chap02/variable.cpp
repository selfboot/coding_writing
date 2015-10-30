#include <iostream>
#include "variable.h"
using std::cout;
using std::endl;

// 任何函数体之外的内置类型变量被初始化为0；
int default_init;

int main(){
    /* 1. 变量定义
     * 定义变量时没有指定初值，则变量(可能)被默认初始化:
     * 定义于函数体内的内置类型的对象如果没有初始化，则其值未定义.
     * 每个类各自决定其初始化对象的方法
     * 此外，不能重复定义一个变量
     */
    int val = 0, max = 10, min;
    // warning: variable 'min' is uninitialized when used here
    // val = max + min;
    // int min = 0;             //error: redefinition of 'min'
    val = max + default_init;
    cout << "# 1 #" << endl;
    cout << "default init: " << default_init << endl;
    cout << "val: " << val << ", max: " << max << endl;

    /* 2. 变量声明
     * 为了支持分离式编译，C++将声明和定义区分开来，可以在多个文件中共享变量
     * 如果试图初始化一个由extern关键字标记的变量，将引发错误
     */
     extern int shared_val;
     // error: redefinition of 'shared_char'
     // extern char shared_char = 'c';
     cout << "# 2 #" << endl;
     cout << shared_val + 10 << endl;

    /* 3. 列表初始化
     * C++ 11 支持用花括号来初始化变量
     * 如果用列表初始化且初始值存在丢失信息的风险，编译器将报错
     */
    int l_init = {0};
    int l_init_1{0};
    double ld = 3.1415;
    // Error: type 'double' cannot be narrowed to 'int' in initializer list
    // int a = {ld}, b{ld};
    int c = ld, d(ld);
    cout << "# 3 #" << endl;
    cout << "list_init: " << l_init
         << ", list_init2: " << l_init_1 << endl;
    cout << "c: " << c << ", d: " << d << endl;
}
