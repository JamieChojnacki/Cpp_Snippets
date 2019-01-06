#include <iostream>
#include <fstream>  // plikowe wejscie- wyjscie

int main() {

    char automobile[50];
    int year;
    double a_price;
    double d_price;

    std::ofstream outfile; // obiekt odpowiedzialny za wynik
    outfile.open("carinfo.txt");  // poziazanie obiektu z plikiem

    std::cout << "podaj marke: "<< std::endl;
    std::cin.getline(automobile, 50);
    std::cout << "podaj rok produkcji: " << std::endl;
    std::cin >> year;
    std::cout << "podaj cene wyjsciowa: " << std::endl;
    std::cin >> a_price;
    d_price = 0.891 * a_price;

    /* pokaz informacje na ekranie */
    std:: cout << std::fixed;
    std::cout.precision(2);
    std::cout.setf(std::ios_base::showpoint);
    std::cout << "Marka i model: " << automobile << std::endl;
    std::cout << "..." << std::endl;

    /* teraz outfile */
    outfile << std::fixed;
    outfile.precision(2);
    outfile.setf(std::ios_base::showpoint);
    outfile << "Model i Marka: " << automobile << std::endl;
    outfile << "Rok: " << year << std::endl;
    outfile << "cena wywolawcza: " << a_price << std::endl;
    outfile << "cena biezaca: " << d_price << std::endl;

    outfile.close();



    return 0;
}