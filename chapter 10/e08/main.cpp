// exercise 08

#include <iostream>
#include "list.h" 
 
int main(int argc, char **argv)
{
    List list;
    if (list.isempty())
    {
        cout << "List is empty" << endl;
    }
 
    uItem item1 = 7;
    uItem item2 = 1;
    uItem item3 = 9;
 
    list.add(item1);
    list.add(item2);
    list.add(item3);
 
    if (list.isempty())
    {
        cout << "List is empty" << endl;
    }
    else if (list.isfull())
    {
        cout << "List is full" << endl;
    }
    else
    {
        cout << "Some items in the list" << endl;
    }
 
    list.visit(oringin);
    list.visit(x2);
    list.visit(x2);
    list.visit(half);
 
    return 0;
}
 