// exercise 10

#include <iostream>

using namespace std;

const int fun_num = 3;
double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double calculate(double x, double y, double (*pt)(double, double));

int main()
{
    double x, y;
    double (*pt[fun_num])(double, double) = {add, sub, mul};
    cout << "Please enter two values: \n";
    cin >> x >> y;
    cout << "Results for add, sub and mul: \n";
    for (int i = 0; i < fun_num; i++)
    {
        cout << calculate(x, y, pt[i]) << "\t";
    }

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

double mul(double x, double y)
{
    return x * y;
}

double calculate(double x, double y, double (*pt)(double, double))
{
    return (*pt)(x, y);
}
