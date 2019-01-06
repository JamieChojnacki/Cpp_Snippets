#include <iostream>

class Person {
public:
    enum PersonType { ADULT, CHILD, SENIOR };
    void setPersonType (PersonType);
    PersonType getPersonType ();
private:
    PersonType  Maturity;
};

int main() {

    Person Jamie;
    Jamie.setPersonType(Person::ADULT);
    std::cout << Jamie.getPersonType() << std::endl;

    decltype(Jamie) Agata;
    Agata.setPersonType(Person::CHILD);
    std::cout << Agata.getPersonType() << std::endl;

    return 0;
}


void Person::setPersonType (PersonType person_type) {
    this->Maturity = person_type;
}


auto Person::getPersonType () -> PersonType {
    return this->Maturity;
}