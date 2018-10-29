//
// Created by hadoop on 18-10-29.
//

#include "CreditAccount.h"

CreditAccount::CreditAccount(Date date, string id, double credit, double rate, double fee)
: Account(date,id),credit(credit),rate(rate),fee(fee),acc(date,0){
    //注意，这里初始化组合类对象时，相当于直接调用组合类构造函数，传过去相应参数即可。
}


double CreditAccount::getDebt() const {
    return ;
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

double CreditAccount::getAvailableCredit() const {
    return 0;
}

void CreditAccount::deposit(Date date, double amount, string desc) {

    setDate(date);

}

void CreditAccount::withdraw(Date date, double amount, string desc) {

}

void CreditAccount::settle(Date date) {

}


void CreditAccount::show() const{

}