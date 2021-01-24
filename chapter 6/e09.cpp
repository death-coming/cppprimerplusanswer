// exercise 09

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Donation
{
    string name;
    double money;
};

int main()
{
    ifstream inFile;
    inFile.open("e09.txt");
    if (!inFile.is_open())
        exit(EXIT_FAILURE);

    
    int num;
    inFile >> num;
    inFile.get();
    Donation * ps = new Donation[num];
    for (int i = 0; i < num; i++)
    {
        getline(inFile, ps[i].name);
        inFile >> ps[i].money;
        inFile.get();
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