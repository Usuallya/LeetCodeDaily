//
// Created by hadoop on 18-10-29.
//

#ifndef CHAPTER7_EXTENDS_ACCOUNT_H
#define CHAPTER7_EXTENDS_ACCOUNT_H
#include <string>
#include "Date.h"

using namespace std;

class Account {
string id;
double balance;
double total;

protected:
Account(Date date,int id);
void record(Date date,double amount,string desc);
void error(string msg) const;

public:
    int getId() const;
    double getBalance() const;
    void show() const;
    static double getTotal();
};


#endif //CHAPTER7_EXTENDS_ACCOUNT_H
