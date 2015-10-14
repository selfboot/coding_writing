

# 不明确行为

由于各种因素，某些C++构件的行为没有定义，无法稳定预估运行期间会发生什么事。



执行结果如下：

	$ g++ chap0_3.cpp -o chap0_3.o
	$ source git:(master) ✗ ./chap0_3.o
	[1]    83643 segmentation fault  ./chap0_3.o

再来看另一个例子：



	$ g++ chap0_4.cpp -o chap0_4.o
	chap0_4.cpp:4:14: warning: array index 10 is past the end of the array (which contains 6 elements)
	      [-Warray-bounds]
	    char c = name[10];
	             ^    ~~
	chap0_4.cpp:3:5: note: array 'name' declared here
	    char name[] = "Darla";
	    ^
	1 warning generated.
	$ ./chap0_4.o
	$



