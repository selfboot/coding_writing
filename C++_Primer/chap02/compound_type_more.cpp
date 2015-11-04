#include <iostream>
using std::cout;
using std::endl;

int main() {
    int num_1 = 10, num_2 = 88;

    /* 1. 符合类型的不同写法
     * 修饰符和变量标识符写一起，或者修饰符和类型名写一起都是可以的
     * 可以在一条语句定义多个变量，用逗号分开，但是每个变量前面都必须有修饰符
     */
    cout << "# 1 #" << endl;
    int* ptr_1 = &num_1;
    int *ptr_2 = &num_2;
    cout << *ptr_1 << ", " << *ptr_2 << endl;
    // int* p1, p2;             // p1是指针，p2是int
    // int *p1, *p2;            // p1, p2 均是指针

    /* 2. 指向指针的指针
     * 指针存放的值是另一个指针的地址，可以不断地解引用，直到得到的值是一个对象的值，而不是地址
     */
    int **pptr = &ptr_1;
    cout << "# 2 #" << endl;
    cout << "The value of num_1: \n"
         << "\tdirect value: " << num_1 << "\n"
         << "\tpointer point to num_1: " << *ptr_1 << "\n"
         << "\tpointer point to pointer that point to num_1: " << **pptr << endl;
    int ***ppptr = &pptr;
    cout << "More complicated pointer: \n"
         << "\tAddress: " << ppptr << "\n"
         << "\tFirst dereference: " << *ppptr << " is same with " << pptr << "\n"
         << "\tSecond dereference: " << **ppptr << " is same with " << ptr_1 << "\n"
         << "\tThird dereference: " << ***ppptr << " is same with " << num_1 << endl;

    /* 3. 指向指针的引用
     * 引用本身不是对象，因此不能定义指向引用的指针，但是可以定义指向指针的引用
     * 从右向左解读 int *&ref_to_ptr
     *      &ref_to_ptr: ref_to_ptr是一个引用
     *      int *: 说明引用的类型是 int指针
     */
    cout << "# 3 #" << endl;
    int *&ref_to_ptr = ptr_2;
    cout << "The value of ptr_2: " << ptr_2 << "\n"
         << "And ptr_2 point to value: " << *ptr_2 << endl;
    cout << "The value of ref_to_ptr: " << ref_to_ptr << "\n"
         << "And ref_to_ptr reference to value: " << *ref_to_ptr << endl;
}

/* Output
# 1 #
10, 88
# 2 #
The value of num_1:
    direct value: 10
    pointer point to num_1: 10
    pointer point to pointer that point to num_1: 10
More complicated pointer:
    Address: 0x7fff5976c860
    First dereference: 0x7fff5976c870 is same with 0x7fff5976c870
    Second dereference: 0x7fff5976c87c is same with 0x7fff5976c87c
    Third dereference: 10 is same with 10
# 3 #
The value of ptr_2: 0x7fff5976c878
And ptr_2 point to value: 88
The value of ref_to_ptr: 0x7fff5976c878
And ref_to_ptr reference to value: 88
*/
