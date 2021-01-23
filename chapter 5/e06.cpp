// exercise 05

#include <iostream>

using namespace std;

const int num = 12;
const int year = 3;

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
    int amount[year][num] = {
        {44, 23, 67, 23, 12, 78, 64, 45, 22, 39, 58, 20},
        {34, 13, 42, 13, 52, 78, 62, 45, 12, 69, 54, 10},
        {74, 23, 67, 23, 12, 97, 62, 45, 62, 39, 58, 10}
    };
    int sum[year] = {0};

    cout << "Monthly sell amount:" << endl;

    for (int y = 0; y < year; y++)
    {
        cout << y + 1 << " year: " << endl;
        for (int m = 0; m < num; m++)
        {
            cout << months[m] << "\t" << amount[y][m] << endl;
            sum[y] += amount[y][m];
        }
        
        cout << y + 1 << " year total:\t" << sum[y] << endl << endl;
    }

    

    return 0;
}