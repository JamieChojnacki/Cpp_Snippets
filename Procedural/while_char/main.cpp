#include <iostream>
const int ArSize = 20;
int main()
{
    using namespace std;
    char name[ArSize];

    cout << "Proszę podać swoje imię: ";
    cin >> name;
    cout << "Oto Twoje imię, jako kody ASCII:\n";
    int i = 0;                  // zaczynamy od początku łańcucha
    while (name[i])     // przetwarzanie do końca łańcucha (while(name[i] != '\0'))
    {
        cout << int(name[i]) << ' ';
        i++;                    // nie zapomnijmy o tym kroku
    }
    return 0;
}
