//
// Created by hadoop on 18-10-29.
//

#ifndef CHAPTER7_EXTENDS_CREDITACCOUNT_H
#define CHAPTER7_EXTENDS_CREDITACCOUNT_H


#include "Account.h"
#include "Accumulator.h"
#include "Date.h"

//两个派生类虽然具有相同的成员函数deposit、withdraw和settle 但是由于其实现不同，只能在派生类中给出他们的实现，因此他们是彼此独立的函数
//正因为这样，需要明确知道一个对象的具体类型之后，才能够调用它的具体函数，也正因为这样，不能将这三个类的对象放在一个数组中。
//要解决这个问题，就得利用多态性

class CreditAccount : public Account{
    Accumulator acc;
    double credit;
    double rate;
    double fee;
    double getDebt() const;
public:
    CreditAccount(Date date,int id,double credit,double rate,double fee);

    double getCredit() const;

    double getRate() const;

    double getFee() const;

    double getAvailableCredit() const;
    void deposit(Date date,double amount,string desc);
    void withdraw(Date date,double amount,string desc);
    void settle(Date date);
    void show() const;
};


#endif //CHAPTER7_EXTENDS_CREDITACCOUNT_H
