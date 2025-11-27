#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "BankAccount.h"

class SavingsAccount : public BankAccount {
private:
    double minBalance;
    double withdrawalLimit;

public:
    SavingsAccount(string accNum, string holder, double bal, int p);
    void withdraw(double amount) override;
};

#endif
