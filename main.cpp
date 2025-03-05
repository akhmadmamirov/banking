#include <iostream>
#include "bank.h"
// Banking system

/* Bank Class
    has many users
    balance
    deposit
    withdraw
*/

/* User Class
    user can have to multiple bank accounts
    can check balance for a bank account
    account balances needs to be up to date
*/

int main()
{
    std::cout << "Welcome to the Bank-A!" << std::endl;
    auto bank = Bank("Chase");
    bank.addUser("John");
    bank.getAllUsers();
}