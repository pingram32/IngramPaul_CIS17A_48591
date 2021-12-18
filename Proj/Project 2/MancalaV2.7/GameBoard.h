/* 
 * File:   GameBoard.h
 * Author: Paul
 *
 * Created on December 2, 2021, 5:17 PM
 */


#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include "AbsBoard.h"

//Inherited from Abstract Board template class
class GameBoard : public AbsBoard<int> {
    public:
        GameBoard(int s):AbsBoard<int>(s){
            for(int i=0;i<aSize;i++){
                if(i==0 || i==7){
                    *(aptr+i)=0;
                }
                else{
                    *(aptr+i)=4;
                }
            }
        }
        
        GameBoard():AbsBoard<int>(){
            for(int i=0;i<aSize;i++){
                if(i==0 || i==7){
                    *(aptr+i)=0;
                }
                else{
                    *(aptr+i)=4;
                }
            }
        }
        
        //Checks player's side to see if cells=0
        int gameOver(int p){
            if(p==1){
                return aptr[6]+aptr[5]+aptr[4]+aptr[3]+aptr[2]+aptr[1];
            }
            else{
                return aptr[8]+aptr[9]+aptr[10]+aptr[11]+aptr[12]+aptr[13];
            }
        }
        
        //Play cell 
        void playCell(int, int);
        
        //Return board
        void showBoard();
};

#endif /* GAMEBOARD_H */

