#include <iostream>
#include "Account.h"
#include "AccountException.h"
#include "CreditAccount.h"
#include "SavingsAccount.h"
//这一章解决的就是上一章里头，不能将多个类型的对象放到同一个数组里，用循环统一处理的问题。

int main(){
    try {
        Date date(2019, 11, 30);
        Account *ac1 = new CreditAccount(date, "#CE1877656", 100, 0.015, 0);
        Account *ac2 = new SavingsAccount(date, "SA1332452", 0.015);

        ac1->show();
        ac2->show();
        Date date1(2018, 10, 25), date2(2018, 11, 30);

        ac1->withdraw(date,5000,"5000");
        ac1->show();

        delete ac1;
        delete ac2;
    }catch(runtime_error error){
        cout<<error.what()<<"get Exception"<<endl;
    }catch(exception exception1){
        cout<<exception1.what()<<endl;
    }
    cout<<"run over"<<endl;

    return 0;
}