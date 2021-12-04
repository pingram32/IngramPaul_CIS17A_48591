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
using namespace std;

template <class T>
class Board{
    private:
        T *aptr;
        int aSize;
        void memError();
        void subError();
    public:
        Board(int s){
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
        
        ~Board(){
            if(aSize>0){
                delete []aptr;
            }
        }
        
        T getElementAt(int);
        
        T &operator[](const int &);
        
        void showBoard();
        
        void playCell(int, int);
        
        int size() const{
            return aSize;
        }
};

template<class T>
T Board<T>::getElementAt(int p){
    if(p<0 || p>=aSize){
        subError();
    }
    return aptr[p];
}   
template <class T>
void Board<T>::memError(){
    cout<<"ERROR:Cannot allocate memory."<<endl;
    exit(EXIT_FAILURE);
}

template <class T>
void Board<T>::subError(){
    cout<<"ERROR:Subscript out of range."<<endl;
    exit(EXIT_FAILURE);
}

template <class T>
T &Board<T>::operator[](const int &sub){
    if(sub<0 ||sub>aSize){
        subError();
    }
    return aptr[sub];
}

template <class T>
void Board<T>::playCell(int c, int p){
    
}
template <class T>
void Board<T>::showBoard(){
    cout<<"|"<<aptr[6]<<"|"<<aptr[5]<<"|"<<aptr[4]<<"|"<<aptr[3]<<"|"
            <<aptr[2]<<"|"<<aptr[1]<<"|"<<endl;
    cout<<aptr[7]<<"==========="<<aptr[0]<<endl;
    cout<<"|"<<aptr[8]<<"|"<<aptr[9]<<"|"<<aptr[10]<<"|"<<aptr[11]<<"|"
            <<aptr[12]<<"|"<<aptr[13]<<"|"<<endl;
}

#endif /* BOARD_H */

