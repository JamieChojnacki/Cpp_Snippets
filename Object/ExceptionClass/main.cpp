#include <iostream>
#include <cmath>
#include "Except.h"


double hmean(double a, double b);
double gmean(double a, double b);

int main() {

    double x, y, z;

    std::cout << "insert two numbers: " << std::endl;

    while(std::cin >> x >> y){
        try {
            z = hmean(x, y);
            std::cout << "harmonic mean: " << z << std::endl;
            std::cout << "geometric mean: " << gmean(x, y) << std::endl;
            std::cout << "insert two numbers: " << std::endl;
        }
        catch (Except::bad_hmean& bhm){
            bhm.msg();
            std::cout << "Try again" << std::endl;
            continue;
        }
        catch(Except::bad_gmean& bgm){
            std::cout << bgm.msg() << std::endl;
            std::cout << "Program terminate" << std::endl;
            break;
        }

    }

    std::cout << "done" << std::endl;

    return 0;
}

double hmean(double a, double b){
    if(a == -b)
        throw Except::bad_hmean(a,b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b){
    if(a < 0 || b < 0)
        throw Except::bad_gmean(a,b);
    return std::sqrt(a * b);
}