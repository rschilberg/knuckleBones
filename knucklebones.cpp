#include "knucklebones.hpp"

int main( int argv, char* argc[] ){
    int mode = stoi(argc[1]);
    try{
        if(argc != 2) throw "Please use mode 2 two represent 2 player mode \n";
    }
    catch(const char* msg){
        std::cout << msg;
        exit(1);
    }

    
}