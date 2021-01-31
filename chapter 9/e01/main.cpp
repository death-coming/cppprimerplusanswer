// exercise 01
// using g++ main.cpp golf.cpp -o e01 to compile

#include <iostream>
#include "golf.h"

int main()
{
    golf ann, g[3];

    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);

    int i = 0;
    while ((i < 3) && (setgolf(g[i])))
    {
        showgolf(g[i]);
        std::cout << "Next golf:\n";
        i++;
    }

    golf andy;
    setgolf(andy, "Andy Test", 28);
    showgolf(andy);
    int hc;
    std::cout << "Please enter an updated handicap: ";
    std::cin >> hc;
    handicap(andy, hc);
    showgolf(andy);

    return 0;
}

