
#include "SimBots.h"

void SimBots::simBots(){
    int curplr=1,
        bot,
        score[]={0,0},
        wins[]={0,0};
    bool goAgain;
    
    player[0].setName("BOT 1");
    player[1].setName("BOT 2");
    
    simData.open ("data.txt", ios::out);
    
    while(games--){
        simData<<"|"<<board[6]<<"|"<<board[5]<<"|"<<board[4]
            <<"|"<<board[3]<<"|"<<board[2]<<"|"<<board[1]<<"|"<<endl;
        simData<<board[7]<<"==========="<<board[0]<<endl;
        simData<<"|"<<board[8]<<"|"<<board[9]<<"|"<<board[10]
            <<"|"<<board[11]<<"|"<<board[12]<<"|"<<board[13]<<"|"<<endl;
        do{          
            //Determine the current player then their cell choice
            if(curplr==1){  
                simData<<player[0].getName()
                        <<", select the cell you wish to play "
                        <<"(1-6 Left to Right)"<<endl;
                bot=rand()%6+1;

                while(board[bot]==0){
                    bot=rand()%6+1;
                }
                simData<<endl<<"Bot "<<curplr<<"selected: "<<bot<<endl;
                
                //Play cell function in GameBoard class 
                goAgain=board.playCell(bot,curplr);
                
                while(goAgain){
                    bot=rand()%6+1;

                    while(board[bot]==0){
                        bot=rand()%6+1;
                    }
                    
                    board.showBoard();
                    simData<<"You Got Another Turn"<<endl;
                    
                    goAgain=board.playCell(bot,curplr);
                }
            }
            //Player two choice
            else{
                simData<<player[1].getName()
                        <<", select the cell you wish to play "
                        <<"(1-6 Left to Right)"<<endl;
                bot=rand()%6+1;

                while(board[bot+7]==0){
                    bot=rand()%6+1;
                }
                simData<<endl<<"Bot selected: "<<bot<<endl;
                
                goAgain=board.playCell(bot,curplr);
                
                while(goAgain){
                    bot=rand()%6+1;

                    while(board[bot]==0){
                        bot=rand()%6+1;
                    }
                    
                    simData<<"|"<<board[6]<<"|"<<board[5]<<"|"<<board[4]
                        <<"|"<<board[3]<<"|"<<board[2]<<"|"<<board[1]<<"|"<<endl;
                    simData<<board[7]<<"==========="<<board[0]<<endl;
                    simData<<"|"<<board[8]<<"|"<<board[9]<<"|"<<board[10]
                        <<"|"<<board[11]<<"|"<<board[12]<<"|"<<board[13]<<"|"<<endl;
                    
                    simData<<"You Got Another Turn"<<endl;
                   
                    goAgain=board.playCell(bot,curplr);
                }
            }

            //Return the board after each play
            simData<<"|"<<board[6]<<"|"<<board[5]<<"|"<<board[4]
                    <<"|"<<board[3]<<"|"<<board[2]<<"|"<<board[1]<<"|"<<endl;
            simData<<board[7]<<"==========="<<board[0]<<endl;
            simData<<"|"<<board[8]<<"|"<<board[9]<<"|"<<board[10]
                    <<"|"<<board[11]<<"|"<<board[12]<<"|"<<board[13]<<"|"<<endl;

            //Current player if-else alternates turns
            if(curplr==1){
                curplr=2;
            }
            else{
                curplr=1;
            }
        }while(board.gameOver(curplr-1)); 
        //Checks the last player's side for 0

        simData<<"End of Game"<<endl;

        //Initialize score array for player object
        score[0]=board[7]+board[6]+board[5]+board[3]+board[2]+board[1];
        score[1]=board[8]+board[9]+board[10]+board[11]+board[12]
                +board[13]+board[0];

        //Set player member variables to respective scores
        player[0].setScore(score[0]);
        player[1].setScore(score[1]);

        //Output end game screen
        if(player[0].getScore()>player[1].getScore()){
            wins[0]++;
            cout<<player[0].getName()<<" Wins !"<<endl;
            cout<<"Player 1 Score: "<<player[0].getScore()<<endl;
            cout<<"Player 2 Score: "<<player[1].getScore()<<endl;
        }
        else{
            wins[1]++;
            cout<<player[1].getName()<<" Wins !"<<endl;
            cout<<"Player 1 Score: "<<player[0].getScore()<<endl;
            cout<<"Player 2 Score: "<<player[1].getScore()<<endl;
        }
    }
    
    cout<<"Player 1 Wins : "<<wins[0]<<endl;
    cout<<"Player 2 Wins : "<<wins[1]<<endl;
    
    simData.close();
}