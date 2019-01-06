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

    String s1(" Bitch.");
    String s2 = "Please enter your name: ";
    String s3;

    cout << s2;
    cin >> s3;
    s2 = "My name is " + s3;
    cout << s2 << endl;
    s2 = s2 + s1;
    s2.stringup();
    cout << "The string\n" << s2 << "\ncontains " << s2.hasLetter('A')
         << " 'A' characters in it" << endl;
    s1 = "red";
    String rgb[3] = { String(s1), String("green"), String("blue")};
    cout << "Enter primary color: ";
    String ans;
    bool success = false;
    while(cin >> ans)
    {
        ans.stringlow();
        for(int i = 0; i < 3; ++i)
        {
            if(ans == rgb[i])
            {
                cout << "That's right!\n";
                success = true;
                break;
            }
        }
        if(success)
            break;
        else
            cout << "Try again!" << endl;
    }
    cout << "Bye!" << endl;
    return 0;
}