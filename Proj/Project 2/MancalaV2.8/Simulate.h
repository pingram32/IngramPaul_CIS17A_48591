/* 
 * File:   Simulate.h
 * Author: Paul
 *
 * Created on December 7, 2021, 10:29 AM
 */

#ifndef SIMULATE_H
#define SIMULATE_H
#include <time.h>
#include "GameBoard.h"
#include "Player.h"
using namespace std;

//Simulate object which emulates main with two player objects and a board
class Simulate{
protected:
    Player player[2];
    GameBoard board;
public:
    //Constructor initializing player names 
    Simulate(string n, int p){
        if(p==1){
            player[0].setName(n);
            player[1].setName("BOT");
        }
        else{
            player[1].setName(n);
            player[0].setName("BOT");
        }
        
    }
 
    //Copy constructor 
    Simulate(Simulate &obj){
        //Copy each player's name
        player[0].setName(obj.player[0].getName());
        player[1].setName(obj.player[1].getName());
        
        //Copy each player's score
        player[0].setScore(obj.player[0].getScore());
        player[1].setScore(obj.player[1].getScore());
        
        //Copy the game board
        board=obj.board;
    }
    
    //Sim game between user and bot 
    void simGame();
    
    void playCell(int, int);
};

#endif /* SIMULATE_H */

