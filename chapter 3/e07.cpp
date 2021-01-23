// exercise 07

#include <iostream>

using namespace std;



int main()
{
    float cost_l_per_km, cost_miles_per_gal;

    cout << "Enter petro cost (L/km): ";
    cin >> cost_l_per_km;

    cost_miles_per_gal = 62.14 / (cost_l_per_km / 3.785);

    cout << "In US style: " << cost_miles_per_gal << "mpg";

    return 0;
}