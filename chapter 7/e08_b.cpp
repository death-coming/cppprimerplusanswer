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

struct Expense
{
    double expense[Seasons];
};

void fill(Expense * expense);
void show(const Expense expense);

int main()
{
    Expense expenses;
    fill(&expenses);
    show(expenses);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(Expense * pt)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pt->expense[i];
    }
}

void show(const Expense expense)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << expense.expense[i] << '\n';
        total += expense.expense[i];
    }
    std::cout << "Total: $" << total << '\n';
}