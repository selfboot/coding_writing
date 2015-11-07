#include <iostream>
#include "const.h"
using std::cout;
using std::endl;

int get_size(int);

int main(){
    const int buf_size = 1024;
    // buf_size = 512;     //read-only variable is not assignable
    cout << "Const bufSize is: " << buf_size << endl;

    // const 对象初始值可以是任意复杂的表达式，但是必须初始化。
    int num = 12;
    const int const_num = num;              // 编译时初始化
    const int const_func = get_size(88);    // 运行时初始化
    // const int const_none;    必须初始化
    cout << const_num << ", " << const_func << endl;

    // const 对象支持只读操作，不支持改变对象内容的操作
    int another_num = const_num;
    cout << "Copy value from const object: " << another_num << endl;
    cout << "The value copy from const can be changed: "
         << ++another_num << endl;

    extern const int shared_val;    // 声明
    extern const char shared_char;
    cout << "Object shared between files: \n"
         << "shared_val: " << shared_val << "\n"
         << "shared_char: " << shared_char << endl;
}

int get_size(int size=0){
    return size;
}

/*
Const bufSize is: 1024
12, 88
Copy value from const object: 12
The value copy from const can be changed: 13
Object shared between files:
shared_val: 100
shared_char: a
*/
