/* 
 * File:   GameBoard.h
 * Author: Paul
 *
 * Created on December 2, 2021, 5:17 PM
 */


#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include "AbsBoard.h"

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
        
        int gameOver(int p){
            if(p==1){
                return aptr[6]+aptr[5]+aptr[4]+aptr[3]+aptr[2]+aptr[1];
            }
            else{
                return aptr[8]+aptr[9]+aptr[10]+aptr[11]+aptr[12]+aptr[13];
            }
        }
        
        void playCell(int, int);
        
        void showBoard();
};

void GameBoard::playCell(int c, int p){
    if(p==1){
        if(c==1){
            int count=aptr[6],
                    index=7;
            aptr[6]=0;
            
            for(int i=1;i<=count;i++){
                aptr[index]++;
                if(index<13){
                    index++;
                }
                else{
                    index=1;
                }
            }
        }
        if(c==2){
            int count=aptr[5],
                    index=6;
            aptr[5]=0;
            
            for(int i=1;i<=count;i++){
                aptr[index]++;
                if(index<13){
                    index++;
                }
                else{
                    index=1;
                }
            }
        }
        if(c==3){
            int count=aptr[4],
                    index=5;
            aptr[4]=0;
            
            for(int i=1;i<=count;i++){
                aptr[index]++;
                if(index<13){
                    index++;
                }
                else{
                    index=1;
                }
            }
        }
        if(c==4){
            int count=aptr[3],
                    index=4;
            aptr[3]=0;
            
            for(int i=1;i<=count;i++){
                aptr[index]++;
                if(index<13){
                    index++;
                }
                else{
                    index=1;
                }
            }
        }
        if(c==5){
            int count=aptr[2],
                    index=3;
            aptr[2]=0;
            
            for(int i=1;i<=count;i++){
                aptr[index]++;
                if(index<13){
                    index++;
                }
                else{
                    index=1;
                }
            }
        }
        if(c==6){
            int count=aptr[1],
                    index=2;
            aptr[1]=0;
            
            for(int i=1;i<=count;i++){
                aptr[index]++;
                if(index<13){
                    index++;
                }
                else{
                    index=1;
                }
            }
        }
    }
    if(p==2){
        if(c==1){
            int count=aptr[8],
                    index=9;
            aptr[8]=0;
            
            for(int i=1;i<=count;i++){
                aptr[index]++;
                if(index<13){
                    index++;
                    if(index==7){
                        index++;
                    }
                }
                else{
                    index=0;
                }
            }
        }
        if(c==2){
            int count=aptr[9],
                    index=10;
            aptr[9]=0;
            
            for(int i=1;i<=count;i++){
                aptr[index]++;
                if(index<13){
                    index++;
                    if(index==7){
                        index++;
                    }
                }
                else{
                    index=0;
                }
            }
        }
        if(c==3){
            int count=aptr[10],
                    index=11;
            aptr[10]=0;
            
            for(int i=1;i<=count;i++){
                aptr[index]++;
                if(index<13){
                    index++;
                    if(index==7){
                        index++;
                    }
                }
                else{
                    index=0;
                }
            }
        }
        if(c==4){
            int count=aptr[11],
                    index=12;
            aptr[11]=0;
            
            for(int i=1;i<=count;i++){
                aptr[index]++;
                if(index<13){
                    index++;
                    if(index==7){
                        index++;
                    }
                }
                else{
                    index=0;
                }
            }
        }
        if(c==5){
            int count=aptr[12],
                    index=13;
            aptr[12]=0;
            
            for(int i=1;i<=count;i++){
                aptr[index]++;
                if(index<13){
                    index++;
                    if(index==7){
                        index++;
                    }
                }
                else{
                    index=0;
                }
            }
        }
        if(c==6){
            int count=aptr[13],
                    index=0;
            aptr[13]=0;
            
            for(int i=1;i<=count;i++){
                aptr[index]++;
                if(index<13){
                    index++;
                    if(index==7){
                        index++;
                    }
                }
                else{
                    index=0;
                }
            }
        }
    }
}

void GameBoard::showBoard(){
    cout<<"|"<<aptr[6]<<"|"<<aptr[5]<<"|"<<aptr[4]<<"|"<<aptr[3]<<"|"
            <<aptr[2]<<"|"<<aptr[1]<<"|"<<endl;
    cout<<aptr[7]<<"==========="<<aptr[0]<<endl;
    cout<<"|"<<aptr[8]<<"|"<<aptr[9]<<"|"<<aptr[10]<<"|"<<aptr[11]<<"|"
            <<aptr[12]<<"|"<<aptr[13]<<"|"<<endl;
}


#endif /* GAMEBOARD_H */

