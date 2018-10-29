//
// Created by hadoop on 18-10-29.
//

#ifndef CHAPTER8_ACCOUNT_H
#define CHAPTER8_ACCOUNT_H

#include <string>
#include "Date.h"

using namespace std;

class Account {
    string id;
    double balance;
    Date date;
protected:
    Account(Date date,string id);
    virtual void record(Date date,double amount,string desc)=0;
    void error(string msg) const;
public:
    string getId() const;

    double getBalance() const;

    void setDate(Date date);

    virtual void deposit(Date date,double amount,string desc)=0;

    virtual void withdraw(Date date,double amount,string desc)=0;

    void setBalance(double value);

    virtual void show() const =0;

    Date getDate() const;

    virtual ~Account();
};

#endif //CHAPTER8_ACCOUNT_H
