// exercise 04

#include <iostream>
#include "sales.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SALES::Sales s1, s2;
    SALES::setSales(s1);
    cout << "Sales 1: " << endl;
    SALES::showSales(s1);

    double sales[4] = {8.7, 5.6, 9.2, 7.6};
    SALES::setSales(s2, sales, 4);
    cout << "Sales 2: " << endl;
    SALES::showSales(s2);

    return 0;
}