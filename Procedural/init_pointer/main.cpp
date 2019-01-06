#include <iostream>
int main()
{
    using namespace std;
    int higgens = 5;
    int * pt = &higgens;

    cout << "Wartość zmiennej higgens = " << higgens
         << "; Adres zmiennej higgens = " << &higgens << endl;
    cout << "Wartość *pt = " << *pt
         << "; Adres pt = " << pt << endl;
    return 0;
}
