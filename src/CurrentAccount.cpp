#include "CurrentAccount.h"
#include <iostream>
using namespace std;

CurrentAccount::CurrentAccount(string accNum, string holder, double bal, int p)
    : BankAccount(accNum, holder, bal, p) {
    overdraftLimit = -50000;
}

void CurrentAccount::withdraw(double amount) {
    if (getBalance() - amount < overdraftLimit) {
        cout << "Error: Overdraft limit reached!" << endl;
        return;
    }

    updateBalance(getBalance() - amount);
    cout << "Withdrawal successful!" << endl;
}
