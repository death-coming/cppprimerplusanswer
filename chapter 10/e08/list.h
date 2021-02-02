// exercise 08

#include <iostream>
 
typedef double uItem;
using namespace std;
 
class List
{
private:
    enum { MAX = 20 };
    uItem items[MAX];
    int top;
 
public:
    List() { top = 0; }
    int add(uItem & item);
    bool isempty();
    bool isfull();
    void visit(void(*pf)(uItem &));
};
 
void oringin(uItem & item);
void x2(uItem & item);
void half(uItem & item);