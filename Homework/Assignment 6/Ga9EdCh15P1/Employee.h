/* 
 * File:   Employee.h
 * Author: Paul
 *
 * Created on November 25, 2021, 3:11 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee{
private:
    string name,
            number,
            hire;
public:
    Employee(){
        name="",number="",hire="";
    }
    Employee(string n, string num, string h){
        name=n,number=num,hire=h;
    }
    string getName() const{
        return name;
    }
    string getNumber() const{
        return number;
    }
    string getHire() const{
        return hire;
    }
    void setName(string n){
        name=n;
    }
    void setNumber(string num){
        number=num;
    }
    void setHire(string h){
        hire=h;
    }
};

#endif /* EMPLOYEE_H */

