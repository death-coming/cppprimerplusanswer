// exercise 06

#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string brand;
    float weight;
    int calorie;
};

int main()
{
    CandyBar snack[3] = {
        {"Mocha Munch", 2.3, 50},
        {"Fruit Salad", 1.6, 140},
        {"Fried Chicken", 2.4, 880}
    };

    cout << "brand: " << snack[0].brand << ", weight: " << snack[0].weight << ", calorie: " << snack[0].calorie << endl;
    cout << "brand: " << snack[1].brand << ", weight: " << snack[1].weight << ", calorie: " << snack[1].calorie << endl;
    cout << "brand: " << snack[2].brand << ", weight: " << snack[2].weight << ", calorie: " << snack[2].calorie << endl;

    return 0;
}