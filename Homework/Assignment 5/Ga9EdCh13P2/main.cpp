/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on November 15, 2021, 6:06PM
 * Purpose: Chapter 13 Problem 2
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
#include <iomanip>
#include "Employee.h"
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    const int SIZE=3;
    string name[SIZE],
            dep[SIZE],
            pos[SIZE];
    int id[SIZE];
    Employee emp[SIZE];
    //Initialize all known variables

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    for(int i=0;i<SIZE;i++){
        cout<<"Enter Employee Name, ID, Department, Position"<<endl;
        getline(cin,name[i]);
        cin>>id[i];
        cin.ignore();
        getline(cin,dep[i]);
        getline(cin,pos[i]);
        
        emp[i].setName(name[i]);
        emp[i].setDep(dep[i]);
        emp[i].setPos(pos[i]);
        emp[i].setId(id[i]);
        cout<<endl;
    }
   cout<<"Name"<<setw(15)<<"ID"<<setw(15)<<"Department"<<setw(15)<<"Position"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<emp[i].getName()<<setw(8)<<emp[i].getId()<<setw(12)
                <<emp[i].getDep()<<setw(19)<<emp[i].getPos();
        cout<<endl;
    }
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}