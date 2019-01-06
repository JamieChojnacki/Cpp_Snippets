#include <iostream>
#include <array>

int main() {

    std::array<short, 3> sprint;
    int average = 0;

    sprint.at(0) = 25;
    sprint.at(1) = 23;
    sprint.at(2) = 21;

    average = (sprint.at(0) + sprint.at(1) + sprint.at(2)) / 3;

    std::cout << "average time is: " << average << std::endl;


    return 0;
}