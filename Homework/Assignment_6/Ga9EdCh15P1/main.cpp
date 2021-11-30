/* 
 * File:   main.cpp
 * Author: Paul Ingram 
 * Created on November 25, 2021, 3:10 PM
 * Purpose:  Chapter 15 Problem 1
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
#include "ProductionWorker.h"
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion


//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    string name, number, hire;
    int shift;
    float pay;
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Enter Production Worker Name"<<endl;
    getline(cin, name);
    cout<<"Enter Production Worker Number"<<endl;
    cin>>number;
    cin.ignore();
    cout<<"Enter Production Worker Hire Date"<<endl;
    getline(cin, hire);
    cout<<"Enter Production Worker Shift(1 for Day, 2 for Night)"<<endl;
    cin>>shift;
    cout<<"Enter Production Worker Pay Rate"<<endl;
    cin>>pay;
    
    ProductionWorker worker(shift, pay, name, number, hire);
    
    cout<<endl<<"Employee Name     : "<<worker.getName()<<endl;
    cout<<"Employee Number   : "<<worker.getNumber()<<endl;
    cout<<"Employee Hire Date: "<<worker.getHire()<<endl;
    cout<<"Employee Shift    : "<<worker.getShift()<<endl;
    cout<<"Employee Pay Rate : "<<worker.getPay()<<endl;
    //Display the Inputs/Outputs
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}