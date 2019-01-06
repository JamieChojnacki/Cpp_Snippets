#include <iostream>
#include "MyTime.h"
#include "MyTimeOp.h"

int main() {

#if 0
    /* fuck this code */
    MyTime planning;
    MyTime coding(2, 40);
    MyTime fixing(3, 10);
    MyTime total;

    std::cout << "planning time: ";
    planning.Show();
    std::cout.put(0x0a);

    total = coding.Sum(fixing);
    std::cout << "total time spent ";
    total.Show();
#endif

    /* here we go with overloaded + operator */

    MyTimeOp planning;
    MyTimeOp coding(2, 40);
    MyTimeOp fixing(3, 10);
    MyTimeOp debuging(2, 30);
    MyTimeOp total;

    std::cout << "planning time: ";
    planning.Show();
    std::cout.put(0x0a);

    total = coding + fixing + debuging;  // BOOM
    /* same as: */
    /* total = coding.Sum(fixing + debuging) */
    /* total = coding.operator+(fixing + debuging) */
    /* total = coding.operator+(fixing.operator+(debuging) ) */

    std::cout << "total time spent ";
    total.Show();

    return 0;
}