// exercise 01

#include <iostream>
#include <string>
#include "account.h"

Account::Account(std::string name, std::string account_number, double deposit)
{
    name_ = name;
    account_number_ = account_number;
    deposit_ = deposit;
}

void Account::ShowInfor() const
{
    std::cout << "Account Name: " << name_ << std::endl;
    std::cout << "Account Number: " << account_number_ << std::endl;
    std::cout << "Deposit: " << deposit_ << std::endl;
}

void Account::Deposit(double amount)
{
    if(amount > 0)
        deposit_ += amount;
    else
        std::cout << "Please input an amount greater than 0!" << std::endl;  
}

void Account::Withdraw(double amount)
{
    if(amount > 0)
        deposit_ -= amount;
    else
        std::cout << "Please input an amount greater than 0!" << std::endl;
}
