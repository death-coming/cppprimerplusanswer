// exercise 01

#include <iostream>
#include "cow.h"
 
using namespace std;
 
int main()
{
    Cow c1;
    c1.ShowCow();
    Cow c2("KK", "Eatting", 100);
    c2.ShowCow();
    Cow c3("BB", "Drinking", 110);
    c3.ShowCow();
    c3 = c1;
    Cow c4(c2);
    c3.ShowCow();
    c4.ShowCow();
    return 0;
}