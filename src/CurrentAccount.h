#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H

#include "BankAccount.h"

class CurrentAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CurrentAccount(string accNum, string holder, double bal, int p);
    void withdraw(double amount) override;
};

#endif
