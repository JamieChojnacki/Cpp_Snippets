#include <iostream>
#include <cstring>
#include <cctype>


void upr(std::string &);

int main() {

    using std::cout;
    using std::endl;

    std::string dunno;
    cout << "insert string: "<< endl;

    getline(std::cin, dunno);
    while(dunno != "\0")
    {
        upr(dunno);
        cout << dunno << endl;

        cout << "insert string: " << endl;
        getline(std::cin, dunno);
    }


    return 0;
}

void upr(std::string &something)
{
    for(int i = 0; i < something.size(); i++)
    {
        something[i] = toupper(something[i]);
    }
}