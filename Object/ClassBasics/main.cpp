#include <iostream>
#include "stocks.h"

int main() {

    Stock fluffy_the_cat;  // create a object
    fluffy_the_cat.acquire("NanoSmart", 20, 13.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    
    return 0;
}