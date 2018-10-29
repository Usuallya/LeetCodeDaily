//
// Created by hadoop on 18-10-29.
//

#ifndef CHAPTER8_ACCUMULATOR_H
#define CHAPTER8_ACCUMULATOR_H


#include "Date.h"

class Accumulator {
private:
    Date lastDate;
    //被累加数值当前值
    double value;
    //到上次变更为止 被累加数值总和sum
    double sum;
public:
    Accumulator(Date date,double value);
    double getSum(Date date) const;
    void change(Date date,double value);
    void reset(Date date,double value);
};



#endif //CHAPTER8_ACCUMULATOR_H
