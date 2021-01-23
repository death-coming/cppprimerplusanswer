// exercise 07

#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string company;
    int diameter;
    float weight;
};


int main()
{
    Pizza pizza;

    cout << "Enter pizza's company: ";
    getline(cin, pizza.company);

    cout << "Enter pizza's diameter: ";
    cin >> pizza.diameter;

    cout << "Enter pizza's weight: ";
    cin >> pizza.weight;

    cout << "company: " << pizza.company << ", diameter: " << pizza.diameter << ", weight: " << pizza.weight << endl;

    return 0;

}