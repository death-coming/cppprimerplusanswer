// exercise 01

#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>

class Account
{
private:
    std::string name_;
    std::string account_number_;
    double deposit_;

public:
    Account(std::string name, std::string account_number, double deposit = 0);
    void Deposit(double amount);
    void Withdraw(double amount);
    void ShowInfor() const;
};

#endif