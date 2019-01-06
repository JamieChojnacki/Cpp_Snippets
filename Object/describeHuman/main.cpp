#include <iostream>
#include "Human.h"

int main() {

    Human James("James", "Skiing", 75);
    Human Agata("Agata", "Singing", 49);
    Agata = James;  // make agata's same hobby as james's

    James.displayHuman();
    Agata.displayHuman();

    return 0;
}