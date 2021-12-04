/* 
 * File:   main.cpp
 * Author: Paul Ingram 
 * Created on November 10, 2021, 11:08 AM
 * Purpose:  Mancala
 */

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>
#include <string>
#include <iomanip>
#include "Player.h"
#include "Board.h"
using namespace std;

//User Libraries
const int SIZE=14;
enum Turn {PLRONE,PLRTWO};
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototype
void showBoard();
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    string name[2]={"",""};
    int curplr=1;
    Board<int> board(SIZE);
    //Initialize all known variables
  
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"This is Mancala"<<endl;
    cout<<"Enter Player One's Name: ";
    cin>>name[0];
    cout<<"Enter Player Two's Name: ";
    cin>>name[1];
    
    Player player[2]{name[0]};
    player[1].setName(name[1]);
    
    board.showBoard();
    
    if(curplr==PLRONE+1){  
        cout<<player[0].getName()<<", select the cell you wish to play "
                <<"(1-6 Left to Right)"<<endl;
    }
    else{
        cout<<player[1].getName()<<", select the cell you wish to play "
                <<"(1-6 Left to Right)"<<endl;
    }
    if(curplr==PLRONE+1){
        curplr=PLRTWO+1;
    }
    else{
        curplr=PLRONE+1;
    }
    
    
    //Display the Inputs/Outputs
   
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    return 0;
}
