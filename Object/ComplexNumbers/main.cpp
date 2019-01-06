#include "Complex.h"

int main() {

    Complex Vector1(2.0, 3.1);
    Complex Vector2;

    while(std::cin >> Vector2){
        std::cout << "Vector2: " << Vector2 << std::endl;
        std::cout << "complex conjugate is: " << ~Vector2 << std::endl;
        std::cout << "Vector: " << Vector1 << std::endl;
        std::cout << "Vector1 + Vector2: " << Vector1 + Vector2 << std::endl;
        std::cout << "Vector1 - Vector2: " << Vector1 - Vector2 << std::endl;
        std::cout << "Vector1 * Vector2: " << Vector1 * Vector2 << std::endl;
        std::cout << "2 * Vector2: " << 2 * Vector2 << std::endl;
        std::cout << "Vector1 * 5: " << Vector1 * 5 << std::endl;
        std::cout << "Enter a complex number: " << std::endl;
    }
    std::cout << "End" << std::endl;

    return 0;
}