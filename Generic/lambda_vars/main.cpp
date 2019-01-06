#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    std::vector<int> vertices {10,20,30};
    int sum = 0;

    std::for_each(vertices.begin(), vertices.end(),
                  [&sum](int x) { sum += x; } );
    std::cout << sum << std::endl;

    /*   [] - brak zmiennych automatycznych przechwyconych do lambdy   */
    /*   [&] - zmienne automatyczne przechwycone przez ref do lambdy  */
    /*   [=] - zmienne automatyczne przechwycone przez wartosc do lambdy   */
    /*   [a, &b] - zmienna a przez wartosc, zmienna b przez ref   */
    /*   [&, b] - wszystkie zmienne automatyczne przez ref, za wyjatkiem b ktora przechwycona zostaje przez wartosc   */
    /*   [=, &b] - wszystkie zmienne automatyczne przez wartosc, za wyjatkiem b ktora przechwycona zostaje przez ref   */
    /*    etc.   */

    return 0;
}