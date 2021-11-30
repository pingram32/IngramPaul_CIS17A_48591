/* 
 * File:   TIme.h
 * Author: Paul
 *
 * Created on November 26, 2021, 10:18 PM
 */

#ifndef TIME_H
#define TIME_H

class Time{
protected:
    int hours, min, sec;
public:
    Time(){
        hours=0,min=0,sec=0;
    }
    Time(int h, int m, int s){
        hours=h,min=m,sec=s;
    }
    int getHours() const{
        return hours;
    }
    int getMin() const{
        return min;
    }
    int getSec() const{
        return sec;
    }
    void set(int h, int m, int s){
        hours=h,min=m,sec=s;
    }
};

#endif /* TIME_H */

