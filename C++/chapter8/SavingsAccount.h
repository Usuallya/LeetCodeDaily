//
// Created by hadoop on 18-10-29.
//

#ifndef CHAPTER8_SAVINGACCOUNT_H
#define CHAPTER8_SAVINGACCOUNT_H


#include "Account.h"
#include "Accumulator.h"
#include "Date.h"
class SavingsAccount : public Account{
    double rate;
    static int total;
public:

    SavingsAccount(const Date &date, const string &id, double rate);

    static int getTotal();
    double getRate() const;
    virtual void deposit(Date date,double amount,string desc);
    virtual void withdraw(Date date,double amount,string desc);
    virtual void show() const;
    void forSaving();

    virtual ~SavingsAccount();

protected:
    void record(Date date, double amount, string desc) override;

};



#endif //CHAPTER8_SAVINGACCOUNT_H
