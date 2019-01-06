#include <iostream>

int main() {
    int *ptr = new int;  // allocate memory
    *ptr = 100;  // invoke value within object
    std::cout << *ptr <<" "<<ptr << std::endl;
    delete ptr;  // free memory
    return 0;
}