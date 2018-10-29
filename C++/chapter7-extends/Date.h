//
// Created by hadoop on 18-10-29.
//

#ifndef CHAPTER7_EXTENDS_DATE_H
#define CHAPTER7_EXTENDS_DATE_H


class Date {
int year;
int month;
int day;
int totalDays;
public:
    int getYear() const;

    int getMonth() const;

    int getDay() const;

    int getMaxDay() const;

    bool isLeapYear() const;

    void show() const;

    int distance(Date date) const;
};


#endif //CHAPTER7_EXTENDS_DATE_H
