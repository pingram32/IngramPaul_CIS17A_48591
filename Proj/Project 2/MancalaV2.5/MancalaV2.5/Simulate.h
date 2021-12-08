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
using namespace std;

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
        
        board.setSize(SIZE);
    }
    void simGame(){
        int curplr=1,
            cell;
        
        board.showBoard();
        cout<<endl;
        
        do{
            srand (time(NULL));
            int bot=rand()%6+1;
            
            while(board[bot]==0){
                bot=rand()%6+1;
            }
            
            if(curplr==1){
                if(player[0].getName()=="BOT"){
                    cout<<player[0].getName()<<", select the cell you wish to play "
                        <<"(1-6 Left to Right)"<<endl;
                    cout<<"Bot Selected Cell: "<<endl;
                    cout<<bot<<endl;
                    
                    board.playCell(bot,curplr);
                    board.showBoard();
                    cout<<endl;
                }
                else{
                    cout<<player[0].getName()<<", select the cell you wish to play "
                        <<"(1-6 Left to Right)"<<endl;
                    cin>>cell;
                    
                    board.playCell(bot,curplr);
                    board.showBoard();
                    cout<<endl;
                }
            }
            else{
                if(player[1].getName()=="BOT"){
                    cout<<player[1].getName()<<", select the cell you wish to play "
                        <<"(1-6 Left to Right)"<<endl;
                    cout<<"Bot Selected Cell: "<<endl;
                    cout<<bot<<endl;
                    
                    board.playCell(bot,curplr);
                    board.showBoard();
                    cout<<endl;
                }
                else{
                    cout<<player[1].getName()<<", select the cell you wish to play "
                        <<"(1-6 Left to Right)"<<endl;
                    cin>>cell;
                    
                    board.playCell(cell,curplr);
                    board.showBoard();
                    cout<<endl;
                }
            }
            
            if(curplr==1){
                curplr=2;
            }
            else{
                curplr=1;
            }
        }while(true);
    }
};

#endif /* SIMULATE_H */

