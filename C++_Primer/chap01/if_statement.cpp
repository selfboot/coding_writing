# include <iostream>

int main(){
    /* If Statement.
    * Count how many consecutive times each distinct value appears in the input.
    */
    int currVal = 0, value = 0;
    if (std::cin >> currVal) {
        int count = 1;
        while (std::cin >> value) {
            if (value == currVal) {
                count += 1;
            }
            else {
                std::cout << currVal << " occurs"
                          << count << " time. " << std::endl;
                count = 1;
                currVal = value;
            }
        }
        std::cout << currVal << " occurs "
                  << count << " time. " << std::endl;
    }

    return 0;
}
