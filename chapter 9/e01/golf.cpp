// exercise

#include <iostream>
#include "golf.h"
#include <cstring>

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;    
}

int setgolf(golf & g)
{

    std::cout << "Please enter the fullname: ";
    std::cin.getline(g.fullname, Len);
    if(g.fullname[0] == '\0')
    {
        // std::cin.get();
        return 0;
    }   

    std::cout << "Please enter the handicap: ";
    std::cin >> g.handicap;
    return 1;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    std::cout << "Fullname: " << g.fullname << std::endl;
    std::cout << "Handicap: " << g.handicap << std::endl;
}