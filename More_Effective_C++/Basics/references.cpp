#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

/* double_val have something to refer to,
 * and never refer to anything else, so we use references.
 * By the way, we don't change the value, so use const.
 */
void print_double(const double &double_val);

class Dict
{
public:
    Dict(const int &key_num, const int &value_num): key(0), value(0){
        key = key_num;
        value = value_num;
    }

    void print_dict(){
        cout << "Key is: " << key << ", value is: " << value << endl;
    }

    int key;
    int value;
};

// Implement [] operators on class Dict we have defined.
class Dict_operator
{
public:
    Dict_operator(const Dict &simple_dict): dict(Dict(0, 0)){
        dict = simple_dict;
    }
    int& operator[] (int key){
        return dict.value;
    }
    Dict dict;
};

int main(){
    string one_str("This is the original string.");
    string &str_ref = one_str;
    cout << one_str << endl;
    cout << str_ref << endl;
    str_ref = "Change the references of string.";
    cout << one_str << endl;

    string another_str("I'm an another string.");
    // References can't be reassigned to refer to different objects.
    // &str_ref ＝ another_str;
    str_ref = another_str;      // str_ref is a string now.
    str_ref = "Cahnge again.";  // can't change another_str.
    cout << (str_ref == another_str) << endl;

    // error: declaration of reference requires an initializer
    // string &empty_ref;

    double double_num = 10.001;
    print_double(double_num);

    // Operator [] typically return something that can be used as the target of an assignment
    Dict simple_dict(3, 4);
    simple_dict.print_dict();
    Dict_operator ope_demo(simple_dict);
    cout << "The value of key: 3 is " << ope_demo[3] << endl;
    ope_demo[3] = 5;
    ope_demo.dict.print_dict();

    return 0;
}

void print_double(const double &double_val){
    cout << "The double value is: " << double_val << endl;
}

/* Output
This is the original string.
This is the original string.
Change the references of string.
0
The double value is: 10.001
Key is: 3, value is: 4
The value of key: 3 is 4
Key is: 3, value is: 5
*/
