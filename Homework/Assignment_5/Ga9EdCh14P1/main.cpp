/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on November 16, 2021, 11:33 AM
 * Purpose:  Chapter 14 Problem 1
 */

//System Libraries
#include <iostream>  //I/O Library
#include "Numbers.h"
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    int n=-1;
    //Initialize all known variables

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Enter the number you would like to convert"<<endl;
    while(n<0){
        cin>>n;
    }
    Numbers number(n);
    number.print();
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}