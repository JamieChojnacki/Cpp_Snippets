#include "MyTime.h"
#include <iostream>

MyTime::MyTime() {
    /* default ctor */
    this->hours = this->minutes = 0;
}

MyTime::MyTime(int h, int m) {
    /* explicit ctor */
    this->hours = h;
    this->minutes = m;
}

void MyTime::AddMin(int m) {
    /* add minutes and clear stuff */
    this->minutes +=m;  //  sum minutes
    this->hours += this->minutes / 60;  // convert to hrs
    this->minutes %= 60;  // leave unconverted minutes
}

void MyTime::AddHr(int h) {
    this->hours += h;
}

void MyTime::Reset(int h, int m) {
    this->hours = h;
    this->minutes = m;
}

MyTime MyTime::Sum(const MyTime &t) const {
    MyTime sum;
    sum.minutes = this->minutes + t.minutes;
    sum.hours = this->hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void MyTime::Show() {
    std::cout << this->hours << "hours & " << this->minutes << "minutes";
}
