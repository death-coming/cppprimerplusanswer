// exercise 07

#include <iostream>
#include <string>

using namespace std;

struct Car
{
    string producer;
    int year;
};


int main()
{
    int cat;
    cout << "How many cars do you wish to catalog? ";
    cin >> cat;

    Car * ps = new Car[cat];
    string name;
    cin.get();

    for (int i = 0; i < cat; i++)
    {
        cout << "Car #" << i + 1 << ":" << endl;
        cout <<  "Please enter the make: ";
        getline(cin, ps[i].producer);
        cout << "Please enter the year made: ";
        cin >> ps[i].year;
        cin.get();
    }

    cout << "Here is your collection: " << endl;

    for (int i = 0; i < cat; i++)
    {
        cout << ps[i].year << " " << ps[i].producer << endl;
    }
    delete [] ps;
    return 0;
}