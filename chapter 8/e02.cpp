// exericse 02

#include <iostream>
#include <cstring>

using namespace std;
const int size = 20;

struct CandyBar
{
    char brand[size];
    double weight;
    unsigned int calorie;    
};

void set_candybar(CandyBar &candybar, const char * brand = "Millennium Munch", const double weight = 2.85, const unsigned int calorie = 350);
void show_candybar(const CandyBar &candybar);

int main()
{
    CandyBar candybar;
    set_candybar(candybar);
    show_candybar(candybar);

    return 0;
}

void set_candybar(CandyBar &candybar, const char * brand, const double weight, const unsigned int calorie)
{
    strcpy(candybar.brand, brand);
    candybar.weight = weight;
    candybar.calorie = calorie;
}

void show_candybar(const CandyBar &candybar)
{
    cout << "Brand: " << candybar.brand << endl;
    cout << "Weight: " <<  candybar.weight << endl;
    cout << "Calorie: " << candybar.calorie << endl;
}