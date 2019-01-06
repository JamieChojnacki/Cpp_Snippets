#include <iostream>


int main() {
    int mins = 0;
    int hrs = 0;

    std::cout << "insert hrs and mins" << std::endl;
    std::cin >> hrs;
    std::cin >> mins;

    if(mins > 60)
        std::cout << "total idiot!" << std::endl;
    else
    {
        std::cout << hrs << ":" << mins << std::endl;
    }


    return 0;
}