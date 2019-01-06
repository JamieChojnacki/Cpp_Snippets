#include <iostream>

namespace apple
{
    double fetch = 100;
    struct Hill
    {
        double value;
    };
}

double fetch = 500;  // global variable

int main() {

    using namespace apple;
    /* using is a declaration where using namespace is a directive */

    double fetch = 700;  // cover apple::fetch variable
    std::cout << fetch << std::endl;  // local fetch variable
    std::cout << ::fetch << std::endl;  // global fetch variable

    std::cout << apple::fetch << std::endl; // apple namespace variable

    Hill Thrill;
    Thrill.value = 900;
    std::cout << Thrill.value << std::endl;

    return 0;
}