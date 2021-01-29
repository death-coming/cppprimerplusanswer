// exercise 06

#include <iostream>
#include <cstring>

using namespace std;

template<typename T>
T maxn(T array[], int n);
template <> char * maxn(char * ch[], int n);
int main()
{
    int array1[6] = {1, 2, 3, 4, 5, 6};
    double array2[4] = {1.1, 2.2, 3.3, 4.4};
    int max1 = maxn(array1, 6);
    double max2 = maxn(array2, 4);

    cout << "Int array is ";
    for (int i = 0; i < 6; i++)
        cout << array1[i] << "\t";
    cout << endl;
    cout << "Its maximum is " << max1 << endl;

    cout << "Double array is ";
    for (int i = 0; i < 4; i++)
        cout << array2[i] << "\t";
    cout << endl;
    cout << "Its maximum is " << max2 << endl;

    char *ch[5] = {
        "Apple",
        "Orange",
        "Watermelon",
        "Banana",
        "Strawbery"
    };

    char * address = maxn(ch, 5);

    cout << "Longest string's address: " << &address << endl;
    return 0;

}

template<typename T>
T maxn(T array[], int n)
{
    T max = array[0];
    for (int i = 1; i < n; i++)
    {
        if(max < array[i])
            max = array[i];
    }
    return max;
}

template <> char * maxn(char * ch[], int n)
{
    char * max = ch[0];
    int max_length = strlen(ch[0]);
    for (int i = 1; i < n; i++)
    {
        if (max_length < strlen(ch[i]))
            {
                max_length = strlen(ch[i]);
                max = ch[i];
            }
    }
    return max;
}