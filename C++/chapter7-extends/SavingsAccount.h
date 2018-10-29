//
// Created by hadoop on 18-10-29.
//

#ifndef CHAPTER7_EXTENDS_SAVINGSACCOUNT_H
#define CHAPTER7_EXTENDS_SAVINGSACCOUNT_H
#include "Account.h"
#include "Accumulator.h"
#include "Date.h"

class SavingsAccount :public Account{
Accumulator acc;
double rate;

public:
    SavingsAccount(Date date,int id,double rate):Account(date,id),rate(rate){

    }
    double getRate() const;
    void deposit(Date date,double amount,string desc);
    void withdraw(Date date,double amount,string desc);
    void settle(Date date);
};


#endif //CHAPTER7_EXTENDS_SAVINGSACCOUNT_H
