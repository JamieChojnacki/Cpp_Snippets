#include <iostream>
#include "User.h"

User::User(){
    /* default ctor */
    this->company = "None";
    this->something = 0;
}

User::User(const std::string & com, int smth){
    /* better use that one */
    this->company = com;
    this->something = smth;
}

void User::show() const{
    /* show info */
    std::cout << "company: " << this->company << std::endl;
    std::cout << "something: " << this->something << std::endl;
}

const User & User::topvalue(const User &u) const{
    /* return object with bigger something */
    if(u.something > this->something)
        return u;
    else
        return *this;
}