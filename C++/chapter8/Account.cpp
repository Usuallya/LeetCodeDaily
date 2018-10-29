//
// Created by hadoop on 18-10-29.
//

#include "Account.h"
#include <iostream>
using namespace std;


Account::Account(Date date, string id):date(date),id(id) {

}


void Account::error(string msg) const {
    cout<<"发生错误"<<msg<<endl;
}

string Account::getId() const {
    return id;
}

double Account::getBalance() const {
    return balance;
}

void Account::setDate(Date date){
    this->date = date;
}
Date Account::getDate() const{
    return date;
}
double Account::getTotal() {
    return total;
}
