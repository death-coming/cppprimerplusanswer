// exercise 07

#include <iostream>

using namespace std;

void transfer(int hours, int minutes)
{
    cout << "Time " << hours << ":" << minutes;
}

int main()
{
    int hours, minutes;

    cout << "Enter the number of hours: ";
    cin >> hours;

    cout << "Enter the number of minutes: ";
    cin >> minutes;

    transfer(hours, minutes);

    return 0;
}