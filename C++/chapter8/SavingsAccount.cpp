//
// Created by hadoop on 18-10-29.
//

#include "SavingsAccount.h"
#include <iostream>
#include <cmath>

using namespace std;


double SavingsAccount::getRate() const {
    return rate;
}


void SavingsAccount::withdraw(int date, double amount) {
    lastDate=date;
    balance-=amount;
    cout<<date<<"\t#"<<id<<"\t"<<balance<<endl;
}

SavingsAccount::SavingsAccount(int date, int id, double rate)
        :id(id),balance(0),rate(rate),lastDate(date),accumulation(0) {
    cout<<date<<"\t#"<<id<<"is created"<<endl;
}

void SavingsAccount::deposit(int date, double amount) {
    balance += amount;
    lastDate = date;
    cout<<date<<"\t#"<<id<<"\t"<<balance<<endl;
}

void SavingsAccount::record(int date,double amount){
    accumulation=accumulate(date);
    lastDate = date;
    amount=floor(amount*100+0.5)/100;
    balance+=amount;
    cout<<date<<"\t#"<<id<<"\t"<<amount<<"\t"<<balance<<endl;
}

void SavingsAccount::show() const{
    cout<<"#"<<getId()<<"\tBalance:"<<getBalance();
}

//结算利息
void SavingsAccount::settle(int date) {
    //计算年息
    double interest = accumulate(date) * rate / 365;
    if (interest != 0)
        record(date, interest);
    accumulation = 0;
}