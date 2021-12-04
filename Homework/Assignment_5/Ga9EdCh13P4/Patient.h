/* 
 * File:   Patient.h
 * Author: Paul
 *
 * Created on November 4, 2021, 1:06 AM
 */

#ifndef PATIENT_H
#define PATIENT_H
#include <string>

class Patient{
private:
    string name,
           address,
           phone,
           emergenc;
public:
    Patient(string,string,string,string);
    string getName(){
        return name;
    }
    string getAd(){
        return address;
    }
    string getPhone(){
        return phone;
    }
    string getEmgnc(){
        return emergenc;
    }
    void setName(string n){
        name=n;
    }
    void setAd(string a){
        address=a;
    }
    void setPhone(string p){
        phone=p;
    }
    void setEmgnc(string e){
        emergenc=e;
    }
};

#endif /* PATIENT_H */

