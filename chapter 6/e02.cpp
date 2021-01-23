// exercise 02

#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<double, 10> donation;
    double sum = 0, ave = 0, count = 0;

    for (int i = 0; i < donation.size(); i++, count++)
    {
        cout << "Please enter " << i+1 << " donation, 10 at most. ";
        
        if (cin >> donation[i])
        {
            sum += donation[i];
        }
        else
        {
            break;
        }
    }
    ave = sum / count;
    cout << "Average: " << ave << endl;
    cout << "The numbers that greater than average: " << endl;
    for (int i = 0; i < count; i++)
    {
        if (donation[i] > ave)
        {
            cout << donation[i] << "\t";
        }
    }
    return 0;
}