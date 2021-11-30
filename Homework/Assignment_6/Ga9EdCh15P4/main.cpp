/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on November 26, 2021, 10:10 PM
 * Purpose:  Chapter 15 Problem 4
 */

//System Libraries
#include <iostream>  //I/O Library
#include "MilTime.h"
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    int milH=-1, milS=-1;
    //Initialize all known variables

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Enter hours in military format: ";
    while(milH>2359 || milH<0){
        cin>>milH;
    }
    cout<<"Enter seconds                 : ";
    while(milS<0 || milS>59){
        cin>>milS;
    }
    cout<<endl;
    
    MilTime time(milH,milS);
    //Display the Inputs/Outputs
    cout<<"12 Hour Format: ";
    cout<<time.getHours()<<":"<<time.getMin()<<":"<<time.getSec()<<" ";
    if(time.getHour()>1159){
        cout<<"P.M."<<endl;
    }
    else{
        cout<<"A.M."<<endl;
    }
    cout<<"24 Hour Format: ";
    cout<<time.getHour()<<":"<<time.getSec()<<endl;
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}