// exercise 1

#include <iostream>

using namespace std;

int main()
{
    int min, max, sum;

    cout << "Enter min: ";
    cin >> min;

    cout << "Enter max: ";
    cin >> max;

    sum = 0;
    for(;min <= max; ++min)
    {
        sum += min;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}