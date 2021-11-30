/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on November 3, 2021, 9:05 AM
 * Purpose:  Problem 4 Chapter 13
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>

using namespace std;

//User Libraries
#include "Patient.h"
#include "Procedure.h"
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes
Patient::Patient(string n,string a,string p,string e){
    name=n,
    address=a,
    phone=p,
    emergenc=e;
}
Procedure::Procedure(string n,string p,string c,string d){
    name=n,
    date=d,
    titionr=p,
    charges=c;
}
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    string n,a,p,e;
    
    //Initialize all known variables

    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Enter patient's name, address, phone, and emergency contact in that order"
            <<endl;
    getline(cin,n);
    getline(cin,a);
    getline(cin,p);
    getline(cin,e);
    
    Patient patient(n, a, p, e);
    
    Procedure procedr[3]={Procedure{" "," "," "," "},
                         Procedure{" "," "," "," "},
                         Procedure{" "," "," "," "}};
                         
    for(int i=0;i<3;i++){
        string n,p,c,d;
        cout<<"Enter name of procedure, name of practitioner, charges, and date"<<
                " in that order"<<endl;
        
        getline(cin,n);
        getline(cin,p);
        getline(cin,c);
        getline(cin,d);
        
        procedr[i].setName(n);
        procedr[i].setPract(p);
        procedr[i].setCharge(c);
        procedr[i].setDate(d);
    }
    //Display the Inputs/Outputs
    cout<<endl<<patient.getName()<<endl;
    cout<<endl<<patient.getAd()<<endl;
    cout<<endl<<patient.getPhone()<<endl;
    cout<<endl<<patient.getEmgnc()<<endl;
    
    for(int i=0;i<3;i++){
        cout<<"Procedure         "<<i+1<<": "<<procedr[i].getName()<<endl;
        cout<<"Date               : "<<procedr[i].getDate()<<endl;
        cout<<"Practitioner       : "<<procedr[i].getPrac()<<endl;
        cout<<"Charges            : "<<procedr[i].getCharge()<<endl;
    }
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}