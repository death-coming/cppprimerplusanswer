// exercise 04

#include "stack.h"

Stack::Stack(int n)
{
    if(n > MAX)
    {
        std::cout << "Stack size maximum is 10!";
        exit(EXIT_FAILURE);
    }
        
    pitems = new Item[n];
    for(int i = 0; i < n; i++)
        pitems[i] = 0;
    size = n;
    top = 0;
}

Stack::Stack(const Stack & st)
{
    delete [] pitems;
    pitems = new Item[st.size];
    for(int i = 0; i < st.size; i++)
        pitems[i] = st.pitems[i];
    size = st.size;
    top = st.top;
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return (top == 0);
}

bool Stack::isfull() const
{
    return (top == size);
}

bool Stack::push(const Item & item)
{
    if(isfull())
        return false;
    else
    {
        pitems[top++] = item;
        return true;
    }  
}

bool Stack::pop(Item & item)
{
    if(isempty())
        return false;
    else
    {
        item = pitems[--top];
        return true;
    }   
}

Stack & Stack::operator=(const Stack & st)
{
    delete [] pitems;
    pitems = new Item[st.size];
    for(int i = 0; i < st.size; i++)
        pitems[i] = st.pitems[i];
    size = st.size;
    top = st.top;
    return *this;
}


ostream & operator<<(ostream & os, const Stack & st)
{
    for (int i = 0; i < st.top; i++)
    {
        os << st.pitems[i] << std::endl;
    }
    return os;
}