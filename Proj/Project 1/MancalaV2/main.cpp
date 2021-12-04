/* 
 * File:   main.cpp
 * Author: Paul Ingram 
 * Created on November 4, 2021, 11:25 AM
 * Purpose:  Mancala
 */

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>
using namespace std;

//User Libraries
struct Board{
    const int SIZE=14;
    int cell[14]{4,4,4,4,4,4,0,4,4,4,4,4,4,0};
    int *cellptr=cell;
};

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants and Conversion

//Function Prototypes
Board* plyrturn(int);
void writebrd(fstream &, Board *,string);
void showboard(fstream &, string);
//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    
    int curplr=1,
        cell,
        choice;
    string table="board.dat";
    Board *board=new Board;
    fstream game;
    //Initialize all known variables
   
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout<<"This is Mancala"<<endl;
    
    writebrd(game,board,table);
    showboard(game,table);
    
    cout<<endl<<"Player "<<curplr<<", select the cell you wish to play "<<
            "(1-6 Left to Right)"<<endl;
    cin>>choice;
    
    board=plyrturn(choice);
    
    cout<<endl<<"Player "<<curplr<<", select the cell you wish to play "<<
            "(1-6 Left to Right)"<<endl;
    
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

Board* plyrturn(int cell){
    Board* board=new Board;
    int marbs;
    if(cell==1){
        int count=6,
            marbs=board->cellptr[count-1];
        for(int i=0;i<marbs;i++){
            if(i<7){
                board->cellptr[count+i]++;
            }
            else{
                count=0;
                board->cellptr[count+(i-7)]++;
            }
        }
        count=6;
        board->cellptr[count-1]=0;
    }
    if(cell==2){
        int count=5,
            marbs=board->cellptr[count-1];
        for(int i=0;i<marbs;i++){
            if(i<8){
                board->cellptr[count+i]++;
            }
            else{
                count=0;
                board->cellptr[count+(i-7)]++;
            }
        }
        count=5;
        board->cellptr[count-1]=0;
    }
    if(cell==3){
        int count=4,
            marbs=board->cellptr[count-1];
        for(int i=0;i<marbs;i++){
            if(i<9){
                board->cellptr[count+i]++;
            }
            else{
                count=0;
                board->cellptr[count+(i-7)]++;
            }
        }
        count=4;
        board->cellptr[count-1]=0;
    }
    if(cell==4){
        int count=3,
            marbs=board->cellptr[count-1];
        for(int i=0;i<marbs;i++){
            if(i<10){
                board->cellptr[count+i]++;
            }
            else{
                count=0;
                board->cellptr[count+(i-7)]++;
            }
        }
        count=3;
        board->cellptr[count-1]=0;
    }
    if(cell==5){
        int count=2,
            marbs=board->cellptr[count-1];
        for(int i=0;i<marbs;i++){
            if(i<11){
                board->cellptr[count+i]++;
            }
            else{
                count=0;
                board->cellptr[count+(i-7)]++;
            }
        }
        count=2;
        board->cellptr[count-1]=0;
    }
    if(cell==6){
        int count=1,
            marbs=board->cellptr[count-1];
        for(int i=0;i<marbs;i++){
            if(i<12){
                board->cellptr[count+i]++;
            }
            else{
                count=0;
                board->cellptr[count+(i-7)]++;
            }
        }
        count=1;
        board->cellptr[count-1]=0;
    }
    return board;
}