#ifndef VIRTUALOVERRIDE_BRASS_H
#define VIRTUALOVERRIDE_BRASS_H

#include <string>

class Brass {
private:
    std::string FullName;
    long accountNumber;
    double balance;
public:
    Brass(const std::string& s = "None", long acn = -1, double bal = 0.0);
    void Deposit(double amount);
    virtual void Withdraw(double amount);
    virtual void ViewAccountStatus() const;
    virtual ~Brass() {};
    double ViewBalance() const;

};

class BrassPlus : public Brass{
private:
    double MaxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string& s = "None", long acn = -1, double bal = 0.0, double ml = 2000, double r = 0.11125);
    BrassPlus(const Brass&, double ml = 2000, double r = 0.11125);
    void Withdraw(double amount) override;
    void ViewAccountStatus() const override;
    void ResetMax(double);
    void ResetRate(double);
    void ResetOwes() {this->owesBank = 0;}

};


#endif //VIRTUALOVERRIDE_BRASS_H
