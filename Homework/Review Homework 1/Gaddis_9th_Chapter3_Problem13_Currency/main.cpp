/*
    Author: Paul Ingram
    Date:   September 2nd, 2021 4:30pm
    Purpose:Write a program that converts US dollars to yen and euros
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
    const float YEN_PER_DOLLAR = 109.95,
                EUROS_PER_DOLLAR = 0.84;
    float       usdoll;
    
    //Initialize variables
    cout<<"Enter amount in U.S. Dollars"<<endl;
    cin>>usdoll;
    
    //Process, map inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Amount in Yen   "<<usdoll*YEN_PER_DOLLAR<<endl;
    cout<<"Amount in Euros "<<usdoll*EUROS_PER_DOLLAR<<endl;
    
    //Display your initial conditions as well as outputs.

    //Exit stage right
    return 0;
}