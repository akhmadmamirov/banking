#include <iostream>
using namespace std;
#include "bank.h"
// Banking system

/* Bank Class
    has many users
    get getAccBalance
    deposit & withdraw money into user given accNumber

*/

/* User Class
    userName
    accountNumber
    deposit
    withdraw
*/

int main()
{
    cout << "Welcome to Banking!" << endl;
    auto bank = Bank("Chasing");
    cout << "You are banking with " << bank.name << endl;
    cout << "Current users:" << endl;
    bank.addSampleUser("John");
    bank.addUser("Mike");
    bank.addUser("Sarah");
    bank.getAllUsers();
    cout << "Testing with one user" << endl;
    const string sampleAccNum = "111111111";
    User* user =  bank.getUserAcc(sampleAccNum);
    cout << "Depositing: $100 to John" << endl;
    user->deposit(100);
    cout << "User: " << user->userName << " has balance: $" << user->balance << endl;


}