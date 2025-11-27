#include "ATM.h"
#include <iostream>
using namespace std;

void ATM::startATM(BankAccount *account) {
    int pin;
    cout << "Enter PIN: ";
    cin >> pin;

    if (!account->verifyPin(pin)) {
        cout << "Incorrect PIN!" << endl;
        return;
    }

    int choice;
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: handleWithdraw(account); break;
            case 2: handleDeposit(account); break;
            case 3: cout << "Balance: " << account->getBalance() << endl; break;
            case 4: cout << "Thank you!" << endl; break;
            default: cout << "Invalid option!" << endl;
        }
    } while (choice != 4);
}

void ATM::showMenu() {
    cout << "\n--- ATM Menu ---\n";
    cout << "1. Withdraw\n";
    cout << "2. Deposit\n";
    cout << "3. Check Balance\n";
    cout << "4. Exit\n";
    cout << "Enter choice: ";
}

void ATM::handleDeposit(BankAccount *account) {
    double amount;
    cout << "Enter deposit amount: ";
    cin >> amount;
    account->deposit(amount);
}

void ATM::handleWithdraw(BankAccount *account) {
    double amount;
    cout << "Enter withdrawal amount: ";
    cin >> amount;
    account->withdraw(amount);
}
