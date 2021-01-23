// exercise 01

#include <iostream>
using namespace std;


int main()
{
    cout << "Enter your height:_____\b\b\b\b ";
    int height;
    cin >> height;
    const int Ft_per_in = 12;
    int ft, in;
    ft = height / Ft_per_in;
    in = height % Ft_per_in;
    cout << "That means you are " << ft << " feet and " << in << " inches height." << endl;
    system("pause");
    return 0;
}
