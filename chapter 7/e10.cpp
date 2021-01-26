// exercise 10

#include <iostream>

using namespace std;

double add(double x, double y);
double sub(double x, double y);
double calculate(double x, double y, double (*pt)(double, double));

int main()
{
    double x, y;
    cout << "Please enter two values: \n";
    cin >> x >> y;
    double q = calculate(x, y, add);
    cout << "Sum of x and y is " << q << endl;
    q = calculate(x, y, sub);
    cout << "Sub of x and y is " << q << endl;

    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}

double calculate(double x, double y, double (*pt)(double, double))
{
    return (*pt)(x, y);
}
