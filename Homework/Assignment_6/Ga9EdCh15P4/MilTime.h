/* 
 * File:   MilTime.h
 * Author: Paul
 *
 * Created on November 26, 2021, 10:46 PM
 */

#ifndef MILTIME_H
#define MILTIME_H
#include "Time.h"

class MilTime : public Time{
    private:
        int milHours,
            milSec;
    public:
        MilTime(int h, int s){
            milHours=h,milSec=s;
            hours=h/100,        
            min=h%100;
            sec=s;
            if(hours>12){
                hours-=12;
            }
        }
        void setTime(int h, int s){
            milHours=h,milSec=s;
            int hrs=h/100,
                min=h%100;
            set(hrs,min,s);
        }
        int getHour() const{
            return milHours;
        }
        int getStandHr() const{
            return milHours/100;
        }
};

#endif /* MILTIME_H */

