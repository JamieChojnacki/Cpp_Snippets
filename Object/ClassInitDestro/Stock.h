#ifndef CLASSINITDESTRO_STOCK_H
#define CLASSINITDESTRO_STOCK_H

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
    Stock();  // default init
    Stock(const std::string & co, long n = 0, double pr = 0.0);  // user init
    ~Stock();  // noisy destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();

};
#endif //CLASSINITDESTRO_STOCK_H
