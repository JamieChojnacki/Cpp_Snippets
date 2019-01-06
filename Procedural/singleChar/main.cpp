#include <iostream>

int main() {
    char ch = 'M';
    int character = ch;

    std::cout << "kod ASCII: " << character << std::endl;

    std::cout.put(ch);
    std::cout.put(0x0a);    // new line
    std::cout.put('!');

    return 0;
}