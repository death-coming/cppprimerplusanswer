// exercise 05

#include <iostream>

using namespace std;

const int size = 5;

template<typename T>
T max5(T array[]);

int main()
{
    int array1[size] = {1, 2, 3, 4, 5};
    double array2[size] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int max1 = max5(array1);
    double max2 = max5(array2);

    cout << "Int array is ";
    for (int i = 0; i < size; i++)
        cout << array1[i] << "\t";
    cout << endl;
    cout << "Its maximum is " << max1 << endl;

    cout << "Double array is ";
    for (int i = 0; i < size; i++)
        cout << array2[i] << "\t";
    cout << endl;
    cout << "Its maximum is " << max2 << endl;
    return 0;
}

template<typename T>
T max5(T array[])
{
    T max = array[0];
    for (int i = 1; i < size; i++)
    {
        if(max < array[i])
            max = array[i];
    }
    return max;
}
