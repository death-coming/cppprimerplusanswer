// exercise 06

#include <iostream>

using namespace std;

double lightyears_to_astronomical(double ly);

int main()
{
    double ly, astron;

    cout << "Enter the number of light years: ";
    cin >> ly;

    astron = lightyears_to_astronomical(ly);

    cout << ly << " light years = " << astron << " astronomical units. " << endl;

}

double lightyears_to_astronomical(double ly)
{
    return ly * 63240;
}