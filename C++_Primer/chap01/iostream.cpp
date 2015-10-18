# include <iostream>

int main() {
    std::cout << "Enter two numbers:" << std::endl;
    int value_1, value_2;
    std::cin >> value_1 >> value_2;

    // Flushing the buffer, so write to the output stream immediately.
    std::cout << "The sum of " << value_1 << " and " << value_2
              << " is " << value_1 + value_2 << std::endl;

    // Sitting in memory waiting to be written.
    std::cout << "Repeat: the sum of " << value_1 << " and " << value_2
              << " is " << value_1 + value_2;
    // The program crashes, output may be left in the buffer, and can't be written.
    int temp = i / 0;
    return -1;
}
