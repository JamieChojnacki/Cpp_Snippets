#ifndef EXCEPTIONCLASS_EXCEPT_H
#define EXCEPTIONCLASS_EXCEPT_H

#include <iostream>

namespace Except{  // namespace begins

class bad_hmean {
private:
    double v1;
    double v2;
public:
    bad_hmean(double a = 0, double b = 0) : v1(a), v2(b) {}
    void msg();
};

class bad_gmean {
private:
    double v1;
    double v2;
public:
    bad_gmean(double a = 0, double b = 0) : v1(a), v2(b) {}
    const char* msg();
};
} // namespace ends

inline void Except::bad_hmean::msg() {
    std::cout << "Exception: (" << v1 << ", " << v2 <<") incorrect arguments: a = -b\n";
}

inline const char* Except::bad_gmean::msg() {
    return "Exception: both arguments should be greater than 0!\n";
}

#endif //EXCEPTIONCLASS_EXCEPT_H
