// exercise 07

// arrfun3.cpp -- array functions and const
#include <iostream>
using namespace std;
const int Max = 5;

// function prototypes
double* fill_array(double *ar, double *end);
void show_array(const double *ar, const double *end);  // don't change data
void revalue(const double r, double *ar, double *end);

int main()
{
    
    double properties[Max];

    double *end = fill_array(properties, properties + Max);
    show_array(properties, end);
    if ((end-properties) > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }
    cout << "Done.\n";
    // cin.get();
    // cin.get();
    return 0;
}

double* fill_array(double *ar, double *end)
{
    using namespace std;
    double temp;
    int i = 0;
    for (; ar < end; ar++, i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; input process terminated.\n";
           break;
        }
        else if (temp < 0)     // signal to terminate
            break;
        *ar = temp;
    }
    return ar;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double *ar, const double *end)
{
    for (int i = 0; ar < end; ar++, i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << *ar << endl;
    }
}

// multiplies each element of ar[] by r
void revalue(const double r, double *ar, double *end)
{
    for (; ar < end; ar++)
        *ar *= r;
}


