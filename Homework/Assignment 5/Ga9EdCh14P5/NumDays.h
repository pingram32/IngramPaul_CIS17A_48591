/* 
 * File:   NumDays.h
 * Author: Paul
 *
 * Created on November 16, 2021, 5:54 PM
 */

#ifndef NUMDAYS_H
#define NUMDAYS_H

class NumDays{
private:
    float hours,
          days;
public:
    NumDays(){
        hours=0;
    }
    NumDays(float h){
        hours=h;
        days=hours/8;
    }
    float getHours(){
        return hours;
    }
    float getDays(){
        return days;
    }
    void setHours(float h){
        hours=h;
    }
    void setDays(float h){
        days=h/8;
    }
    NumDays operator+(const NumDays &right){
        NumDays temp(hours);
        temp.hours+= right.hours;
        return temp;
    }
    NumDays operator-(const NumDays &right){
        NumDays temp(hours);
        temp.hours-=right.hours;
        return temp;
    }
    NumDays operator++(int){
        NumDays temp(hours);
        hours++;
        setDays(hours);
        return temp;
    }
    NumDays operator--(int){
        NumDays temp(hours);
        hours--;
        setDays(hours);
        return temp;
    }
};

#endif /* NUMDAYS_H */

