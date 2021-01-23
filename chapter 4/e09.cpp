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
    
    CandyBar *ps = new CandyBar[3];
    
    ps[0] = {"Mocha Munch", 2.3, 50};
    ps[1] = {"Fruit Salad", 1.6, 140};
    ps[2] = {"Fried Chicken", 2.4, 880};

    cout << "brand: " << ps[0].brand << ", weight: " << ps[0].weight << ", calorie: " << ps[0].calorie << endl;
    cout << "brand: " << ps[1].brand << ", weight: " << ps[1].weight << ", calorie: " << ps[1].calorie << endl;
    cout << "brand: " << ps[2].brand << ", weight: " << ps[2].weight << ", calorie: " << ps[2].calorie << endl;

    delete [] ps;
    return 0;
}