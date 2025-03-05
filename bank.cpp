//
// Created by Akhmadillo Mamirov on 3/5/25.
//
#include "bank.h"
#include <iostream>
#include <map>
#include <ostream>
#include <random>
#include "user.h"
using namespace std;

Bank::Bank(const string& bankName)
{
    name = bankName;
}

string getRandomNum()
{
    random_device rd;
    mt19937 gen(rd());
    constexpr long long min = 100000000;
    constexpr long long max = 999999999;
    std::uniform_int_distribution<long long> dist(min, max);

    // Generate and print the random number
    const long long randomNumber = dist(gen);
    return to_string(randomNumber);
}

void Bank::addSampleUser(const string& userName)
{
    const string newAccNum = "111111111";
    const auto newUser = new User(userName, newAccNum);
    users[newAccNum] = newUser;
}


void Bank::addUser(const string& userName)
{
    string newAccNum = getRandomNum();
    while (users.contains(newAccNum))
    {
        newAccNum = getRandomNum();
    }
    const auto newUser = new User(userName, newAccNum);
    users[newAccNum] = newUser;
}

User* Bank::getUserAcc(const string& accNum)
{
    if (const auto it = users.find(accNum); it != users.end())
    {
        return it->second;
    }
    return nullptr;
}


void Bank::getAllUsers()
{
    for (auto & [fst, snd]: users)
    {
        cout << fst << " " << snd->userName << endl;
    }
}



