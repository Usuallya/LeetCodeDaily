//
// Created by hadoop on 18-10-29.
//

#ifndef CHAPTER8_SAVINGACCOUNT_H
#define CHAPTER8_SAVINGACCOUNT_H


#include "Account.h"
#include "Accumulator.h"

class SavingsAccount : public Account{
    Accumulator acc;
    double rate;

public:
    SavingsAccount(Date date,int id,double rate):Account(date,id),rate(rate){
    }
    double getRate() const;
    void deposit(Date date,double amount,string desc);
    void withdraw(Date date,double amount,string desc);
    void settle(Date date);
    virtual void show() const;
};



#endif //CHAPTER8_SAVINGACCOUNT_H
