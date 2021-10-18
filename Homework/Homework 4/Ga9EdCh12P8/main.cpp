/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on October 16, 2021, 9:38 AM
 * Purpose:  Template which is to be copied for all future
 *           Homework, Labs, Projects, Test, etc...
 */

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion


//Function Prototypes
void aToF(fstream &, int *, int);
void fToA(fstream &, int *, int);

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    int size=10;
    fstream binFle;
    
    //Declare all variables for this function
    int aryin[]={1,2,3,4,5,6,7,8,9,10},
        aryout[size];
    
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    aToF(binFle, aryin, size);
    fToA(binFle, aryout, size);

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}
void aToF(fstream &binFle, int *aryin, int size){
    binFle.open("binary.dat", ios::out | ios::binary);
    cout<<"Writing to the file..."<<endl;
    for(int i=0;i<size;i++){
        binFle.write(reinterpret_cast<char*>(&aryin[i]), sizeof(aryin[i]));
    }
    binFle.close();
}

void fToA(fstream &binFle, int *aryout, int size){
    binFle.open("binary.dat", ios::in | ios::binary);
    cout<<"Writing from file to array..."<<endl;
    
    for(int i=0;i<size;i++){
        binFle.read(reinterpret_cast<char*>(&aryout[i]), sizeof(aryout[i]));
    }
    
    cout<<"Reading data from the array..."<<endl;
    for(int i=0;i<size;i++){
        cout<<aryout[i]<<" ";
    }
    
    binFle.close();
}