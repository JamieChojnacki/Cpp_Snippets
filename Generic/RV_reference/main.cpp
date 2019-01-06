#include <iostream>

inline double func(double tf) { return 5.0*(tf - 32.0)/9.0; };

int main() {

    double tc = 21.5;
    double&& rd1 = 7.07;
    double&& rd2 = 1.8 * tc + 32.0;
    double&& rd3 = func(rd2);

    std::cout << "              { VALUE } \t\t { ADDRESS }" << std::endl;
    std::cout << "TC  :" << "\t\t\t" << tc << "\t\t\t" << &tc << std::endl;
    std::cout << "RD1 :" << "\t\t\t" << rd1 << "\t\t\t" << &rd1 << std::endl;
    std::cout << "RD2 :" << "\t\t\t" << rd2 << "\t\t\t" << &rd2 << std::endl;
    std::cout << "RD3 :" << "\t\t\t" << rd3 << "\t\t\t" << &rd3 << std::endl;

    return 0;
}