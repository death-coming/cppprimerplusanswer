// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    
    unsigned int times;

    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        double total_steps = 0;
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        cout << "Enter repeat times (q to quit): ";
        cin >> times;
        cin.get();
        double steps_arr[times];
        for(int i = 0; i < times; i++)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, VECTOR::Vector::POL);
                result = result + step;
                steps++;
            }
            cout << "After " << steps << " steps, the subject "
                "has the following location:\n";
            cout << result << endl;
            result.polar_mode();
            cout << " or\n" << result << endl;
            cout << "Average outward distance per step = "
                << result.magval()/steps << endl;
            total_steps += steps;
            steps_arr[i] = steps;
            steps = 0;
            result.reset(0.0, 0.0);
            
        }

        double max = steps_arr[0], min = steps_arr[0];
        for(int i = 1; i < times; i++)
        {
            if(max < steps_arr[i])
                max = steps_arr[i];
            if(min > steps_arr[i])
                min = steps_arr[i];
        }
        cout << endl;
        cout << "Steps maximum: " << max << endl;
        cout << "Steps minimum: " << min << endl;
        cout << "Steps average: " << total_steps / times << endl;
        cout << endl;
        cout << "Enter target distance (q to quit): ";
    
    }
    cout << "Bye!\n";
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
