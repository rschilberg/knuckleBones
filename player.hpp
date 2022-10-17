#include <cstdlib>
#include <iostream>
#include "knucklebones.cpp"

class player {
    public:
        void takeTurn();
    private:
        
}


void player::takeTurn(){
    gameOps newTurn;

    newTurn.rollDie();
    int rollVal = newTurn.getRollVal();

    newTurn.colSelect();
    int colSel = newTurn.getColSel();
}