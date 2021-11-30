/* 
 * File:   Procedure.h
 * Author: Paul
 *
 * Created on November 4, 2021, 1:08 AM
 */

#ifndef PROCEDURE_H
#define PROCEDURE_H
#include <string>
class Procedure{
private:
    string name,
           date,
           titionr,
           charges;
public:
    Procedure(string,string,string,string);
    string getName(){
        return name;
    }
    string getDate(){
        return date;
    }
    string getPrac(){
        return titionr;
    }
    string getCharge(){
        return charges;
    }
    void setName(string n){
        name=n;
    }
    void setPract(string p){
        titionr=p;
    }
    void setCharge(string c){
        charges=c;
    }
    void setDate(string d){
         date=d;
    }
};

#endif /* PROCEDURE_H */

