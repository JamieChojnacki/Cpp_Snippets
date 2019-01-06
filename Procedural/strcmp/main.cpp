#include <iostream>
#include <cstring>     // prototype strcmp()
int main()
{
    using namespace std;
    char word[5] = "?ate";

    for (char ch = 'a'; strcmp(word, "mate"); ch++)  // seek for "mate"
    {
        cout << word << " (";
        word[0] = ch;
        cout << strcmp(word, "mate") << ')'<<  endl;
    }
    cout << "Pętla się skończyła, słowo to " << word << endl;
    return 0;
}
