//
// Created by hadoop on 18-10-29.
//

#include "CreditAccount.h"
#include <iostream>
#include "Date.h"
using namespace std;
CreditAccount::CreditAccount(const Date &date, const string &id, double credit, double rate, double fee) : Account(date,
                                                                                                                   id),
                                                                                                           credit(credit),
                                                                                                           rate(rate),
                                                                                                           fee(fee) {

}


double CreditAccount::getCredit() const {
    return credit;
}

double CreditAccount::getRate() const {
    return rate;
}

double CreditAccount::getFee() const {
    return fee;
}

//信用卡的存款不产生利息
void CreditAccount::deposit(Date date, double amount, string desc) {
    setBalance(getBalance()+amount);
}
//信用卡消费产生利息
void CreditAccount::withdraw(Date date, double amount, string desc) {
    record(date,amount,desc);
}

void CreditAccount::record(Date date, double amount, string desc) {
    int dGap = getDate()-date;
    fee+=dGap * rate * fee+amount;
    setDate(date);
}


void CreditAccount::show() const {
    cout<<"CreditAccount"<<getId()<<endl;
}

CreditAccount::~CreditAccount() {
    cout<<"CreditAccount is destroying!"<<endl;
}
