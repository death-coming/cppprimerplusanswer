// stack.cpp -- Stack member functions
#include <iostream>
#include "stack.h"

Stack::Stack()    // create an empty stack
{
    top = 0;
    income = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const customer & customer) 
{
    if (top < MAX)
    {
        customers[top++] = customer;
        return true;
    }
    else
        return false;
}

bool Stack::pop(customer & customer)
{
    if (top > 0)
    {
        income += customers[--top].payment;
        customer = customers[top]; 
        std::cout << "Income: " << income << std::endl;  
        return true;
    }
    else
        return false; 
}
