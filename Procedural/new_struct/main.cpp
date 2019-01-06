#include <iostream>

struct inflatable {  // struct template
    char name[20];
    double price;
};

int main() {

    inflatable *pointer = new inflatable;  // allocate memory

    std::cout << "insert name" << std::endl;
    std::cin.get(pointer -> name, 20);  // get name
    std::cout << "pointer -> name : "<< pointer -> name << std::endl;
    std::cout << "insert price" << std::endl;
    std::cin >> pointer -> price;  // get price
    std::cout << "pointer -> price : "<< pointer -> price << std::endl;

    return 0;
}