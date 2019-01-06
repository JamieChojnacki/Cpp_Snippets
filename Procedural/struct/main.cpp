#include <iostream>

struct inflatable{
    char name[20];
    float volume;
    double price;
};

int main() {

    inflatable guest { // struct variable
            "someName",  // name
            3.12,           // volume
            29.99               // price
            };

    inflatable pal {
            "Testname",
            2.9,
            19.99
    };

    std::cout << "guest name: " << guest.name <<std::endl;
    std::cout << "guest volume: " <<guest.volume << std::endl;
    std::cout << "pal price: " << pal.price << std::endl;

    return 0;
}