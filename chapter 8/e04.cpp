// exercise 04

#include <iostream>
using namespace std;
#include <cstring>
struct stringy
{
    char * str;
    int ct;
};

void set(stringy &stringy, char * testing);
void show(const stringy &stringy, int n = 1);
void show(const char str[], int n = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");

    return 0;
}

void set(stringy &stringy, char * testing)
{
    int ct = strlen(testing);
    char * temp = new char[ct];
    stringy.str = temp;
    strcpy(temp, testing);
    stringy.ct = ct;
}

void show(const stringy &stringy, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << stringy.str << endl;
        cout << "length: " << stringy.ct << endl;
    }
}

void show(const char str[], int n)
{
    for(int i = 0; i < n; i++)
        cout << str << endl;
}