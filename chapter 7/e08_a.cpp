// exercise 08

#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
const char Snames[4][10] ={
    {"Spring"},
    {"Summer"},
    {"Fall"},
    {"Winter"}
};

void fill(double expense[]);
void show(const double expense[]);

int main()
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(double expense[])
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> expense[i];
    }
}

void show(const double expense[])
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << expense[i] << '\n';
        total += expense[i];
    }
    std::cout << "Total: $" << total << '\n';
}