/* 
 * File:   Board.h
 * Author: Paul
 *
 * Created on December 2, 2021, 11:19 AM
 */

#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <new>
#include <cstdlib>
#include "Player.h"
using namespace std;

const int SIZE=14;

//Abstract Board which is to be inherited by GameBoard
template <class T>
class AbsBoard{
    protected:
        T *aptr;
        int aSize;
        void memError();
        void subError();
public:
    //Constructor 
    AbsBoard(int s){
            aSize=s;
            try{
                aptr=new T[s];
            }
            catch (bad_alloc){
                memError();
            }
    }
    //Overloaded Constructor
    AbsBoard(){
            aSize=SIZE;
            try{
                aptr=new T[SIZE];
            }
            catch (bad_alloc){
                memError();
            }
    }    
    //Destructor
    ~AbsBoard(){
        if(aSize>0){
            delete []aptr;
        }
    }
    
    //Return element at given index
    T getElementAt(int);
    
    //Overloaded operator
    T &operator[](const int &);
    
    //Get the size of the array
    int size() const{
        return aSize;
    }
    
    //Virtual function for GameBoard object
    virtual void showBoard()=0;
        
    //Virtual function for GameBoard object
    virtual bool playCell(int, int)=0;
};

//Return element at given index
template<class T>
T AbsBoard<T>::getElementAt(int p){
    if(p<0 || p>=aSize){
        subError();
    }
    return aptr[p];
}   

//Catching a bad allocation
template <class T>
void AbsBoard<T>::memError(){
    cout<<"ERROR:Cannot allocate memory."<<endl;
    exit(EXIT_FAILURE);
}

//Trying to access an element out of range
template <class T>
void AbsBoard<T>::subError(){
    cout<<"ERROR:Subscript out of range."<<endl;
    exit(EXIT_FAILURE);
}

//Overloaded operator [] ex. board[i]
template <class T>
T &AbsBoard<T>::operator[](const int &sub){
    if(sub<0 ||sub>aSize){
        subError();
    }
    return aptr[sub];
}

#endif /* BOARD_H */

