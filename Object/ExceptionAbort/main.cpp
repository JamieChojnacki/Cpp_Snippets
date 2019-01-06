#include <iostream>
#include <cstdlib>

double hmean(double, double);

int main() {

    double x,y,z;
    std::cout << "insert two numbers: " << std::endl;
    while(std::cin >> x >> y){
        z = hmean(x,y);
        std::cout << "harmonic mean: " << z << std::endl;
        std::cout << "insert two numbers: " << std::endl;

    }

    std::cout << "done" << std::endl;

    return 0;
}

double hmean(double a, double b){
    if(a == -b)
    {
        std::cout << "invalid input arguments" << std::endl;
        std::abort();
    }
    return 2.0 * a * b / (a+b);
}