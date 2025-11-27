#include "SavingsAccount.h"
#include <iostream>
using namespace std;

SavingsAccount::SavingsAccount(string accNum, string holder, double bal, int p)
    : BankAccount(accNum, holder, bal, p) {
    minBalance = 1000;
    withdrawalLimit = 20000;
}

void SavingsAccount::withdraw(double amount) {
    if (amount > withdrawalLimit) {
        cout << "Error: Daily withdrawal limit exceeded!" << endl;
        return;
    }

    if (getBalance() - amount < minBalance) {
        cout << "Error: Cannot go below minimum balance!" << endl;
        return;
    }

    updateBalance(getBalance() - amount);
    cout << "Withdrawal successful!" << endl;
}
