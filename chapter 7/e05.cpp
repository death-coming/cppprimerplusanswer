// exercise 05

#include <iostream>

using namespace std;

unsigned long long factorial(int x);

int main()
{
    int x;
    cout << "Please enter a number (>=0): ";
    cin >> x;
    cout << "Its factorial is " << factorial(x) << endl;

    return 0;
}

unsigned long long factorial(int x)
{
    if (x == 0)
        return 1;
    return x * factorial(x - 1);
}