#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount(string accNum, string holder, double bal, int p)
    : accountNumber(accNum), accountHolderName(holder), balance(bal), pin(p) {}

bool BankAccount::verifyPin(int enteredPin) {
    return enteredPin == pin;
}

void BankAccount::deposit(double amount) {
    if (amount <= 0) {
        cout << "Invalid amount!" << endl;
        return;
    }
    balance += amount;
    cout << "Deposit successful!" << endl;
}

void BankAccount::withdraw(double amount) {
    cout << "Base withdraw (should be overridden)" << endl;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::updateBalance(double newBalance) {
    balance = newBalance;
}
