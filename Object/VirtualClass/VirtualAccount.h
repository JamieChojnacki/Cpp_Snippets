#ifndef VIRTUALCLASS_VIRTUALACCOUNT_H
#define VIRTUALCLASS_VIRTUALACCOUNT_H


#include <ios>

class VirtualAccount {  // virtual class
private:
    std::string FullName;
    long accountNumber;
    double balance;
protected:
    struct Formatting{
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const std::string& ReturnFullName() const { return this->FullName; }
    long ReturnAccountNumber() const { return this->accountNumber; }
    Formatting SetFormat() const;
    void RestoreFormat(Formatting& ) const;
public:
    VirtualAccount(const std::string& s = "None", long acn = -1, double bal = 0.0);
    VirtualAccount() = delete;
    void Deposit(double amount);
    double ViewBalance() const { return this->balance; }
    virtual void Withdraw(double amount) = 0;  // pure virtual method
    virtual void ViewAccountStatus() const = 0;  // same as above
    virtual ~VirtualAccount() {};
};

#include <string>

class Brass : public VirtualAccount{
public:
    Brass(const std::string& s = "None", long acn = -1, double bal = 0.0)
        : VirtualAccount(s, acn, bal) {};
    void Withdraw(double amount) override;
    void ViewAccountStatus() const override;
    virtual ~Brass() {};
};

class BrassPlus : public VirtualAccount{
private:
    double MaxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string& s = "None", long acn = -1, double bal = 0.0, double ml = 2000, double r = 0.11125);
    BrassPlus(const Brass&, double ml = 2000, double r = 0.11125);
    void Withdraw(double amount) override;
    void ViewAccountStatus() const override;
    void ResetMax(double m) { this->MaxLoan = m; }
    void ResetRate(double r) { this-> rate = r; }
    void ResetOwes() {this->owesBank = 0;}
};

#endif //VIRTUALCLASS_VIRTUALACCOUNT_H
