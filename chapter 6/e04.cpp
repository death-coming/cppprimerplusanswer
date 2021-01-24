// exercise 04

#include <iostream>

using namespace std;
const int strsize = 30;


struct Bop 
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main()
{
    int num = 5;
    Bop members[num] = {
        {"Wimp Macho", "Student", "Macho", 0},
		{"Raki Rhodes", "Junior Programmer", "Rhodes", 1},
		{"Celia Laiter", "Student", "MIPS", 2},
		{"Hoppy Hipman", "Analyst Trainee", "Hipman", 1},
		{"Pat Hand", "Student", "LOOPY", 2}
    };

    char choice;

    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name \t b. display by title" << endl;
    cout << "c. display by bopname \t d. display by preference" << endl;
    cout << "q. quit" << endl;

    cout << "Enter your choice: ";

    while(cin >> choice)
    {
        switch(choice)
        {
            case 'a': 
            for (int i = 0; i < num; i++)
                cout << members[i].fullname << endl;
            break;

            case 'b':
            for (int i = 0; i < num; i++)
                cout << members[i].title << endl;
            break;

            case 'c':
            for (int i = 0; i < num; i++)
                cout << members[i].bopname << endl;
            break;

            case 'd':
            for (int i = 0; i < num; i++)
            {
                switch (members[i].preference)
                {
                case 0: cout << members[i].fullname << endl;
                    break;
                
                case 1: cout << members[i].title << endl;
                    break;
                
                case 2: cout << members[i].bopname << endl;
                    break;
                
                default: cout << "No items" << endl;
                }
            }
            break;
            
            case 'q': 
                cout << "Bye!"; 
                return 0;

            default: cout << "Wrong choice!" << endl;
        }

        cout << "Next choice: ";
    }
    
}