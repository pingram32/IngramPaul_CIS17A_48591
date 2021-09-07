/*
    Author: Paul Ingram
    Date:   September 4th, 2021 11:31am
    Purpose:Write a program that will predict the size of the population of 
 * organisms 
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
    int   strtorg,
          day;
    float dayavg;
    
    //Initialize variables
    cout<<"Enter the starting number of organisms          : ";
    cin>>strtorg;
    cout<<"Enter daily average increase (as a percentage)  : ";
    cin>>dayavg;
    cout<<"Enter how many days the organisms will multiply : ";
    cin>>day;
    
    //Process, map inputs to outputs
    if(strtorg<2 || dayavg<0 || day<1){
        return 0;
    }
    for(int i=1;i<=day;i++){
        cout<<"Size at day "<<i<<" : ";
        cout<<static_cast<float>(strtorg)*(((dayavg/100)+1)*i)<<endl;
    }
    
    //Display your initial conditions as well as outputs.
    
    
    //Exit stage right
    return 0;
}
