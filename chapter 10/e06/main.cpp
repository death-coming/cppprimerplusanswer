// exercise 06

#include "move.h"

using namespace std;

int main()
{
    Move obj1(1, 5), obj2(5, 4);
    obj1.showmove();
    obj2.showmove();

    Move obj3 = obj1.add(obj2);
    obj3.showmove();

    return 0;

}