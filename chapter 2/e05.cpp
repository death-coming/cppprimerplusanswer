// exercise 05

#include <iostream>

using namespace std;

double celsius_to_fahrenheit(double cel);

int main()
{
    double cel, fah;

    cout << "Please enter a Celsius value: ";
    cin >> cel;

    fah = celsius_to_fahrenheit(cel);

    cout << cel << " degrees Celsius is " << fah << " degrees Fahrenheit. " << endl;

}

double celsius_to_fahrenheit(double cel)
{
    return cel * 1.8 + 32.0;
}
