// exercise 02

#include <iostream>

using namespace std;

int input(double grade[], int max_size);
void show(const double grade[], int size);
double mean(const double grade[], int size);

const int max_size = 10;

int main()
{
    double grade[max_size], mean_value;
    int size = input(grade, max_size);
    show(grade, size);
    mean_value = mean(grade, size);
    cout << "Mean grade: " << mean_value;
    return 0;
}

int input(double grade[], int max_size)
{
    cout << "Please enter the grade, at most 10 items: " << endl;
    cout << "Enter any characters to quit" << endl;
    int true_size = 0;
    for (int i = 0; i < max_size; i++)
    {
        true_size = i;
        cout << true_size+1 << ": ";
        if(!(cin >> grade[i]))
        {
            cout << "Input completed." << endl;
            return i;
        }
    }
    return true_size;
}

void show(const double grade[], int size)
{
    cout << "All the grade: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << grade[i] << "\t";    
    }
    cout << endl;
}

double mean(const double grade[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += grade[i];

    return sum / size;
}