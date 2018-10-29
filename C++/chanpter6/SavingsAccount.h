//
// Created by hadoop on 18-10-29.
//

#ifndef CHANPTER6_SAVINGSACCOUNT_H
#define CHANPTER6_SAVINGSACCOUNT_H

//综合实例，个人银行账户类
class SavingsAccount {
private:
    int id;
    double balance;
    double rate;
    int lastDate;
    double accumulation;

    void record(int date,double amount);
    //内联函数
    double accumulate(int date) const{
        return accumulation+balance*(date-lastDate);
    }
public:
    SavingsAccount(int date,int id,double rate);
    int getId();
    double getBalance() const;
    double getRate() const;
    void show();
    //存入现金
    void deposit(int date,double amount);
    //取出现金
    void withdraw(int date,double amount);
    //结算利息
    void settle(int date);
};


#endif //CHANPTER6_BANK_H
