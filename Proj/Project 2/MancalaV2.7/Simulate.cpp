
#include "Simulate.h"

void Simulate::simGame(){
    int curplr=1,
            cell,
            score[]={0,0};
    
    //Output the board object to begin the game
    board.showBoard();
    cout<<endl;

    do{
        srand (time(NULL));
        int bot=rand()%6+1;

        while(board[bot]==0){
            bot=rand()%6+1;
        }
        
        //Basically copy what was in main to create a fake game
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

                board.playCell(cell,curplr);
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
        
        //Switch players
        if(curplr==1){
            curplr=2;
        }
        else{
            curplr=1;
        }
    }while(board.gameOver(curplr-1));

    cout<<"End of Game"<<endl;
    
    //Initialize score array for player object
    score[0]=board[7]+board[6]+board[5]+board[3]+board[2]+board[1];
    score[1]=board[8]+board[9]+board[10]+board[11]+board[12]+board[13];
    
    //Set player member variables to respective scores
    player[0].setScore(score[0]);
    player[1].setScore(score[1]);
    
    //Output end game screen
    if(player[0].getScore()>player[1].getScore()){
        cout<<player[0].getName()<<" Wins !"<<endl;
        cout<<"Player 1 Score: "<<player[0].getScore()<<endl;
        cout<<"Player 2 Score: "<<player[1].getScore()<<endl;
    }
    else{
        cout<<player[1].getName()<<" Wins !"<<endl;
        cout<<"Player 1 Score: "<<player[0].getScore()<<endl;
        cout<<"Player 2 Score: "<<player[1].getScore()<<endl;
    }
}
