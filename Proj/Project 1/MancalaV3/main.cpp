/* 
 * File:   main.cpp
 * Author: Paul Ingram 
 * Created on November 8, 2021, 6:05 PM
 * Purpose:  Mancala
 */

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>
#include <string>
using namespace std;

//User Libraries
struct Player{
    string name[2]={"Player 1","Player 2"};
    int score;
};
struct Board{
    const int SIZE=14;
    int cell[SIZE]{4,4,4,4,4,4,0,4,4,4,4,4,4,0};
    Player *player[2];
};
enum Turn {PLRONE,PLRTWO};
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes
Player* getplrdat(int);
void plyrturn(int,Board *);
void writebrd(fstream &, Board *,string);
void showboard(fstream &, string);
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    string table="board.dat";
    Board *board=new Board;
    Player *player=new Player[2];
    int curplr=PLRONE+1,
        cell,
        choice,
        totone=board->cell[5]+board->cell[4]+board->cell[3]+board->cell[2]+
            board->cell[1]+board->cell[0],
        tottwo=board->cell[7]+board->cell[8]+board->cell[9]+board->cell[10]+
            board->cell[11]+board->cell[12];
        
    fstream game;
    //Initialize all known variables
  
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    cout<<"This is Mancala"<<endl;
    
    do{
        if(curplr==PLRONE+1){
            writebrd(game,board,table);
            showboard(game,table);

            cout<<endl<<"Player "<<curplr<<", select the cell you wish to play "
                    <<"(1-6 Left to Right)"<<endl;
            cin>>choice;

            plyrturn(choice,board);
            curplr++;
        }
        else{
            writebrd(game,board,table);
            showboard(game,table);

            cout<<endl<<"Player "<<curplr<<", select the cell you wish to play "
                    <<"(1-6 Left to Right)"<<endl;
            cin>>choice;

            plyrturn(choice,board);
            curplr--;
        }
    }while(totone!=0 || tottwo!=0);
    //Display the Inputs/Outputs
   
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}
void showboard(fstream &game,string table){
    int line[81];
    game.open(table,ios::in | ios::binary);
    game.read(reinterpret_cast<char *>(line),sizeof(line));
    
    cout<<"  |"<<line[5]<<"|"<<line[4]<<"|"<<line[3]<<"|"<<
            line[2]<<"|"<<line[1]<<"|"<<line[0]<<"|  "<<endl;

    cout<<line[6]<<"|=============|"<<line[13]<<endl;

    cout<<"  |"<<line[7]<<"|"<<line[8]<<"|"<<line[9]<<"|"<<
            line[10]<<"|"<<line[11]<<"|"<<line[12]<<"|  "<<endl;
    game.close();
}
void writebrd(fstream &game,Board *board,string table){
    game.open(table,ios::out | ios::binary);
    game.write(reinterpret_cast<char*>(board->cell),sizeof(board->cell));
    game.close();
}
void plyrturn(int cell,Board *board){
    int marbs;
    if(cell==1){
        int count=6,
            marbs=board->cell[count-1];
        
        board->cell[count-1]=0;
        for(int i=0;i<marbs;i++){
            if(i<7){
                board->cell[count+i]++;
            }
            else{
                count=0;
                board->cell[count+(i-7)]++;
            }
        }
    }
    if(cell==2){
        int count=5,
            marbs=board->cell[count-1];
        board->cell[count-1]=0;
        for(int i=0;i<marbs;i++){
            if(i<8){
                board->cell[count+i]++;
            }
            else{
                count=0;
                board->cell[count+(i-7)]++;
            }
        }
    }
    if(cell==3){
        int count=4,
            marbs=board->cell[count-1];
        board->cell[count-1]=0;
        for(int i=0;i<marbs;i++){
            if(i<9){
                board->cell[count+i]++;
            }
            else{
                count=0;
                board->cell[count+(i-7)]++;
            }
        }
    }
    if(cell==4){
        int count=3,
            marbs=board->cell[count-1];
        board->cell[count-1]=0;
        for(int i=0;i<marbs;i++){
            if(i<10){
                board->cell[count+i]++;
            }
            else{
                count=0;
                board->cell[count+(i-7)]++;
            }
        }
    }
    if(cell==5){
        int count=2,
            marbs=board->cell[count-1];
        board->cell[count-1]=0;
        for(int i=0;i<marbs;i++){
            if(i<11){
                board->cell[count+i]++;
            }
            else{
                count=0;
                board->cell[count+(i-7)]++;
            }
        }
    }
    if(cell==6){
        int count=1,
            marbs=board->cell[count-1];
        board->cell[count-1]=0;
        for(int i=0;i<marbs;i++){
            if(i<12){
                board->cell[count+i]++;
            }
            else{
                count=0;
                board->cell[count+(i-7)]++;
            }
        }
    }
}