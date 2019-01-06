#include "VirtualAccount.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;


/* Brass stuff */
VirtualAccount::VirtualAccount(const string & s, long acn, double bal)
{
    this->FullName = s;
    this->accountNumber = acn;
    this->balance = bal;
}

void VirtualAccount::Deposit(double amount)
{
    if (amount < 0)
        cout << "can not pay amount lower than 0 ; "
             << "Denial.\n";
    else
        this->balance += amount;
}

void VirtualAccount::Withdraw(double amount){
    this->balance = -amount;
}

/* protected formatting stuff */

VirtualAccount::Formatting VirtualAccount::SetFormat() const
{
    Formatting MyFormat;
    MyFormat.flag = cout.setf(std::ios_base::fixed,
             std::ios_base::floatfield);
    MyFormat.pr = cout.precision(2);
    return MyFormat;
}
void VirtualAccount::RestoreFormat(Formatting& FormatedContent) const
{
    cout.setf(FormatedContent.flag, std::ios_base::floatfield);
    cout.precision(FormatedContent.pr);
}


void Brass::Withdraw(double amount)
{
    if (amount < 0)
        cout << "can not pay amount lower than 0; "
             << "Denial.\n";
    else if (amount <= ViewBalance())
        VirtualAccount::Withdraw(amount);
    else
        cout << "Acquired value: " << amount
             << " can not be dispo.\n"
             << "Denial.\n";
}


void Brass::ViewAccountStatus() const
{
    Formatting format = SetFormat();

    cout << "Customer: " << ReturnFullName() << endl;
    cout << "AccNumber: " << ReturnAccountNumber() << endl;
    cout << "AccStatus: " << ViewBalance()<< " Euro" << endl;

    RestoreFormat(format);
}

// BrassPlus stuff
BrassPlus::BrassPlus(const string & s, long an, double bal,
                     double ml, double r) : VirtualAccount(s, an, bal)
{
    this->MaxLoan = ml;
    this->owesBank = 0.0;
    this->rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
        : VirtualAccount(ba) // copy ctor
{
    this->MaxLoan = ml;
    this->owesBank = 0.0;
    this->rate = r;
}

// override
void BrassPlus::ViewAccountStatus() const
{
    Formatting format = SetFormat();

    cout << "Customer: " << ReturnFullName() << endl;
    cout << "AccNumber: " << ReturnAccountNumber() << endl;
    cout << "AccStatus: " << ViewBalance()<< " Euro" << endl;
    cout << "Debt Limit: " << this->MaxLoan << "Euro" << endl;
    cout << "indebtedness: " << owesBank << "Euro" << endl;
    cout.precision(3);
    cout << "interest rate: " << 100 * this->rate << "%\n";

    RestoreFormat(format);
}


void BrassPlus::Withdraw(double amount)
{
    Formatting format = SetFormat();

    double bal = ViewBalance();
    if (amount <= bal)
        VirtualAccount::Withdraw(amount);
    else if (amount <= bal + this->MaxLoan - this->owesBank)
    {
        double advance = amount - bal;
        this->owesBank += advance * (1.0 + this->rate);
        cout << "debt: " << advance << "Euro" << endl;
        cout << "percents: " << advance *this-> rate << "Euro" << endl;
        Deposit(advance);
        VirtualAccount::Withdraw(amount);
    }
    else
        cout << "Exceeded debt value, Denial.\n";
    RestoreFormat(format);
}
