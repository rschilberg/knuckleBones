#include <cstdlib>
#include <iostream>
#include <vector>

class gameOps {
    public:
        void colSelect();
        void rollDie();
        int getRollVal();
        int getColSel();
        gameOps();
    private:
        int rollVal;
        int colSel;
}

gameOps::gameOps(){
}

void gameOps::colSelect(){
    std::cout << "Where's it gonna be? One, two, or three? \n";
    std::cin >> colSel;
    while((colSel != 1) && (colSel != 2) && (colSel != 3)){
        std::cout << "You are trying to choose a column that DOESN'T EXIST!!!!!! \n I said 1,2, or 3 fiend. \n";
        std::cout << "Try entering again: "
        std::cin >> colSel;
        std::cout << '\n';
    }
}

void gameOps::rollDie(){
    srand((unsigned) time(NULL));
    rollVal = 1 + (rand() % 6);

    switch(rollVal) {
        case 1:
            std::cout << "Ouch you rolled a 1, use it to have some fun \n";
            break;
        case 2:
            std::cout << "A 2... there nary is a chance for you \n";
            break;
        case 3: 
            std::cout << "heheHEHEehHEHHEeeheHHEHEeEhEhhEEEhhEhEHEe a 3 \n";
            break;
        case 4:
            std::cout << "A 4 is not so poor \n";
            break;
        case 5:
            std::cout << "You should continue to strive for more 5 \n";
            break;
        case 6;
            std::cout << "This 6 is surely the fix \n";
    }
}

int gameOps::getRollVal(){
    return rollVal;
}

void gameOps::gameplay(){
    player P1, P2;

}