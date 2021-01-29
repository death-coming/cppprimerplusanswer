// exercise 03

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void show_upper(const string str);

int main()
{
    string str;
    cout << "Enter a string (q to quit): ";
    getline(cin, str);
    while(str != "q")
    {
        show_upper(str);
        cout << "Next string (q to quit): ";
        getline(cin, str);
    }
    cout << "Bye.";

    return 0;
}

void show_upper(const string str)
{
    string str_to_show;
    str_to_show = str;
    for (int i = 0; i < str.length(); i++)
    {
        str_to_show[i] = toupper(str[i]); 
    }
    cout << str_to_show << endl;
}