/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on November 16, 2021, 7:28 PM
 * Purpose:  Chapter 14 Problem 5
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include "NumDays.h"
#include "TimeOff.h"
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion


//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    float maxSickDays,
            sickTaken,
            maxVacation,
            vacTaken,
            maxUnpaid,
            unpaidTaken;
    string n,
            iD;
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Enter Max Sick Hours      : ";
    cin>>maxSickDays;
    cout<<"Enter Sick Hours Taken    : ";
    cin>>sickTaken;
    cout<<"Enter Max Vacation Hours  : ";
    cin>>maxVacation;
    cout<<"Enter Vacation Hours Taken: ";
    cin>>vacTaken;
    cout<<"Enter Max Unpaid Hours    : ";
    cin>>maxUnpaid;
    cout<<"Enter Unpaid Hours Taken  : ";
    cin>>unpaidTaken;
    cout<<"Enter Employee name       : ";
    cin.ignore();
    getline(cin,n);
    cout<<"Enter Employee ID         : ";
    cin>>iD;
    cout<<endl;
    
    TimeOff day(maxSickDays, sickTaken, maxVacation, vacTaken, maxUnpaid,
                    unpaidTaken,n,iD);
    
    cout<<"Employee              : "<<day.getName()<<endl;
    cout<<"ID                    : "<<day.getID()<<endl;
    cout<<"Max Sick Days         : "<<day.getMaxSD()<<endl;
    cout<<"Sick Days Taken       : "<<day.getSickTaken()<<endl;
    cout<<"Max Vacation Days     : "<<day.getMaxVac()<<endl;
    cout<<"Vacation Days Taken   : "<<day.getVacTaken()<<endl;
    cout<<"Max Unpaid Days       : "<<day.getMaxUnpaid()<<endl;
    cout<<"Unpaid Days Taken     : "<<day.getUnpaidTaken()<<endl;
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}
