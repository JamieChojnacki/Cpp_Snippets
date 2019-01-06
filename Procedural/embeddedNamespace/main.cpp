#include <iostream>

namespace elements{

    namespace fire{
        int flame = 1;
    }
}

int main() {

    /* a few ways to get access */
    std::cout << elements::fire::flame << std::endl;

    namespace E = elements::fire;  // create Alias
    std::cout << E::flame << std::endl;

    using namespace elements::fire;
    std::cout << flame << std::endl;


    return 0;
}