// exercise 04

#include <iostream>

using namespace std;

int main()
{
    const int base = 100;

    float sum_D = base, sum_C = base;
    int year = 0;
    do
    {
        sum_D += base * 0.1;
        sum_C += sum_C * 0.05;
        year++;
    } while (sum_C < sum_D);
    
    cout << "after " << year << " years, C greater than D" << endl;
    cout << "Cleo: \t" << sum_C << endl;
    cout << "Daphne:\t" << sum_D << endl;

    return 0;

}