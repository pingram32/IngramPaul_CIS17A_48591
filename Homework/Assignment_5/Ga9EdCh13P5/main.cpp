/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on November 13, 2021, 2:00 PM
 * Purpose:  Chapter 13 problem 5
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include "RetailItem.h"
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
    string desc[SIZE];
    int units[SIZE];
    float price[SIZE];

    
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    for(int i=0;i<SIZE;i++){
        cout<<"Enter Retail Item Description"<<endl;
        getline(cin,desc[i]);
        cout<<"Enter Retail Item Units"<<endl;
        cin>>units[i];
        cout<<"Enter Retail Item Price"<<endl;
        cin>>price[i];
        cin.ignore();
    }
    //Display the Inputs/Outputs
    RetailItem item[SIZE]={RetailItem(desc[0],units[0],price[0]),
                           RetailItem(desc[1],units[1],price[1]),
                           RetailItem(desc[2],units[2],price[2])};
    
    for(int i=0;i<SIZE;i++){
        cout<<"Item "<<i+1<<" "<<item[i].getDesc()<<" "<<item[i].getUnits()<<" "<<
                item[i].getPrice()<<endl;
    }
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}