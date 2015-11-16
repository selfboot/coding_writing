#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main(){
    string s1;
    string s2 = "literal definition and initialization";
    string s3("same with s2");
    string s4(s2);      // s4 is a copy of s2
    string s5 = s2;     // same with string s5(s2)
    string s6(10, 'a');
    cout << "s1: " << s1 << "-" << endl;
    cout << "s2: " << s2 << "-" << endl;
    cout << "s3: " << s3 << "-" << endl;
    cout << "s4: " << s4 << "-" << endl;
    cout << "s5: " << s5 << "-" << endl;
    cout << "s6: " << s6 << "-" << endl;
    return 0;
}
/* Output
s1: -
s2: literal definition and initialization-
s3: same with s2-
s4: literal definition and initialization-
s5: literal definition and initialization-
s6: aaaaaaaaaa-
*/
