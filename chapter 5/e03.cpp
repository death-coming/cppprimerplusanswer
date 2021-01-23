// exercise 03

#include <iostream>

using namespace std;

int main() 
{
    int num, sum;
    sum = 0;

    do
    {
        cout << "Enter a number: ";
        cin >> num;
        sum += num;
        cout << "Summation until now: " << sum << endl;

    } while (num != 0);
    
    return 0;

}