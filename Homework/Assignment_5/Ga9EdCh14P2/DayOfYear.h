/* 
 * File:   DayOfYear.h
 * Author: Paul
 *
 * Created on November 16, 2021, 12:16 PM
 */

#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

class DayOfYear{
private:
    int day,
        months[13]={0,31,59,90,120,151,181,212,243,273,304,334,365},
        month=0;
public:
    DayOfYear(int d){
        day=d;
    }
    void print();
};

#endif /* DAYOFYEAR_H */

