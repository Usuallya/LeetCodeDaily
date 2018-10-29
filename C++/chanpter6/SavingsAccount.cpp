//
// Created by hadoop on 18-10-29.
//

#include "SavingsAccount.h"

#include <iostream>
#include <cmath>

using namespace std;

int SavingsAccount::getId() {
    return id;
}

double SavingsAccount::getBalance() const {
    return balance;
}

double SavingsAccount::getRate() const {
    return rate;
}

void SavingsAccount::show() {
    cout<<"#"<<id<<"\tBalance:"<<balance;
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

//结算利息
void SavingsAccount::settle(int date) {
    //计算年息
    double interest = accumulate(date) * rate / 365;
    if (interest != 0)
        record(date, interest);
    accumulation = 0;
}

int main(){
    SavingsAccount sa0(1,21325302,0.015);
    SavingsAccount sa1(1,58320212,0.015);
    sa0.deposit(5,5000);
    sa1.deposit(25,10000);
    sa0.deposit(45,5500);
    sa1.withdraw(60,4000);
    sa0.settle(90);
    sa1.settle(90);

    sa0.show();cout<<endl;
    sa1.show();cout<<endl;
    return 0;
}