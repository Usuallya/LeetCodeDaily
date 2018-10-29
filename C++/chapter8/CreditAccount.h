//
// Created by hadoop on 18-10-29.
//

#ifndef CHAPTER8_CREDITACCOUNT_H
#define CHAPTER8_CREDITACCOUNT_H


#include "Account.h"
#include "Accumulator.h"

class CreditAccount : public Account{
    Accumulator acc;
    double credit;
    double rate;
    double fee;
    double getDebt() const;
public:
    CreditAccount(Date date,string id,double credit,double rate,double fee);

    double getCredit() const;

    double getRate() const;

    double getFee() const;

    double getAvailableCredit() const;

    void deposit(Date date,double amount,string desc);
    void withdraw(Date date,double amount,string desc);
    void settle(Date date);
    virtual void show() const;

};

#endif //CHAPTER8_CREDITACCOUNT_H
