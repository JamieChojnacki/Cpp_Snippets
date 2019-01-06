#include <iostream>
#include "MyTime.h"

int main()
{
    using std::cout;
    using std::endl;
    MyTime aida(3, 35);
    MyTime tosca(2, 48);
    MyTime temp;

    cout << "Aida & Tosca:\n";
    cout << aida <<"; " << tosca << endl;
    temp = aida + tosca;           // operator+()
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida * 1.17;            // operator*()
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10 * Tosca: " << 10.0 * tosca << endl;

    return 0;
}

