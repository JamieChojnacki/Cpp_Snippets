#include <iostream>

const int SIZE = 20;

int main() {
    char name[SIZE];
    char desert[SIZE];

    std::cout << "ur name :" << std::endl;
    std::cin.getline(name, SIZE);  // just get whole line
    std::cout << "fav desert :" << std::endl;
    std::cin.getline(desert, SIZE);

    std::cout << name << " " << desert << std::endl;
    return 0;
}