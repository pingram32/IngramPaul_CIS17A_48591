/*
    Author: Paul Ingram
    Date:   September 4th, 2021 12:56pm
    Purpose:Convert a temperature from Fahrenheit to Celsius using a function
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <iomanip>
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes
float celsius(float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed

    //Declare variables
    int tempF;
    
    //Initialize variables
    
    
    //Process, map inputs to outputs
    cout<<"TEMP F       TEMP C"<<endl;
    for(float i=0;i<=20;i++){
        if(i>9){
            cout<<"  "<<i<<" "<<"       "<<celsius(i)<<endl;
        }
        if(i<9){
            cout<<"  "<<i<<" "<<"        "<<celsius(i)<<endl;
        }
    }
    
    //Display your initial conditions as well as outputs.
    
    //Exit stage right
    return 0;
}
float celsius(float i){
    float tempC;
    tempC=(i-32)*5/9;
    return tempC;
}