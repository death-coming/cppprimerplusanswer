//exercise 08

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string str;
    int times = 0;
    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> str;
    while(str != "done")
    {
        if (bool(cin >> str) == true)
            times++;
    }
    cout << "You entered a total of " << times << " words. " << endl;
    return 0;
}