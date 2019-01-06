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

        /* object pointers part */
        String* shortest = &sayings[0]; // first object init
        String* first = &sayings[0];
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if (sayings[i] < *first)
                first = &sayings[i];
        }
        cout << "Shortest one:\n" << *shortest << endl;;
        cout << "Alphabetically first:\n" << *first << endl;

        srand(time(0));
        int choice = rand() % total;  // get random number
        /* allocate new obj */
        String* favourite = new String(sayings[choice]);
        std::cout << "my fav one is: " << *favourite << std::endl;
        delete favourite;
    }
    else
        cout << "no data! cya.\n";
    return 0;
}