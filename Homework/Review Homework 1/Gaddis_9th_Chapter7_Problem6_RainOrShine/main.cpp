/*
    Author: Paul Ingram
    Date:   September 4th, 2021 3:37pm
    Purpose:Calculate the number of rainy, cloudy, and sunny days in a span of a 
 * Summer and determine the month with the most rainy days.
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <fstream>
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed

    //Declare variables
    const int SIZE=30,//30 days in a month
              MONTH=3;//3 Months
    int     rainy=0,//Rainy counter
            sunny=0,//Sunny counter
            cloudy=0,//Cloudy counter
            count=0;
    char    month[MONTH][SIZE];//Multidimensional array 

    
    //Initialize variables
    
    
    //Process, map inputs to outputs
    ifstream inputFile;
    inputFile.open("RainOrShine.txt");//Data containing weather report
    for(int i=0;i<3;i++){
        for(int j=0;j<30;j++){
            inputFile >> month[i][j];//Write to array
        }
    }
    inputFile.close();
    
    //Total weather tallies 
    int totrain=0,
        totclod=0,
        totsun=0,
        mostren=0,
        monthco=0;
    
    for(int j=0;j<MONTH;j++){//Tally each month's weather
        for(int i=0;i<30;i++){
            if (month[j][i]=='R'){
                rainy++;
                totrain++;
            }
            else if (month[j][i]=='C'){
                cloudy++;
                totclod++;
            }
            else if (month[j][i]=='S'){
                sunny++;
                totsun++;
            }
//            cout<<month[j][i]<<endl; //Debugging
            
        }
        if(rainy>mostren){ //Counting which month has most rainy
            mostren=rainy;
            monthco++;
        }
        
        cout<<rainy<<": Rainy Days"<<endl;
        cout<<cloudy<<": Cloudy Days"<<endl;
        cout<<sunny<<": Sunny Days"<<endl;
        cout<<endl; 
        rainy=0,
        sunny=0,
        cloudy=0;
    }
    cout<<"Total of All Months"<<endl;
    cout<<totrain<<": Rainy Days"<<endl;
    cout<<totclod<<": Cloudy Days"<<endl;
    cout<<totsun<<": Sunny Days"<<endl;
    cout<<endl;
    
    if(monthco==1){
        cout<<"The month with the most rainy days was June.";
    }
    else if(monthco==2){
        cout<<"The month with the most rainy days was July.";
    }
    if(monthco==3){
        cout<<"The month with the most rainy days was August.";
    }
    //Display your initial conditions as well as outputs.

    //Exit stage right
    return 0;
}