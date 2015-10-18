# include <iostream>

int main(){
    /*
    * Yes:
    * Simple main function:
    * Show how to use comment.
    */

    // Comment Pairs Do Not Nest!
    // No:
    // /*
    // * comment pairs /* */ cannot nest.
    // * ''cannot nest'' is considered source code,
    // * as is the rest of the program
    // */
    std::cout << "/*" << std::endl;
    std::cout << "*/" << std::endl;

    // No:
    // std::cout << /* "*/" */;

    // Yes but Not recommented!
    std::cout << /* "*/" /* "/*" */ << std::endl;
}
