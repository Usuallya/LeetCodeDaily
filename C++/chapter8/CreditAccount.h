//
// Created by hadoop on 18-10-29.
//

#ifndef CHAPTER8_CREDITACCOUNT_H
#define CHAPTER8_CREDITACCOUNT_H


#include "Account.h"
#include "Accumulator.h"
#include "Date.h"

class CreditAccount : public Account{
    double credit;
    double rate;
    //这是信用卡额度
    double fee;
public:
    CreditAccount(const Date &date, const string &id, double credit, double rate, double fee);

    virtual void record(Date date,double amount,string desc);

    double getCredit() const;

    double getRate() const;

    double getFee() const;

    void deposit(Date date,double amount,string desc);

    void withdraw(Date date,double amount,string desc);


    virtual void show() const;

    virtual ~CreditAccount();

};

#endif //CHAPTER8_CREDITACCOUNT_H
