#include <iostream>
#include "SavingsAccount.h"
#include "CurrentAccount.h"
#include "ATM.h"
using namespace std;

int main() {
    cout << "--- ATM Simulation ---\n";

    SavingsAccount sa("1001", "Melon", 50000, 1234);
    CurrentAccount ca("2001", "Melon Business", 100000, 2222);

    BankAccount *account;
    int type;

    cout << "1. Savings Account\n2. Current Account\nSelect account type: ";
    cin >> type;

    if (type == 1) account = &sa;
    else account = &ca;

    ATM atm;
    atm.startATM(account);

    return 0;
}
