#include <iostream>

int main() {

    int array[5] {1, 2, [3] = 2, 1};    // init without ' = '
    // same as:
    int array_1[5] = {1, 2, [3] = 2, 1};

    std::cout << array[4] << std::endl;
    std::cout << array_1[4] << std::endl;

    return 0;
}