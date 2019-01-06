#include <iostream>

int sample_func(int x, int y);
int use_pointer( int (*pointer)(int, int) );  // get func prototype

int main() {

    int (*pointer)(int, int);
    pointer = sample_func;  // point func adress
    std::cout << pointer(10, 20) << std::endl;  // use pointer as a func - same as python

    /* sample_func() is a return value, where sample_func is a adress */
    std::cout << use_pointer(sample_func) << std::endl;

    return 0;
}

int sample_func(int x, int y) {return x+y;}

int use_pointer( int (*pointer)(int, int) ) {return 10 * pointer(10,30);}  // there is a func that uses other func

