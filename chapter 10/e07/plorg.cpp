// exercise 07

#include <iostream>
#include <cstring>
#include "plorg.h"


using namespace std;

Plorg::Plorg(const char * name, int ci)
{
    strcpy(name_, name);
    ci_ = ci;
}

void Plorg::ChangeCI(const int new_ci)
{
    ci_ = new_ci;
}

void Plorg::ShowPlorg() const
{
    cout << name_ << ", CI = " << ci_ << endl;
}