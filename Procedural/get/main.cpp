#include <iostream>

const int SIZE = 20;

int main() {
    char name[SIZE];
    char desert[SIZE];

    std::cout << "ur name :" << std::endl;
    std::cin.get(name, SIZE).get();  // get method leaves 0x0a -> we need to use it again to get 0x0a
    std::cout << "fav desert :" << std::endl;
    std::cin.get(desert, SIZE);

    std::cout << name << " " << desert << std::endl;
    return 0;
}