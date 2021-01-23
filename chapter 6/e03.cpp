// exercise 03

#include <iostream>
#include <cctype>

using namespace std;

int main()
{

    char choice;

    cout << "Please enter one of the following choices: " << endl;
    cout << "c) carnivore\tp) pianist" << endl;
    cout << "t) tree\tg) game" << endl;
    cin.get(choice);

    while (isalpha(choice))
    {
        switch (choice)
        {
            case 'C':
            case 'c': cout << "A mapple is a carnivore." << endl;
            break;

            case 'P':
            case 'p': cout << "A mapple is a pianist." << endl;
            break;

            case 'T':
            case 't': cout << "A mapple is a tree. " << endl;
            break;

            case 'G':
            case 'g': cout << "A mapple is a game. " << endl;
            break;

            default: cout << "Please enter a c, p, t, or g: ";
            break;
        }
        cin.get(choice);
    }

    return 0; 
}