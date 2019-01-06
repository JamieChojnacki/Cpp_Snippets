#include <iostream>
#include "MyTimeOp.h"

/* operator overloading */

MyTimeOp::MyTimeOp() {
    /* default ctor */
    this->hours = this->minutes = 0;
}

MyTimeOp::MyTimeOp(int h, int m) {
    /* explicit ctor */
    this->hours = h;
    this->minutes = m;
}

void MyTimeOp::AddMin(int m) {
    /* add minutes and clear stuff */
    this->minutes +=m;  //  sum minutes
    this->hours += this->minutes / 60;  // convert to hrs
    this->minutes %= 60;  // leave unconverted minutes
}

void MyTimeOp::AddHr(int h) {
    this->hours += h;
}

void MyTimeOp::Reset(int h, int m) {
    this->hours = h;
    this->minutes = m;
}

MyTimeOp MyTimeOp::operator+(const MyTimeOp &t) const {
    /* overloaded + operator */
    MyTimeOp sum;
    sum.minutes = this->minutes + t.minutes;
    sum.hours = this->hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void MyTimeOp::Show() {
    std::cout << this->hours << "hours & " << this->minutes << "minutes";
}