#include "MyTime.h"


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

MyTime MyTime::operator+(const MyTime &t) const {
    /* overloaded + operator */
    MyTime sum;
    sum.minutes = this->minutes + t.minutes;
    sum.hours = this->hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void MyTime::Show() {
    std::cout << this->hours << "hours & " << this->minutes << "minutes";
}

MyTime MyTime::operator-(const MyTime &t) const {
    MyTime diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = this->minutes + 60 * this->hours;
    diff.minutes = (tot2 - tot1)/60;
    diff.hours = (tot2 - tot1)/60;
    return diff;
}

MyTime MyTime::operator*(double m) const {
    MyTime result;
    long totalminutes = hours * m * 60 + minutes * m;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

ostream & operator<<(ostream &os, const MyTime &t){
    os << t.hours << "hours & " << t.minutes << "minutes" << std::endl;
    return os;  // it is a must to return same object!
}