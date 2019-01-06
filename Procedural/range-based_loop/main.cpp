#include <iostream>

int main() {
    double prices[5] = {10.2, 11.2, 12.2, 14.2, 16.7};

    for(double x: prices)  // read only
        std::cout << x << std::endl;

    for (double &x: prices)  // read and write
        x *= 0.80;

    for(int x: {2, 3, 7, 10})  // init while on loop
        std::cout << x << std::endl;

    return 0;
}