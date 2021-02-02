// exercise 04;

#include <iostream>
#include "sales.h"

double get_min(const double sales[], int n);
double get_max(const double sales[], int n);

SALES::Sales::Sales()
{
    using std::cout;
    using std::cin;
    using std::endl;
    for(int i = 0; i < QUARTERS; i++)
        sales[i] = 0;
    
    double input, sum;
    int i = 0;
    for(; i < QUARTERS; i++)
    {
        cout << "Enter the sales of quarter " << i+1 << endl;
        cin >> sales[i];
        sum += sales[i];
    }
    average = sum / i;
    min = get_min(sales, QUARTERS);
    max = get_max(sales, QUARTERS);
}

SALES::Sales::Sales(const double ar[], int n)
{
    for(int i = 0; i < QUARTERS; i++)
            sales[i] = 0;
        
    double sum = 0;
    int i = 0;
    if(n > 4)
        n = 4;
    for(; i < n; i++)
    {
        sales[i] = ar[i];
        sum += sales[i];
    }
    average = sum / i;
    min = get_min(sales, n);
    max = get_max(sales, n);
}

void SALES::Sales::ShowSales() const
{
    using std::cout;
    using std::cin;
    using std::endl;
    cout << "Sales in all quaters: " << endl;
    for(int i = 0; i < QUARTERS; i++)
        cout << sales[i] << "\t";
    cout << endl;
    cout << "Sales average: " << average << endl;
    cout << "Sales minimum: " << min << endl;
    cout << "Sales maximum: " << max << endl;
}



double get_min(const double sales[], int n)
{
    double min = sales[0];
    for(int i = 1; i < n; i++)
    {
        if(min > sales[i])
            min = sales[i];
    }
    return min;
}

double get_max(const double sales[], int n)
{
    double max = sales[0];
    for(int i = 1; i < n; i++)
    {
        if(max < sales[i])
            max = sales[i];
    }
    return max;
}