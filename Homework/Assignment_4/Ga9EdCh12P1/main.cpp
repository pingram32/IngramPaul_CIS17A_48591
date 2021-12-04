/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on OCtober 17, 2021, 9:42 AM
 * Purpose:  Template which is to be copied for all future
 *           Homework, Labs, Projects, Test, etc...
 */

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>
#include <string>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion


//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    string line;
    int index=0;
    fstream file("input.txt", ios::in);
    
    //Initialize all known variables
   
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    getline(file,line);
    while(file){
        cout<<line<<endl;
        index++;
        getline(file,line);
    }
    if(index<10){
        cout<<"Read Entire File... My Job Here Is Done."<<endl;
    }
    
    //Display the Inputs/Outputs
    

    //Clean up the code, close files, deallocate memory, etc....
    file.close();
    //Exit stage right
    return 0;
}