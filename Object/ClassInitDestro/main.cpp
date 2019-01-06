#include <iostream>
#include "Stock.h"

int main() {

    Stock fluffy_the_cat;  // default constructor
    Stock firstObject("Starbucks");  // non-explicit initializer
    Stock secondObject = Stock("Costa Coffee"); // explicit initializer


    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();

    firstObject.show();
    secondObject.show();

    return 0;
}
