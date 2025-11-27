#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
protected:
    string accountNumber;
    string accountHolderName;

private:
    double balance;
    int pin;

public:
    BankAccount(string accNum, string holder, double bal, int p);

    bool verifyPin(int enteredPin);
    void deposit(double amount);
    virtual void withdraw(double amount);
    double getBalance() const;

protected:
    void updateBalance(double newBalance);
};

#endif
