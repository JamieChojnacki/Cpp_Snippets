#include <iostream>

template <class var>
var Add(var a, var b);

int main() {

    int var1 = 100;
    double var2 = 212.12;
    /* i co teraz? */

    auto sum = Add<double>(var1, var2);  // konkretyzacja i rzutowanie na double
    std::cout << "wynik: " << sum << std::endl;

    return 0;
}

template <class var>
var Add(var a, var b)
{
    /* wszystko ok, jak a i b sa tego samego typu */
    return a + b;
}