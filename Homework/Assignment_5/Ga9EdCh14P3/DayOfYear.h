/* 
 * File:   DayOfYear.h
 * Author: Paul
 *
 * Created on November 16, 2021, 12:16 PM
 */

#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <string>
using namespace std;

class DayOfYear{
private:
    int day,
        months[13]={0,31,59,90,120,151,181,212,243,273,304,334,365},
        month=0;
public:
    DayOfYear(int d){
        day=d;
    }
    DayOfYear(int d, string m);
    DayOfYear operator++(int){
        DayOfYear date(day);
        day++;
        if(day>365){
            day=1;
        }
        return date;
    }
    DayOfYear operator--(int){
        DayOfYear date(day);
        day--;
        if(day<1){
            day=365;
        }
        return date;
    }
    void print();
};

#endif /* DAYOFYEAR_H */

