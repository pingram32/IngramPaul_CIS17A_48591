/* 
 * File:   Player.h
 * Author: Paul
 *
 * Created on December 2, 2021, 10:01 AM
 */


#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player{
private:
    string name;
    int score;
public:
    Player(){
        name="";
        score=0;
    }
    Player(string n){
        name=n;
        score=0;
    }
    Player(string n, int s){
        name=n;
        score=s;
    }
    string getName() const{
        return name;
    }
    int getScore() const{
        return score;
    }
    void setName(string n){
        name=n;
    }
    void setScore(int s){
        score=s;
    }
};

#endif /* PLAYER_H */

