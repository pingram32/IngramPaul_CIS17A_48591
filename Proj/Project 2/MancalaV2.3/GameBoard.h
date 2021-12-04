/* 
 * File:   GameBoard.h
 * Author: Paul
 *
 * Created on December 2, 2021, 5:17 PM
 */


#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include "AbsBoard.h"

template <class T>
class GameBoard : public AbsBoard<T>{
protected:
        T *aptr;
        int aSize;
        void memError();
        void subError();
public:
    GameBoard(int s){
            aSize=s;
            try{
                aptr=new T[s];
            }
            catch (bad_alloc){
                memError();
            }
            
            for(int i=0;i<aSize;i++){
                if(i==0 || i==7){
                    *(aptr+i)=0;
                }
                else{
                    *(aptr+i)=4;
                }
            }
        }
        
    ~GameBoard(){
        if(aSize>0){
            delete []aptr;
        }
    }
    
    T getElementAt(int);
        
    T &operator[](const int &);
        
    int size() const{
        return aSize;
    }
        
    void showBoard();
        
    void playCell(int, int);
    
};
template <class T>
void GameBoard<T>::playCell(int c, int p){
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
                    index++;
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
                    index++;
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
                    index++;
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
                    index++;
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
                    index++;
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
                    index++;
                }
            }
        }
    }
}

template <class T>
void GameBoard<T>::showBoard(){
    cout<<"|"<<aptr[6]<<"|"<<aptr[5]<<"|"<<aptr[4]<<"|"<<aptr[3]<<"|"
            <<aptr[2]<<"|"<<aptr[1]<<"|"<<endl;
    cout<<aptr[7]<<"==========="<<aptr[0]<<endl;
    cout<<"|"<<aptr[8]<<"|"<<aptr[9]<<"|"<<aptr[10]<<"|"<<aptr[11]<<"|"
            <<aptr[12]<<"|"<<aptr[13]<<"|"<<endl;
}

template<class T>
T GameBoard<T>::getElementAt(int p){
    if(p<0 || p>=aSize){
        subError();
    }
    return aptr[p];
}   

template <class T>
void GameBoard<T>::memError(){
    cout<<"ERROR:Cannot allocate memory."<<endl;
    exit(EXIT_FAILURE);
}

template <class T>
void GameBoard<T>::subError(){
    cout<<"ERROR:Subscript out of range."<<endl;
    exit(EXIT_FAILURE);
}

template <class T>
T &GameBoard<T>::operator[](const int &sub){
    if(sub<0 ||sub>aSize){
        subError();
    }
    return aptr[sub];
}
#endif /* GAMEBOARD_H */

