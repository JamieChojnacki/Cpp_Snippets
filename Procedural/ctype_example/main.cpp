#include <iostream>
#include <cctype>

int main() {

    int countWords = 0;
    char word;
    std::cout << "insert words: " << std::endl;
    std::cin >> word;

    while(word != '@')
    {
        word = tolower(word);  // make lower letters
        countWords++;
        std::cin >> word;
    }

    std::cout << "words counted: " << countWords << std::endl;

    return 0;
}
