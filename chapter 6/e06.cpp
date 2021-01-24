// exercise 06

#include <iostream>
#include <string>

using namespace std;

struct Donation
{
    string name;
    double money;
};


int main()
{
    int num;
    cout << "Please enter the number of donation: ";
    cin >> num;
    cin.get();
    Donation * ps = new Donation[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Please enter name of donation " << i+1 << ": ";
        getline(cin, ps[i].name);
        cout << "Please enter money of donation " << i+1 << ": ";
        cin >> ps[i].money;
        cin.get();
    }

    int count = 0;
    cout << "Grand Patrons" << endl;
    for (int i = 0; i < num; i++)
    {
        if (ps[i].money > 10000)
        {
            cout << ps[i].name << "\t" << ps[i].money << endl;
            count++;
        }
            
    }
    if (count == 0)
        cout << "None!" << endl;

    count = 0;
    cout << "Patrons" << endl;
    for (int i = 0; i < num; i++)
    { 
        if (ps[i].money <= 10000)
        {
            cout << ps[i].name << "\t" << ps[i].money << endl;
            count++;
        }      
    }
    if (count == 0)
        cout << "None!" << endl;
    
    delete [] ps;
    return 0;
}