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
#include <iomanip>
using namespace std;

//User Libraries
struct Player{
    string name[2]={"Player 1","Player 2"};
    int score;
};
struct Board{
    const int SIZE=14;
    int cell[14]{4,4,4,4,4,4,0,14,4,4,4,4,4,0};
    Player *player=new Player[2];
};
enum Turn {PLRONE,PLRTWO};
//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes
Board *rtrnscore(int,Board *);
void plrone(int,Board *);
void plrtwo(int,Board *);
void writebrd(fstream &, Board *,string);
void showboard(fstream &, string);
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    string table="board.dat",
           score="score.txt";
    int curplr=PLRONE+1,
        cell,
        choice,
        round=1,
        totone=1,tottwo=1;
    Board *board=new Board;
    fstream game,
            scrbord;
    //Initialize all known variables
  
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"This is Mancala"<<endl;
    scrbord.open(score,ios::out);
    scrbord<<setw(15)<<"Name"<<setw(16)<<"Score"<<endl;
    
    do{
        if(curplr==PLRONE+1){
            scrbord<<"Round "<<round<<setw(12);
            writebrd(game,board,table);
            showboard(game,table);

            cout<<endl<<"Player "<<curplr<<", select the cell you wish to play "
                    <<"(1-6 Left to Right)"<<endl;
            cin>>choice;
            plrone(choice,board);
            
            board=rtrnscore(PLRONE,board);
            scrbord<<board->player[PLRONE].name[PLRONE]<<setw(8)
                    <<board->player[PLRONE].score<<endl;
        }
        else{
            writebrd(game,board,table);
            showboard(game,table);

            cout<<endl<<"Player "<<curplr<<", select the cell you wish to play "
                    <<"(1-6 Left to Right)"<<endl;
            cin>>choice;
            plrtwo(choice,board);
            
            board=rtrnscore(PLRTWO,board);
            scrbord<<setw(19)<<board->player[PLRTWO].name[PLRTWO]<<setw(8)
                    <<board->player[PLRTWO].score<<endl<<endl;;
        }
        if(curplr==PLRONE+1){
            curplr=PLRTWO+1;
        }
        else{
            curplr=PLRONE+1;
            round++;
        }
        
    }while(totone!=0 || tottwo!=0);
    scrbord.close();
    //Display the Inputs/Outputs
   
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}
Board *rtrnscore(int play,Board *board){
    if(play==0){
        board->player[play].score=board->cell[6];
    }
    else{
        board->player[play].score=board->cell[13];
    }
    return board;
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

void plrone(int cell,Board *board){
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

void plrtwo(int cell,Board *board){
    int marbs;
    if(cell==1){
        int marbs=board->cell[7];
        board->cell[7]=0;
        for(int i=1;i<=marbs;i++){
            if(i<=6){
                board->cell[7+i]++;
            }
            else if(i-7!=6){
                board->cell[i-7]++;
            }
        }
    }
    if(cell==2){
        int marbs=board->cell[8];
        board->cell[8]=0;
        for(int i=0;i<marbs;i++){
            if(i<11){
                board->cell[8+i]++;
            }
            else{
                board->cell[8+(i-7)]++;
            }
        }
    }
    if(cell==3){
        int marbs=board->cell[9];
        board->cell[9]=0;
        for(int i=1;i<=marbs;i++){
            if(i<10){
                board->cell[9+i]++;
            }
            else{
                board->cell[9+(i-7)]++;
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