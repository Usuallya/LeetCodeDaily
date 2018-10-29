//
// Created by 王海奇 on 2018/10/29.
//

#include "AccountException.h"

const string &AccountException::getId() const {
    return id;
}

const Account *AccountException::getAccount() const {
    return account;
}

AccountException::AccountException(const string &errMsg,const string &id, const Account *account) : id(id),
                                                                                                     account(account),
                                                                                                     errMsg(errMsg) {

}
