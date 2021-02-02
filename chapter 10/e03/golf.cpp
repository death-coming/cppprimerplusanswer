// exercise

#include <iostream>
#include "golf.h"
#include <cstring>

Golf::Golf()
{
    char ch[Len];
    int hc;
    std::cout << "Please enter the fullname: ";
    std::cin.getline(ch, Len);  

    std::cout << "Please enter the handicap: ";
    std::cin >> hc;
    std::cin.get();

    strcpy(this->fullname, ch);
    this->handicap = hc;  
}

Golf::Golf(const char * name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;    
}

void Golf::Handicap(int hc)
{
    handicap = hc;
}

void Golf::ShowGolf() const
{
    std::cout << "Fullname: " << fullname << std::endl;
    std::cout << "Handicap: " << handicap << std::endl;
}