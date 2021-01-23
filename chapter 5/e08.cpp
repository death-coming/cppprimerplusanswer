//exercise 08

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ch[20];
    int times = 0;
    cout << "Enter words (to stop, type the word done): " << endl;
    cin >> ch;
    while(strcmp(ch, "done"))
    {
        if (bool(cin >> ch) == true)
            times++;
    }
    cout << "You entered a total of " << times << " words. " << endl;
    return 0;
}