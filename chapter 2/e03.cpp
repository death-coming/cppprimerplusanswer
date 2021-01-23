// exercise 03

#include <iostream>

using namespace std;

void mice_func();
void run_func();

int main()
{
    mice_func();
    mice_func();
    run_func();
    run_func();
    return 0;
}

void mice_func()
{
    cout << "Three blind mice" << endl;
}

void run_func()
{
    cout << "See how they run" << endl;
}