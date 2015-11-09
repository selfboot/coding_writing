#include <iostream>
using std::cout;
using std::endl;

// 定义宏：以a和b中较大的值调用f
#define CALL_WITH_MAX(a, b) f((a) > (b) ? (a) : (b))

template<typename T>
void f(const T& a) {
    cout << "In function f..." << endl;
}

template<typename T>
inline void call_with_max(const T& a, const T& b) {
    f(a > b ? a : b);
}

int main() {
    int a = 5, b = 0;
    // 使用宏有时候会产生不可思议的结果，如下，a递增次数取决于被拿来和谁比较
    cout << "---Macros---\n";
    CALL_WITH_MAX(++a, b);
    cout << "Number of a is: " << a << endl;    // a 被累加两次
    a = 5;
    CALL_WITH_MAX(++a, b + 10);                 // a 被累加一次
    cout << "Number of a is: " << a << endl;

    // 使用内敛函数则避免了不可预料的行为，同时效率和宏差不多
    cout << "---Inline---\n";
    a = 5;
    call_with_max(++a, b);
    cout << "Number of a is: " << a << endl;    // a 被累加两次
    a = 5;
    call_with_max(++a, b + 10);                 // a 被累加一次
    cout << "Number of a is: " << a << endl;
    return 0;
}

/* Output
---Macros---
In function f...
Number of a is: 7
In function f...
Number of a is: 6
---Inline---
In function f...
Number of a is: 6
In function f...
Number of a is: 6
*/
