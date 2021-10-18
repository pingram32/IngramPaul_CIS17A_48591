/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on October 16, 2021, 6:05 PM
 * Purpose:  Write the information of each corporation to a file
 */

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>
#include <iomanip>
using namespace std;

//User Libraries
struct CorpDiv{
        string name;
        float qrtrsls[3],
              total;
};
    
//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void display(CorpDiv, fstream &);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    fstream CorpDat("corpdat.txt",ios::out);
    //Initialize Variables
    CorpDiv north, south, east, west;
    
    //Process or map Inputs to Outputs
    north.name="North";
    south.name="South";
    east.name= "East";
    west.name= "West";
    
    // Display Outputs
    display(north, CorpDat);
    display(east,  CorpDat);
    display(west,  CorpDat);
    display(east,  CorpDat);
    
    CorpDat.close();
    //Exit stage right!
    return 0;
}

void display(CorpDiv name, fstream &CorpDat){
    CorpDat<<fixed<<showpoint<<setprecision(2);
    cout<<name.name<<endl;
    CorpDat<<"Corp Name: "<<name.name<<endl;
    
    cout<<"Enter first-quarter sales:"<<endl;
    cin>>name.qrtrsls[0];
    CorpDat<<"Quarter 1:$ "<<name.qrtrsls[0]<<endl;
    
    cout<<"Enter second-quarter sales:"<<endl;
    cin>>name.qrtrsls[1];
    CorpDat<<"Quarter 2:$ "<<name.qrtrsls[1]<<endl;
    
    cout<<"Enter third-quarter sales:"<<endl;
    cin>>name.qrtrsls[2];
    CorpDat<<"Quarter 3:$ "<<name.qrtrsls[2]<<endl;
    
    cout<<"Enter fourth-quarter sales:"<<endl;
    cin>>name.qrtrsls[3];
    CorpDat<<"Quarter 4:$ "<<name.qrtrsls[3]<<endl;
    CorpDat<<endl;
}