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
    char name1[81]="Player 1",
         name2[81]="Player 2";
    
    int score;
};
struct Board{
    const int SIZE=14;
    int cell[14]{4,4,4,4,4,4,0,4,4,4,4,4,4,0};
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
            int count=0;
            
            scrbord<<"Round "<<round<<setw(5);
            writebrd(game,board,table);
            showboard(game,table);
            
            cout<<endl;
            while(board->player->name1[count]!='\0'){
                cout<<board->player->name1[count];
                count++;
            }
            cout<<", select the cell you wish to play "
                    <<"(1-6 Left to Right)"<<endl;
            cin>>choice;
            plrone(choice,board);
            
            board=rtrnscore(PLRONE,board);
            
            count=0;
            while(board->player->name1[count]!='\0'){
                scrbord<<board->player->name1[count];
                count++;
            }
            scrbord<<setw(8)<<board->player[PLRONE].score<<endl;
        }
        else{
            int count=0;
            
            writebrd(game,board,table);
            showboard(game,table);
            
            cout<<endl;
            while(board->player->name2[count]!='\0'){
                cout<<board->player->name2[count];
                count++;
            }
            cout<<", select the cell you wish to play "
                    <<"(1-6 Left to Right)"<<endl;
            cin>>choice;
            plrtwo(choice,board);
            
            board=rtrnscore(PLRTWO,board);
            
            count=0;
            scrbord<<setw(12);
            while(board->player->name2[count]!='\0'){
                scrbord<<board->player->name2[count];
                count++;
            }
            scrbord<<setw(8)<<board->player[PLRTWO].score<<endl<<endl;;
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
    delete []board->player;
    delete []board;
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
    int count=0;
    if(cell==1){
        int marbs=board->cell[7];
        board->cell[7]=0;
        for(int i=0;i<=marbs;i++){
            if(i<=6){
                board->cell[8+i]++;
            }
            else if(count!=6){
                board->cell[count]++;
                count++;
                if(count==6){
                    count++;
                }
                if(count>13){
                    count=0;
                }
            }
        }
    }
    if(cell==2){
        int marbs=board->cell[8];
        board->cell[8]=0;
        for(int i=0;i<=marbs;i++){
            if(i<=5){
                board->cell[9+i]++;
            }
            else if(count!=6){
                board->cell[count]++;
                count++;
                if(count==6){
                    count++;
                }
                if(count>13){
                    count=0;
                }
            }
        }
    }
    if(cell==3){
        int marbs=board->cell[9];
        board->cell[9]=0;
        for(int i=0;i<=marbs;i++){
            if(i<=4){
                board->cell[10+i]++;
            }
            else if(count!=6){
                board->cell[count]++;
                count++;
                if(count==6){
                    count++;
                }
                if(count>13){
                    count=0;
                }
            }
        }
    }
    if(cell==4){
        int marbs=board->cell[10];
        board->cell[10]=0;
        for(int i=0;i<=marbs;i++){
            if(i<=3){
                board->cell[11+i]++;
            }
            else if(count!=6){
                board->cell[count]++;
                count++;
                if(count==6){
                    count++;
                }
                if(count>13){
                    count=0;
                }
            }
        }
    }
    if(cell==5){
        int marbs=board->cell[11];
        board->cell[11]=0;
        for(int i=0;i<=marbs;i++){
            if(i<=2){
                board->cell[12+i]++;
            }
            else if(count!=6){
                board->cell[count]++;
                count++;
                if(count==6){
                    count++;
                }
                if(count>13){
                    count=0;
                }
            }
        }
    }
    if(cell==6){
        int marbs=board->cell[12];
        board->cell[12]=0;
        for(int i=0;i<=marbs;i++){
            if(i<=1){
                board->cell[13+i]++;
            }
            else if(count!=6){
                board->cell[count]++;
                count++;
                if(count==6){
                    count++;
                }
                if(count>13){
                    count=0;
                }
            }
        }
    }
}