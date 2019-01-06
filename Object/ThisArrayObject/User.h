#ifndef THISARRAYOBJECT_USER_H
#define THISARRAYOBJECT_USER_H

#include <string>

class User {

private:
    std::string company;
    int something;
public:
    User();
    User(const std::string & com, int smth);
    void show() const;
    const User & topvalue(const User &u) const;
};

#endif //THISARRAYOBJECT_USER_H
