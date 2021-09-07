/*
    Author: Paul Ingram
    Date:   September 3rd, 2021 10:01pm
    Purpose:Write a program that asks the user to enter the month and year then
 * display number of days in that month.
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <iomanip>
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed

    
    //Declare variables
    int month,
        days,
        year;
    
    //Initialize variables
    cout<<"Enter a month (1-12): ";
    cin>>month;
    cout<<"Enter a year: ";
    cin>>year;
    
    switch(month){
        case 12: days=31;break;
        case 11: days=30;break;
        case 10: days=31;break;
        case  9: days=30;break;
        case  8: days=31;break;
        case  7: days=31;break;
        case  6: days=30;break;
        case  5: days=31;break;
        case  4: days=30;break;
        case  3: days=31;break;
        case  1: days=31;break;
    }
    if(month==2){
        if(year%100==0){
            if(year%400==0){
                days=29;
            }
        }
        else if(year%100){
            if(year%4==0){
                days=29;
            }
        }
    }
    //Process, map inputs to outputs
    
    
    //Display your initial conditions as well as outputs.
    cout<<days<<" days";
    
    //Exit stage right
    return 0;
}
