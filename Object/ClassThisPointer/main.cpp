#include <iostream>
#include "User.h"

int main() {

    User Jamie = User(120);
    Jamie.printCrap();
    User Agata(110);

    User top = Jamie.Select(Agata);  // method return a bigger object
    std::cout << "here comes grater objects info: " << std::endl;
    top.printCrap();

return 0;
}