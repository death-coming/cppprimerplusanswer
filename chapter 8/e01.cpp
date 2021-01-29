// exercise 01

#include <iostream>
#include <string>

using namespace std;

void show_string(string str, int n);
void show_string(string str);

int main()
{
    string str = "An example string.";
    int n;
    cout << "Please enter how many times do you want to print the string: ";
    cin >> n;
    show_string(str, n);

    return 0;
}

void show_string(string str)
{
    cout << str << endl;
}

void show_string(string str, int n)
{
    for(int i = 0; i < n; i++)
        show_string(str);
}