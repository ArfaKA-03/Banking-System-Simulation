#ifndef ATM_H
#define ATM_H

#include "BankAccount.h"

class ATM {
public:
    void startATM(BankAccount *account);

private:
    void showMenu();
    void handleDeposit(BankAccount *account);
    void handleWithdraw(BankAccount *account);
};

#endif
