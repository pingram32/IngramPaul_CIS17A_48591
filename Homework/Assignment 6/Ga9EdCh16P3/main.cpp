/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on November 28, 2021, 12:11 PM
 * Purpose:  Chapter 16 Problem 3
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes
template <class T>
T findMin(T l, T r){
    if(l>r){
        return r;
    }
    else{
        return l;
    }
}
template <class T>
T findMax(T l, T r){
    if(l>r){
        return l;
    }
    else{
        return r;
    }
}
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    float fminr, fminl,
            fmaxr,fmaxl;
    int   imaxr, imaxl;
    char  cminr, cminl;
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Enter Two Floats to Find Minimum: ";
    cin>>fminl>>fminr;
    cout<<"Minimum: "<<findMin(fminl, fminr)<<endl;
    
    cout<<"Enter Two Ints to Find Maximum: ";
    cin>>imaxl>>imaxr;
    cout<<"Maximum: "<<findMax(imaxl, imaxr)<<endl;
    
    cout<<"Enter Two Chars to Find Minimum: ";
    cin>>cminl>>cminr;
    cout<<"Minimum: "<<findMin(cminl, cminr)<<endl;
    
    cout<<"Enter Two Floats to Find Maximum: ";
    cin>>fmaxl>>fmaxr;
    cout<<"Maximum: "<<findMax(fmaxl, fmaxr)<<endl;
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}



