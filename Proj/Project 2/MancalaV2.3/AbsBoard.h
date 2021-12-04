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
class AbsBoard{
    public:
        virtual T getElementAt(int)=0;
        
        virtual T &operator[](const int &)=0;
        
        virtual void showBoard()=0;
        
        virtual void playCell(int, int)=0;
};



#endif /* BOARD_H */

