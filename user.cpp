//
// Created by Akhmadillo Mamirov on 3/5/25.
//

#include "user.h"
#include <iostream>
using namespace std;

User::User(const string& name, const string& accountNum)
{
    userName = name;
    balance = 0;
    accountNumber = accountNum;
}

void User::deposit(const int amount)
{
    balance += amount;
}

void User::withdraw(const int amount)
{
    balance -= amount;
}
