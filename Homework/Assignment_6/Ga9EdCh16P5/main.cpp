/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on November 28, 2021, 5:27 PM
 * Purpose:  Chapter 16 Problem 5
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>
using namespace std;

//User Libraries
    
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes
template <class T>
void total(T n){
    T total=0, value;

    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" value: ";
        cin>>value;
        total+=value;
    }
    cout<<"Total: "<<total<<endl;
}
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    int i;
    float j;
    char c;
    //Initialize all known variables

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Enter How Many Ints To Add: ";
    cin>>i;
    total(i);
    
    cout<<"Enter How Many Floats To Add: ";
    cin>>j;
    total(j);
   
    cout<<"Enter How Many Chars To Add: ";
    cin>>c;
    c-=48;
    total(c);
    //Display the Inputs/Outputs
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}