//
// Created by hadoop on 18-10-29.
//

#include "Date.h"
#include <iostream>
using namespace std;

int Date::getYear() const {
    return year;
}

int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

int Date::getMaxDay() const {
    if(month<=7){
        int flag = 1;
        if(month%2==flag)
            return 31;
        else if(month!=2)
            return 30;
        else
            return isLeapYear()?29:28;
    }else{
        int flag = 0;
        if(month%2==flag)
            return 31;
        else
            return 30;
    }
}

bool Date::isLeapYear() const {
    if(year%100!=0 && year%4==0)
        return true;
    if(year%400==0)
        return true;
    return false;
}

void Date::show() const {
    cout<<"当前日期是："<<year<<"-"<<month<<"-"<<day<<endl;
}

int Date::operator-(Date date) const {
    int yGap = date.getYear()-year;
    int mGap = date.getMonth()-month;
    int dGap = date.getDay()-day;



}
