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
private:
    Player player[2];
    GameBoard board;
public:
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
    
    Simulate(Simulate &)
    
    //Sim game between user and bot 
    void simGame();
};

#endif /* SIMULATE_H */

