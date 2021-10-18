/* 
 * File:   main.cpp
 * Author: Paul Ingram 
 * Created on October 14, 2021, 11:52 AM
 * Purpose:  Template which is to be copied for all future
 *           Homework, Labs, Projects, Test, etc...
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
#include <fstream>
#include <cctype>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    string in, out, line;
    
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Enter the name of the file to convert(input.txt): ";
    cin>>in;
    cout<<"Enter the name of the file to write to: ";
    cin>>out;
    
    fstream filein(in, ios::in);
    fstream fileout(out, ios::out);
    
    getline(filein, line); 
    while(filein){
        fileout.put(toupper(line[0]));
        for(int i=1;i<line.size();i++){
            fileout.put(tolower(line[i]));
        }
        fileout<<endl;
        getline(filein,line);
    }
    filein.close();
    fileout.close();
    //Display the Inputs/Outputs
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}