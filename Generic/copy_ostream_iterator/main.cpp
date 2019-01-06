#include <iostream>
#include <array>
#include <iterator>

int main() {

    std::array<int, 5> SomeArray {1, 2, 3, 4, 5};
    std::copy(SomeArray.begin(), SomeArray.end(), std::ostream_iterator<int, char>(std::cout, " "));

    return 0;
}