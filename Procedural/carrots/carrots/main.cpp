//
//  main.cpp
//  carrots
//
//  Created by Jakub Chojnacki on 04/07/2018.
//  Copyright © 2018 James. All rights reserved.

// carrots.cpp -- program przetwarzający jedzenie
// pokazuje użycie zmiennych

#include <iostream>

int main()
{
    using namespace std;
    
    int carrots;                   // deklarujemy zmienną typu int
    
    carrots = 25;                  // przypisujemy tej zmiennej wartość
    cout << "Mam ";
    cout << carrots;               // pokazujemy wartość tej zmiennej
    cout << " marchewek.";
    cout << endl;
    carrots = carrots - 1;         // modyfikujemy zmienną
    cout << "Chrum, chrum. Teraz mam " << carrots << " marchewki." << endl;
    return 0;
}

