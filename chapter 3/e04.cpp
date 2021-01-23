// exercise 04

#include <iostream>

using namespace std;

int main()
{
    int long input_seconds;
    cout << "Enter the number of seconds: ";
    cin >> input_seconds;

    const int day_hours = 24;
    const int hour_min = 60;
    const int min_sec = 60;

    int days, hours, minutes, seconds;
    days = input_seconds / (day_hours * hour_min * min_sec);
    hours = input_seconds % (day_hours * hour_min * min_sec) / (hour_min * min_sec);
    minutes = input_seconds % (day_hours * hour_min * min_sec) % (hour_min * min_sec) / min_sec;
    seconds = input_seconds % (day_hours * hour_min * min_sec) % (hour_min * min_sec) % min_sec;

    cout << input_seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds. ";

    return 0;
}