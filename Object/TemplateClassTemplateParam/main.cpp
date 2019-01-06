#include <iostream>
#include "Stack.h"

template <template <typename T> class Thing>
class Crab
{
    private:
        Thing<int> s1;
        Thing<double> s2;
    public:
        Crab() {};
        // zakłada, że klasa Thing ma składowe PushData() oraz PopData()
        bool PushData(int a, double x) { return s1.PushData(a) && s2.PushData(x); }
        bool PopData(int & a, double & x) { return s1.PopData(a) && s2.PopData(x); }
};

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    Crab<Stack> nebula;
    // stos musi pasować do argumentu template <typename T> class Thing
    int ni;
    double nb;
    cout << "Podaj pary int double w postaci 4 3.5 (0 0 kończy wpisywanie):\n";
    while (cin >> ni >> nb && ni > 0 && nb > 0)
    {
        if (!nebula.PushData(ni, nb))
            break;
    }

    while (nebula.PopData(ni, nb))
        cout << ni << ", " << nb << endl;
    cout << "Koniec.\n";

    return 0;
}