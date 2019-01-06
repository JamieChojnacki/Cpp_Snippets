#include <iostream>
#include "VirtualAccount.h"

const int CLIENTS = 4;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    VirtualAccount * p_clients[CLIENTS];
    std::string temp;
    long tempnum;
    double tempbal;
    char kind;

    for (int i = 0; i < CLIENTS; i++) {

        cout << "Customer fullname: ";
        getline(cin,temp);
        cout << "Account Number: ";
        cin >> tempnum;
        cout << "Starting account value: $";
        cin >> tempbal;
        cout << "choose 1 for Brass or "
             << "2 for BrassPlus: ";

        while (cin >> kind && (kind != '1' && kind != '2'))
            cout <<"insert 1 or 2: ";

        if (kind == '1')
            p_clients[i] = new Brass(temp, tempnum, tempbal);

        else {

            double tmax, trate;
            cout << "debt limit: ";
            cin >> tmax;
            cout << "Interest "
                 << "as factorial: ";
            cin >> trate;
            p_clients[i] = new BrassPlus(temp, tempnum, tempbal,
                                         tmax, trate);
        }

        while (cin.get() != '\n')
            continue;
    }
    cout << endl;
    for (int i = 0; i < CLIENTS; i++)
    {
        p_clients[i]->ViewAccountStatus();
        cout << endl;
    }
    for (int i = 0; i < CLIENTS; i++)
    {
        delete p_clients[i]; // free memory
    }
    cout << "All Done.\n";
    return 0;
}