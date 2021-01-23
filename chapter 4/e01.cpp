// exercise 01

#include <iostream>

using namespace std;

int main()
{
    const int size = 20;
    char first_name[size], last_name[size], grad;
    int age;
    
    cout << "What is your first name? ";
    cin.getline(first_name, size);
    cout << "What is your last name? ";
    cin.getline(last_name, size);
    cout << "What letter grade do you deserve? ";
    cin >> grad;
    grad = grad + 1;
    cout << "What is your age? ";
    cin >> age;
    cout << endl;
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << grad << endl;
    cout << "Age: " << age << endl;

    return 0;
}