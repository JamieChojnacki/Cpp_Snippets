#include <iostream>
#include "Brass.h"

int main()
{
    using std::cout;
    using std::endl;

    Brass Piggy("Piggy Boy", 381299, 12000.00);
    BrassPlus Hoggy("Hoggy Boy", 382288, 9000.00);
    Piggy.ViewAccountStatus();
    cout << endl;
    Hoggy.ViewAccountStatus();
    cout << endl;
    cout << "Contributing 3000 into Hoggy's Account:\n";
    Hoggy.Deposit(3000.00);
    cout << "Updated Status:: " << Hoggy.ViewBalance() << " Euro" << endl;
    cout << "Paying out 12600 from Piggy's Account:\n";
    Piggy.Withdraw(12600.00);
    cout << "Piggy's status: " << Piggy.ViewBalance() << " Euro" << endl;
    cout << "Paying out 12600 from Hoggy's Account:\n";
    Hoggy.Withdraw(12600.00);
    Hoggy.ViewAccountStatus();

    return 0;
}
