/* 
 * File:   main.cpp
 * Author: Paul Ingram
 * Created on November 14, 2021, 9:14 AM
 * Purpose:  Chapter 13 Problem 6
 */

//System Libraries
#include <iostream>  //I/O Library
#include "Inventory.h"
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    int SIZE;
    
    //Initialize all known variables

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"Enter the amount of Items: ";
    cin>>SIZE;
    Inventory item[SIZE];
    
    for(int i=0;i<SIZE;i++){
        int itemnum,
        quant;
        float cost;
        cout<<"Enter item number: ";
        cin>>itemnum;
        cout<<"Enter quantity   : ";
        cin>>quant;
        cout<<"Enter cost       : ";
        cin>>cost;
        
        item[i].setItemNumber(itemnum);
        item[i].setQuantity(quant);
        item[i].setCost(itemnum);
        item[i].setTotalCost(quant,cost);
        cout<<endl;
    }
    
    for(int i=0;i<SIZE;i++){
        cout<<"Item   "<<i+1<<": "<<item[i].getItemNumber()<<endl;
        cout<<"Quantity    "<<": "<<item[i].getQuantity()<<endl;
        cout<<"Cost        "<<":$ "<<item[i].getCost()<<endl;
        cout<<"Total Cost  "<<":$ "<<item[i].getQuantity()<<endl;
        cout<<endl;
    }
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}