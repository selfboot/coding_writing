# 条款1. 视 C++ 为一个语言联邦

我们应该将 C++ 视为一个由相关语言组成的联邦而非单一语言。

1. C：C++仍以C为基础，区块、语句、数组、指针等全部来自C；
2. Object－Oriented C++：类、封装、继承、多态等面向对象部分；
3. Template C++：这是 C++ 的泛型编程部分；
4. STL：标准编程库，提供了诸如容器、迭代器、算法等功能。

# 条款2. 尽量以const，enum，inline替换 #define

> 对于单纯常量，最好以 const 对象或 enums 替换 #defines.
> 对于形似函数的宏（macros），最好改用 inline 函数替换 #defines.

这个条款可以换种说法“尽量以编译器替换预处理器”。

考虑定义下面变量。

```c++
#define ASPECT_RATIO 1.653
```
预处理器会将所有的 ASPECT_RATIO 出现替换为 1.653，可能会导致两个问题：

1. 编译器不知道记号名称 ASPECT\_RATIO ，这样运用此常量但获得一个编译错误信息时，可能会带来困惑，因为编译器会提到 1.653 而不是 ASPECT_RATIO。
2. 导致目标代码出现多份 1.653。

而如果用 const 则没有上述顾虑。

宏看起来像函数，但不会招致函数调用带来的额外开销，因此效率会高一些。但是使用宏必须非常小心，即使没有忘记给所有的实参加上小括号，也可能遇到一些意料之外的行为。因此，尽量使用 inline 函数来代替宏，这样即获得了宏的效率，又获得了一般函数的所有可预料行为和类型安全性。

不太明白，看代码吧：

* [const.cpp](const.cpp)
* [inlines.cpp](inlines.cpp)
