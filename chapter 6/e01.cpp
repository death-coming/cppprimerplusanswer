// exercise 01

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;

    cout << "Please enter something: ";
    cin.get(ch);
    while(ch != '@')
    {
        if(isalpha(ch))
        {
            if(islower(ch))
            {
                cout << char(toupper(ch)) << endl;
            }
            else
            {
                cout << char(tolower(ch)) << endl;
            }
            
        }
        
        cin.get(ch);
        
    }

    return 0;
}