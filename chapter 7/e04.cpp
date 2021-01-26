// exercise 04

#include <iostream>

using namespace std;
// Note: some implementations require double instead of long double
long double probability(unsigned numbers, unsigned picks);
int main()
{
    using namespace std;
    int field_total, field_choices;
    int special_total, special_choice;
    cout << "Enter the total number of field number on the game card and\n"
            "the number of picks allowed:\n";
    while ((cin >> field_total >> field_choices) && field_choices <= field_total)
    {
        cout << "Enter the total number of special number on the game card and\n"
                "the number of picks allowed:\n";
        if ((cin >> special_total >> special_choice) && special_choice <= special_total)
        {
            cout << "You have one chance in ";
            cout << probability(field_total, field_choices) * probability(special_total, special_choice);
            cout << " of winning.\n";
            cout << "Next two numbers in field number(q to quit): ";
        }

    }
    cout << "bye\n";
    // cin.get();
    // cin.get();
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;  // here come some local variables
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ; 
    return result;
}