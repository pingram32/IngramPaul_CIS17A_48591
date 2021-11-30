
/* 
 * File:   TimeOff.h
 * Author: Paul
 *
 * Created on November 16, 2021, 7:12 PM
 */

#ifndef TIMEOFF_H
#define TIMEOFF_H
#include "NumDays.h"
#include <string>
using namespace std;

class TimeOff{
private:
    NumDays maxSickDays,
            sickTaken,
            maxVacation,
            vacTaken,
            maxUnpaid,
            unpaidTaken;
    string name,
           ident;
public:
    TimeOff(float msd, float st, float mv, float vt, float mu, float ut, string n, string iD){
        maxSickDays.setDays(msd);
        sickTaken.setDays(st);
        if(mv<240){
            maxVacation.setDays(mv);
        }
        vacTaken.setDays(vt);
        maxUnpaid.setDays(mu);
        unpaidTaken.setDays(ut);
        name=n;
        ident=iD;
    }
    string getName(){
        return name;
    }
    string getID(){
        return ident;
    }
    float getMaxSD(){
        return maxSickDays.getDays();
    }
    float getSickTaken(){
        return sickTaken.getDays();
    }
    float getMaxVac(){
        return maxVacation.getDays();
    }
    float getVacTaken(){
        return vacTaken.getDays();
    }
    float getMaxUnpaid(){
        return maxUnpaid.getDays();
    }
    float getUnpaidTaken(){
        return unpaidTaken.getDays();
    }
    void setMaxSD(float msd){
        maxSickDays.setDays(msd);
    }
    void setSickTaken(float st){
        sickTaken.setDays(st);
    }
    void setMaxVac(float mv){
        maxVacation.setDays(mv);
    }
    void setVacTaken(float vt){
        vacTaken.setDays(vt);
    }
    void setMaxUnpaid(float mu){
        maxUnpaid.setDays(mu);
    }
    void setUnpaidTaken(float ut){
        unpaidTaken.setDays(ut);
    }
};

#endif /* TIMEOFF_H */

