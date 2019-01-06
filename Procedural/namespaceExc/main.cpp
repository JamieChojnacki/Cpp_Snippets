#include <iostream>
#include "usenmsp.h"

int main() {

    double array[] {1,2,3,4};

    SALES::Sales object1;
    SALES::Sales object2;

    SALES::setSales(object1, array, 4);
    SALES::setSales(object2);

    SALES::showSales(object1);
    SALES::showSales(object2);

    return 0;
}