/*
    Author: Paul Ingram
    Date:   September 6th, 2021 4:52pm
    Purpose:Modify a given binarysearch function so it searches an array of
 * strings 
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <iomanip>
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes
int binarySearch(string [],const int, string);
void sort(string [], const int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed

    //Declare variables
    string name;
    const int NUM_NAMES = 20;
    string names [NUM_NAMES]={"Collins, Bill", "Smith, Bart", "Allen, Jim", 
                              "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
                              "Taylor, Terri", "Johnson, Jill", 
                              "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
                              "James, Jean", "Weaver, Jim", "Pore, Bob", 
                              "Rutherford, Greg", "Javens, Renee", 
                              "Harrison, Rose", "Setzer, Cathy",
                              "Pike, Gordon", "Holland, Beth" };
    
    //Initialize variables
    
    
    //Process, map inputs to outputs
    
    
    //Display your initial conditions as well as outputs.
    cout<<"Which name do you wish to search: ";
    getline(cin, name);
    sort(names,NUM_NAMES);
    
    for(int i=0;i<NUM_NAMES;i++){
        cout<<i<<": "<<names[i]<<endl;
    }
    cout<<endl;
    cout<<"Name found at position "<<
            binarySearch(names,NUM_NAMES,name);
    
    //Exit stage right
    return 0;
}
void sort(string names[],const int NUM_NAMES){
    for(int i=0;i<NUM_NAMES;i++){
        for(int j=i+1;j<NUM_NAMES;j++){
            if(names[j] < names[i])
                swap(names[j],names[i]);
        }
    }
}
int binarySearch(string names[],const int NUM_NAMES,string name){
    int first = 0,
        last = NUM_NAMES -1,
        middle,
        position = -1;
    bool found = false;
    while(!found && first<=last){
        middle = (first + last) / 2;
        if(names[middle] == name){
            found = true;
            position = middle;
        }
        else if(names[middle] > name){
            last = middle -1;
        }
        else{
            first = middle + 1;
        }
    }
    return position;
}