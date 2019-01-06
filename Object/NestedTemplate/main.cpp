#include <iostream>
using std::cout;
using std::endl;

template<typename Type>
class Beta {
private:
    template<typename Value>  // nested class template inside private stuff
    class Hold{
    private:
        Value variable;
    public:
        explicit Hold(Value var = 0) :variable(var) {}
        void displayValue() const { cout << this->variable << endl; }
        Value returnValue() const { return this->variable; }
    };
    /* explicit specification */
    Hold<Type> TypeSpecification;  // create given class
    Hold<int> IntSpecification;
public:
    Beta(Type givenType, int givenInt) :TypeSpecification(givenType), IntSpecification(givenInt) {}
    template<typename fuckThis>
    fuckThis func(fuckThis shit, Type givenType) { return (IntSpecification.returnValue() +
                                                    TypeSpecification.returnValue()) * shit / givenType; };
    void displayFuck() const { TypeSpecification.displayValue(); IntSpecification.displayValue(); }
};

int main() {

Beta<double> someGuy(3.5, 3);
someGuy.displayFuck();
cout << someGuy.func(10, 2.5) << endl;
cout << someGuy.func(10.0, 2) << endl;

    return 0;
}