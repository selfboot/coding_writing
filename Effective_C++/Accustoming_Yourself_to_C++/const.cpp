#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
#define AUTHOR_NAME "John"
const string author_name = "John";

int main(){
    // AUTHOR_NAME += 1;        // 完全看不懂的错误提示
    // author_name += 1;        // 错误提示很明白
    // 也可以使用char *, 但是必须同时定义 顶层const 和 底层const
    // const char *const author_name = "John";

    cout << "#define: " << AUTHOR_NAME << endl;
    cout << "const string: " << author_name << endl;

    // 不支持string的相关操作
    // string new_str_2 = AUTHOR_NAME + "King";
    string new_str = author_name + " King";
    cout << "New string: " << new_str << endl;
    return 0;
}
/* Output
#define: John
const string: John
New string: John King
*/
