/* 
 * File:   Employee.h
 * Author: Paul
 *
 * Created on November 15, 2021, 6:07 PM
 */


#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee{
private:
    string name,
           department,
           position;
    int idNumber;
public:
    Employee(string n, string d, string p, int id){
        name=n,department=d,position=p;
        idNumber=id;
    }
    Employee(string n,int id){
        name=n,department="",position="";
        idNumber=id;
    }
    Employee(){
        name="",department="",position="";
        idNumber=0;
    }
    string getName(){
        return name;
    }
    string getDep(){
        return department;
    }
    string getPos(){
        return position;
    }
    int getId(){
        return idNumber;
    }
    void setName(string n){
        name=n;
    }
    void setDep(string d){
        department=d;
    }
    void setPos(string p){
        position=p;
    }
    void setId(int id){
        idNumber=id;
    }
};

#endif /* EMPLOYEE_H */

