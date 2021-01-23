// exercise 10

#include <iostream>
#include <array>


using namespace std;

int main()
{
    array<float, 3> time;

    cout << "Enter the first grade: ";
    cin >> time[0];

    cout << "Enter the second grade: ";
    cin >> time[1];

    cout << "Enter the third grade: ";
    cin >> time[2];

    cout << "record " << time.size() << " times!" << endl;
    cout << "average: " << (time[0] + time[1] + time[2]) / 3 << "s" <<endl;

    return 0;
}