#include <iostream>
#include <array>

template <typename Type>
using MyArray = std::array<Type, 12>;


int main() {

    MyArray<double> Sources {2.5, 1.1, 12.5, 17.2, 0, 18.1, 19.9};

    MyArray<double>::iterator it = Sources.begin();

    while(it != Sources.end())
        std::cout << *it++ << std::endl;

    return 0;
}