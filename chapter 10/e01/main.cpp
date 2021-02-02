// exercise 01

#include "account.h"

int main()
{
    Account ac1("David Smith", "123321123321", 50);
    Account ac2("Joe Biden", "235252452523", 1000);

    ac1.ShowInfor();
    ac2.ShowInfor();

    ac1.Deposit(400);
    ac1.ShowInfor();
    
    ac2.Withdraw(23);
    ac2.ShowInfor();

    return 0;
}