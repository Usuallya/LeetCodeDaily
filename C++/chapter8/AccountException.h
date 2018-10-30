//
// Created by 王海奇 on 2018/10/29.
//

#ifndef CHAPTER8_ACCOUNTEXCEPTION_H
#define CHAPTER8_ACCOUNTEXCEPTION_H


#include "Account.h"
#include <string>
#include <stdexcept>

class AccountException{
    string id;
    const Account *account;
    string errMsg;
public:
    AccountException(const string &errMsg,const string &id, const Account *account);

    const string &getId() const;

    const Account *getAccount() const;
};


#endif //CHAPTER8_ACCOUNTEXCEPTION_H
