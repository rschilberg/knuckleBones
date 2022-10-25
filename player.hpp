#include <cstdlib>
#include <iostream>
#include "knucklebones.cpp"

class player {
    public:
        void takeTurn();
        player();
    private:
        std::vector<<std::vector<int>> gameBoard;
        int scoreCol(std::vector<int> col);
        
}

player::player() {
    for(int i = 0; i < 2; i++){
        if( i == 0 ){
            gameBoard.resize(3);
        }
        for(int j = 0; j < 2; j++){
            if( j == 0 ) {
                gameBoard[i].resize(3);
            }
            gameBoard[i][j] = 0;
        }
    }
}

void player::takeTurn(){
    gameOps newTurn;

    newTurn.rollDie();
    int rollVal = newTurn.getRollVal();

    newTurn.colSelect();
    int colSel = newTurn.getColSel();
}

void player::printBoard(){
    for(int i = 0; i < gameBoard.size(); i++) {
        for(int j = 0; j < gameBoard[i].size(); j++) {
            std::cout << "| " << gameBoard[i][j] << " |";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    std::cout << 

}

int player::scoreCol(std::vector<int> col){
    int storeVal = col[0];
    int score = col[0];
    int multCount = 1;
    for( int i = 1; i < col.size(); i++ ) {
        if( storeVal == col[i] ) {
            score = (score - (multCount*(multCount*storeVal));
            multCount++;
            score = score + storeVal*multCount*multCount;
        }
    }
    return score;
}