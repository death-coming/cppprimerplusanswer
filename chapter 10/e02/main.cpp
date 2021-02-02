// exercise 02

#include <iostream>
#include "person.h"

using namespace std;

int main()
{
    Person one;
    Person two("Symthecraft");
    Person three("Dimwiddy", "Sam");

    one.Show();
    one.FormalShow();
    cout << endl;

    two.Show();
    two.FormalShow();
    cout << endl;

    three.Show();
    three.FormalShow();
    cout << endl;

    return 0;

}