#include <iostream>
#include "TinyArray.h"

int main() {
    using std::cout;
    using std::endl;

    TinyArray<int, 10> sums;
    TinyArray<double, 10> aves;
    TinyArray<TinyArray<int, 5>, 10> twodee;

    int outer, inner;
    for(outer = 0; outer < 10; outer++){
        sums[outer] = 0;
        for(inner = 0; inner < 5; inner++){
            twodee[outer][inner] = (outer + 1) * (inner + 1);
            sums[outer] += twodee[outer][inner];
        }
        aves[outer] = static_cast<double>(sums[outer] / 5);
    }
    for(outer = 0; outer < 10; outer++){
        for(inner = 0; inner < 5; inner++){
            cout << twodee[outer][inner] << ' ';
        }
        cout << ": sum = ";
        cout.width(3);
        cout << sums[outer] << ", Average = " << aves[outer] << endl;
    }
    cout << "Done" << endl;

    return 0;
}
