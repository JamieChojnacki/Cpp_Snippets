#include <iostream>
#include "Brass.h"

using std::cout;
using std::endl;
using std::string;

/* format stuff */
using format = std::ios_base::fmtflags;
using precis = std::streamsize;
format setFormat();
void restore(format f, precis p);


/* Brass stuff */
Brass::Brass(const string & s, long acn, double bal)
{
    this->FullName = s;
    this->accountNumber = acn;
    this->balance = bal;
}

void Brass::Deposit(double amount)
{
    if (amount < 0)
        cout << "can not pay amount lower than 0 ; "
             << "Denial.\n";
    else
        this->balance += amount;
}

void Brass::Withdraw(double amount)
{
    format initialState = setFormat();
    precis prec = cout.precision(2);

    if (amount < 0)
        cout << "can not pay amount lower than 0; "
             << "Denial.\n";
    else if (amount <= balance)
        this->balance -= amount;
    else
        cout << "Acquired value: " << amount
             << " can not be dispo.\n"
             << "Denial.\n";
    restore(initialState, prec);
}

double Brass::ViewBalance() const
{
    return balance;
}

void Brass::ViewAccountStatus() const
{
    format initialState = setFormat();
    precis prec = cout.precision(2);

    cout << "Customer: " << this->FullName << endl;
    cout << "AccNumber: " << this->accountNumber << endl;
    cout << "AccStatus: " <<this-> balance << " Euro" << endl;
    restore(initialState, prec);
}

// BrassPlus stuff
BrassPlus::BrassPlus(const string & s, long an, double bal,
                     double ml, double r) : Brass(s, an, bal)
{
    this->MaxLoan = ml;
    this->owesBank = 0.0;
    this->rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
        : Brass(ba) // copy ctor
{
    this->MaxLoan = ml;
    this->owesBank = 0.0;
    this->rate = r;
}

// override
void BrassPlus::ViewAccountStatus() const
{
    format initialState = setFormat();
    precis prec = cout.precision(2);

    Brass::ViewAccountStatus(); // base stuff
    cout << "Debt Limit: " << this->MaxLoan << "Euro" << endl;
    cout << "indebtedness: " << owesBank << "Euro" << endl;
    cout.precision(3);
    cout << "interest rate: " << 100 * this->rate << "%\n";
    restore(initialState, prec);
}


void BrassPlus::Withdraw(double amount)
{
    format initialState = setFormat();
    precis prec = cout.precision(2);

    double bal = ViewBalance();
    if (amount <= bal)
        Brass::Withdraw(amount);
    else if (amount <= bal + this->MaxLoan - this->owesBank)
    {
        double advance = amount - bal;
        this->owesBank += advance * (1.0 + this->rate);
        cout << "debt: " << advance << "Euro" << endl;
        cout << "percents: " << advance *this-> rate << "Euro" << endl;
        Deposit(advance);
        Brass::Withdraw(amount);
    }
    else
        cout << "Exceeded debt value, Denial.\n";
    restore(initialState, prec);
}

format setFormat()
{
    return cout.setf(std::ios_base::fixed,
                     std::ios_base::floatfield);
}
void restore(format f, precis p)
{
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}

