#include <iostream>
#include <string> // for storing strings in a C++ way
#include <sstream> // to easily separate sentences into words
#include <vector> // to dynamically store arbitrary amounts of words
#include <algorithm> // for std::reverse

int main() {
    std::string sentence = "Here we go with some Accenture DevSkiller test";
    std::stringstream stream(sentence);
    std::vector<std::string> words;
    for ( std::string word; stream >> word; )
    {
        words.push_back(word);
    }

    std::reverse(words.begin(), words.end());

    std::vector<std::string>::iterator it = words.begin();

    while(it++ != words.end())
        std::cout << *it << " ";
    std::cout.put('\n');

    return 0;
}