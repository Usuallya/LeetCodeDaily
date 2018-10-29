//
// Created by hadoop on 18-10-29.
//

#ifndef CHAPTER8_DATE_H
#define CHAPTER8_DATE_H

class AccountException;

class Date {
    int year;
    int month;
    int day;
    int totalDays;
public:
    Date(int year, int month, int day);

    int getYear() const;

    int getMonth() const;

    int getDay() const;

    int getMaxDay() const;

    bool isLeapYear() const;

    void show() const;

    int operator -(Date date) const;
};
#endif

