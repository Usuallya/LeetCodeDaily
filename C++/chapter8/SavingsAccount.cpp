//
// Created by hadoop on 18-10-29.
//

#include "SavingsAccount.h"
#include "AccountException.h"
#include <iostream>
#include <cmath>
#include "Date.h"
using namespace std;

int SavingsAccount::total = 0;



SavingsAccount::SavingsAccount(const Date &date, const string &id, double rate) : Account(date, id), rate(rate) {

}



int SavingsAccount::getTotal() {
    return total;
}

double SavingsAccount::getRate() const {
    return rate;
}

void SavingsAccount::deposit(Date date, double amount, string desc) {
    record(date,amount,desc);
}

void SavingsAccount::withdraw(Date date, double amount, string desc) {
    if(amount>getBalance())
        throw new AccountException("Not Enough Money");
    else
        record(date,-amount,desc);

}

void SavingsAccount::forSaving() {
    cout<<"for Saving!";
}

void SavingsAccount::show() const {
    cout<<"SavingAccount"<<getId()<<endl;
}

void SavingsAccount::record(Date date, double amount, string desc) {
    int dGap = date-getDate();
    double value = dGap*getBalance()*rate;
    setBalance(value+amount);
    setDate(date);
}

SavingsAccount::~SavingsAccount() {
    cout<<"An SavingsAccount is destroying!"<<endl;
}
