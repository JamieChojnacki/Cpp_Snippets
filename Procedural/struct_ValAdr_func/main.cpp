#include <iostream>

struct box{
    int height;
    int length;
    int capacity;
};

box stVal();
void stAdr(box *);
void display(box);

int main() {

    box firstSt;
    box secondSt;

    firstSt = stVal();
    stAdr(&secondSt);

    display(firstSt);
    display(secondSt);
    return 0;
}

 box stVal()
{
    box first = {100, 200, 300};
    return first;
}


void stAdr(box * second)
{
    second -> height = 100;
    second -> length = 500;
    second -> capacity = 700;
}

void display(box value)
{
    std::cout << value.height <<std::endl;
    std::cout << value.length <<std::endl;
    std::cout << value.capacity <<std::endl;
}