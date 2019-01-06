#include <iostream>
#include "Vector.h"

int main() {

    VECTOR::Vector vector1(10, 200,VECTOR::Vector::RECT);
    VECTOR::Vector vector2(200, 300,VECTOR::Vector::RECT);


    std::cout << vector1 + vector2 << std::endl;
    

    return 0;
}