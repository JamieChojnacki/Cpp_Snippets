#include <iostream>
float average(float, float);

int main() {

    int value1;
    int value2;

    float (*pointer)(float, float);

    std::cout.precision(3);  // set precision to 3
    std::cout << "insert two values: " << std::endl;

    while(std::cin >> value1 >> value2) {
        pointer = average;
        std::cout << pointer(value1, value2) << std::endl;
    }

    return 0;
}

float average(float first, float second) {return (first + second) / 2; }
