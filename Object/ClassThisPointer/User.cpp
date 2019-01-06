#include <iostream>
#include "User.h"

User::User(int num) :something(num){
    /* there is no default constructor */

}

void User::printCrap() {
    std::cout << "something = " << something << std::endl;
    std::cout << "this->something = " << this->something << std::endl;
    std::cout << "(*this).something = " << (*this).something << std::endl;

}

const User & User::Select(const User & u) const{  // u is explicit
    /* return object with a bigger something parameter */
    if(u.something > something)
        return u;
    else
        return *this;
}