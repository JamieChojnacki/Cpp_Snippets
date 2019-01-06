#include "usenmsp.h"
#include <iostream>

void SALES::setSales(Sales & s, const double ar[], int n)
{

// copy sales
    for(int i = 0; i < SALES::QUARTERS; ++i)
    {
        if(i <= n)
            s.sales[i] = ar[i];
        else
            s.sales[i] = 0.0;
    }

    // get average, max, min
    double sum = 0.0;
    double max = s.sales[0], min = s.sales[0];
    for(int i = 0; i < SALES::QUARTERS; ++i)
    {
        double cur = s.sales[i];
        if(cur > max)
            max = cur;
        if(cur < min)
            min = cur;
        sum += cur;
    }
    s.average = sum/(float)QUARTERS;
    s.max = max;
    s.min = min;
}



void SALES::setSales(Sales & s)
{
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter sales:" << endl;
    for(int i = 0; i < QUARTERS; ++i)
    {
        cout << "sales[" << i << "]: ";
        cin >> s.sales[i];
    }

    // get average, max, min
    double sum = 0.0;
    double max = s.sales[0], min = s.sales[0];
    for(int i = 0; i < SALES::QUARTERS; ++i)
    {
        double cur = s.sales[i];
        if(cur > max)
            max = cur;
        if(cur < min)
            min = cur;
        sum += cur;
    }
    s.average = sum/(float)SALES::QUARTERS;
    s.max = max;
    s.min = min;
}


void SALES::showSales(const Sales & s)
{
    using std::cout;
    using std::endl;

    // show sales
    cout << "sales: ";
    for(int i = 0; i < SALES::QUARTERS; ++i)
        cout << s.sales[i] << " ";
    std::cout << endl;

    // show average
    cout << "average: " << s.average << endl;

    // show max and min
    cout << "max: " << s.max << endl;
    cout << "min: " << s.min << endl;
}
