// exercise 04

#include <iostream>
#include "sales.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    
    SALES::Sales s1;
    cout << "Sales 1: " << endl;
    s1.ShowSales();

    double sales[3] = {8.7, 5.6, 9.2};
    SALES::Sales s2(sales, 3);
    cout << "Sales 2: " << endl;
    s2.ShowSales();

    return 0;
}