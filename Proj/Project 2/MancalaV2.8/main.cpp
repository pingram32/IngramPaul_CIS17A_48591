/* 
 * File:   main.cpp
 * Author: Paul Ingram 
 * Created on December 8, 2021, 12:30 PM
 * Purpose:  Mancala 2
 */

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>
#include <string>
#include <iomanip>
#include "SimBots.h"
using namespace std;

//User Libraries
enum Turn {PLRONE,PLRTWO};
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    string    name[2]={"",""};
    int       curplr=1,
              cell,
              simgame,
              score[]={0,0};
    bool goAgain;
    GameBoard board(SIZE);
    Player player[2];
    //Initialize all known variables
  
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"This is Mancala"<<endl;
    cout<<"1. Simulate Game"<<endl;
    cout<<"2. Simulate Game Between Two Bots"<<endl;
    cout<<"3. Custom   Game"<<endl;
    cin>>simgame;
    
    //Player enters an [1-2] to decide which object to instantiate
    if(simgame==1){
        string n;
        int p;
        
        //Determine which player object to set as a bot by gathering preference
        cout<<"Enter name and number of which player you choose to play (1,2)"
                <<endl;
        cin>>n>>p;
        
        //Create a simulate class and "simulate" a game
        Simulate simulate(n,p);
        simulate.simGame();
    }
    else if (simgame==2){
        SimBots sim;
        sim.simBots();
    }
    else{
        //Initialize name array for the player object
        cout<<"Enter Player One's Name: ";
        cin>>name[0];
        cout<<"Enter Player Two's Name: ";
        cin>>name[1];
        
        //Set name member variable in player class
        player[0].setName(name[0]);
        player[1].setName(name[1]);
        board.showBoard();
        do{         
            //Determine the current player then their cell choice
            if(curplr==1){  
                cout<<player[0].getName()<<", select the cell you wish to play "
                        <<"(1-6 Left to Right)"<<endl;
                cin>>cell;
                
                goAgain=board.playCell(cell,curplr);
                
                while(goAgain){
                    board.showBoard();
                    cout<<"You Got Another Turn"<<endl;
                    cout<<"Enter Your Cell Choice: ";
                    cin>>cell;
                    
                    goAgain=board.playCell(cell,curplr);
                }
                board.showBoard();
                cout<<endl;
            }
            //Player two choice
            else{
                cout<<player[1].getName()<<", select the cell you wish to play "
                        <<"(1-6 Left to Right)"<<endl;
                cin>>cell;

                goAgain=board.playCell(cell,curplr);
                
                while(goAgain){
                    board.showBoard();
                    cout<<"You Got Another Turn"<<endl;
                    cout<<"Enter Your Cell Choice: ";
                    cin>>cell;
                    
                    goAgain=board.playCell(cell,curplr);
                }
                board.showBoard();
                cout<<endl;
            }
            
            //Return the board after each play
            board.showBoard();
            
            //Current player if-else alternates turns
            if(curplr==PLRONE+1){
                curplr=PLRTWO+1;
            }
            else{
                curplr=PLRONE+1;
            }
            
        }while(board.gameOver(curplr-1)); //Checks the last player's side for 0
        
        //Stop receiving input once game is over 
        cout<<"End of Game"<<endl;
    
        //Initialize score array for player object
        score[0]=board[7]+board[6]+board[5]+board[3]+board[2]+board[1];
        score[1]=board[8]+board[9]+board[10]+board[11]+board[12]+board[13];
    
        //Set player member variables to respective scores
        player[0].setScore(score[0]);
        player[1].setScore(score[1]);
    
        //Output end game screen
        if(player[0].getScore()>player[1].getScore()){
            cout<<player[0].getName()<<" Wins !"<<endl;
            cout<<"Player 1 Score: "<<player[0].getScore()<<endl;
            cout<<"Player 2 Score: "<<player[1].getScore()<<endl;
        }
        else{
            cout<<player[1].getName()<<" Wins !"<<endl;
            cout<<"Player 1 Score: "<<player[0].getScore()<<endl;
            cout<<"Player 2 Score: "<<player[1].getScore()<<endl;
        }
    }
   
    //Display the Inputs/Outputs
   
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    return 0;
}
