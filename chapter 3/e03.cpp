// exercise 03

#include <iostream>

using namespace std;


int main()
{
    const double interval = 60;

    double degrees, minutes, seconds, only_degrees;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    only_degrees = (seconds / interval + minutes) / 60 + degrees;

    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << only_degrees << " degrees.";

    return 0;

}
