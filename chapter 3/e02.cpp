// exercise 02

#include <iostream>

using namespace std;

int main()
{
    int feet, inch, pound;
    cout << "Enter your height at feet unit: ";
    cin >> feet;
    cout << "Enter your height at inch unit: ";
    cin >> inch;
    cout << "Enter your weight at pound unit: ";
    cin >> pound;

    double height = (feet * 12 + inch) * 0.0254;
    double weight = pound * 2.2;
    double bmi = weight / height;

    cout << "Your BIM is " << bmi << endl;

    return 0;
}