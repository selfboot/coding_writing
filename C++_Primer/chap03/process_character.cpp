#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string str("C++ primer is really good!");
    decltype(str.size()) alpha_count = 0;
    for (auto c : str) {
        if (isalpha(c)) {
            alpha_count ++;
        }
    }
    cout << alpha_count << " alphabets in string: " << str << endl;

    for (auto &c : str) {
        c = toupper(c);
    }
    cout << "Change to upper leeter: " << str << endl;

    const string hexstr("0123456789ABCDEF");
    string result("");
    cout << "Enter a series of numbers between 0 and 15"
         << " separated by spaces. Hit ctrl+d(k) when finished: " << endl;
    string::size_type n;
    while (cin >> n){
        if (n < 16){
            result += hexstr[n];
        }
    }
    cout << "\nYour hex number is: " << result << "." << endl;
    return 0;
}

/* Output
19 alphabets in string: C++ primer is really good!
Change to upper leeter: C++ PRIMER IS REALLY GOOD!
Enter a series of numbers between 0 and 15 separated by spaces. Hit ctrl+d(k) when finished:
12 3 4 5 6 7 -1 2 111 112 233^D
Your hex number is: C34567.
*/
