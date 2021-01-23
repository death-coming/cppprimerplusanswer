// exercise 03

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char first_name[20], last_name[20];

    cout << "Enter your first name: ";
    cin.getline(first_name, 20);
    cout << "Enter your last name: ";
    cin.getline(last_name, 20);

    strcat(last_name, ", ");
    strcat(last_name, first_name);

    cout << "Here's the information in a single string: " << last_name << endl;

    return 0;

}