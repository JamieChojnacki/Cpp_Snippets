#include <iostream>
#include <array>
#include "Entity.h"  // object pointer and arrow operator

int main() {

    Arrow pointer = new Entity("Pointer!");
    pointer->print();

    std::array<Entity,2> list{Entity("Yes"), Entity("No")};
    Entity *pEntity = &list[0];  // point to first element
    
    pEntity->print();
    pEntity[1].print();

    return 0;
}