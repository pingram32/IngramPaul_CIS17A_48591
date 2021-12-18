/* 
 * File:   SImBots.h
 * Author: Paul
 *
 * Created on December 14, 2021, 6:47 AM
 */

#ifndef SIMBOTS_H
#define SIMBOTS_H
#include <fstream>
#include "time.h"
#include "Simulate.h"
using namespace std;

class SimBots{
    private:
        fstream simData;
        int games;
        Player player[2];
        GameBoard board;
    public:
        SimBots(){
            games=1;
        }
    
        void simBots();
};


#endif /* SIMBOTS_H */

