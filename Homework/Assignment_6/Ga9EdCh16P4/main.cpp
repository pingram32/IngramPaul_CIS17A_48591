/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on November 28, 2021, 3:48 PM
 * Purpose:  Chapter 16 Problem 4
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes
template <class T>
T absVal(T num){
    if(num>0){
        return num;
    }
    else{
        return -num;
    }
}
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    float f;
    int   i;
    //Initialize all known variables

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Enter a float to find absolute value: ";
    cin>>f;
    cout<<"Absolute Value: "<<absVal(f)<<endl;
    
    cout<<"Enter an int to find absolute value : ";
    cin>>i;
    cout<<"Absolute Value: "<<absVal(i)<<endl;
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}