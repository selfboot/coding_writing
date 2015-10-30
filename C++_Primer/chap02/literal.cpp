#include <iostream>
using std::cout;
using std::endl;

int main(){
    /* 1. 整型和浮点型字面值
     * 整型可以表示为十进制、八进制、十六进制
     * 可以指定字面值的类型，来改变默认的类型
     */
    auto i = 12, j = 012, k = 0x12;
    auto d = 3.14;
    auto u = -32U;
    cout << "#1#" << endl;
    cout << "i: " << i << ", j: " << j << ", k: " << k << endl;
    cout << "d: " << d << endl;
    cout << "u: " << u << endl;

    /* 2. 字符和字符串字面值
     * 单引号：字符字面值
     * 双引号：字符串字面值，编译器会在结尾处添加空字符'\0'，实际长度会长一个
     * 如果多个字符串字面值中间只有空白字符或者换行符，实际上他们是一个整体
     */
    char c = 'a';
    const char str[7] = "abcdef";
    const char* multi_str = "We are"
                            " one string"
                            "!";
    cout << "#2#" << endl;
    cout << str << endl;
    cout << multi_str << endl;

    /* 3. 转义序列也是字面值常量
     * 不可打印的字符：如退格，报警符（响铃）等
     * C++中有特殊含义的字符：换行符，回车符，单引号，双引号等
     * 此外，还有泛化的转义序列：\x后面跟十六进制或者八进制数字，数字部分表示字符对应的值
     */
    cout << "#3#" << endl;
    char nonprintable = '\a';
    const char* specific = "He says:\" What?.\t \115eat\?";
    cout << nonprintable << endl;   // 可以听见响铃声
    cout << specific << endl;
}

/* Output
#1#
i: 12, j: 10, k: 18
d: 3.14
u: 4294967264
#2#
abcdef
We are one string!
#3#

He says:" What?.     Meat?
*/
