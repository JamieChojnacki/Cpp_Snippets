#include <iostream>
#include <initializer_list>
#include <functional>

auto sum(std::initializer_list<double> args) -> double;

int main() {

    double ReturnValue = sum( {1.5, 2.6}) ;
    std::cout << ReturnValue << std::endl;

    return 0;
}

auto sum(std::initializer_list<double> args) -> double{

    std::initializer_list<double>::iterator it = args.begin();
    double Total {0};
    while(it != args.end()){
        Total += *it;
        it++;
    }
    return Total;
}