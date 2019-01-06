#include <iostream>
#include "Human.h"

Human::Human() : name("No one"), weight(-1)
{
    this->length = 0;
    this->hobby = new char[1];
    this->hobby = nullptr;
}

Human::Human(const std::string& str, const char* hob, double wht) {
    /* ctor */
    this->name = str;
    this->weight = wht;

    this->length = static_cast<int>(std::strlen(hob));
    this->hobby = new char[this->length + 1];
    std::strcpy(this->hobby, hob);

}

Human::~Human() {
    delete[] this->hobby;
}

Human::Human(const Human& obj)
{
    /* deep cpy */
    this->length = obj.length;
    this->hobby = new char[this->length + 1];
    std::strcpy(this->hobby, obj.hobby);
}

Human& Human::operator=(const Human& obj) {
    /* brutal insert */
    if(this == &obj)
        return *this;

    /* erase data */
    delete[] this->hobby;
//    this->name.erase();

//    this->weight = obj.weight;
//    this->name = obj.name;
    this->length = obj.length;
    this->hobby = new char[this->length + 1];
    std::strcpy(this->hobby, obj.hobby);

    return *this;
}

void Human::displayHuman() const {
    std::cout.precision(2);

    std::cout << "name -> " << this->name << "  " << "hobby -> " << this->hobby << "  " << "weight -> "
            << this->weight << "  " << std::endl;
}
