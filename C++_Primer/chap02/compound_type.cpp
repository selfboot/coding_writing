#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main(){
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
    int &r1 = ival, r2= ival;           // r1是引用，r2不是
    // 对r1进行加一操作，其实就是对它绑定的对象ival进行加一
    cout << ++r1 << ". After operator ++: " << ival << endl;
    r1 = ival_2;
    // 经过赋值语句之后，r1将变为一个int类型对象，不再是引用
    cout << ++r1 << ". After operator ++: " << ival_2 << endl;

    // 定义引用时，程序将引用值和初始值绑定在一起，而不是将初始值拷贝给引用。
    // 因此，定义引用时必须给定一个初始值用来绑定。
    // int &r3;                         // 必须初始化

    // string str("I'm a string");
    // int &ref_int = str;              // 类型不匹配

    // int &ref_int_iteral = 123;       // 字面值不能用来初始化非常量引用

}
