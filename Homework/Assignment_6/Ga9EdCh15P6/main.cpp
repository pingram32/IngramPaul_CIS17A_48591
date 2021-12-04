/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on November 27, 2021, 12:21 PM
 * Purpose:  Chapter 15 Problem 6
 */

//System Libraries
#include <iostream>  //I/O Library
#include "Essay.h"
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    float grammar,
            spelling, 
            corlen,
            content;
    
    //Initialize all known variables

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Enter Grammar Score       : ";
    cin>>grammar;
    cout<<"Enter Spelling Score      : ";
    cin>>spelling;
    cout<<"Enter Correct Length Score: ";
    cin>>corlen;
    cout<<"Enter Content Score       : ";
    cin>>content;
    cout<<endl;
    
    Essay essay(grammar, spelling, corlen, content);
    //Display the Inputs/Outputs
    cout<<"Student Essay Score       : "<<essay.getScore()<<endl;
    cout<<"Student Essay Letter Grade: "<<essay.getLetterGrade();
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}
