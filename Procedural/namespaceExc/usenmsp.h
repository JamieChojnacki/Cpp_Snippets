#ifndef NAMESPACEEXC_NAMESP_H
#define NAMESPACEEXC_NAMESP_H

namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    /* copy lowest from ar[n] */
    void setSales(Sales & s, const double ar[], int n);

    void setSales(Sales & s);

    void showSales(const Sales & s);
}

#endif //NAMESPACEEXC_NAMESP_H
