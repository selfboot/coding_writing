# 为什么学 《C++ Primer》


# 源码编译环境
编译器为clang，如下：

```bash
$ g++ -v
Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 7.0.0 (clang-700.0.72)
Target: x86_64-apple-darwin14.5.0
Thread model: posix
```

一般情况下编译命令为：

```bash
$ g++ source.cpp -o source.o -Wall 
```
这里`-Wall`选项，会给出更多的警告信息，便于我们写出更加优秀的代码。此外C++ 11 引进了许多新的语法，为了支持这些语法，需要添加`-std=c++11`选项。



