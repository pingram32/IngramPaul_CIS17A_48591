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
template <class T>
class AbsBoard{
    protected:
        T *aptr;
        int aSize;
        void memError();
        void subError();
public:
    AbsBoard(int s){
            aSize=s;
            try{
                aptr=new T[s];
            }
            catch (bad_alloc){
                memError();
            }
    }
    
    AbsBoard(){
            aSize=SIZE;
            try{
                aptr=new T[SIZE];
            }
            catch (bad_alloc){
                memError();
            }
    }    
    
    ~AbsBoard(){
        if(aSize>0){
            delete []aptr;
        }
    }
    
    T getElementAt(int);
        
    T &operator[](const int &);
        
    int size() const{
        return aSize;
    }
        
    virtual void showBoard()=0;
        
    virtual void playCell(int, int)=0;
};

template<class T>
T AbsBoard<T>::getElementAt(int p){
    if(p<0 || p>=aSize){
        subError();
    }
    return aptr[p];
}   

template <class T>
void AbsBoard<T>::memError(){
    cout<<"ERROR:Cannot allocate memory."<<endl;
    exit(EXIT_FAILURE);
}

template <class T>
void AbsBoard<T>::subError(){
    cout<<"ERROR:Subscript out of range."<<endl;
    exit(EXIT_FAILURE);
}

template <class T>
T &AbsBoard<T>::operator[](const int &sub){
    if(sub<0 ||sub>aSize){
        subError();
    }
    return aptr[sub];
}


#endif /* BOARD_H */

