#include <iostream>
#include "CD.h"

using namespace std;

void Bravo(const CD & disk);

int main()
{
    CD c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
                         "Alfred Brendel", "Philips", 2, 57.17);
    CD * pCD = &c1;

    cout << "Using object directly: \n";
    c1.Report();
    c2.Report();

    cout << "Using type CD * pointer to objects: \n";
    pCD->Report();
    pCD = &c2;
    pCD->Report();

    Bravo(c1);
    Bravo(c2);

    cout << "Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}

void Bravo(const CD & disk)
{
    disk.Report();
}