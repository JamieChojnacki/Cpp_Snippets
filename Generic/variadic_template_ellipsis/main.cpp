#include <iostream>
#include <string>
/* ... - ellipsis */

/* definicja dla pustej listy paramterow */
void show_list() {}  /* brak wywolania rekurencyjnego zakonczy rekurencje w metap */

/* definicja dla pojedynczego argumentu */
template<typename Type>
void show_list(const Type& value){
    /* brak rekurencji zakonczy rekurencje w metap */
    std::cout << value << std::endl;
}

/* definicja metaprogramingowa */
template<typename Type, typename... Args>
void show_list(const Type& value, const Args&...args){
    std::cout << value << ", ";
    show_list(args...);
}

int main() {

    int n = 14;
    double x = 2.7182;
    std::string mr = "String will make it too!";
    show_list(x, n);
    show_list(x*x, '!', 7, n, mr);

    return 0;
}