#include <iostream>
#include "Move.h"

Move::Move() {
    /* default ctor */
    this->x = 0;
    this->y = 0;
}

Move::Move(double a, double b) {
    /* get x and y */
    this->x = a;
    this->y = b;
}

void Move::reset(double a, double b) {
    /* reset x and y */
    this->x = 0;
    this->y = 0;
}

void Move::showmove() const {
    /* show current position */
    std::cout << "x = " << this->x << std::endl;
    std::cout << "y = " << this->y << std::endl;
    std::cout.put(0x0a);
}

Move Move::add(const Move &m) const {
    /* add both positions */
    Move result(m.x + this->x, m.y + this->y);

    return result;

}
