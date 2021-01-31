// exercise 02

// static.cpp -- using a static local variable
#include <iostream>
#include <string>
// constants
using namespace std;
const int ArSize = 10;

// function prototype
void strcount(const string &str);

int main()
{
    string input;
    string next;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye\n";
// code to keep window open for MSVC++
/*
cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0;
}

void strcount(const string &str)
{
    using namespace std;
    static int total = 0;        // static local variable
    int count = str.size();               // automatic local variable

    cout << "\"" << str <<"\" contains ";

    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
