#include <iostream>
#include <cstring>

struct Data{
    char name[30];
    mutable int access;
};

int main() {

    const Data veep = {"Jamie Chojnacki", 0};
//    strcpy(veep.name, "Jamie");  // cant do so
    veep.access ++;  // mutable, so its ok
    std::cout << veep.access << std::endl;

    return 0;
}