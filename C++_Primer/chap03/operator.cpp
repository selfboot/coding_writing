#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::cin;

int main() {
    /* 1. 读写操作
     * cin, 从输入流执行读取操作时：
     * string对象会自动忽略开头的空白字符（空格，换行，制表符等）
     * 从第一个真正的字符开始读取，直到遇见下一处空白为止。
     * getline, 读取整行字符，保留输入流中的空白符，遇到换行符结束(读取了换行符)
     * 可以用 while 读取数量未知的 string 对象（直到到达文件末尾）
     */
    cout << "# 1 #" << endl;
    cout << "Enter a string: ";
    string input_str("");
    cin >> input_str;
    cout << "String you input is: " << input_str << endl;

    cout << "Use getline to keep whitespace characters" << endl;
    string line("");
    getline(cin, line);
    cout << "The line you enter is: " << line << endl;

    cout << "Keep entering string or ctrl+d(z) to exit" << endl;
    string not_sure("");
    while (cin >> not_sure) {
        cout << "Your input is: " << not_sure << ", Continue?" << endl;
    }

    /* 2. empty, size
     * size() 返回 string::size_type 类型，该类型与机器无关，是一个 unsigned 类型
     * 注意，混用 unsigned 和 signed 会导致问题，应该避免这种情况
     */
    cout << "# 2 #" << endl;
    string empty_str("");
    if (empty_str.empty()) {
        cout << "This is an empty string!" << endl;
    }
    empty_str = "Hello world";
    auto length = empty_str.size();
    cout << "The length of string is: " << length << endl;
    int negtive_num = -1;
    if (length < negtive_num) {
        cout << "Attention please, string::size_type is unsigned" << endl;
    }

    /* 3. 比较, 加法
     * 两个 string 对象相加得到一个新的 string 对象
     * 必须确保加法运算符的两侧运算对象至少有一个是 string 对象
     */
    cout << "# 3 #" << endl;
    string compare_str_1("abc");
    string compare_str_2("abcd");
    string compare_str_3("aac");
    if (compare_str_1 < compare_str_2 && compare_str_3 < compare_str_1) {
        cout << "The sequence of abc, abcd, aac from small to big is: "
             << compare_str_3 << ", " << compare_str_1
             << ", " << compare_str_2 << endl;
    }

    string add_str = compare_str_1 + " def" + " ghi" + " demo";
    cout << "After add operation: " << add_str << endl;
    // 加法操作，必须保证至少有一个 string 对象
    // string add_str_2 = " def" + " ghi" + "demo" + compare_str_1;
    return 0;
}

/* Output
# 1 #
Enter a string:
come on baby!
String you input is: come
Use getline to keep whitespace characters
The line you enter is:  on baby!
Keep entering string or ctrl+d(z) to exit
this is a test
Your input is: this, Continue?
Your input is: is, Continue?
Your input is: a, Continue?
Your input is: test, Continue?
# 2 #
This is an empty string!
The length of string is: 11
Attention please, string::size_type is unsigned
# 3 #
The sequence of abc, abcd, aac from small to big is: aac, abc, abcd
After add operation: abc def ghi demo
*/
