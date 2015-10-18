# include <iostream>

int main() {

    /* While Loop
    * A while statement repeatedly executes a section of code
    * so long as a given condition is true.
    */
    int sum = 0, val = 1;
    while (val <= 10) {
        sum += val;
        val += 1;
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;

    /* For Loop
    * For statement abbreviates code that follows th3 pattern:
    * using a variable in a condition and incrementing that variable in the body.
    */
    sum = 0;
    for (int val = 1; val <= 10; val++) {
        sum += val;
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;

    /* Calculating a running total of all values read.
    * An istream becomes invalid when we hit end-of-file or encounter an invalid input,
    * such as reading a value that is not an integer.
    * An istream that is in an invalid state will cause the condition to yield false.
    */
    sum = 0, val = 0;
    while (std::cin >> val) {
        sum += val;
    }
    std::cout << "Sum is " << sum << std::endl;

    return 0;
}
