#include <iostream>
#include <string>
#include <cctype>
#include "Stack.h"
using std::cin;
using std::cout;

int main()
{
    Stack<std::string> st; // empty stack
    char ch;
    std::string po;
    cout << "Press D to make new order,\n"
         << "P, proceed order and Z to end.\n";
    while (cin >> ch && std::toupper(ch) != 'Z')
    {
        while (cin.get() != '\n')
            continue;
        if (!std::isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'D':
            case 'd': cout << "Insert new ID: ";
                cin >> po;
                if (st.isfull())
                    cout << "Stack is full\n";
                else
                    st.PushData(po);
                break;
            case 'P':
            case 'p': if (st.isempty())
                    cout << "Stack is empty\n";
                else {
                    st.PopData(po);
                    cout << "Order ID " << po << " is taken\n";
                    break;
                }
        }
        cout << "Press D to make new order,\n"
             << "P, proceed order and Z to end.\n";
    }
    cout << "Done\n";
    return 0;
}

