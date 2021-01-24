// exercise 08

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("e08.txt");

    if (!inFile.is_open())
        exit(EXIT_FAILURE);
    
    string words;
    inFile >> words;
    
    int count = 0;

    while (inFile.good())
    {
        count++;
        inFile >> words;
    }

    cout << "Total " << count << " words." << endl;
    return 0;
}