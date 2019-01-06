#ifndef CLASSBASICS_STOCKS_H
#define CLASSBASICS_STOCKS_H

/* headers are used to declare class stuff */

#include <string>

class Stock {
private:
    /* private can only be changed by public methods */
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val;};  // private method to set total_val - inline method
public:
    /* public can be access by any object associated with class */
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();

};

#endif //CLASSBASICS_STOCKS_H
