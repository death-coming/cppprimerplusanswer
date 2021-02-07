// exercise 01

#include <iostream>
#include <cstring>
#include "cow.h"

using namespace std;

Cow::Cow()
{
    strcpy(name, "None");
    hobby = new char[5];
    strcpy(hobby, "None");
    weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    strcpy(name, nm);
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
    delete [] hobby;
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const
{
    
    cout << "Now a new cow!\n";
    cout << "The name is " << name << endl;
    cout << "The hobby is " << hobby << endl;
    cout << "The weight is " << weight << endl;
}