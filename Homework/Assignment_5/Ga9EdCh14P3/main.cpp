/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on November 16, 2021, 12:05 PM
 * Purpose:  Chapter 14 Problem 2
 */

//System Libraries
#include <iostream>  //I/O Library
#include "DayOfYear.h"
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes
bool inRange(int, string);
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    int day=-1;
    string month;
    bool nRange;
    //Initialize all known variables

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Enter which day to convert"<<endl;
    while(day<0 || !nRange){
        cin>>month;
        cin>>day;
        nRange=inRange(day,month);
    }
    cout<<endl;
    
    cout<<"Now using operator overflow with classes"<<endl;
    DayOfYear date(day);
    date.print();
    cout<<endl;
    
    date++;
    date.print();
    cout<<endl;
    
    date--;
    date--;
    date.print();
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}
bool inRange(int day, string month){
        if(month=="January" && day>31){
            return false;
        }
        else if(month=="February" && day>28){
            return false;
        }
        else if(month=="March" && day>31){
            return false;
        }
        else if(month=="April" && day>30){
            return false;
        }
        else if(month=="May" && day>31){
            return false;
        }
        else if(month=="June" && day>30){
            return false;
        }
        else if(month=="July" && day>31){
            return false;
        }
        else if(month=="August" && day>31){
            return false;
        }
        else if(month=="September" && day>30){
            return false;
        } 
        else if(month=="October" && day>31){
            return false;
        }
        else if(month=="November" && day>30){
            return false;
        }
        else if(month=="December" && day>31){
            return false;
        }
        else{
            return true;
        }
}