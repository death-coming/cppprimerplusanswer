// exercise 04;

#include <iostream>
#include "sales.h"

double get_min(const SALES::Sales & s);
double get_max(const SALES::Sales & s);

namespace SALES
{
    void setSales(Sales & s, const double ar[], int n = 4)
    {
        for(int i = 0; i < QUARTERS; i++)
            s.sales[i] = 0;
        
        double sum = 0;
        int i = 0;
        if(n > 4)
            n = 4;
        for(; i < n; i++)
        {
            s.sales[i] = ar[i];
            sum += s.sales[i];
        }
        s.average = sum / i;
        s.min = get_min(s);
        s.max = get_max(s);
    }

    void setSales(Sales & s)
    {
        using std::cout;
        using std::cin;
        for(int i = 0; i < QUARTERS; i++)
            s.sales[i] = 0;
        
        double input, sum;
        int i = 0;
        for(; i < QUARTERS; i++)
        {
            cout << "Enter the sales of quarter " << i+1 << std::endl;
            cin >> s.sales[i];
            sum += s.sales[i];
        }
        s.average = sum / i;
        s.min = get_min(s);
        s.max = get_max(s);
    }

    void showSales(const Sales & s)
    {
        using std::cout;
        using std::cin;
        using std::endl;
        cout << "Sales in all quaters: " << endl;
        for(int i = 0; i < QUARTERS; i++)
            cout << s.sales[i] << "\t";
        cout << endl;
        cout << "Sales average: " << s.average << endl;
        cout << "Sales minimum: " << s.min << endl;
        cout << "Sales maximum: " << s.max << endl;
    }
}



double get_min(const SALES::Sales & s)
{
    double min = s.sales[0];
    for(int i = 1; i < SALES::QUARTERS; i++)
    {
        if(min > s.sales[i])
            min = s.sales[i];
    }
    return min;
}

double get_max(const SALES::Sales & s)
{
    double max = s.sales[0];
    for(int i = 1; i < SALES::QUARTERS; i++)
    {
        if(max < s.sales[i])
            max = s.sales[i];
    }
    return max;
}