// exercise 07

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string words;
    int vowels = 0;
    int consonants = 0;
    int others = 0;

    cout << "Enter words (q to quit): " << endl;
    cin >> words;

    while (!(words.size() == 1 && words[0] == 'q'))
    {
        if (isalpha(words[0]))
        {
            if(tolower(words[0]) == 'a' || tolower(words[0]) == 'e' || tolower(words[0]) == 'i' || tolower(words[0]) == 'o' || tolower(words[0]) == 'u')
            {
                vowels ++;
            }
            else
            {
                consonants++;
            }                        
        }
        else
        {
            others++;
        }
        cin >> words;
    }

    cout << vowels << " words beginning with vowels" << endl;
    cout << consonants << " words beginning with consonants" << endl;
    cout << others << " others" << endl;

    return 0;
}