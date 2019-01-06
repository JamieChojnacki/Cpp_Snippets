#include "Stock.h"
#include <iostream>

/* class definitions */
Stock::Stock(){  /* always define default initializer */
    std::cout << "here comes noisy default initializer" << std::endl;
    company = "None";
    share_val = 0.0;
    shares = 0;
    total_val = 0.0;

};
Stock::Stock(const std::string &co, long n, double pr) {
    company = co;
    if(n < 0)
    {
        std::cout << "can not be lower than 0" << std::endl;
        std::cout << "company value is set to 0 now" << std::endl;
        shares = 0;
    } else
        shares = n;
    share_val = pr;
    set_tot();
}
/* class destructor */
Stock::~Stock(){
    std::cout << "cya object!" << std::endl;
}

void Stock::sell(long num, double price) {
    using std::cout;

    if(num < 0) {
        cout << "can not be lower than 0" << std::endl;
        cout << "denial" << std::endl;

    }else if(num > shares) {
        cout << "can not sell more than you have" << std::endl;

    }else {
        shares = -num;
        share_val = price;
        set_tot();
    }


}

void Stock::buy(long num, double price) {

    if(num < 0){
        std::cout << "can not buy less than 0" << std::endl;
        std::cout << "denial" << std::endl;

    }else{
        shares += num;
        share_val = price;
        set_tot();
    }

}

void Stock::update(double price) {

    share_val = price;
    set_tot();
}

void Stock::show() {

    /* some customization */
    /* all about remember stuff */
    std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    std::streamsize prec = std::cout.precision(3);
    /* end customization */

    std::cout << "company: " << company << std::endl;
    std::cout << "shares: " << shares << std::endl;
    std::cout.precision(2);
    std::cout << "share val: " << share_val << std::endl;
    std::cout << "total: " << total_val << std::endl;

    /* back to normal */
    std::cout.setf(orig, std::ios_base::floatfield);
    std::cout.precision(prec);

}
