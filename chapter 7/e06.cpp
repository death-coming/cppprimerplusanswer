// exercise 06

#include <iostream>

using namespace std;

const int max_size = 100;

int Fill_array(double arr[], int max_size);
void Show_array(const double arr[], int size);
void Reverse_array(double arr[], int size);

int main()
{
    double arr[max_size];
    int true_size;
    cout << "Please fill in the array (maximum 100 items)" << endl;
    true_size = Fill_array(arr, max_size);
    cout << "The array shows as: " << endl;
    Show_array(arr, true_size);

    // Reverse
    Reverse_array(arr, true_size);
    cout << "The reversed array shows as: " << endl;
    Show_array(arr, true_size);

    // Back to origin
    Reverse_array(arr, true_size);

    // Reverse
    Reverse_array(arr + 1, true_size - 2);
    cout << "The reversed array shows as: " << endl;
    Show_array(arr, true_size);

    return 0;
}

int Fill_array(double arr[], int max_size)
{   
    int i = 0;
    cout << "Index " << i+1 << ": ";
    while (cin >> arr[i])
    {
        i++;
        cout << "Index " << i+1 << ": ";
    }
        
    return i;
}

void Show_array(const double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void Reverse_array(double arr[], int size)
{
    int end = size - 1;
    double temp;
    for (int i = 0; i < size / 2; i++, end--)
    {
        temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
    }
}