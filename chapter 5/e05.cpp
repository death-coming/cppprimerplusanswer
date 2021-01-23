// exercise 05

#include <iostream>

using namespace std;

const int num = 12;

int main()
{
    const char * months[num] = {
        "Jan.",
        "Feb.",
        "Mar.",
        "Apr.",
        "May ",
        "Jun.",
        "Jul.",
        "Aug.",
        "Sep.",
        "Oct.",
        "Nov.",
        "Dec."
    };
    int amount[num] = {34, 23, 67, 23, 12, 78, 62, 45, 12, 39, 58, 10};
    int sum = 0;

    cout << "Monthly sell amount:" << endl;

    for (int i = 0; i < num; i++)
    {
        cout << months[i] << "\t" << amount[i] << endl;
        sum += amount[i];
    }

    cout << "Total:\t" << sum << endl;

    return 0;
}