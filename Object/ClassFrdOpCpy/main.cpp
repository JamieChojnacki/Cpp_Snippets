#include <iostream>
#include "String.h"
const int ArSize = 10;
const int MaxLen = 81;

int main()
{
    using My::String;
    using std::cout;
    using std::cin;
    using std::endl;
    String name;
    cout << "Insert ID\n>> ";
    cin >> name;

    cout << name << ", insert quotes" << ArSize
         << " short ones please <empty row ends>:\n";
    String sayings[ArSize];             // obj array
    char temp[MaxLen];                  // temp buffer
    int i;
    for (i = 0; i < ArSize; i++)
    {
        cout << i+1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')    // empty line?
            break;   // stop
        else
            sayings[i] = temp;          // overloaded = OP
    }
    int total = i;                      // total
    if ( total > 0)
    {
        cout << "what we've got:\n";
        for (i = 0; i < total; i++)
            cout << sayings[i][0] << ": " << sayings[i] << endl;

        int shortest = 0;
        int first = 0;
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < sayings[shortest].length())
                shortest = i;
            if (sayings[i] < sayings[first])
                first = i;
        }
        cout << "Shortest one:\n" << sayings[shortest] << endl;;
        cout << "Alphabetically first:\n" << sayings[first] << endl;
        cout << "obj count " << String::HowMany()
             << " BB!\n";
    }
    else
        cout << "no data! cya.\n";
    return 0;
}