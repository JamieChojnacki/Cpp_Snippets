#include <iostream>
unsigned int LyToAu(unsigned int lightyears);
unsigned int AuToKm(unsigned int astronomicunits);

#define LYAU 63240
#define AUKM 149597871


int main() {
    unsigned int astronomicunits = 0;
    unsigned int lightyears = 0;
    unsigned int km = 0;

    std::cout << "insert lightyears" << std::endl;
    std::cin >> lightyears;
    astronomicunits = LyToAu(lightyears);
    std::cout << lightyears << " LY = " << astronomicunits << " AU" << std::endl;
    km = AuToKm(astronomicunits);
    std::cout << astronomicunits << " AU = " << km << " km" << std::endl;


    return 0;
}


unsigned int LyToAu(unsigned int lightyears){
    //count LY to AU
    return lightyears * LYAU;
}


unsigned int AuToKm(unsigned int astronomicunits){
    //count AU to KM
    return astronomicunits * AUKM;
}