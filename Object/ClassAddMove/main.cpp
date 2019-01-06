#include <iostream>
#include "Move.h"


int main() {

    Move *pMove = new Move[4]{
        Move(10, 20),
        Move(20, 30),
        Move(100, 200),
        Move(100, 200)
    };
    pMove->showmove();  // show first object info
    (pMove+3)->reset(); // set a & b to 0
    pMove[3] = pMove[1].add(pMove[2]);  // add this shit and give result to 3rd element
    (pMove+3)->showmove();

    delete pMove;

    return 0;
}
