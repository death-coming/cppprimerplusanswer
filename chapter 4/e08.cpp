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
    Pizza * ps = new Pizza;

    cout << "Enter pizza's diameter: ";
    cin >> ps->diameter;
    cin.get();
    
    cout << "Enter pizza's company: ";
    getline(cin, ps->company);

    cout << "Enter pizza's weight: ";
    cin >> ps->weight;

    cout << "company: " << ps->company << ", diameter: " << ps->diameter << ", weight: " << ps->weight << endl;

    delete ps;

    return 0;

}