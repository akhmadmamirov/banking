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

void Bank::addUser(const string& userName)
{
    /*
     * TO DO: check if random user already exists
    */
    const string newAccNum = getRandomNum();
    const auto newUser = new User(userName, newAccNum);
    users[newAccNum] = newUser;
}

void Bank::getAllUsers()
{
    for (auto & [fst, snd]: users)
    {
        std::cout << fst << " " << snd->userName << std::endl;
    }
}



