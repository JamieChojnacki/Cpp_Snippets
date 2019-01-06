#ifndef COMPLEXNAMESPACES_NAMESP_H
#include <string>

namespace pers
{
    struct Person
    {
        std::string fname;
        std::string lname;
    };
    void getPerson(Person &);
    void showPerson(const Person &);
}

namespace debts
{
    using namespace pers;
    struct Debt
    {
        Person name;
        double amount;
    };
    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebts(const Debt ar[], int en);
}

#define COMPLEXNAMESPACES_NAMESP_H

#endif //COMPLEXNAMESPACES_NAMESP_H
