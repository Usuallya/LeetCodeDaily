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
    double total;
    Date date;

protected:
    Account(Date date,string id);
    virtual void record(Date date,double amount,string desc)=0;
    void error(string msg) const;

public:
    string getId() const;
    double getBalance() const;
    //引入纯虚函数
    void setDate(Date date);
    Date getDate() const;
    virtual void show() const =0;
    double getTotal();
};

#endif //CHAPTER8_ACCOUNT_H
