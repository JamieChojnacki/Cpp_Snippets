// templates are used same as polymorphism in functions
#include <iostream>

/* template prototype */
template <class T>
void swap(T &a, T &b);

int main() {

    std::cout <<  "for ints" << std::endl;
    int i = 10;
    int j = 20;

    swap(i, j);
    std::cout << i << std::endl << j << std::endl;

    std::cout << "for doubles" << std::endl;
    double x = 20.42;
    double y = 12.78;
    swap(x, y);
    std::cout << x << std::endl << y << std::endl;


    return 0;
}

/* template def */
template <class T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;

}