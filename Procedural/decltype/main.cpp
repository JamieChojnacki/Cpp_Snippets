#include <iostream>

template <class T, class T1>
T whats_going_on(T a, T1 b);

int main() {
    double x = 12.5;
    decltype(x) y;  // y is type double as x
    y = 11.5;
    decltype(whats_going_on(x, y)) z; // z is a return kind thing
    z = whats_going_on(x, y);
    std::cout << z << std::endl;

    return 0;
}

template <class T, class T1>
T whats_going_on(T a, T1 b)
{
    // ...
    decltype(a + b) sum = a + b;  // easy way to declare shit
    // ...
    return sum;
}