#include <iostream>
#include "Account.h"
#include "AccountException.h"
#include "CreditAccount.h"
#include "SavingsAccount.h"
//这一章解决的就是上一章里头，不能将多个类型的对象放到同一个数组里，用循环统一处理的问题。

int main(){
    Date date(2018,10,29);
    Account *ac1 = new CreditAccount(date,"#CE1877656",100,0.015,0);
    Account *ac2 = new SavingsAccount(date,"SA1332452",0.015);

    ac1->show();
    ac2->show();

    delete ac1;
    delete ac2;
    return 0;
}