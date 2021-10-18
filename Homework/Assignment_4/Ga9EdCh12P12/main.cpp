/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on October 17, 2021, 9:59 PM
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
void display(CorpDiv, float *, fstream &);
void corpDat(CorpDiv, float *, fstream &);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    fstream CorpDat("corpdat.txt",ios::out);
    float crpQtr[4]={0, 0, 0, 0};
    
    //Initialize Variables
    CorpDiv north, south, east, west, corp;
    
    //Process or map Inputs to Outputs
    north.name="North";
    south.name="South";
    east.name= "East";
    west.name= "West";
    corp.name="Corporation Total";
    
    // Display Outputs
    display(north, crpQtr, CorpDat);
    display(east,  crpQtr,  CorpDat);
    display(west,  crpQtr,  CorpDat);
    display(east,  crpQtr,  CorpDat);
    corpDat(corp,  crpQtr,  CorpDat);
    
    CorpDat.close();
    //Exit stage right!
    return 0;
}

void display(CorpDiv name, float *crpQtr, fstream &CorpDat){
    CorpDat<<fixed<<showpoint<<setprecision(2);
    cout<<name.name<<endl;
    CorpDat<<"Corp Name: "<<name.name<<endl;
    
    cout<<"Enter first-quarter sales:"<<endl;
    cin>>name.qrtrsls[0];
    CorpDat<<"Quarter 1:$ "<<name.qrtrsls[0]<<endl;
    crpQtr[0]+=name.qrtrsls[0];
    
    cout<<"Enter second-quarter sales:"<<endl;
    cin>>name.qrtrsls[1];
    CorpDat<<"Quarter 2:$ "<<name.qrtrsls[1]<<endl;
    crpQtr[1]+=name.qrtrsls[1];
    
    cout<<"Enter third-quarter sales:"<<endl;
    cin>>name.qrtrsls[2];
    CorpDat<<"Quarter 3:$ "<<name.qrtrsls[2]<<endl;
    crpQtr[2]+=name.qrtrsls[2];
    
    cout<<"Enter fourth-quarter sales:"<<endl;
    cin>>name.qrtrsls[3];
    CorpDat<<"Quarter 4:$ "<<name.qrtrsls[3]<<endl;
    crpQtr[3]+=name.qrtrsls[3];
    
    name.total=name.qrtrsls[0]+name.qrtrsls[1]+name.qrtrsls[2]+name.qrtrsls[3];
    CorpDat<<"Total Annual sales:$"<<name.total<<endl;
    CorpDat<<"Average Quarterly Sales:$"<<name.total/4<<endl;
    CorpDat<<endl;
}

void corpDat(CorpDiv corp, float *crpQtr, fstream &CorpDat){
    CorpDat<<"Corporation Sales Data..."<<endl;
    CorpDat<<"Quarter 1:$ "<<crpQtr[0]<<endl;
    CorpDat<<"Quarter 2:$ "<<crpQtr[1]<<endl;
    CorpDat<<"Quarter 3:$ "<<crpQtr[2]<<endl;
    CorpDat<<"Quarter 4:$ "<<crpQtr[3]<<endl;
    CorpDat<<"Total Annual Sales:$ "<<crpQtr[0]+crpQtr[1]+crpQtr[2]+crpQtr[3]
            <<endl;
    
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(crpQtr[j]<crpQtr[i]){
                swap(crpQtr[i],crpQtr[j]);
            }
        }
    }
    
    CorpDat<<"Lowest  Quarter Sales:$ "<<crpQtr[0]<<endl;
    CorpDat<<"Highest Quarter Sales:$ "<<crpQtr[3]<<endl;
}