// exercise 05

#include <iostream>

using namespace std;

int main()
{

    long long p_world, p_us;
    double percent;

    cout << "Enter the world's population: ";
    cin >> p_world;
    cout << "Enter the population of the US: ";
    cin >> p_us;

    percent = double(p_us) / double(p_world);
    cout << "The population of the US is " << percent * 100 << "% of the world population.";

    return 0;
}

