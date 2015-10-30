#include <iostream>
using std::cout;
using std::endl;

int main() {
    // 1. 把一种算术类型的值赋给另一个类型
    bool b = 42;     // b为真
    int i = b;       // i = 1
    // warning: implicit conversion from 'double'
    // to 'int' changes value from 3.14 to 3
    i = 3.14;        // i = 3
    double pi = i;   // pi = 3.0
    unsigned char c = -1;  // 如果char为8比特, c的值为255(取模运算)
    // unsigned char c2 = 256;    // 如果char为8比特, c2的值未定义
    cout << "b: " << b << "; ";
    cout << "i: " << i << "; ";
    cout << "i: " << i << "; ";
    cout << "pi: " << pi << "; ";
    cout << "c: " << int(c) << endl;

    // 2. 含有无符号类型的表达式
    unsigned int u = 10;
    int k = -42;
    int m = -8;
    cout << k + u << "; ";      // int占32位，那么结果为-32mod(2^32) = 4294967264
    cout << m + u << endl;      // 结果为2mod(2^32) = 2

    // 3. 循环体中unsigned使用不恰当可能会导致死循环
    /*
    for(unsigned i=10; i>=0; i--){
        cout << i << endl;
    }
    */
}

/* Output
b: 1; i: 3; i: 3; pi: 3; c: 255
4294967264; 2
*/
