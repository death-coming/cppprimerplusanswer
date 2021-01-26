// exercise 01

#include <iostream>

using namespace std;

double harmonic(double, double);

int main()
{
    double x, y, value;

    do
    {
        cout << "Please enter x = ";
        cin >> x;
        cout << "Please enter y = ";
        cin >> y;
        if (x == 0 || y == 0)
        {
            cout << "x or y should not be 0, program terminated.";
            break;
        }
        value = harmonic(x, y);
        cout << "Harmonic mean: " << value << endl;
    } while (true);
    

    return 0;
}

double harmonic(double x, double y)
{
    return 2 * x * y / (x + y);
}