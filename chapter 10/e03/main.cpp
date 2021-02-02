// exercise 01
// using "g++ main.cpp golf.cpp -o e01" to compile

#include <iostream>
#include "golf.h"

int main()
{
    Golf ann("Ann Birdfree", 24);
    ann.ShowGolf();

    Golf g[3];
    for (int i = 0; i < 3; i++)
        g[i].ShowGolf();

    Golf andy;
    andy.ShowGolf();

    int hc;
    std::cout << "Please enter an updated handicap: ";
    std::cin >> hc;
    andy.Handicap(hc);
    andy.ShowGolf();

    return 0;
}

