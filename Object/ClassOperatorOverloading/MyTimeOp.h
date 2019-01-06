#ifndef CLASSOPERATOROVERLOADING_MYTIMEOP_H
#define CLASSOPERATOROVERLOADING_MYTIMEOP_H

/* operator overloading */

class MyTimeOp {
private:
    int hours;
    int minutes;
public:
    MyTimeOp();
    MyTimeOp(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    MyTimeOp operator+(const MyTimeOp &t) const;
    void Show();
};


#endif //CLASSOPERATOROVERLOADING_MYTIMEOP_H
