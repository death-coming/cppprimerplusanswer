// exercise 03

#include <iostream>
#include <new>
#include <cstring>

using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};

void setchaff(chaff & c, char * dr, int sl);
void showchaff(const chaff & c);

int main()
{
    chaff *p1 = new chaff[2];
    char dr[20];
    int sl;
    for(int i = 0; i < 2; i++)
    {
        cout << "Please enter the dross of chaff " << i+1 << endl;
        cin.getline(dr, 20);
        cout << "Please enter the slag of chaff " << i+1 << endl;
        cin >> sl;
        setchaff(p1[i], dr, sl);
        cin.get();
    }
    cout << endl;
    for(int i = 0; i < 2; i++)
        showchaff(p1[i]);

    delete [] p1;
}

void setchaff(chaff & c, char * dr, int sl)
{
    strcpy(c.dross, dr);
    c.slag = sl;
}

void showchaff(const chaff & c)
{
    cout << "Chaff dross: " << c.dross << endl;
    cout << "Chaff slag:  " << c.slag << endl;
}