// exercise 06

#include <iostream>
#include "move.h"

using namespace std;

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    cout << "x = " << x << ", y = " << y << endl;
}

Move Move::add(const Move & m) const
{
    double this_x = this->x;
    double this_y = this->y;

    this_x += m.x;
    this_y += m.y;
    Move temp(this_x, this_y);
    return temp;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}