#include <iostream>
#include "User.h"

const int WIDE = 4;

int main() {

    User AccessJamie[WIDE]{
        /* create 4 objects with type User */
        User("Red", 1000),  // ctor
        User("Blue", 500),
        User(),  // default explicit ctor
        User("Black", 900),
    };

    for(int i : {0, 1, 2, 3})
    /* print all objects out */
    {
        AccessJamie[i].show();  // print info
        std::cout.put(0x0a);  // new line
    }

    const User *result = &AccessJamie[0];  // point 1st object

    for(int index: {0,1,2,3}){
        /* seek for biggest value */
        result = &result->topvalue(AccessJamie[index]);
        /* result = &AccessJamie[0].topvalue(AccessJamie[index]); */
    }

    std::cout << "here comes : " << std::endl;
    result->show();  // result is set to object with greatest something attribute
    return 0;
}