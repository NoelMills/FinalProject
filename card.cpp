#include "card.h"

using namespace std;

string Card::render(int line){
    switch(line){
        case 0: return ".___________.";
        case 1: return "|           |";
        case 2: return "|           |";
        case 3: return "|           |";
        case 4: return "|           |";
        case 5: return "|           |";
        case 6: return "|           |";
        case 7: return "|___________|";
        default:
            return " ";
    }
}

string Card::getName(void){
    
}//Needs Content

int Card::getManaCost(void){
    
}//Needs Content

int Card::getAttack(void){
    
}//Needs Content

int Card::getDefense(void){
    
}//Needs Content

bool Card::isExhausted(void){
    
}//Needs Content

void Card::unExhaust(void){
    
}//Needs Content