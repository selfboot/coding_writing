# explicit 构造函数

初始化是“给予对象初值”的过程，对于我们自定义类型的对象来说，初始化由构造函数执行，default构造函数是一个可被调用而不带任何实参者，也就是说要不没有参数，要不每一个参数都有缺省值。

当把构造函数声明为explicit时，告诉编译器禁止执行非预期的类型转换，一般情况下构造函数都要声明为explicit，除非有一个好的理由允许构造函数被用于隐式类型转换。

# copy构造与copy赋值

`TODO`

*copy构造函数被用来“以同型对象初始化自我对象”，copy assignment操作符被用来“从另一个同型对象中拷贝其值到自我对象”。*

# 不明确行为

由于各种因素，某些C++构件的行为没有定义，无法稳定预估运行期间会发生什么事。例如

    int *p = 0;
    std::cout << *p; //对null指针取值

执行时会提示有错误发生：

	$ g++ undefined_behavior.cpp -o undefined_behavior.o
	$ ./undefined_behavior.o
	[1]    483 segmentation fault  ./undefined_behavior.o




