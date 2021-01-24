// exercise 05

#include <iostream>

using namespace std;

int main()
{
    
    double income = 0;

    cout << "Please enter your income: ";

    while(cin >> income && income >= 0)
    {
        double tax = 0;
        if (income <= 5000)
            cout << "No tax!" << endl;
        else if (income > 5000 && income <= 15000)
        {
            tax += (income - 5000) * 0.1;
            cout << "tax: " << tax << endl;
        }
        else if (income > 15000 && income <=35000)
        {
            tax += (income - 15000) * 0.15;
            tax += 10000 * 0.1;
            cout << "tax: " << tax << endl;
        }
        else if (income > 35000)
        {
            tax += (income - 35000) * 0.2;
            tax += 20000 * 0.15;
            tax += 10000 * 0.1;
            cout << "tax: " << tax << endl;
        }
        
        cout << "Please enter your income: ";
    }

    return 0;
}