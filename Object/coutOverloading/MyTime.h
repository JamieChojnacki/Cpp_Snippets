#ifndef COUTOVERLOADING_MYTIME_H
#define COUTOVERLOADING_MYTIME_H
#include <iostream>

using std::ostream;

class MyTime {
private:
    int hours;
    int minutes;
public:
    MyTime();
    MyTime(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    MyTime operator+(const MyTime &t) const;
    MyTime operator-(const MyTime &t) const;
    MyTime operator*(double m) const;
    friend MyTime operator*(double m, const MyTime &t)
    {return t * m; }
    friend ostream &operator<<(ostream &os, const MyTime &t);
    void Show();

};


#endif //COUTOVERLOADING_MYTIME_H
