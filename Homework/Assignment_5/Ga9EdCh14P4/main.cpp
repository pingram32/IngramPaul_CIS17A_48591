/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on November 16, 2021, 5:48 PM
 * Purpose:  Chapter 14 Problem 4
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include "NumDays.h"
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion


//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    const int SIZE=3;
    float hours[SIZE];
    //Initialize all known variables

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Enter the hours for three employees..."<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<"Employee "<<i+1<<": ";
        cin>>hours[i];
    }
    
    NumDays days[SIZE]{NumDays(hours[0]),NumDays(hours[1]),NumDays(hours[2])};
    
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<"Employee "<<i+1<<" Days: "<<days[i].getDays()<<endl;
    }
    cout<<endl;
    
    NumDays combined;
    combined=days[0]+days[2];
    cout<<"Employee 1 and 3 hours combined: "<<combined.getHours()<<endl;
    
    NumDays diff;
    diff=days[2]-days[1];
    cout<<"Employee 3 - Employee 2 hours  : "<<diff.getHours()<<endl;
    
    days[0]++;
    cout<<"Employee 1 hours increment     : "<<days[0].getDays()<<endl;
    
    days[2]--;
    cout<<"Employee 3 hours decrement     : "<<days[2].getDays()<<endl;
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}
