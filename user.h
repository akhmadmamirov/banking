//
// Created by Akhmadillo Mamirov on 3/5/25.
//

#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;

class User
{
public:
    explicit User(const string& name, const string& accountNum);
    string accountNumber;
    string userName;
    int balance;
    void deposit(int amount);
    void withdraw(int amount);
};


#endif //USER_H
