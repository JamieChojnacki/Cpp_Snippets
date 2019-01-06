#include <iostream>
#include "Person.h"

int main() {

    Person *jamie = new Person("Jamie", "Chojnacki");
    jamie->show();
    jamie->FormalShow();
    
    auto *nothil = new Person();
    nothil->show();
    nothil->FormalShow();

    delete jamie;
    delete nothil;

    return 0;
}