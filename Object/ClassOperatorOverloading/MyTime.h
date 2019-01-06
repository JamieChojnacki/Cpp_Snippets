#ifndef CLASSOPERATOROVERLOADING_MYTIME_H
#define CLASSOPERATOROVERLOADING_MYTIME_H

/* non overloading version */

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
    MyTime Sum(const MyTime &t) const;
    void Show();
};


#endif //CLASSOPERATOROVERLOADING_MYTIME_H
