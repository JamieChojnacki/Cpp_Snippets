#include <iostream>

int main() {

    auto lambda = [i = 0, j = 1] () mutable {
        i = std::exchange(j, j+i);
        return i;
    };


    for(int index = 0; index < 10; ++index){
        lambda();
    }

    return lambda();
}